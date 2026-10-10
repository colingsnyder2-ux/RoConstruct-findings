// from server: 67% by colin
struct CXTPToolBar {
    char pad0[0xfc];
    void* m_pControls;
    char pad1[0x68];
    int m_field168;
    int m_field16c;
    char pad2[0x30];
    int m_field1a0;

    int CControlButtonCustomize();
};

struct CControlButton {
    void* m_pVtable;
    char pad0[0xcc];
    unsigned int m_dwStyle;
};

struct CControlButtonCustomize {
    void* m_pVtable;
    char pad0[0xcc];
    unsigned int m_dwStyle;
};

extern "C" void* __stdcall sub_643980(void* p);
extern "C" void __stdcall sub_6439c0(void* p);
extern "C" void __stdcall sub_63a690(void* p, int b);
extern "C" void __stdcall sub_633c70(void* p);

int CXTPToolBar::CControlButtonCustomize()
{
    void* p = sub_643980(m_pControls);
    *(int*)((char*)(*(void**)((char*)p + 0x74)) + 0x4c) = 1;

    if (m_field168 == 0)
    {
        CControlButton* pBtn = (CControlButton*)m_field168;
        if (pBtn->m_dwStyle & 0x10)
        {
            unsigned int style = pBtn->m_dwStyle;
            void* vtbl = pBtn->m_pVtable;
            void (*fn)(void*, unsigned int) = *(void (**)(void*, unsigned int))((char*)vtbl + 0x94);
            fn(pBtn, style & 0xffffffef);
        }
        else
        {
            unsigned int style = pBtn->m_dwStyle;
            void* vtbl = pBtn->m_pVtable;
            void (*fn)(void*, unsigned int) = *(void (**)(void*, unsigned int))((char*)vtbl + 0x94);
            fn(pBtn, style | 0x10);
        }

        CControlButton* pBtn2 = (CControlButton*)m_field168;
        unsigned int style2 = pBtn2->m_dwStyle;
        int flag = (~(style2 >> 4)) & 1;
        if (m_field1a0 != flag)
        {
            m_field1a0 = flag;
            sub_63a690(this, 1);
        }

        CControlButton* pBtn3 = (CControlButton*)m_field168;
        void* pInner = *(void**)((char*)pBtn3 + 0xfc);
        void* vtbl2 = *(void**)pInner;
        void (*fn2)(void*) = *(void (**)(void*))((char*)vtbl2 + 0x17c);
        fn2(pInner);

        sub_6439c0(m_pControls);
    }

    if (m_field16c != 0)
    {
        sub_633c70(p);
        void* pObj = (void*)m_field16c;
        void* vtbl3 = *(void**)pObj;
        void (*fn3)(void*, int) = *(void (**)(void*, int))((char*)vtbl3 + 0x1f0);
        fn3(pObj, 1);
    }

    return 0;
}
