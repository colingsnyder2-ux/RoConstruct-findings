// from server: 59% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __cdecl func_00630d36(int, int, int, int, int);

struct RBX_LocalBackpack_Sub
{
    int sub_005d05c0();
    int sub_005d0690();
    int sub_005d0130(int);
};

struct RBX_LocalBackpack
{
    char pad[0x124];
    RBX_LocalBackpack_Sub sub;
    int field_1c;
    int func_005d07a0(int, int, int);
};

int RBX_LocalBackpack::func_005d07a0(int a, int b, int c)
{
    int result = func_00630d36(a, 0, (int)"\x4c\x1f\x88\x00", (int)"\xc8\xe1\x88\x00", 0);
    if (result != 0)
    {
        if (result == this->field_1c)
        {
            this->sub.sub_005d05c0();
        }
    }
    else
    {
        result = func_00630d36(a, 0, (int)"\x4c\x1f\x88\x00", (int)"\x1c\xc9\x88\x00", 0);
        if (result != 0)
        {
            this->sub.sub_005d0690();
        }
        else
        {
            result = func_00630d36(a, 0, (int)"\x4c\x1f\x88\x00", (int)"\xc4\x65\x8a\x00", 0);
            if (result != 0)
            {
                this->sub.sub_005d0130(result);
            }
        }
    }

    if (b != 0)
    {
        if (_InterlockedExchangeAdd((volatile long*)(b + 4), -1) == 1)
        {
            (*(void(**)(int))(*((int*)b) + 4))(b);
            if (_InterlockedExchangeAdd((volatile long*)(b + 8), -1) == 1)
            {
                (*(void(**)(int))(*((int*)b) + 8))(b);
            }
        }
    }

    return c;
}
