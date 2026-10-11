// from server: 42% by atomic.potato
struct S {
    char pad0[0x100];
    void* m_100;
    char pad104[0x70];
    void* m_174;
    void* m_178;
    int f(void* a1);
};

extern "C" void __stdcall f_7f3ddc(void*);
extern "C" void* __stdcall f_807090(void*);
extern "C" void* __stdcall f_7f3c3e(void*);
extern "C" void* __stdcall f_841980(void*);
extern "C" void* __stdcall f_8044d0(void*);
extern "C" void* __stdcall f_841ec0(void*);
extern "C" void* __stdcall f_848160(void*, int, int, int, int, int);
extern "C" void __stdcall f_7f6060(void*, int);
extern "C" int __stdcall f_805250(void*);
extern "C" void __stdcall f_8144b0(void);
extern "C" void __stdcall f_7f66c0(void*, int);
extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, void*);

int S::f(void* a1)
{
    void* v;
    void* r;
    void* obj;
    void* obj2;
    int n;
    int flag;
    void* p;

    m_174 = a1;
    if (a1 == 0) {
        if (m_178 != 0) {
            void** vt = *(void***)m_178;
            ((void (__stdcall*)(void*, int, int, int))vt[0x148/4])(m_178, 0, 1, 0);
        }
        f_7f66c0(this, 1);
        return 1;
    }

    if (m_178 != 0) {
        f_7f3ddc(m_178);
    }
    m_178 = 0;

    r = f_807090(m_100);
    if (r != 0) {
        char buf[0x1c];
        int i;
        for (i = 0; i < 0x1c; i++) buf[i] = 0;
        *(int*)(buf + 0x14) = 1;
        if (SendMessageA(*(void**)((char*)r + 0x20), 0x2861, 0, buf) != 0) {
            void* h = f_841980(*(void**)buf);
            m_178 = f_7f3c3e(h);
        }
    }

    if (m_178 == 0) {
        void* h = f_8044d0(m_100);
        m_178 = f_841ec0(h);
    }

    obj = m_178;
    {
        void** vt = *(void***)obj;
        if (((int (__stdcall*)(void*))vt[0x198/4])(obj) == 0) {
            *(int*)((char*)obj + 0x138) = 0;
        }
    }

    obj2 = f_8044d0(m_100);
    p = m_178;
    if (obj2 != 0) {
        void** vt = *(void***)obj2;
        ((void (__stdcall*)(void*, void*))vt[0x70/4])(obj2, m_100);
        if (*(int*)((char*)*(void**)((char*)obj2 + 0x74) + 0x38) != 0 ||
            *(int*)((char*)obj2 + 0x60) != 0) {
            void* ctrl = *(void**)((char*)m_178 + 0xfc);
            void* dlg = f_848160(ctrl, 2, 0x23a2, 0, -1, 0);
            f_7f6060(dlg, 8);
            n = f_805250(m_178);
            flag = n > 1 ? 1 : 0;
            {
                void** vt = *(void***)dlg;
                ((void (__stdcall*)(void*, int))vt[0x64/4])(dlg, flag);
            }
            {
                void** vt = *(void***)dlg;
                int res = ((int (__stdcall*)(void*))vt[0x8c/4])(dlg);
                void** vt2 = *(void***)obj2;
                ((void (__stdcall*)(void*, void*, int))vt2[0x74/4])(obj2, m_100, res);
            }
        }
    } else {
        f_8144b0();
    }

    {
        void** vt = *(void***)this;
        int st = ((int (__stdcall*)(void*))vt[0x6c/4])(this);
        int b;
        if (st == 2 || st == 3) b = 1;
        else b = 0;
        {
            void** vt2 = *(void***)m_178;
            ((void (__stdcall*)(void*, void*, int))vt2[0x160/4])(m_178, this, b);
        }
    }

    f_7f66c0(this, 1);
    return 1;
}
