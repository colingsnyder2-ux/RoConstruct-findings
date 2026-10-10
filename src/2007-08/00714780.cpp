// from server: 32% by colin
struct CXTCaptionThemeFactory
{
    void* create(int type);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl CXTCaptionThemeFactory_ctor_713ac0(void* p);
extern "C" void __cdecl CXTCaptionThemeFactory_ctor_713b50(void* p);

void* CXTCaptionThemeFactory::create(int type)
{
    void* result;
    if (type == 1)
    {
        result = operator_new(0x2c);
        if (result != 0)
        {
            CXTCaptionThemeFactory_ctor_713ac0(result);
            *(void**)result = (void*)0x7debec;
        }
    }
    else if (type == 2)
    {
        result = operator_new(0x2c);
        if (result != 0)
        {
            CXTCaptionThemeFactory_ctor_713b50(result);
        }
    }
    else
    {
        result = operator_new(0x2c);
        if (result != 0)
        {
            CXTCaptionThemeFactory_ctor_713ac0(result);
        }
    }
    *(int*)((char*)result + 8) = type;
    return result;
}
