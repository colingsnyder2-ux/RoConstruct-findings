// from server: 88% by atomic.potato
extern "C" double __cdecl sub_611F60(void*, int);
extern "C" void __cdecl sub_612410(void*, int);
extern "C" void __cdecl sub_612460(void*, int);
extern "C" void* __cdecl sub_612120(void*, int);
extern "C" void* __cdecl sub_611C20(void*, int);
extern "C" void __cdecl sub_6214E0(void*);
extern "C" void __cdecl sub_621EC0(void*, int);

struct S {
};

void __cdecl f(void* a)
{
    double d;
    void* p;
    d = sub_611F60(a, 1);
    sub_612410(a, 0x43);
    sub_612460(a, 0xffffd8ee);
    p = sub_612120(a, -1);
    sub_611C20(a, -2);
    *(double*)((char*)p + 0x1a8) = d;
    sub_6214E0(a);
    sub_621EC0(a, 0);
}
