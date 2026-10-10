// from server: 26% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct Item {
    void* m_vtable;
};

struct TypedStatsItem : Item {
    void* m_func;
    void* m_value;

    TypedStatsItem* construct(void* func);
    void init(void* func, void* value);
};

struct S {
    char pad[8];
    TypedStatsItem* m_item;

    TypedStatsItem* createItem(void* value);
};

TypedStatsItem* S::createItem(void* value) {
    TypedStatsItem* p = (TypedStatsItem*)malloc(0x120);
    if (p) {
        p->m_value = value;
        p->m_func = 0;
        p->m_vtable = 0;
    } else {
        p = 0;
    }
    m_item = p;
    return p;
}
