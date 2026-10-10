// from server: 31% by colin
struct RBX_SpawnLocation_005a14b0;

struct RBX_SpawnLocation_005a14b0
{
    void method(int a, int b);
};

extern "C" void __stdcall sub_57aa50(int, int);
extern "C" void __stdcall sub_5a06d0(int, int);
extern "C" void __stdcall sub_5a1060(int);
extern "C" void __stdcall sub_4ac3d0(int, int, int, int);
extern "C" void __stdcall sub_728640(int, int);
extern "C" void __stdcall sub_728460(int);
extern "C" void __stdcall sub_49a230(int);
extern "C" void __stdcall sub_5e9d20(int, int, int, int);
extern "C" void __stdcall sub_5e9d60(int, int);
extern "C" void __stdcall sub_728350(int);
extern "C" void __stdcall sub_48cda0(int);
extern "C" void __stdcall sub_5ea010(int, int);

void RBX_SpawnLocation_005a14b0::method(int a, int b)
{
    int local1;
    int local2;
    int local3;
    int local4;
    int local5;
    int local6;
    int local7;
    int local8;
    int local9;
    int local10;
    int local11;
    int local12;
    int local13;
    int local14;
    int local15;
    int local16;

    sub_57aa50((int)this, a);

    if (a == 0)
    {
        local1 = 0;
        local2 = 0;
        local3 = 0x5a0210;
        local4 = 0;
        local5 = 0;
        local6 = 0;
        local7 = 0;
        local8 = 0;
        local9 = 0;
        local10 = 0;
        local11 = 0;
        local12 = 0;
        local13 = 0;
        local14 = 0;
        local15 = 0;
        local16 = 0;

        sub_5a06d0((int)&local1, (int)&local3);

        if (this != 0)
        {
            local1 = (int)this + 4;
        }
        else
        {
            local1 = 0;
        }

        sub_4ac3d0(0x8c2990, (int)&local1, (int)&local2, (int)&local3);
        sub_728640((int)this + 0x284, local1);
        sub_728460((int)&local1);
        sub_49a230((int)&local3);

        if (b != 0)
        {
            sub_5a1060(b);
        }
        else
        {
            local1 = 0;
        }

        local2 = *(int*)(local1 + 0xec);
        local3 = *(int*)(local2 + 4);
        local4 = local1 + 0xe8;
        local5 = (int)this;
        sub_5e9d20(local4, local2, local3, (int)&local5);
        local6 = local1;
        sub_5e9d60(local4, 1);
        *(int*)(local2 + 4) = local6;
        *(int*)(local6 + 4) = local6;
    }

    if (b == 0)
    {
        sub_728350((int)this + 0x284);

        if (a != 0)
        {
            sub_48cda0(a);
        }
        else
        {
            local1 = 0;
        }

        local2 = (int)this;
        sub_5ea010(local1 + 0xe8, (int)&local2);
    }
}
