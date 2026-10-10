// from server: 98% by colin
struct CXTPPopupBar {
    int GetCount();
    void* GetAt(int index);
    int SomeCheck();
    char pad[0x80];
    int m_nField80;
    int m_nField84;
    char pad2[0x74];
    int m_nFieldFC;
    int FindSomething(int a, int b);
};

int CXTPPopupBar::FindSomething(int a, int b)
{
    int i = 0;
    if (GetCount() > 0) {
        do {
            void* p = GetAt(i);
            if (p != 0) {
                CXTPPopupBar* obj = (CXTPPopupBar*)p;
                if (obj->m_nFieldFC == (int)this) {
                    int (__thiscall *fn)(void*, int) = *(int (__thiscall **)(void*, int))((*(int*)obj) + 0x80);
                    if (fn(obj, 0) != 0) {
                        if (obj->SomeCheck() != 0) {
                            if (b != 0)
                                return obj->m_nField80;
                            return obj->m_nField84;
                        }
                    }
                }
            }
            i++;
        } while (i < GetCount());
    }
    return -1;
}
