// from server: 36% by colin
struct ForceField {
    char pad[0x130];
    int field130;
    void ctor();
};

void func_0047d410();
void func_0062d0c0();

void ForceField::ctor()
{
    *(int*)((char*)this + 0x00) = 0x84682c;
    *(int*)((char*)this + 0x10) = 0x846820;
    *(int*)((char*)this + 0x14) = 0x846818;
    *(int*)((char*)this + 0x20) = 0x846810;
    *(int*)((char*)this + 0x24) = 0x846800;
    *(int*)((char*)this + 0x44) = 0x8467f0;
    *(int*)((char*)this + 0x64) = 0x8467e0;
    *(int*)((char*)this + 0x84) = 0x8467d0;
    *(int*)((char*)this + 0xa4) = 0x8467c0;
    *(int*)((char*)this + 0xc4) = 0x8467b0;
    *(int*)((char*)this + 0x130) = 0x846798;
    func_0047d410();
    func_0062d0c0();
}
