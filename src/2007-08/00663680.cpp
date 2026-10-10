// from server: 34% by colin
extern "C" void* __cdecl sub_00654D90(unsigned int);
extern "C" void* __cdecl sub_006622E0(void*, const char*);

struct CXTPReportRecordItemVariant
{
    void* Create();
};

void* CXTPReportRecordItemVariant::Create()
{
    void* p = sub_00654D90(0x80);
    if (p != 0)
    {
        return sub_006622E0(p, (const char*)0x785954);
    }
    return 0;
}
