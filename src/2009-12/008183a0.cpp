// from server: 72% by atomic.potato
struct CRobloxReportView
{
    char unused[0x368];
    virtual CRobloxReportView *GetObject();
};

CRobloxReportView *CRobloxReportView::GetObject()
{
    if (*reinterpret_cast<int *>(reinterpret_cast<char *>(this) + 0x368))
        return GetObject()->GetObject();
    return 0;
}
