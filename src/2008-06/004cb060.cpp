// from server: 30% by colin
struct PhysicsSender
{
    char padding[4];
};

struct RoundRobinPhysicsSender : PhysicsSender
{
    char padding2[4];
    double lastCharacterSendTime;
    char padding3[0x30];
    float f40;
    int f44;
    float f48;

    RoundRobinPhysicsSender(const RoundRobinPhysicsSender& other);
};

extern "C" void __cdecl sub_4025B0(void* dest, const void* src);

RoundRobinPhysicsSender::RoundRobinPhysicsSender(const RoundRobinPhysicsSender& other)
{
    *(PhysicsSender*)this = *(const PhysicsSender*)&other;
    sub_4025B0((char*)this + 4, (const char*)&other + 4);
    lastCharacterSendTime = other.lastCharacterSendTime;
    *(int*)((char*)this + 0x10) = *(const int*)((const char*)&other + 0x10);
    *(int*)((char*)this + 0x14) = *(const int*)((const char*)&other + 0x14);
    *(int*)((char*)this + 0x18) = *(const int*)((const char*)&other + 0x18);
    *(int*)((char*)this + 0x1c) = *(const int*)((const char*)&other + 0x1c);
    *(int*)((char*)this + 0x20) = *(const int*)((const char*)&other + 0x20);
    *(int*)((char*)this + 0x24) = *(const int*)((const char*)&other + 0x24);
    *(int*)((char*)this + 0x28) = *(const int*)((const char*)&other + 0x28);
    *(int*)((char*)this + 0x2c) = *(const int*)((const char*)&other + 0x2c);
    *(int*)((char*)this + 0x30) = *(const int*)((const char*)&other + 0x30);
    *(int*)((char*)this + 0x34) = *(const int*)((const char*)&other + 0x34);
    *(int*)((char*)this + 0x38) = *(const int*)((const char*)&other + 0x38);
    *(int*)((char*)this + 0x3c) = *(const int*)((const char*)&other + 0x3c);
    f40 = other.f40;
    f44 = other.f44;
    f48 = other.f48;
}
