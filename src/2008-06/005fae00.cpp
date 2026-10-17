// from server: 17% by colin
struct Vector3 {
    float x, y, z;
    Vector3(const Vector3&);
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
};

struct Matrix3 {
    float elements[9];
    Matrix3(const Matrix3&);
};

unsigned int func_0063e420();
unsigned int func_006492c0();

extern float g_81c3b8;
extern float g_832a18;

struct UString_sink_stream_buffer {
    void write(int n);
};

void UString_sink_stream_buffer::write(int n)
{
    int d = (int)func_0063e420();
    if (n % d != 0)
        return;

    int d2 = (int)func_0063e420();
    int q = n / d2;

    float a = 0.0f;
    float b = 0.0f;

    int d3 = (int)func_006492c0();
    int r = q % d3;
    switch (r & 3) {
    case 0:
        a = 1.0f;
        break;
    case 1:
        b = 1.0f;
        break;
    case 2:
        a = g_81c3b8;
        break;
    case 3:
        b = g_81c3b8;
        break;
    }

    Vector3 v(a * g_832a18, b * g_832a18, 0.0f);
    (void)v;
}
