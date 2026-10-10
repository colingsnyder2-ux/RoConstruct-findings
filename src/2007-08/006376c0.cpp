// from server: 72% by colin
struct CXTPControlComboBoxPopupBar {
    int field_0;
    char pad_4[0x174];
    int field_178;
    int OnCommand(unsigned int wParam, long lParam, void* pWnd);
};

extern "C" short __stdcall GetKeyState(int vKey);
extern "C" long __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);

int sub_647530(CXTPControlComboBoxPopupBar* self, unsigned int wParam, long lParam);

int CXTPControlComboBoxPopupBar::OnCommand(unsigned int wParam, long lParam, void* pWnd) {
    int oldVal = ((int (__thiscall*)(CXTPControlComboBoxPopupBar*))*(void**)(*(int*)this + 0x1f8))(this);
    CXTPControlComboBoxPopupBar* pPopup = (CXTPControlComboBoxPopupBar*)pWnd;
    if (pPopup->field_178 != 0) {
        if (GetKeyState(0x12) >= 0) {
            if (wParam == 0x26 || wParam == 0x28 || wParam == 0x21 || wParam == 0x22) {
                sub_647530(this, wParam, lParam);
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        if (wParam == 0x73) {
            if (GetKeyState(0x12) >= 0) {
                return 0;
            }
        } else if (wParam == 0x26 || wParam == 0x28) {
            if (GetKeyState(0x12) < 0) {
                return 0;
            }
        }
        sub_647530(this, wParam, lParam);
    }
    int newVal = ((int (__thiscall*)(CXTPControlComboBoxPopupBar*))*(void**)(*(int*)this + 0x1f8))(this);
    if (oldVal != newVal) {
        ((void (__thiscall*)(CXTPControlComboBoxPopupBar*))*(void**)(*(int*)pPopup + 0x15c))(pPopup);
        int hWnd = pPopup->field_178;
        if (hWnd != 0 && *(int*)(hWnd + 0x20) != 0) {
            SendMessageA(*(void**)(hWnd + 0x20), 0xb1, 0, -1);
            SendMessageA(*(void**)(hWnd + 0x20), 0xb7, 0, 0);
        }
    }
    return 1;
}
