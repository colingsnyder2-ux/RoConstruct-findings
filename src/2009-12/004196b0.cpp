// from server: 47% by atomic.potato
struct CRBXHTMLControlSite
{
    int f(int);
};

extern "C" int __fastcall func_00419650(CRBXHTMLControlSite *);

int CRBXHTMLControlSite::f(int value)
{
    if (value && func_00419650(this))
        return 1;
    return value ? 0 : 1;
}
