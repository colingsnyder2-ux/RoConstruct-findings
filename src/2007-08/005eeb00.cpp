// from server: 81% by colin
struct S_005eeb00 {
    char pad[0xfc];
    float f0xfc;
    float f0x100;
    float f0x104;
    float f0x108;
    float f0x10c;
    float f0x110;
    float f0x114;
    float f0x118;
    float f0x11c;
    float f0x120;
    float f0x124;
    void ctor();
};

extern float g_0079f7a8;
extern float g_007bf850;
extern float g_007bf83c;
extern float g_0079f738;

extern void __stdcall sub_005ee4f0(int);

void S_005eeb00::ctor()
{
    sub_005ee4f0(0x8af3c8);
    f0xfc = g_0079f7a8;
    *(int*)((char*)this + 0x00) = 0x7bf85c;
    f0x100 = g_007bf850;
    *(int*)((char*)this + 0x04) = 0x7bf84c;
    *(int*)((char*)this + 0x10) = 0x7bf844;
    *(int*)((char*)this + 0x14) = 0x7bf830;
    *(int*)((char*)this + 0x2c) = 0x7bf820;
    *(int*)((char*)this + 0x44) = 0x7bf810;
    *(int*)((char*)this + 0x5c) = 0x7bf800;
    *(int*)((char*)this + 0x74) = 0x7bf7f0;
    *(int*)((char*)this + 0x8c) = 0x7bf7e0;
    *(int*)((char*)this + 0xe8) = 0x7bf7c8;
    *(int*)((char*)this + 0xf0) = 0x7bf7bc;
    f0x104 = g_007bf83c;
    f0x108 = g_007bf83c;
    f0x10c = g_007bf83c;
    f0x110 = 0.0f;
    f0x114 = g_0079f738;
    f0x118 = 0.0f;
    f0x11c = 0.0f;
    f0x120 = 0.0f;
    f0x124 = 0.0f;
}
