// from server: 67% by atomic.potato
struct CRBXHTMLControlSite
{
    int XOleCommandTarget(int a, int b, int c);
};

extern "C" int Function0080A850(void *, int, int);

int CRBXHTMLControlSite::XOleCommandTarget(int a, int b, int c)
{
    return Function0080A850((char *)this - 240, b, c);
}
