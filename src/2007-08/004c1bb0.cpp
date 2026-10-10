// from server: 41% by colin
struct RakPeer
{
    char pad0[0x80];
    unsigned char m_flag80;
    char pad1[0x84 - 0x81];
    char m_84[0x20];
    char m_a4[0x20];
    char m_c4[0x10];
    char m_d4[0x10];
    char m_e4[0x10];
    char m_f4[0x10];
    char m_104[0x10];
    char m_114[0x10];
    char m_124[0x10];
    void func_4c1bb0(int a, int b);
};

extern "C" int __stdcall sub_4b97f0(int, int);
extern "C" void __stdcall sub_4badd0(int, int, int);
extern "C" void __stdcall sub_4bd650(int, int);
extern "C" void __stdcall sub_4bd8e0(int, int);
extern "C" void __stdcall sub_4bda70(int, int, int);
extern "C" void __stdcall sub_4bdd20(int, int);
extern "C" void __stdcall sub_4be270(int, int, int);
extern "C" void __stdcall sub_4c08f0(int, int);
extern "C" void __stdcall sub_4c0c90(int, int);

void RakPeer::func_4c1bb0(int a, int b)
{
    int local20[4];
    int local10[4];
    int i;

    m_flag80 = 1;

    if (sub_4b97f0(a, b))
    {
        *(int*)((char*)this + 0xf4) = *(int*)a;
        *(int*)((char*)this + 0xf8) = *(int*)(a + 4);
        *(int*)((char*)this + 0xfc) = *(int*)(a + 8);
        *(int*)((char*)this + 0x100) = *(int*)(a + 12);

        *(int*)((char*)this + 0xc4) = *(int*)b;
        *(int*)((char*)this + 0xc8) = *(int*)(b + 4);
        *(int*)((char*)this + 0xcc) = *(int*)(b + 8);
        *(int*)((char*)this + 0xd0) = *(int*)(b + 12);
    }
    else
    {
        *(int*)((char*)this + 0xc4) = *(int*)a;
        *(int*)((char*)this + 0xc8) = *(int*)(a + 4);
        *(int*)((char*)this + 0xcc) = *(int*)(a + 8);
        *(int*)((char*)this + 0xd0) = *(int*)(a + 12);

        *(int*)((char*)this + 0xf4) = *(int*)b;
        *(int*)((char*)this + 0xf8) = *(int*)(b + 4);
        *(int*)((char*)this + 0xfc) = *(int*)(b + 8);
        *(int*)((char*)this + 0x100) = *(int*)(b + 12);
    }

    local20[0] = *(int*)((char*)this + 0xc4);
    local20[1] = *(int*)((char*)this + 0xc8);
    local20[2] = *(int*)((char*)this + 0xcc);
    local20[3] = *(int*)((char*)this + 0xd0);

    for (i = 0; i < 4; i++)
    {
        if (local20[i] != 0)
        {
            local20[i]--;
            break;
        }
    }

    local10[0] = *(int*)((char*)this + 0xf4);
    local10[1] = *(int*)((char*)this + 0xf8);
    local10[2] = *(int*)((char*)this + 0xfc);
    local10[3] = *(int*)((char*)this + 0x100);

    for (i = 0; i < 4; i++)
    {
        if (local10[i] != 0)
        {
            local10[i]--;
            break;
        }
    }

    sub_4badd0((int)local10, (int)local20, (int)((char*)this + 0xa4));
    sub_4bd8e0((int)((char*)this + 0xa4), (int)this);
    sub_4be270((int)this, (int)((char*)this + 0xa4), (int)((char*)this + 0x84));
    sub_4bda70((int)((char*)this + 0xc4), (int)((char*)this + 0xf4), (int)((char*)this + 0x124));
    sub_4badd0((int)((char*)this + 0xc4), (int)((char*)this + 0xf4), (int)((char*)this + 0x20));
    sub_4c08f0((int)((char*)this + 0x20), (int)((char*)this + 0x40));
    sub_4bd650((int)((char*)this + 0x20), (int)((char*)this + 0x60));
    sub_4c0c90((int)((char*)this + 0xc4), (int)((char*)this + 0xd4));
    sub_4bdd20((int)((char*)this + 0xc4), (int)((char*)this + 0xe4));
    sub_4c0c90((int)((char*)this + 0xf4), (int)((char*)this + 0x104));
    sub_4bdd20((int)((char*)this + 0xf4), (int)((char*)this + 0x114));
}
