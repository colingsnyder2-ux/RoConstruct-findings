// from server: 42% by colin
struct S_func_00654fa0 {
    char pad0[4];
    int m_field4;
    char pad8[0x18];
    int m_field20;
    int m_field24;
    int m_field28;
    int m_field2c;
    char pad30[0x3c];
    int m_field6c;
    void f(void* a1);
};

extern "C" int __stdcall InterlockedIncrement(int*);
extern "C" int __stdcall ClientToScreen(int, int*);
extern "C" int __stdcall PtInRect(const int*, int, int);
extern "C" int __stdcall SendMessageA(int, unsigned int, int, int);
extern "C" int __stdcall WindowFromPoint(int, int);

void S_func_00654fa0::f(void* a1)
{
    int* p = (int*)a1;
    int* v4 = (int*)p[1];
    int* v8 = (int*)p[2];
    int* v12 = (int*)p[3];
    int* v24 = (int*)((char*)a1 + 0x24);

    if (v12) InterlockedIncrement(v12 + 1);
    if (v4) InterlockedIncrement(v4 + 1);
    if (v8) InterlockedIncrement(v8 + 1);

    int r = ((int (__thiscall*)(S_func_00654fa0*))((int*)this->m_field4)[0x2a])(this);
    if (r && this->m_field6c) {
        if (v12 && !v12[0x2b]) goto skip;
        r = ((int (__thiscall*)(S_func_00654fa0*, void*))((int*)this->m_field4)[0x4e])(this, a1);
        if (!r) goto skip;
        if (((int (__thiscall*)(int*))0x656810)(v4)) {
            this->m_field24 = p[6];
            this->m_field2c = p[8];
        }
        if (PtInRect((int*)((char*)this + 0x20), p[9], p[10])) {
            if (v4[0x5d]) {
                int t = ((int (__thiscall*)(S_func_00654fa0*))((int*)this->m_field4)[0x3b])(this);
                ((void (__thiscall*)(S_func_00654fa0*, int))((int*)this->m_field4)[0x3a])(this, t == 0 ? 1 : 0);
            }
            ((void (__thiscall*)(int*))0x657410)(v4);
            ((void (__thiscall*)(int*, int*, int*, int, int, int, int))0x65ad10)(v4, v8, v12, -0x35, (int)v24, -1, (int)this);
            goto done;
        }
    }
skip:
    r = ((int (__thiscall*)(S_func_00654fa0*, void*))((int*)this->m_field4)[0x4f])(this, a1);
    if (r && v4[0x61]) {
        ((void (__thiscall*)(int*, void*))0x659170)(v4, a1);
        int pt[2];
        pt[0] = p[9];
        pt[1] = p[10];
        int hwnd = WindowFromPoint(v4[8], pt[0]);
        int scr[2];
        ClientToScreen(hwnd, scr);
        int w = ((int (__stdcall*)(int, int))0x6301c0)(scr[0], scr[1]);
        int h = ((int (__stdcall*)(int))0x6d0fc0)(w);
        int res = ((int (__stdcall*)(int))0x630202)(h);
        if (res && *(int*)(res + 0x64) == (int)this) {
            int* q = (int*)((int (__thiscall*)(S_func_00654fa0*, int*))0x654ba0)(this, v12);
            if (q[0x10]) {
                SendMessageA(*(int*)(res + 0x20), 0xb1, 0, -1);
                SendMessageA(*(int*)(res + 0x20), 0xb7, 0, 0);
            } else {
                ((void (__thiscall*)(S_func_00654fa0*))((int*)this->m_field4)[0x50])(this);
            }
        }
    }
done:
    ((void (__thiscall*)(int*, int*, int*, int, int, int, int))0x65ad10)(v4, v8, v12, -2, (int)v24, -1, (int)this);
    int idx = ((int (__thiscall*)(S_func_00654fa0*, int, int))((int*)this->m_field4)[0x44])(this, v24[0], v24[1]);
    if (idx >= 0) {
        ((void (__thiscall*)(int*, int*, int*, int, int, int, int))0x65ad10)(v4, v8, v12, -0x36, (int)v24, idx, (int)this);
    }
    if (v8) ((void (__thiscall*)(int*))0x6301e4)(v8);
    if (v12) { ((void (__thiscall*)(int*))0x6301e4)(v12); p[3] = 0; }
    if (v4) { ((void (__thiscall*)(int*))0x6301e4)(v4); p[1] = 0; }
    ((void (__thiscall*)(S_func_00654fa0*))0x6301e4)(this);
}
