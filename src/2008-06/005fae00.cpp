// from server: 80% by colin




struct Vector3 {
    float x, y, z;
    Vector3() {}
    Vector3(const Vector3&);
};

struct S {
    void f(int);
};

extern float g_81c3b8;
extern float g_832a18;

unsigned int func_0063e420();
unsigned int func_006492c0();
void func_005faaa0(S*, Vector3*);

void S::f(int arg)
{
    if (arg % (int)func_0063e420() != 0)
        return;

    int q = arg / (int)func_0063e420();

    float a = 0.0f;
    float b = 0.0f;

    int r = q % (int)func_006492c0();
    int m = r & 0x80000003;
    if (m < 0) {
        m = (m - 1) | 0xfffffffc;
        m = m + 1;
    }

    switch (m) {
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

    Vector3 v;
    v.x = a * g_832a18;
    v.y = b * g_832a18;
    v.z = 0.0f;

    func_005faaa0(this, &v);
}
