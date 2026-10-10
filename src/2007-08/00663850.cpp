// from server: 33% by tester
// roc 2007-08 00663850  unit: CXTPReportRecordItemDateTime  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663850

extern "C" void* __cdecl sub_654D90(unsigned int size);
extern "C" void __cdecl sub_6625B0(void* p, const char* name);

struct CXTPReportRecordItemDateTime
{
    void* CreateClone();
};

void* CXTPReportRecordItemDateTime::CreateClone()
{
    void* p = sub_654D90(0x80);
    if (p != 0)
    {
        sub_6625B0(p, (const char*)0x785954);
    }
    return p;
}
