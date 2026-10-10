// from server: 75% by atomic.potato
struct CRobloxReportView
{
    void* GetObject();
};

void* CRobloxReportView::GetObject()
{
    return *(void**)((char*)GetObject() + 0x100);
}
