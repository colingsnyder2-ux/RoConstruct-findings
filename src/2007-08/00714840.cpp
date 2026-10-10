// from server: 32% by colin
struct CXTCaptionButtonThemeFactory
{
    char pad[8];
    int field_8;
};

extern "C" void* __cdecl sub_62fef6(unsigned int);

struct Helper713b80
{
    void method();
};

struct Helper713ba0
{
    void method();
};

struct Helper720e20
{
    void method(int);
};

void Helper713b80::method()
{
    ((void (__thiscall*)(Helper713b80*))0x713b80)(this);
}

void Helper713ba0::method()
{
    ((void (__thiscall*)(Helper713ba0*))0x713ba0)(this);
}

void Helper720e20::method(int a1)
{
    ((void (__thiscall*)(Helper720e20*, int))0x720e20)(this, a1);
}

CXTCaptionButtonThemeFactory* __stdcall sub_714840(int a1)
{
    CXTCaptionButtonThemeFactory* result;

    if (a1 != 1)
    {
        result = (CXTCaptionButtonThemeFactory*)sub_62fef6(0xc4);
        if (result != 0)
        {
            ((void (__thiscall*)(void*))0x713ba0)(result);
        }
        else
        {
            result = 0;
        }
    }
    else if (a1 == 2)
    {
        result = (CXTCaptionButtonThemeFactory*)sub_62fef6(0xc4);
        if (result != 0)
        {
            ((void (__thiscall*)(void*, int))0x720e20)(result, 0);
            *(int*)result = 0x7dec0c;
        }
        else
        {
            result = 0;
        }
    }
    else
    {
        result = (CXTCaptionButtonThemeFactory*)sub_62fef6(0x7c);
        if (result != 0)
        {
            ((void (__thiscall*)(void*))0x713b80)(result);
        }
        else
        {
            result = 0;
        }
    }

    result->field_8 = a1;
    return result;
}
