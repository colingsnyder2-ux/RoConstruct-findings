// from server: 30% by colin
extern "C" void* __cdecl func_0062fef6(unsigned int);
void __fastcall func_0070eab0(void*);

struct CXTSplitterWndThemeFactory
{
    void* create(unsigned int);
};

void* CXTSplitterWndThemeFactory::create(unsigned int type)
{
    void* obj;
    if (type != 1)
    {
        obj = func_0062fef6(0x1c);
        if (obj)
        {
            func_0070eab0(obj);
            *(void**)obj = (void*)0x7de310;
        }
    }
    else if (type == 2)
    {
        obj = func_0062fef6(0x1c);
        if (obj)
        {
            func_0070eab0(obj);
            *(void**)obj = (void*)0x7de324;
        }
    }
    else
    {
        obj = func_0062fef6(0x1c);
        if (obj)
        {
            func_0070eab0(obj);
        }
    }
    *(unsigned int*)((char*)obj + 8) = type;
    return obj;
}
