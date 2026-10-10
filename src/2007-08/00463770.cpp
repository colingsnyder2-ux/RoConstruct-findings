// from server: 70% by colin
struct S_00463770 {
    char pad0[0x58];
    float m_field58;
    float m_field5c;
    float m_field60;
    float m_field64;
    char pad68[0x180 - 0x68];
    int m_field180;

    void f();
};

extern "C" int __stdcall GetClientRect(int, int*);

void S_00463770::f()
{
    int rect[4];
    int* p = (int*)m_field180;
    GetClientRect(p[8], rect);
    int w = rect[2] - rect[0];
    int h = rect[3] - rect[1];
    m_field58 = 0.0f;
    m_field5c = 0.0f;
    m_field60 = (float)w;
    m_field64 = (float)h;
}
