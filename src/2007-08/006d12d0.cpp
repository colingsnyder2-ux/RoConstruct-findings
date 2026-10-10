// from server: 38% by colin
struct CXTPReportInplaceControl {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x34];
    void* m_pReportCtrl;
    void* m_pRow;
    void* m_pItem;
    void* m_pInplace;
    char pad3[0x1c];
    void* m_pSelectedItem;
    char pad4[0x1c];
    int OnKeyDown(unsigned int nChar, unsigned int nRepCnt, unsigned int nFlags);
};

extern "C" {
    void* __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);
    void* __stdcall sub_654BA0(void* p);
    int __stdcall sub_653870(void* p);
    void* __stdcall sub_653EF0(void* p, void* q);
    void* __stdcall sub_699220(void* p, int index);
    void __stdcall sub_630250(void* p, void* q);
    void __stdcall sub_630016(void* p, void* q);
    void __stdcall sub_63023E(void* p);
    void __stdcall sub_659170(int x);
    void __stdcall sub_77DDAC(void* p);
    void __stdcall sub_77D434(void* p, void* q);
    void* __stdcall sub_77D92C(void* p, void* q, int r);
    void* __stdcall sub_77DD98(void* p);
    void __stdcall sub_77DDBC(void* p);
    void __stdcall sub_77E24C(void* p, unsigned int a, int b);
    void* __stdcall sub_77D56C(void* p, void* q);
}

int CXTPReportInplaceControl::OnKeyDown(unsigned int nChar, unsigned int nRepCnt, unsigned int nFlags)
{
    if (m_pReportCtrl == 0)
        return 0;
    if (nChar == 9)
        return 0;
    if (nChar == 0x1b || nChar == 0xd) {
        sub_659170(0);
        return 0;
    }
    if (m_pItem == 0 || m_pRow == 0)
        goto default_case;
    {
        void* p = sub_654BA0(m_pRow);
        if (*(int*)((char*)p + 0x24) == 0)
            goto default_case;
    }
    {
        void* p = sub_654BA0(m_pRow);
        void* pItems = *(void**)((char*)p + 0x28);
        int count = sub_653870(pItems);
        if (count <= 0)
            goto default_case;
        {
            char buf1[8];
            char buf2[8];
            char buf3[8];
            sub_77DDAC(buf1);
            sub_77DDAC(buf2);
            *(int*)(buf3) = 0;
            sub_630250(this, buf1);
            sub_77D434(buf2, buf1);
            int idx;
            if (m_pSelectedItem == 0) {
                void* q = sub_77DD98(buf1);
                void* r = sub_653EF0(p, q);
                if (r == 0)
                    idx = count - 1;
                else
                    idx = sub_653870(r);
            } else {
                idx = sub_653870(m_pSelectedItem);
            }
            sub_77E24C(buf3, nChar, 1);
            int last = count - 1;
            for (;;) {
                if (idx < last)
                    idx++;
                else
                    idx = 0;
                void* item = sub_699220(pItems, idx);
                sub_77D434(buf1, (char*)item + 0x20);
                void* q = sub_77D92C(buf2, buf1, 1);
                void* r = sub_77DD98(q);
                int cmp = (int)sub_77D56C(buf3, r);
                bool eq = (cmp == 0);
                sub_77DDBC(buf3);
                if (eq) {
                    m_pSelectedItem = item;
                    void* s = sub_77DD98(buf1);
                    sub_630016(this, s);
                    SendMessageA(m_hWnd, 0xb1, 0, -1);
                    SendMessageA(m_hWnd, 0xb7, 0, 0);
                    void* t = sub_77DD98(buf1);
                    if (sub_77D56C(buf2, t) != 0) {
                        void* vtbl = *(void**)m_pReportCtrl;
                        void (__stdcall *fn)(void*, void*, void*, void*) = *(void (__stdcall**)(void*, void*, void*, void*))((char*)vtbl + 0x1c0);
                        fn(m_pReportCtrl, m_pInplace, m_pRow, m_pItem);
                    }
                    break;
                }
                if (idx == *(int*)(buf3))
                    break;
            }
            sub_77DDBC(buf3);
            sub_77DDBC(buf2);
            sub_77DDBC(buf1);
        }
    }
    return 0;

default_case:
    sub_63023E(this);
    return 0;
}
