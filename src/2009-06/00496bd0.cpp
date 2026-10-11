// from server: 52% by atomic.potato
struct S_func_00496bd0 {
    char pad0[0x48];
    int m_x;
    int f(int);
};

struct Inner {
    int a;
    int b;
    void g(int*, int*);
};

extern "C" void __stdcall sub_004777e0(Inner*, int*, int*);
extern "C" void __stdcall sub_00496ad0(Inner*, int*, int*, int);

int S_func_00496bd0::f(int a)
{
    Inner* p = (Inner*)((char*)this + 0x48);
    int v1;
    int v2;
    sub_004777e0(p, &v1, &v2);
    sub_00496ad0(p, &v1, &v2, a);
    return 0;
}
