// from server: 43% by colin
// roc 2007-08 00637ea0  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637ea0

struct CXTPControlComboBoxList {
    int OnHookMessage(void* hWnd, unsigned int msg, unsigned int wParam, long lParam);
    void Refresh();
    void* GetItemData(int);
};

extern "C" {
    long __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);
    void __stdcall VariantInit(void* pv);
    void __stdcall VariantClear(void* pv);
    void __stdcall VariantChangeType(void* pvargDest, void* pvarSrc, unsigned short wFlags, unsigned short vt);
}

int CXTPControlComboBoxList::OnHookMessage(void* hWnd, unsigned int msg, unsigned int wParam, long lParam)
{
    unsigned int count;
    unsigned int i;
    void* item;
    char var[16];

    if (this->GetItemData(0) == 0) {
        this->Refresh();
    }

    if (wParam != 0) {
        count = (unsigned int)SendMessageA((void*)wParam, 0x18b, 0, 0);
    } else {
        count = 0;
    }

    for (i = 0; i < count; i++) {
        item = this->GetItemData(i);
        VariantInit(var);
        VariantChangeType(var, (void*)wParam, 0, 0);
        VariantClear(var);
        SendMessageA((void*)wParam, 0x180, 0, (long)item);
    }

    return 0;
}
