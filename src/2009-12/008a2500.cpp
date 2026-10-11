// from server: 89% by atomic.potato
struct CXTPReportInplaceList
{
    char pad0[0x54];
    char field54[0x10];
    void* field64;
    char pad68[0x18];
    void* field80;
    void OnInplaceListChanged();
    void func_008a2500(int);
    void func_007f3e30();
};



void CXTPReportInplaceList::func_008a2500(int)
{
    if (field64 != 0 && field80 == 0)
    {
        void** vtbl = *(void***)field64;
        void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vtbl[0x130 / 4];
        fn(field64, field54);
    }
    func_007f3e30();
    void** vtbl2 = *(void***)this;
    void (__thiscall *fn2)(void*) = (void (__thiscall *)(void*))vtbl2[0x68 / 4];
    fn2(this);
}
