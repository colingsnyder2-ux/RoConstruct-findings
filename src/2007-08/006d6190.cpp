// from server: 84% by colin
struct CXTPReportGroupRow_Batch
{
    void OnLButtonDown(int x, int y);
};

extern "C" int __stdcall PtInRect(const void* rect, int x, int y);

void CXTPReportGroupRow_Batch::OnLButtonDown(int x, int y)
{
    if (PtInRect((char*)this + 0x3c, x, y))
    {
        int (__thiscall *pfn1)(CXTPReportGroupRow_Batch*) = *(int (__thiscall **)(CXTPReportGroupRow_Batch*))(*(int*)this + 0x78);
        int r = pfn1(this);
        int flag = (r == 0) ? 1 : 0;
        void (__thiscall *pfn2)(CXTPReportGroupRow_Batch*, int) = *(void (__thiscall **)(CXTPReportGroupRow_Batch*, int))(*(int*)this + 0x7c);
        pfn2(this, flag);
    }
}
