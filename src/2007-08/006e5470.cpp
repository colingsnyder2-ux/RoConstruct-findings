// from server: 72% by colin
struct CXTPDockingPaneSplitterContainer {
    char pad[0x1b8];
    int field_0x1b8;
    int f();
};

struct Helper {
    int method_a();
    int method_b();
    int method_c();
};

extern "C" Helper* __stdcall sub_668f70();

int CXTPDockingPaneSplitterContainer::f()
{
    int v = field_0x1b8;
    if (v == 5)
    {
        Helper* h = sub_668f70();
        if (h->method_a() == 0)
        {
            Helper* h2 = sub_668f70();
            return h2->method_c();
        }
        return 0;
    }
    if (v == 4)
    {
        Helper* h3 = sub_668f70();
        return h3->method_b();
    }
    return 0;
}
