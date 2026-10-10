// from server: 82% by colin
// roc 2007-08 0069d120  unit: CXTPPropertyGridView  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069d120

extern "C" {
    int __stdcall _TrackMouseEvent(void*);
    int __stdcall InvalidateRect(void*, const void*, int);
}

struct CXTPPropertyGridInplaceButton;

void __stdcall sub_69b890(void*);
void* __stdcall sub_69bca0(void*, int);
void* __stdcall sub_697ce0(void*, int);
void* __stdcall sub_6f5ed0(void*);
void __stdcall sub_69c4c0(void*, int);
void __stdcall sub_63023e();

struct CXTPPropertyGridView {
    char pad_0000[0x20];
    void* m_hWnd;                       // 0x20
    char pad_0024[0x90];
    int m_bInplaceButton;               // 0xb4
    char pad_00b8[0x28];
    void* m_pInplaceButton;             // 0xe0
    char pad_00e4[0x74];
    void* m_pSelectedItem;              // 0x158

    void OnInplaceButtonDown(CXTPPropertyGridInplaceButton* pButton, int x, int y);
};

void CXTPPropertyGridView::OnInplaceButtonDown(CXTPPropertyGridInplaceButton* pButton, int x, int y)
{
    if (m_bInplaceButton)
    {
        sub_69b890(pButton);
        if (m_pInplaceButton)
        {
            void** vtbl = *(void***)m_pInplaceButton;
            typedef void (__thiscall *Fn)(void*);
            Fn fn = (Fn)vtbl[0xac / 4];
            fn(m_pInplaceButton);
        }
        InvalidateRect(m_hWnd, 0, 0);
        return;
    }

    void* pItem = sub_69bca0(pButton, x);
    void* pSel = 0;
    if (pItem)
    {
        pSel = sub_697ce0(pButton, x);
        pSel = sub_6f5ed0(pSel);
    }

    if (pSel != m_pSelectedItem)
    {
        m_pSelectedItem = pSel;
        InvalidateRect(m_hWnd, 0, 0);

        struct TRACKMOUSEEVENT {
            unsigned int cbSize;
            unsigned int dwFlags;
            void* hwndTrack;
            unsigned int dwHoverTime;
        };
        TRACKMOUSEEVENT tme;
        tme.cbSize = 0x10;
        tme.dwFlags = 2;
        tme.hwndTrack = m_hWnd;
        tme.dwHoverTime = 0;
        _TrackMouseEvent(&tme);
    }

    sub_69c4c0(pButton, x);
    sub_63023e();
}
