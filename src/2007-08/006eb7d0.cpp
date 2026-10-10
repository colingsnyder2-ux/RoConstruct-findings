// from server: 41% by colin
struct CXTPDockingPaneNativeXPTheme
{
    void Construct();
};

extern "C" void * __stdcall sub_0062FEF6(unsigned int);
extern "C" void __stdcall sub_006AE110();
extern "C" void __stdcall sub_006EB650();
extern "C" void __stdcall sub_006FF8D0(void *);
extern "C" void __stdcall sub_00702710(int);

void CXTPDockingPaneNativeXPTheme::Construct()
{
    sub_006EB650();
    *(void **)this = (void *)0x7DAB6C;
    sub_00702710(9);
    void *p = sub_0062FEF6(0x224);
    if (p != 0)
    {
        sub_006AE110();
        *(void **)p = (void *)0x7DA65C;
        *(int *)((char *)p + 0x220) = 1;
        *(int *)((char *)p + 0x21C) = 0;
        *(int *)((char *)p + 0x218) = 0;
    }
    else
    {
        p = 0;
    }
    sub_006FF8D0(p);
    sub_00702710(9);
    void *q = sub_0062FEF6(0x224);
    if (q != 0)
    {
        sub_006AE110();
        *(void **)q = (void *)0x7DA65C;
        *(int *)((char *)q + 0x220) = 1;
        *(int *)((char *)q + 0x21C) = 0;
        *(int *)((char *)q + 0x218) = 0;
    }
    else
    {
        q = 0;
    }
    sub_006FF8D0(q);
}
