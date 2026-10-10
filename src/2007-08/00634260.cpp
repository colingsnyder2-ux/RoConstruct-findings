// from server: 44% by colin
struct CXTPCommandBar {
    char pad0[0x84];
    int m_count;
    int GetAt(int index);
    int HitTest(int x, int y, int a, int b);
};

int CXTPCommandBar::HitTest(int x, int y, int a, int b)
{
    int i = m_count - 1;
    if (i < 0)
        return 0;
    while (1) {
        int* p = (int*)GetAt(i);
        if (x != 0) {
            int* vt = (int*)*p;
            int (*fn)(void*) = (int (*)(void*))vt[0x160 / 4];
            if (fn(p) == 0) {
                i--;
                if (i < 0)
                    return 0;
                continue;
            }
        }
        if (HitTest(x, y, a, b) != 0)
            return 1;
        i--;
        if (i < 0)
            return 0;
    }
}
