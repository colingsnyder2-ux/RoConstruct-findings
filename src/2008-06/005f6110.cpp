// from server: 42% by colin




struct StreamBuf {
    int sputn(const char* s, int n);
};

struct Inner {
    char pad0[0x14];
    char* p14;
    char* p18;
    char* p1c;
    char* p20;
    char pad24[4];
    unsigned char flags24;
};

struct Outer {
    Inner* p0;
};

extern "C" int __stdcall helper_64db30(Inner* self, void* x);
extern "C" int __stdcall helper_64db40(Inner* self, int a, int b);
extern "C" void __stdcall helper_64da90(Inner* self, void* a, void* b, void* c);
extern "C" void __stdcall helper_64dac0(Inner* self, void* a, void* b, void* c);
extern "C" void __stdcall helper_64d9e0(void* p);
extern "C" int __stdcall helper_5f5be0(void* p);

extern void* g_84b230;
extern void* g_84b210;
extern int (__stdcall *g_8023a0)(void*, const char*, int);

struct S {
    Outer* p0;
    void f(int a, int b);
};

void S::f(int a, int b)
{
    Inner* inner = this->p0->p0;
    if ((inner->flags24 & 1) != 0 && (a & 1) != 0) {
        inner->flags24 = 0;
        char* p14 = inner->p14;
        inner->p1c = p14;
        inner->p20 = p14;
        helper_64db40(this->p0->p0, 1, 0);
    }

    inner = this->p0->p0;
    if ((inner->flags24 & 2) != 0 && (a & 2) != 0) {
        char flag = 1;
        int state = 0;
        char local;
        char* pLocal = &local;
        char** pp20 = &inner->p20;
        char** pp1c = &inner->p1c;
        for (;;) {
            if (*pp1c == *pp20) {
                break;
            }
            Inner* self = this->p0->p0;
            helper_64da90(self, &pLocal, pp1c, pp20);
            int r = helper_64db30(self, g_84b230);
            helper_64dac0(self, &pLocal, pp1c, 0);
            helper_64d9e0((void*)r);
            if (r != (int)g_84b210) {
                flag = 0;
            }
            inner = this->p0->p0;
            char* p14 = inner->p14;
            int diff = (int)(inner->p1c - p14);
            int written = 0;
            char* base = p14;
            while (written < diff) {
                int n = g_8023a0(*(void**)&pLocal, base + written, diff - written);
                written += n;
            }
            inner = this->p0->p0;
            char* p14b = inner->p14;
            char* p18b = inner->p18;
            inner->p1c = p14b - written + diff;
            inner->p20 = p14b + (int)p18b;
            if (flag == 0) {
                break;
            }
        }
        helper_5f5be0(&pLocal);
    }
}
