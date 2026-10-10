// from server: 38% by colin
struct Matrix3 {
    float m[9];
};

struct ContactConnector {
    char pad[0x0c];
    Matrix3 impulsePerUnitDeltaVel;
    float inverseMass;
    float penetrationVelocity;
    float reboundVelocity;
    bool impulseComputed;
};

void transformVectors(const float* src, const Matrix3& mat, float* dst);

void transformVectors(const float* src, const Matrix3& mat, float* dst)
{
    const float* p = src + 1;
    float* q = dst + 2;
    int n = 3;
    do {
        float a = p[1];
        p += 3;
        a *= mat.m[2];
        q += 3;
        n--;
        float b = p[-3];
        b *= mat.m[1];
        a += b;
        float c = p[-4];
        c *= mat.m[0];
        a += c;
        q[-5] = a;

        float d = mat.m[4];
        d *= p[-3];
        float e = mat.m[5];
        e *= p[-2];
        d += e;
        float f = mat.m[3];
        f *= p[-4];
        d += f;
        q[-4] = d;

        float g = p[-4];
        g *= mat.m[6];
        float h = mat.m[7];
        h *= p[-3];
        g += h;
        float i = p[-2];
        i *= mat.m[8];
        g += i;
        q[-3] = g;
    } while (n != 0);
}
