// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct S_func_00442650;

struct S_563090 {
    void f();
    void g();
};

struct S_5630e0 {
    void f();
};

struct S_5e5a80 {
    void f(void*);
};

struct S_669050 {
    void f(void*);
};

struct S_442100 {
    void f(void*);
};

struct S_4025b0 {
    void f(void*);
};

struct S_4218a0 {
    void f(void*);
};

struct S_438d40 {
    void f(void*, void*, void*, void*, void*, void*);
};

struct S_618a40 {
    void* f(void*, void*);
};

struct S_func_00442650 {
    char pad0[0x18c];
    S_563090 m_18c;
    char pad1[0x1f4 - 0x190];
    char m_1f4;
    char m_1f5;
    char pad2[0x1f8 - 0x1f6];
    char m_1f8[0x20];
    char m_218[0x20];
    char m_238[4];
    void* m_23c;
    char m_240[4];
    char pad3[0x20 - 4];
    void* m_20;
    void f(int);
};

void S_func_00442650::f(int arg)
{
    S_563090* p = &m_18c;
    p->f();

    if (m_23c != 0) {
        void* v = m_23c;
        if (v != 0) {
            S_5e5a80* q = (S_5e5a80*)((char*)v + 0x130);
            q->f(&m_238);
        }

        void* obj = m_23c;
        void* edi = *(void**)((char*)obj + 0x154);
        unsigned int ebx = *(unsigned int*)((char*)edi + 0x10);
        if (*(unsigned int*)((char*)edi + 0xc) > ebx) {
            _invalid_parameter_noinfo();
        }
        void* eax = *(void**)edi;

        void* obj2 = m_23c;
        void* ebp = *(void**)((char*)obj2 + 0x154);
        unsigned int edi2 = *(unsigned int*)((char*)ebp + 0xc);
        if (edi2 > *(unsigned int*)((char*)ebp + 0x10)) {
            _invalid_parameter_noinfo();
        }
        void* ebp2 = *(void**)ebp;

        void* tmp[4];
        tmp[0] = (void*)0x439cd0;
        tmp[1] = 0;
        tmp[2] = this;
        tmp[3] = (void*)arg;

        S_438d40* call = (S_438d40*)0x438d40;
        call->f(&m_23c, ebp2, (void*)edi2, (void*)eax, (void*)ebx, tmp);
    }

    void* e1 = *(void**)((char*)this + 0x210);
    void* e1b = *(void**)((char*)e1 + 4);
    S_669050* c1 = (S_669050*)0x669050;
    c1->f(e1b);
    {
        char* edi = (char*)this + 0x1f8;
        void* a = *(void**)(edi + 0x18);
        *(void**)((char*)a + 4) = a;
        void* b = *(void**)(edi + 0x18);
        *(void**)(edi + 0x1c) = 0;
        *(void**)b = b;
        void* c = *(void**)(edi + 0x18);
        *(void**)((char*)c + 8) = c;
    }

    void* e2 = *(void**)((char*)this + 0x230);
    void* e2b = *(void**)((char*)e2 + 4);
    S_442100* c2 = (S_442100*)0x442100;
    c2->f(e2b);
    {
        char* edi = (char*)this + 0x218;
        void* a = *(void**)(edi + 0x18);
        *(void**)((char*)a + 4) = a;
        void* b = *(void**)(edi + 0x18);
        *(void**)(edi + 0x1c) = 0;
        *(void**)b = b;
        void* c = *(void**)(edi + 0x18);
        *(void**)((char*)c + 8) = c;
    }

    void* tmp2[1];
    S_618a40* c3 = (S_618a40*)0x618a40;
    void* r = c3->f(&tmp2[0], (void*)arg);
    void* rv = *(void**)r;
    r = (char*)r + 4;
    m_23c = rv;
    S_4025b0* c4 = (S_4025b0*)0x4025b0;
    c4->f(r);

    void* ref = tmp2[0];
    if (ref != 0) {
        void* p2 = ref;
        void* cnt = (char*)p2 + 4;
        if (_InterlockedExchangeAdd((volatile long*)cnt, -1) == 1) {
            void** vt = *(void***)p2;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(p2);
            void* cnt2 = (char*)p2 + 8;
            if (_InterlockedExchangeAdd((volatile long*)cnt2, -1) == 1) {
                void** vt2 = *(void***)p2;
                void (*fn2)(void*) = (void (*)(void*))vt2[2];
                fn2(p2);
            }
        }
    }

    if (m_23c != 0) {
        void* obj = m_23c;
        void* edi = *(void**)((char*)obj + 0x154);
        unsigned int ebp = *(unsigned int*)((char*)edi + 0x10);
        if (*(unsigned int*)((char*)edi + 0xc) > ebp) {
            _invalid_parameter_noinfo();
        }
        void* ecx = *(void**)edi;

        void* obj2 = m_23c;
        void* edi2 = *(void**)((char*)obj2 + 0x154);
        unsigned int ebx = *(unsigned int*)((char*)edi2 + 0xc);
        if (ebx > *(unsigned int*)((char*)edi2 + 0x10)) {
            _invalid_parameter_noinfo();
        }
        void* edi3 = *(void**)edi2;

        void* tmp3[4];
        tmp3[0] = (void*)0x4423f0;
        tmp3[1] = 0;
        tmp3[2] = this;
        tmp3[3] = (void*)arg;

        S_438d40* call = (S_438d40*)0x438d40;
        call->f(&m_23c, edi3, (void*)ebx, ecx, (void*)ebp, tmp3);

        void* v = m_23c;
        if (v != 0) {
            S_4218a0* q = (S_4218a0*)((char*)v + 0x130);
            q->f(&m_238);
        }
    }

    m_1f5 = 1;
    p->f();

    if (m_1f4 == 0) {
        void* hwnd = m_20;
        if (hwnd != 0) {
            PostMessageA(hwnd, 0x465, 0, 0);
        }
        m_1f4 = 1;
    }

    p->g();
    p->g();
}
