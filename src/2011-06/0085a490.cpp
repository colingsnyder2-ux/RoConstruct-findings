// from server: 48% by atomic.potato
struct S {
    char pad0[0x80];
    int m_80;
    char pad1[0x4c];
    int m_d0;
    char pad2[0x24];
    void* m_f8;
    char pad3[0x4];
    void* m_100;
    void f(int);
};

extern "C" {
    void* __stdcall GetDlgItem(void*, int);
    int __stdcall GetDlgCtrlID(void*);
    int __stdcall GetWindowTextA(void*, char*, int);
    int __stdcall IsWindowVisible(void*);
    int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
}

extern int g_c970e8;
extern int g_c970ec;
extern int g_d18a4c;

void* __stdcall f_81d670(void*);
void* __stdcall f_9cc750(void*);
void* __stdcall f_80a43c(void*, void*);
int __stdcall f_81aac0(void*);
void* __stdcall f_859c10(void*, int, const char*, int, int, int);
void __stdcall f_85a030(void*, void*, int);
void* __stdcall f_80ce00(void*, void*);
void __stdcall f_80cd90(void*, int);
void __stdcall f_80c880(void*, int);
int __stdcall f_8790a0(void*);
void __stdcall f_80c560(void*, void*);

void S::f(int)
{
    int i = m_80 + 1;
    if (i < *(int*)((char*)m_f8 + 0x2c)) {
        do {
            void* p;
            if (i >= 0 && i < *(int*)((char*)m_f8 + 0x2c))
                p = *(void**)(*(int*)((char*)m_f8 + 0x28) + i * 4);
            else
                p = 0;
            if (*(int*)((char*)p + 0x84) < g_c970e8)
                break;
            (*(void(__thiscall**)(void*, void*))(*(int*)m_f8 + 0x58))(m_f8, p);
            i++;
        } while (i < *(int*)((char*)m_f8 + 0x2c));
    }

    void* w = f_80a43c(f_9cc750(f_81d670(m_100)), 0);
    void* ebx;
    if (w != 0) {
        ebx = *(void**)((char*)w + 0xe8);
    } else {
        ebx = 0;
    }

    if (f_81aac0(m_100) != 0 || ebx == 0) {
        m_d0 = 0;
        return;
    }

    int ebp = m_80;
    m_d0 |= 1;
    ebp++;

    void* hwnd = GetDlgItem(ebx, 0x229);
    if (hwnd != 0) {
        int id = GetDlgCtrlID(hwnd);
        int t = id - 0x8000;
        if ((unsigned)t <= 0x2e)
            g_c970e8 = 0x8000;
        int t2 = id - 1;
        if ((unsigned)t2 <= 0x2d)
            g_c970e8 = 1;
    }

    int esi = g_c970e8;
    void* hwnd2 = GetDlgItem(ebx, esi);
    ebx = hwnd2;
    if (ebx == 0)
        return;

    while (ebx != 0) {
        if (IsWindowVisible(ebx) == 0)
            goto next;

        char buf[0x100];
        GetWindowTextA(ebx, buf, 0x100);

        int flag = (g_d18a4c != 0) ? 0xb : 1;
        void* obj = f_859c10(m_f8, ebp, (const char*)0xa5beca, esi, flag, 1);

        void* tmp1;
        void* tmp2;
        f_85a030(&tmp1, &tmp2, ebp - m_80);
        f_80ce00(obj, tmp1);
        (*(void(__thiscall**)(void*, int))(*(int*)obj + 0x64))(obj, ebp == m_80 + 1);
        int vis = (tmp2 == ebx) ? 1 : 0;
        if (*(int*)((char*)obj + 0xa0) != vis) {
            *(int*)((char*)obj + 0xa0) = vis;
            f_80cd90(obj, 1);
        }
        f_80c880(obj, 8);
        *(int*)((char*)obj + 0x8c) = 0xef1f;
        if (f_8790a0(this) < 0 && ebp == m_80 + 1) {
            int r = f_8790a0(obj);
            f_80c880(obj, r | 0x80);
        }
        f_80c560(obj, (void*)0xef1f);
        ebp++;
        if (ebp - m_80 > g_c970ec)
            break;
    }

next:
    esi++;
    void* hwnd3 = GetDlgItem(*(void**)((char*)this + 0x18), esi);
    ebx = hwnd3;
    if (ebx != 0)
        goto loop_body;
    return;

loop_body:
    ;
}
