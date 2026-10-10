// from server: 53% by colin
struct CXTPReportNavigator {
    char pad0[0x20];
    void* m_pReportCtrl;
    char pad1[0x174];
    void* m_pSelectedRow;
    char pad2[8];
    void* m_pFocusRow;

    void func();
};

extern "C" {
    void __stdcall UpdateWindow(void*);
    void* __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
}

void sub_657410(void*);
void* sub_656830(void*);
void sub_653e40(void*, void*, void*, void*);
void sub_653860(void*);
int sub_656810(void*);
void sub_657c20(void*, void*);
void sub_659170(void*, void*);
void sub_630250(void*, void*);
void* sub_77dcc8(void*);
void sub_77ddac(void*);
void sub_77ddbc(void*);

void CXTPReportNavigator::func()
{
    if (m_pReportCtrl == 0)
        return;

    void* pCtrl = m_pReportCtrl;
    void** vtbl = *(void***)pCtrl;
    void (*fn)(void*) = (void (*)(void*))vtbl[0x154 / 4];
    fn(pCtrl);

    sub_657410(m_pReportCtrl);

    void* hwnd = *(void**)((char*)m_pReportCtrl + 0x20);
    UpdateWindow(hwnd);

    void* pRow = sub_656830(m_pReportCtrl);

    if (*(void**)((char*)m_pReportCtrl + 0x194) == 0)
        return;
    if (pRow == 0)
        return;

    void** rowVtbl = *(void***)pRow;
    int (*rowFn)(void*) = (int (*)(void*))rowVtbl[0x60 / 4];
    if (rowFn(pRow) == 0)
        return;

    char local1[0x10];
    sub_653e40(local1, m_pReportCtrl, pRow, *(void**)((char*)m_pReportCtrl + 0x194));

    void* pObj = *(void**)(local1 + 0x10);
    if (pObj == 0)
        goto cleanup;

    {
        void** objVtbl = *(void***)pObj;
        int (*objFn)(void*, void*) = (int (*)(void*, void*))objVtbl[0x13c / 4];
        if (objFn(pObj, local1) == 0)
            goto cleanup;
    }

    if (sub_656810(m_pReportCtrl) == 0)
        sub_657c20(m_pReportCtrl, pRow);

    sub_659170(m_pReportCtrl, local1);

    {
        void* pFocus = *(void**)((char*)m_pReportCtrl + 0x1a0);
        if (pFocus == 0)
            goto cleanup;
        if (*(void**)((char*)pFocus + 0x20) == 0)
            goto cleanup;
        if (*(void**)((char*)pFocus + 0x64) != *(void**)(local1 + 0x10))
            goto cleanup;

        char local2[0x10];
        sub_77ddac(local2);

        void* pFocus2 = *(void**)((char*)m_pReportCtrl + 0x1a0);
        sub_630250(pFocus2, local2);

        void* pFocus3 = *(void**)((char*)m_pReportCtrl + 0x1a0);
        void* hwnd2 = *(void**)((char*)pFocus3 + 0x20);

        void* r1 = sub_77dcc8(local2);
        void* r2 = sub_77dcc8(local2);

        SendMessageA(hwnd2, 0xb1, (unsigned int)r2, (long)r1);
        SendMessageA(hwnd2, 0xb7, 0, 0);

        sub_77ddbc(local2);
    }

cleanup:
    sub_653860(local1);
}
