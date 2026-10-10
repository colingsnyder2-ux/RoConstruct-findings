// from server: 44% by colin
struct S_func_00491500 {
    char pad0[4];
    int m_field4;
    int m_field8;
    void f(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

extern "C" void __stdcall sub_0055D3D0();
extern "C" void* __cdecl sub_0062FEF6(unsigned int size);
extern "C" void __stdcall sub_0077E69C(void* p, void* q);
extern "C" void __stdcall sub_0077E6AC(void* p);

void S_func_00491500::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    sub_0055D3D0();
    void* p = sub_0062FEF6(0x1c);
    if (p) {
        sub_0077E69C(p, &a1);
    } else {
        p = 0;
    }
    m_field8 = (int)p;
    m_field4 = 2;
    sub_0077E6AC(&a1);
}
