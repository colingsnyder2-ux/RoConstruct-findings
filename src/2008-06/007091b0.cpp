// from server: 85% by colin
extern "C" void* __stdcall GetStockObject(int);
extern "C" void* __cdecl sub_006A10CA(void*);
extern "C" void* __cdecl sub_007BC55C();

struct CXTSplitterWnd {
    char pad[0x104];
    void* field_0x104;
    void* method_007091B0(void* arg);
};

void* CXTSplitterWnd::method_007091B0(void* arg)
{
    void* result;
    if (field_0x104 != 0) {
        result = sub_006A10CA(GetStockObject(0));
    } else {
        result = sub_007BC55C();
    }
    void** vtbl = *(void***)this;
    void* fn = vtbl[0x1dc / 4];
    typedef void* (__thiscall *FnType)(void*, void*, void*);
    return ((FnType)fn)(this, arg, result);
}
