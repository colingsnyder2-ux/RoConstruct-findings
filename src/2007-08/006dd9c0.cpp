// from server: 67% by colin
// roc 2007-08 006dd9c0  unit: CXTPDockingPaneWindowSelect  size: 511 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dd9c0

extern "C" short __stdcall GetKeyState(int vKey);

struct CXTPDockingPaneWindowSelect {
    void Select(int index);
    int GetIndex(int index);
};

void CXTPDockingPaneWindowSelect::Select(int index) {
    if (index == 9) {
        if (GetKeyState(0x10) < 0) {
            int v;
            if (*(int*)((char*)this + 0x110) != 0) {
                v = *(int*)(*(int*)((char*)this + 0x110) + 0x14);
                v = v + 1;
            } else {
                v = 0;
            }
            int limit = *(int*)((char*)this + 0xf0);
            if (v < limit) {
                if (v == *(int*)((char*)this + 0x11c)) {
                    v = 0;
                }
                this->GetIndex(v);
                return;
            }
            int e = *(int*)((char*)this + 0x11c);
            int r = e - limit;
            r = -r;
            r = r - (r < 0 ? 1 : 0);
            r = r & e;
            this->GetIndex(r);
            return;
        } else {
            int v;
            if (*(int*)((char*)this + 0x110) != 0) {
                v = *(int*)(*(int*)((char*)this + 0x110) + 0x14);
            } else {
                v = *(int*)((char*)this + 0xf0);
            }
            v = v - 1;
            if (v < 0) {
                int e = *(int*)((char*)this + 0x11c);
                if (e == 0) {
                    v = *(int*)((char*)this + 0xf0) - 1;
                } else {
                    v = e - 1;
                }
            } else {
                int e = *(int*)((char*)this + 0x11c) - 1;
                if (v == e) {
                    v = *(int*)((char*)this + 0xf0) - 1;
                }
            }
            this->GetIndex(v);
            return;
        }
    }
    if (index == 0x25) {
        int count = *(int*)((char*)this + 0x104);
        if (count > 1 && *(int*)((char*)this + 0x110) != 0) {
            int p = *(int*)((char*)this + 0x110);
            int a = *(int*)(p + 0x18);
            int b = *(int*)(p + 0x1c);
            int v;
            if (a > 0) {
                v = a - 1;
            } else {
                v = count - 1;
            }
            if (v >= 0 && v < count) {
                int base = *(int*)((char*)this + 0x100);
                int* entry = (int*)(base + v * 8);
                int lo = entry[0];
                int hi = entry[1];
                int r = lo + b;
                if (r > hi) {
                    r = hi;
                }
                this->GetIndex(r);
                return;
            }
            // fallthrough to error
        }
        // error path
        // call 0x62ff20
        return;
    }
    if (index == 0x27) {
        int count = *(int*)((char*)this + 0x104);
        if (count > 1 && *(int*)((char*)this + 0x110) != 0) {
            int p = *(int*)((char*)this + 0x110);
            int a = *(int*)(p + 0x18);
            int b = *(int*)(p + 0x1c);
            int v;
            if (a < count - 1) {
                v = a + 1;
            } else {
                v = 0;
            }
            int* entry = (int*)((char*)this + 0xfc);
            // call 0x6dc6b0 with v
            // simplified: use GetIndex
            this->GetIndex(b);
            return;
        }
        return;
    }
    if (index == 0x28) {
        int v;
        if (*(int*)((char*)this + 0x110) != 0) {
            v = *(int*)(*(int*)((char*)this + 0x110) + 0x14);
            v = v + 1;
        } else {
            v = 0;
        }
        int limit = *(int*)((char*)this + 0xf0);
        int r;
        if (v >= limit) {
            r = 0;
        } else {
            r = v;
        }
        this->GetIndex(r);
        return;
    }
    if (index == 0x26) {
        int v;
        if (*(int*)((char*)this + 0x110) != 0) {
            v = *(int*)(*(int*)((char*)this + 0x110) + 0x14);
            v = v - 1;
            if (v < 0) {
                v = *(int*)((char*)this + 0xf0) - 1;
            }
        } else {
            v = *(int*)((char*)this + 0xf0) - 1;
        }
        this->GetIndex(v);
        return;
    }
    if (index != 0x10) {
        // virtual call at offset 0x8c
        void (__thiscall *fn)(void*, int) = *(void (__thiscall **)(void*, int))((*(int*)this) + 0x8c);
        fn(this, 1);
    }
}
