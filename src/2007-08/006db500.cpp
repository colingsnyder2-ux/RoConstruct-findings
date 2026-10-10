// from server: 38% by colin
struct CXTPDockingPaneAutoHideWnd {
    char pad[8];
    int m_x;
    int f();
};

extern "C" void* __cdecl sub_62fef6(unsigned int);

struct C_6da980 {
    void g();
};

struct C_6d2910 {
    void h(int, void*);
};

int CXTPDockingPaneAutoHideWnd::f()
{
    void* p = sub_62fef6(0xa0);
    void* q = 0;
    if (p != 0) {
        ((C_6da980*)p)->g();
        q = p;
    }
    ((C_6d2910*)this)->h(m_x, q);
    *(int*)((char*)q + 0x8c) = (int)this;
    return (int)q;
}
