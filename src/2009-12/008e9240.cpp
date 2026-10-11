// from server: 67% by atomic.potato
struct CXTPRibbonGroupOption {
    char pad[0x158];
    void* field_158;
    void method(int arg);
};

extern "C" void __stdcall G1_func_00894c70();

void CXTPRibbonGroupOption::method(int arg)
{
    void* p = field_158;
    void* q = *(void**)((char*)p + 0x5c);
    G1_func_00894c70();
    void* r = *(void**)q;
    void (__stdcall *fn)(void*, int*, int, void*, int) = *(void (__stdcall **)(void*, int*, int, void*, int))((char*)r + 0x148);
    int local;
    fn(q, &local, arg, this, 1);
}
