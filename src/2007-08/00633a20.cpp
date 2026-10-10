// from server: 40% by colin
// roc 2007-08 00633a20  unit: CXTPCommandBar  size: 579 bytes
// library xtp-11.2.2-vc8/Source\Common\XTPCommandBar.cpp

struct CXTPSmartPtrInternalT {};

struct CXTPCommandBar {
    char pad0[0x74];
    void* m_pCommandBars;
};

struct CXTPCommandBarList {
    char pad0[0x80];
    CXTPCommandBarList* m_pNext;
};

struct CXTPCommandBarItem {
    char pad0[0x9c];
    int m_nID;
    char pad1[0x158 - 0xa0];
    void* m_pParent;
};

extern "C" {
    void* __stdcall sub_77ddb8(void* p);
    void* __stdcall sub_77dd74(void* p, void* q);
    void* __stdcall sub_77ddbc(void* p);
    int __stdcall sub_77dcd0(void* p);
    int __stdcall sub_77e160(void* p, int a, int b);
    int __stdcall sub_77dcc8(void* p);
    void* __stdcall sub_77d578(void* p, int a, int b);
}

void* __fastcall sub_633950(void* ecx, void* edx, void* a, void* b);
void* __fastcall sub_63a580(void* ecx, void* edx);
void* __cdecl sub_6a4b50(void* a, void* b);

CXTPCommandBar* __fastcall CXTPCommandBar_Scan(CXTPCommandBar* self, void* edx, void* a2, int* a3, int* a4)
{
    void* p;
    CXTPCommandBarItem* item;
    CXTPCommandBar* result;
    CXTPCommandBar* found1;
    CXTPCommandBar* found2;
    int flag;
    int v;
    int idx;
    int n;
    char buf[0x20];

    *a3 = 0;
    found1 = 0;
    found2 = 0;
    result = 0;

    p = sub_633950(self, edx, a2, buf);
    item = (CXTPCommandBarItem*)p;
    if (item == 0)
        return 0;

    *a4 = 0;

    do {
        int has;
        has = ((int (__fastcall*)(CXTPCommandBarItem*))((*(int**)item)[0x84/4]))(item);
        if (has) {
            ((void (__fastcall*)(CXTPCommandBarItem*, void*))((*(int**)item)[0x58/4]))(item, buf);
            flag = 1;
        } else {
            sub_77ddb8(buf);
            flag = 2;
        }
        sub_77dd74(buf, buf);
        if (flag & 2) {
            sub_77ddbc(buf);
        }
        if (flag & 1) {
            sub_77ddbc(buf);
        }
        if (sub_77dcd0(buf)) {
            goto next;
        }
        v = item->m_nID;
        if (v == -1) {
            if (item->m_pParent != 0) {
                sub_63a580(item->m_pParent, edx);
            }
        }
        if (v == 0)
            goto next;
        idx = sub_77e160(buf, 0x26, 0);
        if (idx > -1) {
            n = sub_77dcc8(buf);
            if (idx < n - 1) {
                v = 1;
                idx = idx + 1;
            } else {
                idx = 0;
            }
        } else {
            idx = 0;
        }
        if (sub_6a4b50(sub_77d578(buf, idx, 0), 0) == 0)
            goto next;
        if (v) {
            if (found1 == 0) {
                found1 = (CXTPCommandBar*)item;
            } else {
                *a4 = 1;
                result = found1;
                goto done;
            }
        } else {
            if (((unsigned char*)self->m_pCommandBars)[0x5c] & 4)
                goto next;
            if (item->m_pParent != 0) {
                if (*(int*)((char*)item->m_pParent + 0xf4) != 0 &&
                    *(int*)((char*)item->m_pParent + 0xdc) != 0)
                    goto next;
            }
            if (found2 == 0) {
                found2 = (CXTPCommandBar*)item;
            } else {
                *a4 = 1;
                result = found2;
                goto done;
            }
        }
next:
        item = (CXTPCommandBarItem*)item->m_pParent;
        p = sub_633950(self, edx, item, buf);
        item = (CXTPCommandBarItem*)p;
        if (item == 0)
            break;
    } while (item != (CXTPCommandBarItem*)a2);

done:
    sub_77ddbc(buf);
    if (found1 != 0)
        return found1;
    return found2;
}
