// from server: 40% by colin
struct CXTPReportRecordItemDateTime;

extern "C" void* __cdecl sub_654D90(unsigned int);
extern "C" void __cdecl sub_7385F2(void*, int, int);
extern "C" void* __cdecl sub_662D40(void*, void*);
extern "C" void __stdcall VariantClear(void*);

struct CXTPReportRecordItemDateTime
{
    void* CreateClone();
};

void* CXTPReportRecordItemDateTime::CreateClone()
{
    void* p = sub_654D90(0x8c);
    void* result = 0;
    if (p == 0)
    {
        char buf[16];
        sub_7385F2(buf, 0, 3);
        result = sub_662D40(p, buf);
        VariantClear(buf);
    }
    return result;
}
