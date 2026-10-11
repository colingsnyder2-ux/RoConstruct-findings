// from server: 26% by colin
struct CXTColorSelectorCtrlTheme;

extern "C" void* __cdecl func_006a0920(unsigned int);

struct CXTColorSelectorCtrlTheme
{
    void* field_0;
    void* field_4;
    int field_8;
};

struct CXTColorSelectorCtrlThemeOfficeXP : CXTColorSelectorCtrlTheme
{
};

struct CXTColorSelectorCtrlThemeFactory
{
    CXTColorSelectorCtrlTheme* Create(int type);
};

CXTColorSelectorCtrlTheme* CXTColorSelectorCtrlThemeFactory::Create(int type)
{
    CXTColorSelectorCtrlTheme* result;
    switch (type)
    {
    case 1:
        result = (CXTColorSelectorCtrlTheme*)func_006a0920(0x30);
        if (result)
        {
            result->field_0 = (void*)0x86efe8;
        }
        break;
    case 2:
        result = (CXTColorSelectorCtrlTheme*)func_006a0920(0x30);
        if (result)
        {
            result->field_0 = (void*)0x86f004;
        }
        break;
    case 3:
        result = (CXTColorSelectorCtrlTheme*)func_006a0920(0x30);
        if (result)
        {
            result->field_0 = (void*)0x86f004;
        }
        break;
    default:
        result = 0;
        break;
    }
    if (result)
    {
        result->field_8 = type;
    }
    return result;
}
