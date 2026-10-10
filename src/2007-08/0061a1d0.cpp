// from server: 56% by colin
struct Matrix3 {
    float m[9];
};

struct ContactConnector {
    void computeImpulse(const float* a, const float* b, float* out);
};

void ContactConnector::computeImpulse(const float* a, const float* b, float* out)
{
    float tmp[9];
    tmp[0] = a[0] * b[0];
    tmp[1] = a[1] * b[1];
    tmp[2] = a[2] * b[2];
    tmp[3] = a[3] * b[0];
    tmp[4] = a[4] * b[1];
    tmp[5] = a[5] * b[2];
    tmp[6] = a[6] * b[0];
    tmp[7] = a[7] * b[1];
    tmp[8] = a[8] * b[2];

    float result[9];
    extern void __stdcall sub_61A150(float* dst, const float* srcA, const float* srcB);
    sub_61A150(result, a, tmp);

    out[0] = 0.0f;
    out[1] = 0.0f;
    out[2] = 0.0f;

    out[0] = result[3] * result[0] + b[1] * b[0] + b[2] * result[6];
    out[1] = result[4] * b[1] + result[1] * b[0] + b[2] * result[7];
    out[2] = result[5] * b[1] + result[2] * b[0] + b[2] * result[8];
}
