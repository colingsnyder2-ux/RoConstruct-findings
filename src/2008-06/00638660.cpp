// from server: 45% by colin
struct S {
    char pad0[0x130];
    float f130;
    float f134;
    float f138;
    void ctor();
};

extern "C" {
    void __stdcall sub_802458(void*);
    void __stdcall sub_802468(void*);
}

extern float g_9611c0;
extern float g_9611c4;
extern float g_9611c8;

void sub_637e50();
void sub_55af90();

void S::ctor()
{
    sub_637e50();
    *(void**)this = (void*)0x84960c;
    *(void**)((char*)this + 0x10) = (void*)0x849600;
    *(void**)((char*)this + 0x14) = (void*)0x8495f8;
    *(void**)((char*)this + 0x20) = (void*)0x8495f0;
    *(void**)((char*)this + 0x24) = (void*)0x8495e0;
    *(void**)((char*)this + 0x44) = (void*)0x8495d0;
    *(void**)((char*)this + 0x64) = (void*)0x8495c0;
    *(void**)((char*)this + 0x84) = (void*)0x8495b0;
    *(void**)((char*)this + 0xa4) = (void*)0x8495a0;
    *(void**)((char*)this + 0xc4) = (void*)0x849590;
    f130 = g_9611c0;
    f134 = g_9611c4;
    f138 = g_9611c8;

    char buf[0x1c];
    sub_802458((void*)0x818478);
    *(int*)(buf + 0x18) = 0;
    sub_55af90();
    sub_802468(buf);
}
