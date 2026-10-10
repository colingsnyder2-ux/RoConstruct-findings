// from server: 60% by colin
struct Name {
    char pad[8];
};

struct Base {
    char pad[0x2c0];
};

struct VSpawnLocation : Base {
    void ctor(int);
};

extern "C" void __stdcall sub_541bf0(void*, const Name*);
extern "C" void __stdcall sub_5a0eb0(void*, int);
extern "C" void* __stdcall sub_8a7500();
extern "C" void __stdcall sub_77e698(void*, const char*);
extern "C" void __stdcall sub_77e6ac(void*);

void VSpawnLocation::ctor(int arg) {
    char buf[0x24];
    int flag = 0;
    if (arg != 0) {
        *(int*)((char*)this + 0xec) = 0x7b3d88;
        *(int*)((char*)this + 0x2b8) = 0x7aafe8;
        *(int*)((char*)this + 0x2a4) = 0x7a4cd4;
        *(int*)((char*)this + 0x2ac) = 0x7a4ccc;
        int v = *(int*)((char*)this + 0x2b8);
        *(int*)((char*)this + 0x2b4) = 0x7a4cac;
        int w = *(int*)(v + 4);
        *(int*)((char*)this + w + 0x2b8) = 0x7a4ca4;
        flag = 1;
    }
    sub_5a0eb0(this, 0);
    int e = *(int*)((char*)this + 0xec);
    *(int*)((char*)this + 0) = 0x7b3d1c;
    *(int*)((char*)this + 4) = 0x7b3d14;
    *(int*)((char*)this + 0x10) = 0x7b3d0c;
    *(int*)((char*)this + 0x14) = 0x7b3cfc;
    *(int*)((char*)this + 0x2c) = 0x7b3cec;
    *(int*)((char*)this + 0x44) = 0x7b3cdc;
    *(int*)((char*)this + 0x5c) = 0x7b3ccc;
    *(int*)((char*)this + 0x74) = 0x7b3cbc;
    *(int*)((char*)this + 0x8c) = 0x7b3cac;
    *(int*)((char*)this + 0xe8) = 0x7b3ca0;
    *(int*)((char*)this + 0x158) = 0x7b3c90;
    *(int*)((char*)this + 0x170) = 0x7b3c84;
    *(int*)((char*)this + 0x17c) = 0x7b3c6c;
    int a = *(int*)(e + 4);
    *(int*)((char*)this + a + 0xec) = 0x7b3c60;
    int c = *(int*)((char*)this + 0xec);
    int d = *(int*)(c + 8);
    *(int*)((char*)this + d + 0xec) = 0x7b3c58;
    int f = *(int*)((char*)this + 0xec);
    int g = *(int*)(f + 0xc);
    *(int*)((char*)this + g + 0xec) = 0x7b3c3c;
    int h = *(int*)((char*)this + 0xec);
    int i = *(int*)(h + 4);
    int j = i - 0x1b8;
    *(int*)((char*)this + i + 0xe8) = j;
    int k = *(int*)((char*)this + 0xec);
    int l = *(int*)(k + 8);
    int m = l - 0x1c0;
    *(int*)((char*)this + l + 0xe8) = m;
    int n = *(int*)((char*)this + 0xec);
    int o = *(int*)(n + 0xc);
    int p = o - 0x1c8;
    *(int*)((char*)this + o + 0xe8) = p;
    *(int*)((char*)this + 0x280) = 0xc2;
    *(int*)((char*)this + 0x288) = 0;
    *(int*)((char*)this + 0x28c) = 0;
    *(char*)((char*)this + 0x290) = 0;
    *(char*)((char*)this + 0x294) = 0;
    sub_77e698(buf, (const char*)0x8a7500);
    *(char*)((char*)this + 0x298) = 1;
    *(char*)((char*)this + 0x299) = 0;
    sub_541bf0(this, (const Name*)buf);
    sub_77e6ac(buf);
}
