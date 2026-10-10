// from server: 33% by colin
extern "C" {
    __declspec(dllimport) void* __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
}

struct CXTPReportInplaceControl {
    void sub_630004();
    void sub_630016(void*);
    void sub_63023e();
    void sub_630250(void*);
    void sub_6d1260(void*);
    void OnKeyDown(unsigned int, unsigned int, unsigned int);
};

struct CXTPSortClass {
    int sub_653870();
};

struct CXTPReportRow {
    void* sub_654ba0();
};

struct CXTPReportRecordItem {
    void* sub_699220(int);
};

struct CXTPReportRecordItemVariant {
    void* sub_77dd98();
};

void CXTPReportInplaceControl::OnKeyDown(unsigned int nChar, unsigned int nRepCnt, unsigned int nFlags) {
    void* pRow = *(void**)((char*)this + 0x58);
    if (pRow == 0) {
        return;
    }

    if (nChar == 9) {
        sub_630004();
        SendMessageA(*(void**)((char*)pRow + 0x20), 0x102, nChar, 0);
        return;
    }

    if (nChar == 0x1b) {
        void* p = ((void* (__thiscall*)(void*))0x77dd98)((char*)this + 0x78);
        sub_630016(p);
        return;
    }

    if (nChar == 0x0d) {
        return;
    }

    if (nChar == 0x26 || nChar == 0x28 || nChar == 0x21 || nChar == 0x22) {
        void* pItem = *(void**)((char*)this + 0x64);
        if (pItem == 0) {
            sub_63023e();
            return;
        }
        void* pRow2 = *(void**)((char*)this + 0x60);
        if (pRow2 == 0) {
            sub_63023e();
            return;
        }

        void* pRowData = ((void* (__thiscall*)(void*))0x654ba0)(pRow2);
        if (*(int*)((char*)pRowData + 0x24) == 0) {
            sub_63023e();
            return;
        }

        void* pRowData2 = ((void* (__thiscall*)(void*))0x654ba0)(*(void**)((char*)this + 0x60));
        void* pSort = *(void**)((char*)pRowData2 + 0x28);
        int nCount = ((int (__thiscall*)(void*))0x653870)(pSort);
        if (nCount <= 1) {
            sub_63023e();
            return;
        }

        void* local18;
        void* local14;
        ((void (__thiscall*)(void*))0x77ddac)(&local18);
        ((void (__thiscall*)(void*))0x77ddac)(&local14);

        sub_630250(&local18);

        int nIndex = 0;
        if (nChar == 0x22) {
            nIndex = nCount - 1;
        } else if (nChar == 0x21) {
            nIndex = 0;
        } else {
            int i = 0;
            if (nCount > 0) {
                while (1) {
                    void* pItem2 = ((void* (__thiscall*)(void*, int))0x699220)(pSort, i);
                    void* pStr = ((void* (__thiscall*)(void*))0x77dd98)((char*)pItem2 + 0x20);
                    int cmp = ((int (__thiscall*)(void*, void*))0x77d56c)(&local18, pStr);
                    if (cmp == 0) {
                        break;
                    }
                    i++;
                    if (i >= nCount) {
                        goto done;
                    }
                }
                if (nChar == 0x26) {
                    i--;
                    int neg = (i < 0) ? -1 : 0;
                    nIndex = (neg - 1) & i;
                } else if (nChar == 0x28) {
                    nIndex = i + 1;
                    if (nCount - 1 < nIndex) {
                        nIndex = nCount - 1;
                    }
                }
            }
        }
done:
        int maxIdx = nCount - 1;
        if (nIndex >= maxIdx) {
            nIndex = maxIdx;
        }
        if (nIndex < 0) {
            nIndex = 0;
        } else if (nIndex >= maxIdx) {
            nIndex = maxIdx;
        }

        void* pItem3 = ((void* (__thiscall*)(void*, int))0x699220)(pSort, nIndex);
        void* pStr2 = (char*)pItem3 + 0x20;
        ((void (__thiscall*)(void*, void*))0x77d434)(&local14, pStr2);

        *(void**)((char*)this + 0x84) = pItem3;

        void* pRow3 = *(void**)((char*)this + 0x58);
        void* pData = *(void**)((char*)pRow3 + 0xb0);
        sub_6d1260((char*)pData + 0x20);

        void* pStr3 = ((void* (__thiscall*)(void*))0x77dd98)(&local14);
        sub_630016(pStr3);

        SendMessageA(*(void**)((char*)this + 0x20), 0xb1, 0, -1);
        SendMessageA(*(void**)((char*)this + 0x20), 0xb7, 0, 0);

        void* pStr4 = ((void* (__thiscall*)(void*))0x77dd98)(&local14);
        int cmp2 = ((int (__thiscall*)(void*, void*))0x77d56c)(&local18, pStr4);
        if (cmp2 != 0) {
            void* pRow4 = *(void**)((char*)this + 0x58);
            void* pVtbl = *(void**)pRow4;
            void* pFn = *(void**)((char*)pVtbl + 0x1c0);
            ((void (__thiscall*)(void*, void*, void*, void*, void*))pFn)(
                pRow4,
                *(void**)((char*)this + 0x5c),
                *(void**)((char*)this + 0x64),
                *(void**)((char*)this + 0x60),
                pItem3);
        }

        ((void (__thiscall*)(void*))0x77ddbc)(&local14);
        ((void (__thiscall*)(void*))0x77ddbc)(&local18);
        return;
    }

    sub_63023e();
}
