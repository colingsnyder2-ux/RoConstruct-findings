// from server: 66% by atomic.potato
extern "C" void* __stdcall LoadCursorA(void*, const char*);
extern "C" void* __stdcall SetCursor(void*);
extern "C" void __cdecl G1_func_007f3b1e();

struct CNameItem {
    int vfunc(int, int, int);
};

int CNameItem::vfunc(int a, int b, int c)
{
    void** vtbl = *(void***)this;
    int r = ((int (__thiscall*)(CNameItem*, int, int))vtbl[0x114 / 4])(this, b, c);
    if (r >= 0) {
        G1_func_007f3b1e();
        SetCursor(LoadCursorA(0, (const char*)0x7f89));
    }
    return r;
}
