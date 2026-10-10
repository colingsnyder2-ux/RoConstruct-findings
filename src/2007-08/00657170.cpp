// from server: 87% by colin
extern "C" void* __stdcall sub_655A90(void*);
extern "C" void* __stdcall sub_630202(void*);

struct CXTPReportControl
{
    void* sub_657170(void* a, void* b, void* c, void* d, void* e);
};

void* CXTPReportControl::sub_657170(void* a, void* b, void* c, void* d, void* e)
{
    void* p = sub_655A90(a);
    void* q = sub_630202(p);
    if (q == 0)
        return 0;
    void* vtbl = *(void**)q;
    void* fn = *(void**)((char*)vtbl + 0x1e0);
    typedef void* (__thiscall *Fn)(void*, void*, void*, void*, void*);
    return ((Fn)fn)(q, b, c, d, e);
}
