// from server: 91% by king_originala
struct Matrix3 {
    float m[3][3];
};

struct Quaternion {
    float x, y, z, w;
    Matrix3 toRotationMatrix() const;
};

Matrix3 Quaternion::toRotationMatrix() const {
    double tx = 2.0f * double(x);
    double ty = 2.0f * double(y);
    double tz = 2.0f * double(z);
    double txx = tx * x;
    double txy = ty * x;
    double txz = tz * x;
    double twx = tx * w;
    double twy = ty * w;
    double twz = tz * w;
    double tyy = ty * y;
    double tyz = tz * y;
    double tzz = tz * z;

    Matrix3 result;
    result.m[0][0] = float(1.0f - (tyy + tzz));
    result.m[0][1] = float(txy - twz);
    result.m[0][2] = float(txz + twy);
    result.m[1][0] = float(txy + twz);
    result.m[1][1] = float(1.0f - (txx + tzz));
    result.m[1][2] = float(tyz - twx);
    result.m[2][0] = float(txz - twy);
    result.m[2][1] = float(tyz + twx);
    result.m[2][2] = float(1.0f - (txx + tyy));
    return result;
}
