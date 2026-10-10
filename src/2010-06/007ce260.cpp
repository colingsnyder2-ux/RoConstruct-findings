// from server: 46% by atomic.potato
extern "C" void __stdcall ImportedCall(void*, int);

struct CXTPReportRecordItem
{
    void* value;

    CXTPReportRecordItem* __thiscall Function(int);
};

CXTPReportRecordItem* __thiscall CXTPReportRecordItem::Function(int value)
{
    ImportedCall((char*)this + 0x60, value);
    return this;
}
