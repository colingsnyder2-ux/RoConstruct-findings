// from server: 31% by colin
struct CXTPReportNavigator {
    char pad[0x20];
    void* m_pReportCtrl;
    void Navigate(int, int, int);
};

extern "C" {
    void __stdcall sub_655b20(void*);
    int __stdcall sub_656830(void*);
    int __stdcall sub_657ad0(void*);
    void __stdcall sub_65a6a0(void*);
    int __stdcall sub_65a750(void*, void*, int, int);
    int __stdcall sub_65e710(void*);
}

void CXTPReportNavigator::Navigate(int a2, int a3, int a4)
{
    if (m_pReportCtrl == 0)
        return;

    void* pCtrl = m_pReportCtrl;
    sub_655b20(pCtrl);

    int v = sub_656830(m_pReportCtrl);

    int idx;
    void* p = *(void**)((char*)m_pReportCtrl + 0x194);
    if (p != 0)
        idx = sub_65e710(p);
    else
        idx = -1;

    int flag = (a2 == 0) ? -1 : 0;

    int* vtbl = *(int**)m_pReportCtrl;
    int (*fn)(void*, int, int, int) = (int (*)(void*, int, int, int))vtbl[0x1ec / 4];
    int r = fn(m_pReportCtrl, v, idx, flag);

    if (r == 0)
    {
        void* p2 = *(void**)((char*)m_pReportCtrl + 0xa0);
        int* vtbl2 = *(int**)p2;
        int (*fn2)(void*, int, int);
        if (a2 != 0)
            fn2 = (int (*)(void*, int, int))vtbl2[0x74 / 4];
        else
            fn2 = (int (*)(void*, int, int))vtbl2[0x70 / 4];
        void* item = (void*)fn2(p2, v, 0);
        if (item != 0)
        {
            int* vtbl3 = *(int**)item;
            int (*fn3)(void*) = (int (*)(void*))vtbl3[0x6c / 4];
            void* pCtrl2 = m_pReportCtrl;
            int id = fn3(item);
            if (id != *(int*)((char*)pCtrl2 + 0xcc))
            {
                sub_65a750(pCtrl2, item, a3, a4);
                int idx2;
                if (a2 != 0)
                {
                    void* p3 = *(void**)((char*)m_pReportCtrl + 0xac);
                    idx2 = *(int*)((char*)p3 + 0x30);
                }
                else
                {
                    idx2 = -1;
                }
                void* pCtrl3 = m_pReportCtrl;
                int* vtbl4 = *(int**)pCtrl3;
                int v2 = sub_656830(pCtrl3);
                int (*fn4)(void*, int, int, int) = (int (*)(void*, int, int, int))vtbl4[0x1ec / 4];
                r = fn4(pCtrl3, v2, idx2, flag);
            }
        }
    }

    sub_657ad0(m_pReportCtrl);
}
