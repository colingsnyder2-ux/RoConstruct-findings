// from server: 56% by colin
// roc 2007-08 0068d850  unit: CXTPTabClientWnd  size: 850 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068d850

struct CXTPTabClientWnd {
    void sub_68d850();
};

extern "C" int __stdcall GetWindow(int, int);
extern "C" int __stdcall IsWindow(int);
extern "C" int __stdcall SendMessageA(int, int, int, int);
extern "C" int __stdcall InvalidateRect(int, int, int);

extern "C" int __stdcall sub_474f20();
extern "C" int __stdcall sub_6301c0(int);
extern "C" int __stdcall sub_689b70();
extern "C" int __stdcall sub_689bf0(int);
extern "C" int __stdcall sub_68bde0(int);
extern "C" int __stdcall sub_68d4c0(int);
extern "C" int __stdcall sub_6d26b0(int, int, int);
extern "C" int __stdcall sub_6fd490(int);
extern "C" int __stdcall sub_6fd590(int);
extern "C" int __stdcall sub_6ff8a0();
extern "C" int __stdcall sub_738412();
extern "C" int __stdcall sub_77dd98();
extern "C" int __stdcall sub_77ddbc();

void CXTPTabClientWnd::sub_68d850()
{
    int* self = (int*)this;
    if (self[8] == 0) return;
    if (self[48] == 0) return;
    if (self[23] != 0) return;
    int v = self[33];
    if (v == 0) return;
    if (self[49] != 0) return;
    self[49] = 1;
    (*(void (__thiscall**)(void*))(*(int*)this + 0x150))(this);
    self[25] = 1;
    int r = sub_689b70();
    int saved = r;
    int local18 = 0;
    int local1c = 0;
    int i = 0;
    int n = sub_474f20();
    if (n > 0) {
        do {
            int p = sub_68bde0(i);
            int j = 0;
            if (*(int*)(p + 0x5c) > 0) {
                do {
                    int q = sub_68bde0(i);
                    int e;
                    if (j >= 0 && j < *(int*)(q + 0x5c))
                        e = *(int*)(*(int*)(q + 0x58) + j * 4);
                    else
                        e = 0;
                    *(int*)(e + 0x80) = 0;
                    j++;
                    int q2 = sub_68bde0(i);
                    if (j >= *(int*)(q2 + 0x5c)) break;
                } while (1);
            }
            i++;
            int n2 = sub_474f20();
            if (i >= n2) break;
        } while (1);
    }
    int hwnd = self[8];
    int h = GetWindow(hwnd, 5);
    int w = sub_6301c0(h);
    int ebx = w;
    if (ebx != 0) {
        do {
            int a = *(int*)(ebx + 0x20);
            int edi = sub_68d4c0(a);
            int flags = sub_738412();
            if (edi != 0) {
                if (flags & 0x10000000) {
                    (*(void (__thiscall**)(void*, int*, int))(*(int*)this + 0x154))(this, &local1c, ebx);
                    int t = sub_77dd98();
                    sub_6fd590(t);
                    local1c = -1;
                    sub_77ddbc();
                } else {
                    sub_6ff8a0();
                }
            } else {
                if (flags & 0x10000000) {
                    int edi2 = (*(int (__thiscall**)(void*, int))(*(int*)this + 0x168))(this, ebx);
                    local1c = edi2;
                    if (edi2 != 0) {
                        int a2;
                        if (ebx == 0) a2 = 0;
                        else a2 = *(int*)(ebx + 0x20);
                        *(int*)(edi2 + 0x38) = a2;
                        int p2 = *(int*)(saved + 0x20);
                        SendMessageA(p2, 0x286c, edi2, 0);
                        int c = *(int*)(edi2 + 0x60);
                        (*(void (__thiscall**)(int, int))(*(int*)c + 0x20))(c, edi2);
                    }
                }
            }
            if (ebx == saved)
                local18 = edi;
            *(int*)(edi + 0x80) = 1;
            int h2 = *(int*)(ebx + 0x20);
            int w2 = GetWindow(h2, 2);
            ebx = sub_6301c0(w2);
        } while (ebx != 0);
    }
    int k = sub_474f20();
    int idx = k - 1;
    if (idx >= 0) {
        do {
            int p = sub_68bde0(idx);
            int j = *(int*)(p + 0x5c) - 1;
            if (j >= 0) {
                do {
                    int e;
                    if (j >= 0 && j < *(int*)(p + 0x5c))
                        e = *(int*)(*(int*)(p + 0x58) + j * 4);
                    else
                        e = 0;
                    if (*(int*)(e + 0x80) == 0)
                        sub_6ff8a0();
                    j--;
                } while (j >= 0);
            }
            if (*(int*)(p + 0x5c) == 0) {
                if (p == self[38])
                    self[38] = 0;
                int prev;
                if (idx == 0) {
                    int n3 = sub_474f20();
                    if (n3 > 1) prev = 1;
                    else prev = -1;
                } else {
                    prev = idx - 1;
                }
                int pp = sub_68bde0(prev);
                if (pp != 0) {
                    double d = (double)self[52];
                    d += *(double*)(p + 0x90);
                    d += *(double*)(pp + 0x90);
                    *(double*)(pp + 0x90) = d;
                }
                if (p != self[31]) {
                    (*(void (__thiscall**)(int, int))(*(int*)p + 4))(p, 1);
                }
                sub_6d26b0((int)(self + 26), idx, 1);
                self[24] = 1;
                if (self[45] != 0) {
                    SendMessageA(self[8], 0, 0, 0);
                }
            }
            idx--;
        } while (idx >= 0);
    }
    int edi = local18;
    if (edi != 0) {
        int c = *(int*)(edi + 0x60);
        if (*(int*)(c + 4) != edi) {
            (*(void (__thiscall**)(int, int))(*(int*)c + 0x20))(c, edi);
        }
        int c2 = *(int*)(edi + 0x60);
        sub_689bf0(c2);
    }
    if (self[24] != 0) {
        self[25] = 0;
        int a;
        if (self[33] == 0) a = 0;
        else a = *(int*)(self[33] + 0x20);
        if (IsWindow(a)) {
            (*(void (__thiscall**)(void*))(*(int*)(self + 21) + 8))(self + 21);
        }
        if (local1c != 0) {
            int c = *(int*)(local1c + 0x60);
            sub_6fd490(local1c);
        }
        self[24] = 0;
    }
    self[49] = 0;
}
