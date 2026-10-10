// from server: 41% by colin
struct Seat
{
    char pad0[0x280];
    char m_field280[0x100];
    void createSeatWeld(int a, int b);
};

extern "C" void __stdcall sub_0057aa50(int a, int b);
extern "C" void __stdcall sub_005fa7a0(void* a, void* b);
extern "C" void __stdcall sub_004ac3d0(void* a, void* b, void* c);
extern "C" void __stdcall sub_00728640(void* a, void* b);
extern "C" void __stdcall sub_00728460(void* a);
extern "C" void __stdcall sub_0049a230(void* a);
extern "C" void __stdcall sub_00728350(void* a);

void Seat::createSeatWeld(int a, int b)
{
    sub_0057aa50(a, b);
    if (a != 0)
    {
        char buf[0x3c];
        *(int*)(buf + 0x24) = 0;
        *(int*)(buf + 0x28) = 0;
        *(int*)(buf + 0x20) = 0x5fa880;
        *(int*)(buf + 0x34) = *(int*)(buf + 0x10);
        *(int*)(buf + 0x30) = *(int*)(buf + 0x18);
        *(int*)(buf + 0x34) = (int)this;
        sub_005fa7a0(buf + 0x10, buf + 0x20);
        *(int*)(buf + 0x40) = b;
        void* q = (this != 0) ? (void*)((char*)this + 4) : 0;
        sub_004ac3d0(buf + 0x0c, q, buf + 0x1c);
        sub_00728640((char*)this + 0x280, buf + 0x0c);
        sub_00728460(buf + 0x0c);
        sub_0049a230(buf + 0x1c);
    }
    if (b == 0)
    {
        sub_00728350((char*)this + 0x280);
    }
}
