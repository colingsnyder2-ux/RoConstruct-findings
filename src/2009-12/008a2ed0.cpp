// from server: 32% by atomic.potato
struct CXTPReportHyperlinkArray
{
    virtual int GetCount();
    virtual void ElementAt(int index, int unused);
};

extern "C" void __stdcall G1_func_007f3b18(unsigned int hr);

void CXTPReportHyperlinkArray::ElementAt(int index, int unused)
{
    if (index < 0 || index >= GetCount())
    {
        G1_func_007f3b18(0x8002000b);
        return;
    }
    void (CXTPReportHyperlinkArray::*p)(int, int) = 0;
    (void)p;
}
