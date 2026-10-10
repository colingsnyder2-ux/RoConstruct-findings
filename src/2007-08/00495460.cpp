// from server: 27% by colin
struct S {
    void f(int, int, int, int, int, int, int);
};

extern "C" void* __cdecl sub_492890(int, int, int, int, int, int, int);
extern "C" void* __cdecl sub_494E80(int, int);
extern "C" void __cdecl sub_442E60(void*, int);
extern "C" void __cdecl sub_62FC62(void*);

void S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    void* p = sub_492890(a1, a2, a3, a4, a5, a6, a7);
    void* q = sub_494E80(a1, a2);
    sub_442E60(q, a1);
    sub_62FC62(p);
}
