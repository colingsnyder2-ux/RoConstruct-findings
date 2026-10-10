// from server: 37% by colin
struct CXTTreeViewBase
{
    void sub_00664e00();
};

struct Inner
{
    void sub_00666df0();
};

extern "C" void __stdcall sub_0073862e(void *);

void CXTTreeViewBase::sub_00664e00()
{
    Inner *p = (this != 0) ? (Inner *)((char *)this + 0x60) : 0;
    p->sub_00666df0();
    sub_0073862e(this);
}
