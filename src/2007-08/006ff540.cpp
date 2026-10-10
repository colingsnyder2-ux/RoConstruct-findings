// from server: 35% by colin
struct CAutoHidePanelTabManager {
    void* vtbl;
    int field_4;
    int field_8;
    char pad_0c[0x50];
    int field_5c;
    int* field_58;
    void SetFocusedItem(int);
    void OnLButtonDown(int, int, int);
};

extern "C" {
    int __stdcall GetMessageA(void*, void*, unsigned, unsigned);
    int __stdcall DispatchMessageA(void*);
    void* __stdcall GetCapture();
    void* __stdcall SetCapture(void*);
    int __stdcall ReleaseCapture();
    int __stdcall PtInRect(const void*, int, int);
}

extern void __stdcall sub_68a160(void*);
extern void __stdcall sub_68a180(void*);
extern void __stdcall sub_6c8da0(void*, int, void*);
extern void __stdcall sub_6febf0(void*, int, int, int);
extern void __stdcall sub_62ff20();

void CAutoHidePanelTabManager::OnLButtonDown(int a, int b, int c)
{
    int saved = this->field_4;
    int msg[8];
    int pt[2];
    int i;
    int n;
    int* p;
    int x, y;

    this->field_4 = c;
    if (*(int*)((*(int*(*)(void))this->vtbl)() + 0x20) != 0)
        this->field_8 = c;
    (*(void(**)(void))((char*)this->vtbl + 8))();

    sub_68a160(msg);

    n = this->field_5c;
    msg[6] = 0;
    for (i = 0; i < n; i++) {
        if (i >= 0 && i < this->field_5c)
            p = (int*)this->field_58[i];
        else
            p = 0;
        pt[0] = p[0x44/4];
        pt[1] = p[0x48/4];
        msg[1] = p[0x4c/4];
        msg[2] = p[0x50/4];
        sub_6c8da0(msg, msg[0], pt);
    }

    GetCapture();
    while (GetMessageA(msg, 0, 0, 0)) {
        if (GetCapture() != (void*)c)
            break;
        if (msg[0] == 0x200) {
            x = (short)msg[1];
            y = (short)(msg[1] >> 16);
            for (i = 0; i < msg[3]; i++) {
                if (i != *(int*)(c + 0x2c)) {
                    if (i >= 0 && i < msg[3]) {
                        if (PtInRect((void*)(i + msg[2] * 0x10), x, y)) {
                            if (i < this->field_5c) {
                                int j = *(int*)(c + 0x2c);
                                if (j >= 0 && j < this->field_5c) {
                                    this->field_58[j] = this->field_58[i];
                                    this->field_58[i] = c;
                                    (*(void(**)(void))((char*)this->vtbl + 0x1c))();
                                }
                            }
                            break;
                        }
                    }
                }
            }
        } else if (msg[0] == 0x100) {
            if (msg[1] == 0x1b)
                break;
        } else if (msg[0] == 0x202 || msg[0] == 0x204) {
            break;
        } else {
            DispatchMessageA(msg);
        }
    }

    sub_6febf0(this, c, b, a);
    this->field_4 = saved;
    (*(void(**)(void))((char*)this->vtbl + 0x60))();
    sub_68a180(msg);
}
