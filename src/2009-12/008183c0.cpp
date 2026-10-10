// from server: 66% by atomic.potato
struct CRobloxReportView
{
    virtual void *GetOwner();
};

void *CRobloxReportView::GetOwner()
{
    return static_cast<CRobloxReportView *>(GetOwner())->GetOwner();
}
