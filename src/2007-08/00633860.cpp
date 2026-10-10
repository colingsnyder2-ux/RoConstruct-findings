// from server: 80% by colin
struct CXTPCommandBar {
    char pad0[0x2c];
    int m_count2c;
    char pad30[0x4];
    int m_count34;
    char pad38[0x8];
    int m_40;
    int m_44;
    int m_48;
    void f();
};

struct CXTPCommandBarArray {
    char pad0[0x2c];
    int m_count;
    int m_data;
    void Clear(int, int);
};

void CXTPCommandBar::f()
{
    if (m_count34 != 0) {
        int i = 0;
        if (m_count34 > 0) {
            do {
                if (i < 0 || i >= m_count34)
                    break;
                int* p = (int*)((char*)this + 0x30);
                int* arr = (int*)*p;
                int obj = arr[i];
                (*(void(**)(void))(*(int*)obj + 0x68))();
                if (i >= m_count34)
                    break;
                int obj2 = ((int*)(*(int*)((char*)this + 0x30)))[i];
                if (obj2 != 0) {
                    (*(void(**)(int))(*(int*)obj2 + 4))(1);
                }
                i++;
            } while (i < m_count34);
        }
        ((CXTPCommandBarArray*)((char*)this + 0x2c))->Clear(0, -1);
        m_40 = 0;
        m_44 = 0;
        m_48 = 0;
    }
}
