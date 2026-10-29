// from server: 67% by colin
struct CXTPDockingPane {
    char pad0[4];
    int* m_pData;
    int m_nCount;
    int Find(int a, int b);
};

extern "C" int __stdcall sub_006ea590(int* p, int a, int b);
extern "C" void __stdcall sub_0062ff20();

int CXTPDockingPane::Find(int a, int b)
{
    int found = 0;
    int i = 0;
    if (m_nCount > 0) {
        do {
            if (i < 0 || i >= m_nCount) {
                sub_0062ff20();
            }
            int* p = &m_pData[i];
            if (sub_006ea590(p, a, b)) {
                found = 1;
            }
            i++;
        } while (i < m_nCount);
    }
    return found;
}
