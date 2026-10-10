// from server: 53% by colin
extern "C" int __cdecl sub_62FF20();
extern "C" int __cdecl sub_6DC110(void*, int, int);
extern "C" int __cdecl sub_630B8C(void*, int, int);
extern "C" int __cdecl sub_4016E0(void*);
extern "C" void* __stdcall sub_77E748(void*, const void*, unsigned int);

struct S {
    int m_0;
    void* m_4;
    int m_8;
    void f(int, int, void*);
};

void S::f(int a, int b, void* c)
{
    if (a < 0 || b <= 0) {
        sub_62FF20();
        return;
    }
    if (a >= m_8) {
        sub_6DC110(this, b + a, -1);
    } else {
        int old = m_8;
        sub_6DC110(this, old + b, -1);
        int n = (old - a) * 8;
        void* dst = (char*)m_4 + a * 8;
        void* src = (char*)m_4 + (b + a) * 8;
        sub_4016E0(sub_77E748(dst, src, n));
        sub_630B8C((char*)m_4 + a * 8, 0, b * 8);
    }
    char* p = (char*)m_4 + a * 8;
    while (b != 0) {
        *(int*)p = *(int*)c;
        *(int*)(p + 4) = *(int*)((char*)c + 4);
        p += 8;
        b--;
    }
}
