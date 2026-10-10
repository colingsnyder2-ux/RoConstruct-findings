// from server: 35% by tester
struct RBX_Network_RoundRobinPhysicsSender {
    char pad0[0x138];
    void* construct();
    void init(const char*);
    void sub_55af90(void*);
};

extern "C" void __stdcall sub_4cd510();
extern "C" void __stdcall sub_64b2a0();
extern "C" void __stdcall sub_55af90();

extern "C" void __stdcall string_ctor(void*, const char*);
extern "C" void __stdcall string_dtor(void*);

void* RBX_Network_RoundRobinPhysicsSender::construct()
{
    sub_4cd510();
    *(int*)((char*)this + 0x00) = 0x826aac;
    *(int*)((char*)this + 0x10) = 0x826aa0;
    *(int*)((char*)this + 0x14) = 0x826a98;
    *(int*)((char*)this + 0x20) = 0x826a90;
    *(int*)((char*)this + 0x24) = 0x826a80;
    *(int*)((char*)this + 0x44) = 0x826a70;
    *(int*)((char*)this + 0x64) = 0x826a60;
    *(int*)((char*)this + 0x84) = 0x826a50;
    *(int*)((char*)this + 0xa4) = 0x826a40;
    *(int*)((char*)this + 0xc4) = 0x826a30;
    *(int*)((char*)this + 0x130) = 0x826a24;
    *(int*)((char*)this + 0x134) = 0x826a18;
    sub_64b2a0();
    char buf[8];
    string_ctor(buf, (const char*)0x826a04);
    sub_55af90(buf);
    string_dtor(buf);

    return this;
}
