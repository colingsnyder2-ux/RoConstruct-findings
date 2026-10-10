// from server: 32% by colin
extern "C" void* __cdecl sub_00654D90(unsigned int);
extern "C" void __cdecl sub_00662950(void*, double, int, void*);

struct CXTPReportRecordItemText
{
    void* CreateClone();
};

void* CXTPReportRecordItemText::CreateClone()
{
    void* p = sub_00654D90(0x88);
    if (p == 0)
    {
        sub_00662950(p, 0.0, 0, 0);
        return p;
    }
    return 0;
}
