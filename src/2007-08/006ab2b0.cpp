// from server: 87% by colin
struct I_func_006aa2d0 {
    char pad[468];
    int m_x;
};

struct S_func_006aa2d0 {
    char pad[612];
    I_func_006aa2d0* m_p;
    int f();
};

struct CXTPRibbonTab_716520 {
    char pad[0x84];
    void* m_p;
    int Find(void* item);
};

struct CXTPRibbonBar {
    char pad[0x264];
    void* field_264;
    void* GetItem(int index);
    int GetCount();
    int FindItem(void* item);
};

int CXTPRibbonBar::FindItem(void* item) {
    int i = 0;
    if (GetCount() > 0) {
        do {
            void* p = GetItem(i);
            if (((CXTPRibbonTab_716520*)p)->Find(item) != 0)
                return 1;
            i++;
        } while (i < GetCount());
    }
    return 0;
}
