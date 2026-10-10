// from server: 51% by colin
struct TypedStatsItem {
    char pad[0x110];
    void* m_func;
    void* m_bound;
    int m_extra;

    void destroy();
};

void TypedStatsItem::destroy() {
    if (m_func) {
        void* result = ((void* (*)(void*, int))m_func)(m_bound, 1);
        m_bound = result;
    }
    m_func = 0;
    m_extra = 0;
    ((void (*)(void*))0x4588e0)(this);
}
