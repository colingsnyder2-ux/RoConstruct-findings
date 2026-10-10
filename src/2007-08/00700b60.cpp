// from server: 57% by colin
struct CXTPTabManagerAtom {
    char pad[0xe0];
    void* m_pItems;
    void SetItems(void* p);
};

void CXTPTabManagerAtom::SetItems(void* p)
{
    if (p != 0) {
        if (m_pItems != 0) {
            (*(void (***)(void*, int))m_pItems)[0](m_pItems, 1);
        }
        m_pItems = p;
        (*(void (***)(void*))p)[1](p);
        (*(void (***)(void*))p)[16](p);
        (*(void (***)(void*, void*))this)[0](this, p);
    }
    (*(void (***)(void*))this)[28](this);
}
