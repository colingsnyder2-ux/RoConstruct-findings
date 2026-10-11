// from server: 44% by atomic.potato
struct CXTPDockingPaneAutoHideWnd {
    char pad0[0x20];
    void* m_hWnd;
    char pad1[0xd4];
    int m_bDragging;
    char pad2[0x30];
    int m_bSomething;
    char pad3[0x20];
    int m_bFlag128;
    int OnMouseMove(unsigned int nFlags, int x, int y);
};

extern "C" {
    int __stdcall GetCapture();
    int __stdcall ReleaseCapture();
    int __stdcall ClientToScreen(void*, void*);
    int __stdcall GetMessageA(void*, void*, unsigned int, unsigned int);
    int __stdcall PeekMessageA(void*, void*, unsigned int, unsigned int, unsigned int);
    int __stdcall DispatchMessageA(void*);
    int __stdcall OffsetRect(void*, int, int);
}

void* __fastcall sub_7567A0(void*);
void* __fastcall sub_6F7AD0(void*, void*);
void* __fastcall sub_6E5060(void*, void*);
void* __fastcall sub_75D400(void*);
int __fastcall sub_7572D0(void*, void*, void*);
int __fastcall sub_7BBF98(void*);
void* __fastcall sub_6F8260(void*, int);
int __fastcall sub_6F82F0(void*, void*, void*, int, int, int, void*);
void __fastcall sub_7571C0(void*, void*, void*, void*, void*, int, int);
void* __fastcall sub_6A0BDE(void*);
void* __fastcall sub_422590(void*);

int CXTPDockingPaneAutoHideWnd::OnMouseMove(unsigned int nFlags, int x, int y) {
    void* pPane = sub_7567A0(this);
    if (pPane == 0) return 0;
    if (*(int*)((char*)pPane + 0xf4) != 0) return 0;
    if (*(int*)((char*)this + 0xf8) == 0) return 0;

    char pt1[8];
    sub_6F7AD0(this, pt1);

    char pt2[8];
    void* pCtrl = sub_6E5060(pPane, pt2);
    sub_75D400(pCtrl);

    char pt3[8];
    char pt4[8];
    if (sub_7572D0(this, pt4, pt3) == 0) return 0;

    *(int*)((char*)this + 0x128) = 1;

    if (*(int*)((char*)pPane + 0xec) != 0) {
        if (sub_7BBF98(this) & 0x400000) {
            *(int*)(pt4) = *(int*)(pt3);
            *(int*)(pt4 + 4) = *(int*)(pt3 + 4);
        } else {
            ClientToScreen(m_hWnd, pt4);
        }
        char msg[0x1c];
        sub_6F8260(msg, 0);
        int bFlag = (*(int*)((char*)this + 0x104) == 0) ? 1 : 0;
        if (sub_6F82F0(msg, pt3, pt4, bFlag, *(int*)(pt3), *(int*)(pt3 + 4), this) != 0) {
            sub_7571C0(this, pt4, pt3, pt4, pt3, 0, 0);
        }
        *(int*)((char*)this + 0x128) = 0;
        return 0;
    }

    sub_422590(this);
    void* hwnd = (void*)GetCapture();
    if (sub_6A0BDE(hwnd) != this) {
        goto cleanup;
    }

    {
        int pt[2];
        int msg[7];
        while (1) {
            if (PeekMessageA(msg, 0, 0xf, 0xf, 0) != 0) {
                if (GetMessageA(msg, 0, 0xf, 0xf) == 0) return 0;
                ReleaseCapture();
                if (PeekMessageA(msg, 0, 0xf, 0xf, 0) == 0) break;
            } else {
                break;
            }
        }
        if (GetMessageA(msg, 0, 0, 0) == 0) goto cleanup;

        if (msg[0] == 0x200) {
            int mx = (short)msg[2];
            int my = (short)(msg[2] >> 16);
            pt[0] = mx;
            pt[1] = my;
            ClientToScreen(m_hWnd, pt);

            int cx = pt[0];
            int cy = pt[1];
            if (cx < x) cx = x;
            if (cx > *(int*)(pt3)) cx = *(int*)(pt3);
            if (cy < y) cy = y;
            if (cy > *(int*)(pt3 + 4)) cy = *(int*)(pt3 + 4);
            pt[0] = cx;
            pt[1] = cy;

            if (*(int*)((char*)this + 0x104) == 0) {
                if (*(int*)(pt4) != cx) {
                    OffsetRect(pt4, cx - *(int*)(pt4), 0);
                }
            } else {
                if (*(int*)(pt4 + 4) != cy) {
                    OffsetRect(pt4, 0, cy - *(int*)(pt4 + 4));
                }
            }
            sub_7571C0(this, pt4, pt3, pt4, pt3, 0, 0);
        } else if (msg[0] == 0x100) {
            if (msg[1] == 0x1b) goto cleanup;
        } else if (msg[0] == 0x202) {
            goto cleanup;
        } else {
            DispatchMessageA(msg);
        }
    }

    hwnd = (void*)GetCapture();
    if (sub_6A0BDE(hwnd) == this) {
        goto loop_start;
    }

cleanup:
    hwnd = (void*)GetCapture();
    if (sub_6A0BDE(hwnd) == this) {
        ReleaseCapture();
    }
    *(int*)((char*)this + 0x128) = 0;
    return 0;

loop_start:
    goto loop_start;
}
