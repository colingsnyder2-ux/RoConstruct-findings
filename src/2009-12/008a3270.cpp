// from server: 16% by atomic.potato
struct CXTPReportHyperlink
{
    void f1();
    void f2();
    void destroy();
};

void CXTPReportHyperlink::destroy()
{
    f1();
    f2();
}
