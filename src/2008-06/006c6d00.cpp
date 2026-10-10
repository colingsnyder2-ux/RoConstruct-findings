// from server: 70% by atomic.potato
struct CXTPReportRecordItem
{
    int value;
    int f(int a, int b);
};

extern "C" void __stdcall sub_803ED4(CXTPReportRecordItem *, CXTPReportRecordItem *);

int CXTPReportRecordItem::f(int a, int b)
{
    CXTPReportRecordItem *p = (CXTPReportRecordItem *)((char *)this + 0x60);
    sub_803ED4((CXTPReportRecordItem *)b, p);
    return b;
}
