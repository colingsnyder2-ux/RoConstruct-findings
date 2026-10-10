// from server: 69% by colin
struct DescribedBase {
    void* vfptr;
    int pad0[10];
    int offset2c;
    int offset28;
};

struct FuncDesc {
    void* vfptr;
    int pad0[10];
    int offset2c;
    int offset28;
};

struct BoundFuncDesc {
    char pad0[0x28];
    int offset28;
    int offset2c;
    int method(int, int);
};

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern "C" int __cdecl sub_630b9e(int, int);
extern "C" int __cdecl sub_537bd0(int, int);
extern "C" void* __stdcall sub_77e710(int);
extern "C" void __cdecl sub_841e0c();
extern "C" void __cdecl sub_786e04();
extern "C" void __cdecl sub_88209c();
extern "C" void __cdecl sub_8b01f8();

int BoundFuncDesc::method(int a, int b)
{
    int result = sub_630d36(a, 0, (int)&sub_8b01f8, (int)&sub_88209c, 0);
    if (result == 0) {
        sub_77e710((int)&sub_786e04);
        sub_630b9e((int)&sub_841e0c, 0);
    }
    int ecx = this->offset2c + result;
    int eax = this->offset28;
    int tmp;
    int r = ((int (__thiscall*)(void*, int*))eax)((void*)ecx, &tmp);
    int ecx2 = *(int*)((char*)&tmp + 0x14);
    ecx2 += 4;
    return sub_537bd0(ecx2, r);
}
