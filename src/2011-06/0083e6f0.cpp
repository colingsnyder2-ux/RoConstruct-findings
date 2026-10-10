// from server: 35% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __stdcall ImportedCall(void*, DWORD);

struct CXTPReportRecordItem
{
    void* f(void*, void*);
};

void* CXTPReportRecordItem::f(void* unused, void* arg)
{
    CXTPReportRecordItem* p = this;
    ImportedCall((char*)this + 0x60, 0);
    return arg;
}
