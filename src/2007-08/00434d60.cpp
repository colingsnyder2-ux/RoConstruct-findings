// from server: 29% by colin
struct CMemberTreeView
{
    void construct();

    void* create();
};

extern "C" void* __cdecl operator_new(unsigned int size);

void* CMemberTreeView::create()
{
    CMemberTreeView* p = (CMemberTreeView*)operator_new(0xb0);
    if (p == 0)
    {
        p->construct();
    }
    return p;
}
