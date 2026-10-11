// from server: 33% by colin
struct S {
    char pad0[0xc];
    int field_c;
    char pad10[0x134 - 0x10];
    int field_134;
    char pad138[0x1a0 - 0x138];
    int field_1a0;
    int field_1a4;
    char pad1a8[0x1b0 - 0x1a8];
    int field_1b0;
    int field_1b4;
    int field_1b8;
    char pad1bc[0x1c0 - 0x1bc];
    int field_1c0;
    char pad1c4[0x1cc - 0x1c4];
    int field_1cc;
    char pad1d0[0x228 - 0x1d0];
    char field_228[0x3c8 - 0x228];
    char field_3c8[4];
    void destroy();
};

extern "C" void __stdcall func_00802468();
extern void func_005e7df0();
extern void func_0047d410();
extern void func_006a067a(void*);
extern void func_00598df0();

void S::destroy()
{
    int* p;
    int* q;
    int* r;

    field_134 = 0;
    *(int*)((char*)this + 0x0) = 0x832d4c;
    *(int*)((char*)this + 0x10) = 0x832d3c;
    *(int*)((char*)this + 0x14) = 0x832d34;
    *(int*)((char*)this + 0x20) = 0x832d2c;
    *(int*)((char*)this + 0x24) = 0x832d1c;
    *(int*)((char*)this + 0x44) = 0x832d0c;
    *(int*)((char*)this + 0x64) = 0x832cfc;
    *(int*)((char*)this + 0x84) = 0x832cec;
    *(int*)((char*)this + 0xa4) = 0x832cdc;
    *(int*)((char*)this + 0xc4) = 0x832ccc;
    *(int*)((char*)this + 0x130) = 0x832cc0;
    *(int*)((char*)this + 0x1a0) = 0x832cb0;
    *(int*)((char*)this + 0x1c0) = 0x832ca4;
    *(int*)((char*)this + 0x1cc) = 0x832c8c;

    p = (int*)field_134;
    *(int*)((char*)p + 4) = 0x832c80;
    *(int*)((char*)this + 0x134) = 0x832c80;

    q = (int*)field_134;
    *(int*)((char*)q + 8) = 0x832c78;
    *(int*)((char*)this + 0x134) = 0x832c78;

    r = (int*)field_134;
    *(int*)((char*)r + 0xc) = 0x832c5c;
    *(int*)((char*)this + 0x134) = 0x832c5c;

    p = (int*)field_134;
    p = (int*)p[1];
    *(int*)((char*)p + 0x130) = (int)p - 0x2b8;

    q = (int*)field_134;
    q = (int*)q[2];
    *(int*)((char*)q + 0x130) = (int)q - 0x2c0;

    r = (int*)field_134;
    r = (int*)r[3];
    *(int*)((char*)r + 0x130) = (int)r - 0x2c8;

    func_00802468();
    func_005e7df0();
    func_0047d410();

    if (field_1b0 != 0) {
        func_006a067a((void*)field_1b0);
    }
    func_006a067a((void*)field_1a4);
    field_1b0 = 0;
    field_1b4 = 0;
    field_1b8 = 0;
    func_00598df0();
}
