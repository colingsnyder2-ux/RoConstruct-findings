// from server: 46% by colin
struct SignalDesc {
    void construct(int, int, int, int, int, int, int);
};

extern "C" int __cdecl sub_491FF0();
extern "C" int __cdecl sub_494E80();
extern "C" void __cdecl sub_5873E0(int, int, int, int, int);
extern "C" int* __cdecl sub_4928F0(int);
extern "C" void __cdecl sub_62FC62(int);

void SignalDesc::construct(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    int v8 = sub_491FF0();
    int v9 = sub_494E80();
    sub_5873E0(v9, v8, a1, a2, a3);
    *(int*)((char*)this + 0x18) = 0x79addc;
    int* p = sub_4928F0(a4);
    int v10 = *p;
    *p = 0;
    *(int*)((char*)this + 0x1c) = v10;
    sub_62FC62(a5);
    *(int*)this = 0x79bad4;
    *(int*)((char*)this + 0x18) = 0x79bacc;
}
