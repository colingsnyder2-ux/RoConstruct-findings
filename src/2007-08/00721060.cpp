// from server: 28% by colin
extern "C" void* __cdecl sub_0062FEF6(unsigned int size);

struct CXTButtonThemeFactory
{
    void* createTheme(unsigned int type);
};

void* __fastcall sub_00720840(void* self);
void* __fastcall sub_00720BC0(void* self, int arg);
void* __fastcall sub_00720E20(void* self, int arg);

void* CXTButtonThemeFactory::createTheme(unsigned int type)
{
    void* result;

    if (type != 1)
    {
        result = sub_0062FEF6(0xC4);
        if (result != 0)
        {
            sub_00720BC0(result, 0);
        }
    }
    else if (type == 2)
    {
        result = sub_0062FEF6(0xC4);
        if (result != 0)
        {
            sub_00720E20(result, 0);
        }
    }
    else
    {
        result = sub_0062FEF6(0x7C);
        if (result != 0)
        {
            sub_00720840(result);
        }
    }

    if (result != 0)
    {
        *(unsigned int*)((char*)result + 8) = type;
    }

    return result;
}
