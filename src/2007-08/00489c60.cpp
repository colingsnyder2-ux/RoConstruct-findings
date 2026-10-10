// from server: 46% by colin
struct Notifier {
    char pad0[8];
    char pad1[4];
    char pad2[4];
    char pad3[4];
    int f(int, int);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_4172D0(void*, void*);
extern "C" void __cdecl sub_727EB0(void*, void*, void*);
extern "C" int __cdecl sub_56D3E0(void*);

int Notifier::f(int a, int b)
{
    void* p;
    void* q;
    void* r;
    void* s;
    int v;

    p = sub_62FEF6(8);
    if (p == 0) {
        *(int*)p = 0x7873cc;
    } else {
        p = 0;
    }

    sub_4172D0(&q, this);
    sub_727EB0(this, &r, &p);

    if (r != 0) {
        v = ((int (__stdcall*)(void*, int))r)(s, 1);
    }
    r = 0;
    s = 0;

    if (q != 0) {
        ((void (__stdcall*)(void*, int))*(void**)q)(q, 1);
    }

    *(int*)((char*)this + 12) = sub_56D3E0((char*)this + 8);
    *(int*)((char*)this + 16) = 0;
    *(char*)((char*)this + 20) = 0;

    return (int)this;
}
