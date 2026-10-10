// from server: 65% by colin
struct CXTPReportGroupRow
{
    char pad[0x20];
    void* field_20;
    void func_006d6440(void* arg1, void* arg2);
};

extern "C" void* __stdcall func_0065a750(void* p);

void CXTPReportGroupRow::func_006d6440(void* arg1, void* arg2)
{
    if (field_20 != 0)
    {
        void* p = field_20;
        void* q = *(void**)((char*)p + 0xa0);
        void** vtbl = *(void***)q;
        void* (__thiscall *fn)(void*, void*, void*, void*) = (void* (__thiscall *)(void*, void*, void*, void*))vtbl[0x5c / 4];
        void* r = fn(q, 0, arg1, arg2);
        func_0065a750(field_20);
    }
}
