// from server: 51% by colin
struct VHumanoidBoundFuncDesc {
    char pad[0x1a8];
    void construct(int arg);
};

extern "C" void __stdcall sub_5A7760();
extern "C" void __stdcall sub_601710();
extern "C" void __stdcall sub_541BF0();
extern "C" void __stdcall sub_77E698();
extern "C" void __stdcall sub_77E6AC();

void VHumanoidBoundFuncDesc::construct(int arg)
{
    if (arg != 0) {
        *(int*)((char*)this + 0x108) = 0x7b5770;
        *(int*)((char*)this + 0x1a4) = 0x7a4ccc;
    }
    sub_5A7760();
    *(int*)((char*)this + 0xec) = -1;
    *(int*)((char*)this + 0xe8) = 0x7b5238;
    *(int*)((char*)this + 0xf0) = 0x7b522c;
    *(int*)((char*)this + 0xf4) = 0x7a4c8c;
    *(int*)((char*)this + 0xf8) = -1;
    *(int*)((char*)this + 0xfc) = -1;
    *(int*)((char*)this + 0x100) = 0;
    sub_601710();
    *(int*)((char*)this + 0x124) = 0x7b525c;
    *(int*)((char*)this + 0x128) = *(int*)0x78fef0;
    *(int*)((char*)this + 0x12c) = *(int*)0x78fef0;
    *(int*)((char*)this + 0x130) = 0;
    *(int*)((char*)this + 0x134) = 3;
    *(int*)((char*)this + 0x138) = 0;
    *(int*)((char*)this + 0x13c) = 0;
    *(int*)((char*)this + 0x140) = 0;
    *(int*)((char*)this + 0x144) = 0;
    *(int*)((char*)this + 0x148) = 0;
    *(int*)((char*)this + 0x14c) = 0;
    *(int*)((char*)this + 0x150) = 0;
    *(int*)((char*)this + 0x154) = 0;
    *(int*)((char*)this + 0x158) = 0;
    *(int*)((char*)this + 0x15c) = 0;
    *(int*)((char*)this + 0x160) = 0;
    *(unsigned char*)((char*)this + 0x164) &= 0xf0;
    *(int*)((char*)this + 0x168) = 0;
    *(int*)((char*)this + 0x16c) = 0;
    *(int*)((char*)this + 0x170) = 0;
    *(int*)((char*)this + 0x174) = 0;
    *(int*)((char*)this + 0x178) = 0;
    *(int*)((char*)this + 0x17c) = 0;
    *(int*)((char*)this + 0x180) = 0;
    *(int*)((char*)this + 0x184) = 0;
    *(int*)((char*)this + 0x188) = 0;
    *(int*)((char*)this + 0x18c) = 0;
    *(int*)((char*)this + 0x190) = 0;
    *(int*)((char*)this + 0x194) = 0;
    *(int*)((char*)this + 0x198) = 0;
    *(int*)((char*)this + 0x19c) = 0;
    sub_77E698();
    sub_541BF0();
    sub_77E6AC();
}
