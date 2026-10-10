// from server: 77% by colin
struct CXTPTabClientWnd {
    void OnIdleUpdateCmdUI(int);
};

extern "C" {
    int __stdcall GetCursorPos(void*);
    int __stdcall InvalidateRect(void*, const void*, int);
}

void CXTPTabClientWnd::OnIdleUpdateCmdUI(int) {
    if (*(int*)((char*)this + 0x84) == 0)
        return;
    if (*(int*)((char*)this + 0x88) != 0)
        return;
    void (__thiscall *pfn)(void*) = *(void (__thiscall **)(void*))((*(int*)this) + 0x13c);
    *(int*)((char*)this + 0x88) = 1;
    pfn(this);
    if (((int (__thiscall *)(void*))0x474f20)(this)) {
        int pt[2];
        GetCursorPos(pt);
        ((void (__thiscall *)(void*, int*))0x68beb0)(this, pt);
        if (*(int*)((char*)this + 0xb4) != 0) {
            ((void (__thiscall *)(void*, int, int, int))0x68cfb0)(this, 0, pt[0], pt[1]);
        } else if (*(int*)((char*)this + 0x80) == 0) {
            int r = ((int (__thiscall *)(void*, int))0x68bde0)(this, 0);
            int ecx = r ? r - 0x58 : 0;
            ((void (__thiscall *)(int, int, int, int))0x689920)(ecx, 0, pt[0], pt[1]);
        }
    }
    InvalidateRect(*(void**)((char*)this + 0x20), 0, 0);
    if (*(int*)((char*)this + 0x10) != 0) {
        if (*(int*)((char*)this + 0xb4) != 0) {
            ((void (__thiscall *)(void*, int, int, int, int, int, int))0x63002e)(this, 0, 0, 0, 0, 0, 4);
        }
        int (__thiscall *pfn2)(void*) = *(int (__thiscall **)(void*))((*(int*)this) + 0x14c);
        int r2 = pfn2(this);
        if (r2 != 0) {
            ((void (__thiscall *)(int, int))0x632520)(r2, 0);
        }
    }
    *(int*)((char*)this + 0x88) = 0;
}
