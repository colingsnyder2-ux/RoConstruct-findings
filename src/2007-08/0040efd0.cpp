// from server: 28% by colin
struct CChildFrame
{
    void sub_40EF20(void*, void*);
    void construct();
};

extern "C" void* __stdcall malloc(unsigned int size);
extern "C" void __cdecl sub_4479C0(void*);

void CChildFrame::construct()
{
    void* p = malloc(0x120);
    void* q = 0;
    if (p != 0)
    {
        sub_4479C0(p);
        q = p;
    }
    sub_40EF20(q, 0);
}
