// from server: 49% by atomic.potato
struct CXTPCustomizeSheet;

struct S_00764d90 {
    char pad0[0xb8];
    void* m_pCommandBars;
};

struct S_00731fc0 {
    char pad0[48];
    int m_x;
    int* f();
};

extern "C" void* __stdcall f_00729a20(void* p, int a, int b);
extern "C" void* __stdcall f_00738a90(void* p);
extern "C" void __stdcall f_007e8600(void* p, int a, void* b);
extern "C" void* __stdcall f_00731fc0_c(void* p);
extern "C" void __stdcall f_007e7b00(void* p, void* a);
extern "C" void __stdcall f_007e6820(void* p, int a, int b);
extern "C" int __stdcall f_00718c00(void* p);
extern "C" void __stdcall f_00733790(void* p);
extern "C" void __stdcall f_007e79d0(void* p, void* a);
extern "C" int __stdcall f_00733800(void* p);
extern "C" void __stdcall f_007337a0(void* p, void* a);
extern "C" void __stdcall f_007389d0(void* p);
extern "C" void __stdcall f_00736c00(void* p);
extern "C" void __stdcall f_00735d30(void* p);
extern "C" void __stdcall f_00763b90(void* p);

void f_00764d90(S_00764d90* self)
{
    char buf[0xa9c];
    int v1;
    int v2;
    void* p;
    void* q;
    int r;
    void* im;
    void* obj;
    void* obj2;
    int flag;

    void* cb = self->m_pCommandBars;
    void* esi = *(void**)((char*)cb + 0x58);
    if (esi == 0)
        return;

    int eax;
    if (*(int*)((char*)esi + 0x90) == 0) {
        if (*(int*)((char*)esi + 0x88) <= 0) {
            void* ecx = *(void**)((char*)esi + 0x15c);
            if (ecx != 0) {
                if (*(int*)((char*)ecx + 0x2c) > 0)
                    goto L_e07;
                eax = *(int*)((char*)ecx + 0x28);
            } else {
                eax = *(int*)((char*)esi + 0x84);
            }
            if (eax == 0)
                return;
        }
    }
L_e07:
    {
        void* edx = *(void**)esi;
        edx = *(void**)((char*)edx + 0xcc);
        void* pbuf = buf;
        f_00729a20(0, 0, 0);
        (*(void (__stdcall*)(void*, void*))edx)(esi, pbuf);
    }

    if (*(int*)((char*)esi + 0x90) == 0) {
        if (*(int*)((char*)esi + 0x88) <= 0) {
            void* ecx = *(void**)((char*)esi + 0x15c);
            if (ecx != 0) {
                if (*(int*)((char*)ecx + 0x2c) > 0)
                    goto L_e48;
                eax = *(int*)((char*)ecx + 0x28);
            } else {
                eax = *(int*)((char*)esi + 0x84);
            }
        }
    }
L_e48:
    {
        int ecx = *(int*)buf;
        void* cb2 = self->m_pCommandBars;
        void* r1 = f_00729a20(cb2, eax, ecx);
        void* r2 = f_00738a90(r1);
        im = r2;
    }

    f_007e8600(buf, 1, self);
    flag = 0;
    if (im != 0) {
        void* r3 = f_00731fc0_c(im);
        f_007e7b00(buf, r3);
    } else {
        int edx = *(int*)(buf + 4);
        int eax2 = *(int*)buf;
        f_007e6820(buf, eax2, edx);
    }

    r = f_00718c00(buf);
    if (r != 1)
        goto L_f58;

    f_00733790(buf + 0x1c);
    f_007e79d0(buf, buf + 0x1c);
    flag = 1;
    f_00733800(buf + 0x1c);
    if (f_00733800(buf + 0x1c) != 0)
        goto L_f47;

    {
        char tmp[0x24];
        void* esp_save = tmp;
        if (*(int*)((char*)esi + 0x90) == 0) {
            f_007337a0(tmp, buf + 0x24);
            void* cb3 = self->m_pCommandBars;
            flag = 2;
            void* r4 = f_00729a20(cb3, 0, 0);
            flag = 1;
            f_007389d0(r4);
            *(int*)((char*)esi + 0x90) = (int)r4;
        } else {
            f_007337a0(tmp, buf + 0x24);
            f_00736c00(im);
        }
    }
    {
        void* ecx = *(void**)((char*)esi + 0x100);
        void* edx = *(void**)ecx;
        void* eax3 = *(void**)((char*)edx + 0x184);
        (*(void (__stdcall*)(void*))eax3)(ecx);
    }

L_f47:
    flag = 0;
    f_00735d30(buf + 0x1c);

L_f58:
    flag = -1;
    f_00763b90(buf);
}
