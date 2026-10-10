// from server: 23% by colin
struct CXTPCommandBar {
    char pad0[0x34];
    int m_count;
    char pad1[0x84 - 0x38];
    int m_count2;
    char pad2[0x9c - 0x88];
    int m_nId;
    char pad3[0xc0 - 0xa0];
    int m_rc1;
    int m_rc2;
    int m_rc3;
    int m_rc4;
    char pad4[0xf8 - 0xd0];
    int m_nType;
    char pad5[0x158 - 0xfc];
    void* m_pSomething;
    void f();
};

struct CXTPCommandBarItem {
    char pad0[0x54];
    void* m_str;
    char pad1[0x80 - 0x58];
    virtual int vfunc80(int);
    virtual void vfunc58(void*);
    char pad2[0x9c - 0x84];
    int m_nId;
    char pad3[0xc0 - 0xa0];
    int m_rc1;
    int m_rc2;
    int m_rc3;
    int m_rc4;
    char pad4[0xf8 - 0xd0];
    int m_nType;
};

extern "C" {
    int __stdcall sub_643980();
    int __stdcall sub_644710();
    int __stdcall sub_644720(int);
    int __stdcall sub_62fef6(int);
    int __stdcall sub_631ad0(void*, void*);
    int __stdcall sub_631b00(void*, void*);
    int __stdcall sub_631c00(void*);
    int __stdcall sub_632790(void*, void*, void*, void*, void*);
    int __stdcall sub_632910(void*, int);
    int __stdcall sub_63a130(void*);
    int __stdcall sub_63a580(void*);
    int __stdcall sub_67ffa0(void*, void*);
    int __stdcall sub_6d2910(void*, void*, void*);
    int __stdcall sub_77dcd0(void*);
    int __stdcall sub_77ddbc(void*);
    int __stdcall sub_77dd98(void*, int, int, int, int);
    int __stdcall sub_77d434(void*, void*);
}

void CXTPCommandBar::f()
{
    int i;
    int j;
    void* p;
    CXTPCommandBarItem* item;
    CXTPCommandBarItem* item2;
    int nCount;
    int nCount2;
    char b;
    char b2;
    int rc[4];
    void* str;
    void* str2;

    p = (void*)sub_643980();
    if (p == 0)
        return;

    nCount = sub_644710();
    for (i = 0; i < nCount; i++) {
        item = (CXTPCommandBarItem*)sub_644720(i);
        b = 1;
        if (item->vfunc80(0)) {
            item->vfunc58(&str);
            if (sub_77dcd0(str) == 0) {
                if ((sub_63a130(item) & 2) == 0) {
                    b = 0;
                }
            }
        }
        if (b == 0)
            continue;
        if (item->m_nType == 0xa)
            continue;

        rc[0] = item->m_rc1;
        rc[1] = item->m_rc2;
        rc[2] = item->m_rc3;
        rc[3] = item->m_rc4;

        item2 = (CXTPCommandBarItem*)sub_62fef6(0x74);
        if (item2 != 0) {
            item->vfunc58(&str2);
            if (item->m_nId == -1) {
                if (m_pSomething != 0) {
                    sub_63a580(m_pSomething);
                }
            }
            sub_77dd98(str2, rc[0], rc[3] - 0xb, 0, 0);
            item2 = (CXTPCommandBarItem*)sub_632790(item2, str2, item, 0, 0);
        } else {
            item2 = 0;
        }

        if (m_pSomething != 0) {
            sub_631b00(m_pSomething, &str);
            b2 = (sub_77dcd0(str) != 0) ? 1 : 0;
            if (b2) {
                sub_631b00(m_pSomething, &str2);
                sub_77d434((char*)item2 + 0x54, str2);
            }
        }

        sub_6d2910((char*)p + 0x2c, (void*)*(int*)((char*)p + 0x34), item2);
    }

    if (*(int*)((char*)this + 0x184) != 0)
        return;

    nCount2 = *(int*)((char*)p + 0x84);
    for (j = 0; j < nCount2; j++) {
        item = (CXTPCommandBarItem*)sub_632910(p, j);
        if ((void*)item == (void*)this)
            continue;
        if (sub_631c00(item) == 0)
            continue;

        sub_67ffa0(item, &str);
        item2 = (CXTPCommandBarItem*)sub_62fef6(0x74);
        if (item2 != 0) {
            sub_631ad0(item, &str2);
            sub_77dd98(str2, rc[0], rc[3], 0, 1);
            item2 = (CXTPCommandBarItem*)sub_632790(item2, str2, item, 0, 0);
        } else {
            item2 = 0;
        }

        sub_6d2910((char*)p + 0x2c, (void*)*(int*)((char*)p + 0x34), item2);
    }
}
