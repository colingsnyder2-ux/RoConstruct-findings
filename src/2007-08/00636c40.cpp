// from server: 41% by colin
struct CXTPEdit {
    void OnKillFocus(void* pWnd);
};

extern "C" {
    void* __stdcall GetFocus();
    int __stdcall IsChild(void*, void*);
    void __stdcall ReleaseCapture();
    void __stdcall SetFocus(void*);
    void __stdcall SetWindowPos(void*, void*, int, int, int, int, unsigned int);
}

void CXTPEdit::OnKillFocus(void* pWnd)
{
    char flag = 0;
    if (*(void**)((char*)this + 0x178) != 0 && *(int*)(*(char**)((char*)this + 0x178) + 0x20) != 0) {
        void* p = 0;
        void* p2 = 0;
        int r = 0;
        // call 0x636be0 with &p
        // simplified: assume returns something
        // The actual call is to a member function; emulate via function pointer
        // For matching, we need the exact call. Declare as extern.
        extern void* __fastcall sub_636be0(void*, void*);
        void* edi = sub_636be0(this, &p);
        flag = 1;
        void* hwnd = GetFocus();
        r = IsChild(edi, hwnd);
        if (r != 0) {
            flag = 1;
        } else {
            flag = 0;
        }
        if (flag & 1) {
            // release something
            extern void __stdcall sub_77ddbc(void*);
            sub_77ddbc(&p);
        }
    } else {
        flag = 0;
    }
    if (flag != 0) {
        void* hwnd = GetFocus();
        // call 0x630016 with this+0x178, 0, hwnd
        extern void __fastcall sub_630016(void*, void*, void*);
        sub_630016(*(void**)((char*)this + 0x178), 0, hwnd);
        hwnd = GetFocus();
        sub_630016(*(void**)((char*)this + 0x178), 0, hwnd);
    }
    // call 0x77d434 with this+0x1bc, pWnd
    extern void __stdcall sub_77d434(void*, void*);
    sub_77d434((char*)this + 0x1bc, pWnd);
    *(int*)((char*)this + 0x1c0) = 0;
}
