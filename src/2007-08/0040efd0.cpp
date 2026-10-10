// from server: 29% by tester
extern "C" void* __cdecl malloc(unsigned int size);

struct CChildFrame
{
    void sub_40EF20(void*, void*);
    void construct();
};

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
