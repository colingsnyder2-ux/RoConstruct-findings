// from server: 45% by colin
struct CLuaHtmlView_Binder {
    int f0;
    int f4;
    char pad8[0x18];
    void ctor(int* p);
};

extern "C" void __stdcall sub_42BD70(int, int, int, int, int);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __fastcall sub_4181B0(void*, int, void*);
extern "C" void __fastcall sub_728830(void*);

void CLuaHtmlView_Binder::ctor(int* p) {
    f0 = 0;
    f4 = 0;
    int a = p[0];
    int b = p[1];
    int c = p[2];
    int d = p[3];
    char flag = 0;
    sub_42BD70((int)this + 8, a, b, c, d);
    void* mem = sub_62FEF6(0x20);
    if (mem) {
        *(int*)((char*)mem + 4) = 0;
        *(int*)((char*)mem + 8) = 0;
        *(int*)((char*)mem + 0xc) = 0;
        *(int*)((char*)mem + 0x14) = 0;
        *(int*)((char*)mem + 0x18) = 0;
        *(char*)((char*)mem + 0x1c) = 0;
    } else {
        mem = 0;
    }
    sub_4181B0(this, (int)mem, 0);
    sub_728830(this);
}
