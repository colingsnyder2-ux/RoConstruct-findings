// from server: 40% by colin
struct CXTPRibbonGroup {
    char pad0[0x24];
    int* m_pArray;
    int m_nCount;
    int GetCount(int);
    int Find(int, int*, int);
};

extern "C" int __fastcall sub_7192c0(void*);
extern "C" int __fastcall sub_716c40(void*, int);

int CXTPRibbonGroup::Find(int a1, int* a2, int a3) {
    int result = sub_716c40(this, a1);
    if (result > a3) {
        for (int i = 0; i < 4; ++i) {
            for (int j = m_nCount - 1; j >= 0; --j) {
                int* p;
                if (j >= 0 && j < m_nCount) {
                    p = (int*)m_pArray[j];
                } else {
                    p = 0;
                }
                if (sub_7192c0(p)) {
                    int v = (*(int (__thiscall**)(int*, int))(*(int*)p + 0x80))(p, i);
                    if (v) {
                        int r = (*(int (__thiscall**)(int*, int))(*(int*)p + 0x7c))(p, a1);
                        a2[j] = r;
                        if (sub_716c40(this, (int)a2) >= a3) {
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
