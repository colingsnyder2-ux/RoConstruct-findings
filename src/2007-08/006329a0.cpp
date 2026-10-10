// from server: 71% by colin
struct CXTPCommandBarKeyboardTip {
    int FindTip(unsigned int id);
    int GetAt(int index);
    char pad[0x84];
    int m_nCount;
};

int CXTPCommandBarKeyboardTip::FindTip(unsigned int id) {
    if (id != 0) {
        int i = 0;
        if (m_nCount > 0) {
            do {
                int* p = (int*)GetAt(i);
                if (*(unsigned int*)((char*)p + 0xd4) == id)
                    return (int)p;
                i++;
            } while (i < m_nCount);
        }
    }
    return 0;
}
