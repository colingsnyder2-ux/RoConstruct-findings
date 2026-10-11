// from server: 31% by colin
extern "C" void* __cdecl func_006a0920(unsigned int size);

struct CXTCaptionButtonThemeOfficeXP;

struct CXTButtonThemeFactory
{
    void* CreateTheme(int type);
};

void* func_007a16f0(void* mem);
void* func_007a1a60(void* mem, int arg);
void* func_007a1cd0(void* mem, int arg);

void* CXTButtonThemeFactory::CreateTheme(int type)
{
    void* result;
    if (type == 1)
    {
        result = func_006a0920(0xc8);
        if (result != 0)
        {
            result = func_007a1a60(result, 0);
        }
    }
    else if (type == 2)
    {
        result = func_006a0920(0xc8);
        if (result != 0)
        {
            result = func_007a1cd0(result, 0);
        }
    }
    else
    {
        result = func_006a0920(0x80);
        if (result != 0)
        {
            result = func_007a16f0(result);
        }
    }
    *(int*)((char*)result + 8) = type;
    return result;
}
