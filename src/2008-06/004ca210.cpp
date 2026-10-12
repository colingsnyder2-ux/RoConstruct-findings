// from server: 97% by king_originala
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct S {
    void writeBits(const unsigned char *, int, bool);
    void writeComponent(float);
    void f(float, float, float);
};

void S::f(float x, float y, float z)
{
    float length = (float)sqrt(x * x + y * y + z * z);
    float data = length;
    writeBits((const unsigned char *)&data, 32, true);

    if (length > 0.0f) {
        float reciprocal = 1.0f / length;
        writeComponent(reciprocal * x);
        writeComponent(reciprocal * y);
        writeComponent(reciprocal * z);
    }
}
