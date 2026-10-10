// from server: 50% by colin
struct CXTPControlSelector {
    void OnMouseMove(int nFlags);
    void Refresh(int x, int y);
    void SetValue(int nValue);
};

extern "C" {
    int __stdcall GetCursorPos(void* lpPoint);
    short __stdcall GetKeyState(int nVirtKey);
    int __stdcall ScreenToClient(void* hWnd, void* lpPoint);
}

void CXTPControlSelector::OnMouseMove(int nFlags) {
    if (nFlags == 0) {
        int pt[2];
        GetCursorPos(pt);
        ScreenToClient(*(void**)((char*)this + 0xfc), pt);
        int x = pt[0];
        int y = pt[1];
        int cx = *(int*)((char*)this + 0xc0);
        int cy = *(int*)((char*)this + 0xc4);
        int cw = *(int*)((char*)this + 0xc8);
        int ch = *(int*)((char*)this + 0xcc);
        int col = *(int*)((char*)this + 0x190);
        int row = *(int*)((char*)this + 0x194);
        if (GetKeyState(1) < 0) {
            if (x >= cx) {
                int n = (x - cw) / *(int*)((char*)this + 0x180) + 1;
                int max = *(int*)((char*)this + 0x170);
                if (max >= n) {
                    col = n;
                }
            }
            if (y >= cy) {
                int n = (y - ch) / *(int*)((char*)this + 0x184) + 1;
                int max = *(int*)((char*)this + 0x174);
                if (max >= n) {
                    row = n;
                }
            }
        }
        if (col != *(int*)((char*)this + 0x190) || row != *(int*)((char*)this + 0x194)) {
            *(int*)((char*)this + 0x190) = col;
            *(int*)((char*)this + 0x194) = row;
            Refresh(*(int*)((char*)this + 0x178), *(int*)((char*)this + 0x17c));
            *(int*)((char*)this + 0x198) = 1;
            (*(void (__thiscall**)(void*))(*(int*)((char*)this + 0xfc) + 0x17c))(*(void**)((char*)this + 0xfc));
            *(int*)((char*)this + 0x198) = 0;
            (*(void (__thiscall**)(void*, int, int))(*(int*)this + 0xfc))(this, x, y);
        } else {
            Refresh(0, 0);
        }
    }
    SetValue(nFlags);
}
