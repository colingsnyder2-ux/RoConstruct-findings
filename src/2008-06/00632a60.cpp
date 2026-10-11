// from server: 44% by colin
struct VBodyVelocity {
    char pad0[0x1c];
    int field1c;
    void construct(int);
};

extern "C" void __stdcall sub_62f600(int);
extern "C" int __cdecl sub_631060();

void VBodyVelocity::construct(int a)
{
    sub_62f600(a);
    field1c = sub_631060();
    *(int*)((char*)this + 0x00) = 0x84807c;
    *(int*)((char*)this + 0x10) = 0x848070;
    *(int*)((char*)this + 0x14) = 0x848068;
    *(int*)((char*)this + 0x20) = 0x848060;
    *(int*)((char*)this + 0x24) = 0x848050;
    *(int*)((char*)this + 0x44) = 0x848040;
    *(int*)((char*)this + 0x64) = 0x848030;
    *(int*)((char*)this + 0x84) = 0x848020;
    *(int*)((char*)this + 0xa4) = 0x848010;
    *(int*)((char*)this + 0xc4) = 0x848000;
    *(int*)((char*)this + 0x130) = 0x847fe4;
    *(int*)((char*)this + 0x138) = 0x847fd8;
}
