// from server: 59% by colin
struct RBX_Primitive_005e8770 {
    void ctor(int);
};

extern "C" void __cdecl sub_005a8300();
extern "C" void __cdecl sub_00510960();
extern "C" int __cdecl sub_005e7d80(int);
extern "C" void* __cdecl sub_006a0920(unsigned int);
extern "C" void __cdecl sub_006a17af(void*);
extern "C" void __cdecl sub_006149c0();

extern float g_82f840;
extern unsigned char g_976390;
extern int g_976384;
extern int g_976388;
extern int g_97638c;

void RBX_Primitive_005e8770::ctor(int a) {
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 0) = 0x83f83c;
    sub_005a8300();
    *(unsigned char*)((char*)this + 0x10) = 0;
    *(int*)((char*)this + 0x14) = 1;
    *(void**)((char*)this + 0x18) = this;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x24) = 0;
    *(int*)((char*)this + 0x1c) = 0;
    *(int*)((char*)this + 0x2c) = 0;
    *(int*)((char*)this + 0x30) = 0;
    *(int*)((char*)this + 0x28) = 0;
    *(void**)((char*)this + 0x34) = this;
    *(int*)((char*)this + 0x3c) = 0;
    *(int*)((char*)this + 0x40) = 0;
    *(int*)((char*)this + 0x38) = 0;
    *(int*)((char*)this + 0x48) = 0;
    *(int*)((char*)this + 0x4c) = 0;
    *(int*)((char*)this + 0x44) = 0;
    *(int*)((char*)this + 0x58) = 0;
    *(int*)((char*)this + 0x5c) = 0;
    *(int*)((char*)this + 0x64) = 0;
    *(int*)((char*)this + 0x50) = -1;
    *(int*)((char*)this + 0x54) = -1;
    *(int*)((char*)this + 0x60) = -1;
    *(int*)((char*)this + 0x68) = 0;
    *(int*)((char*)this + 0x6c) = 0;
    *(int*)((char*)this + 0x70) = 0;
    *(int*)((char*)this + 0x74) = 0;
    *(int*)((char*)this + 0x78) = 0;
    *(int*)((char*)this + 0x7c) = 0;
    sub_00510960();
    *(float*)((char*)this + 0x80) = *(float*)0;
    *(float*)((char*)this + 0x84) = *(float*)4;
    *(float*)((char*)this + 0x88) = *(float*)8;
    sub_00510960();
    *(float*)((char*)this + 0x8c) = -*(float*)0;
    *(float*)((char*)this + 0x90) = -*(float*)4;
    *(float*)((char*)this + 0x94) = -*(float*)8;
    *(int*)((char*)this + 0x98) = -2;
    *(int*)((char*)this + 0x9c) = sub_005e7d80(a);
    void* p = sub_006a0920(0xdc);
    if (p != 0) {
        sub_006149c0();
    } else {
        p = 0;
    }
    *(void**)((char*)this + 0xa0) = p;
    *(float*)((char*)this + 0xb0) = 0.0f;
    *(int*)((char*)this + 0xa4) = 0;
    *(float*)((char*)this + 0xb4) = g_82f840;
    *(unsigned char*)((char*)this + 0xa8) = 0;
    *(unsigned char*)((char*)this + 0xa9) = 0;
    *(unsigned char*)((char*)this + 0xaa) = 0;
    *(unsigned char*)((char*)this + 0xab) = 0;
    *(unsigned char*)((char*)this + 0xac) = 1;
    if ((g_976390 & 1) == 0) {
        g_976390 |= 1;
        g_976384 = 0x81e1e0;
        g_976388 = 0;
        g_97638c = 0;
        g_976384 = 0x832a04;
        sub_006a17af((void*)0x7fdbc0);
    }
    *(int*)((char*)this + 0xe8) = (int)&g_976384;
    *(unsigned char*)((char*)this + 0xf0) = 1;
    *(void**)((char*)this + 0xf4) = this;
    *(int*)((char*)this + 0xf8) = 0x5e7580;
    *(int*)((char*)this + 0xb8) = 0;
    *(int*)((char*)this + 0xd0) = 0;
    *(int*)((char*)this + 0xbc) = 0;
    *(int*)((char*)this + 0xd4) = 0;
    *(int*)((char*)this + 0xc0) = 0;
    *(int*)((char*)this + 0xd8) = 0;
    *(int*)((char*)this + 0xc4) = 0;
    *(int*)((char*)this + 0xdc) = 0;
    *(int*)((char*)this + 0xc8) = 0;
    *(int*)((char*)this + 0xe0) = 0;
}
