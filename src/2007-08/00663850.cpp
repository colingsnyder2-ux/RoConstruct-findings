// from server: 32% by colin
// roc 2007-08 00663850  unit: CXTPReportRecordItemDateTime  size: 105 bytes

extern "C" void* __cdecl sub_654D90(unsigned int);

struct Inner {
    void Init(const char*);
};

struct CXTPReportRecordItemDateTime {
    void* CreateClone();
};

void* CXTPReportRecordItemDateTime::CreateClone()
{
    Inner* p = (Inner*)sub_654D90(0x80);
    if (p != 0) {
        p->Init((const char*)0x785954);
    }
    return p;
}
