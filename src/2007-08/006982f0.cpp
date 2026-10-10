// from server: 48% by colin
struct CXTPPropertyGridItem {
    char pad0[0xb4];
    int m_nB4;
    char pad1[0xc];
    void* m_pC4;
    void* CreateItem();
};

struct Helper69ab30 {
    void* f();
};

struct Helper6f8fe0 {
    void* f(void* arg);
};

extern "C" void* __cdecl sub_62fef6(unsigned int size);

void* CXTPPropertyGridItem::CreateItem()
{
    if (m_pC4 == 0)
    {
        void* p = sub_62fef6(0xa0);
        if (p != 0)
        {
            Helper69ab30* h1 = (Helper69ab30*)((char*)this + 0xb4);
            void* arg = h1->f();
            Helper6f8fe0* h2 = (Helper6f8fe0*)p;
            p = h2->f(arg);
        }
        else
        {
            p = 0;
        }
        m_pC4 = p;
    }
    return m_pC4;
}
