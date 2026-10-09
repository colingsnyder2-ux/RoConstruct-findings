// from server: 35% by colin
// roc 2007-08 005773a0  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005773a0

extern "C" int __cdecl sub_577100(int, int);
extern "C" int __cdecl sub_530ED0(void*, int);
extern "C" int __cdecl sub_62FC62(int);

struct EnumDesc {
    void* vtable;
    int construct(int, int, int, int, int, int, int, int, int);
};

int EnumDesc::construct(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    int local = 0;
    int* p = &local;
    *(int*)this = a1;
    int r = sub_577100(a2, a3);
    sub_530ED0(this, r);
    sub_62FC62(a4);
    *(int*)this = 0x7aac54;
    return (int)this;
}
