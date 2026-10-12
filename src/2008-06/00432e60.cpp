// from server: 47% by colin
struct CMultiPlayerPane {
    char pad[0x54];
    void* field_54;
    bool Init(int a, int b);
};

extern "C" void* __stdcall func_006a06f2(int, int, unsigned int, void*, int, int, int);
extern "C" char* func_00411360();
extern "C" void* __stdcall func_006a0fc2(void*);
extern "C" void __stdcall func_00412800(void*, void*);
extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, unsigned int);

bool CMultiPlayerPane::Init(int a, int b)
{
    void* v;
    if (func_006a06f2(0, 0, 0x50000000, &v, b, 0x3ea, 0) == 0)
        return false;

    void* obj = func_006a0fc2(func_00411360());
    field_54 = obj;

    void* v2;
    if (((bool (__thiscall*)(void*, int, int, unsigned int, void*, int, int, int))*(void**)(*(char**)obj + 0x5c))(obj, 0, 0, 0x50000000, &v2, b, 0x3eb, 0) == 0)
        return false;

    func_00412800(field_54, v2);
    SendMessageA(*(void**)((char*)field_54 + 0x20), 0x364, 0, 0);
    return true;
}
