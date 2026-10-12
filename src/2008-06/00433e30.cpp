// from server: 62% by king_originala
extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, void*);
extern "C" void* __stdcall func_006a0eba(long);
void* __cdecl func_00433ab0(unsigned int);

struct Control
{
    typedef void (__thiscall *Method)(Control*);
    Method* table;
};

struct ImageList
{
    void* table;
    void* handle;
};

struct S
{
    char padding0[0x20];
    void* window;
    char padding1[0x3C];
    Control control;
    char padding2[0x3C];
    ImageList images;

    int func_006a10e2(void*);
    int func_00433e30(void*);
};

int S::func_00433e30(void* argument)
{
    if (func_006a10e2(argument) != -1)
        return -1;

    control.table[18](&control);

    ImageList* list = &images;
    if (!func_00433ab0(0xC4))
        return -1;

    void* handle = list ? list->handle : 0;
    func_006a0eba(SendMessageA(window, 0x1109, 0, handle));
    return 0;
}
