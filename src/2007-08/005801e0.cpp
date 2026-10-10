// from server: 38% by colin
struct S {
    void f(int a, int b);
};

extern "C" void __stdcall GetLocalTime(void*);
extern "C" int __cdecl sprintf(char*, const char*, ...);
extern "C" void __stdcall sub_46B3A0(void*, void*);
extern "C" void __stdcall sub_545A40(void*, int);

extern void* g_8c30ec;
extern void* g_8a21c4;
extern void* g_8a21c8;
extern void* g_8a21cc;

void S::f(int a, int b) {
    char buf[0x110];
    void* p = g_8c30ec;
    void* vt = *(void**)p;
    void* (*fn)(void*) = *(void*(**)(void*))vt;
    char* esi = (char*)fn(p) + 0x24;

    GetLocalTime(buf + 8);

    unsigned short w0 = *(unsigned short*)(buf + 0x10);
    unsigned short w1 = *(unsigned short*)(buf + 0x12);
    unsigned short w2 = *(unsigned short*)(buf + 0x16);

    sprintf(buf + 0x1c, "%02u:%02u.%03u ", w0, w1, w2);

    sub_46B3A0(esi, buf + 0x1c);

    void* vt2 = *(void**)esi;
    void (*flush)(void*) = *(void(**)(void*))vt2;
    flush(esi);

    if (a == 0) {
        void* p2 = g_8c30ec;
        void* vt3 = *(void**)p2;
        void* (*fn3)(void*) = *(void*(**)(void*))vt3;
        char* r = (char*)fn3(p2) + 0x24;
        sub_46B3A0(r, g_8a21c4);
    } else if (a == 1) {
        void* p2 = g_8c30ec;
        void* vt3 = *(void**)p2;
        void* (*fn3)(void*) = *(void*(**)(void*))vt3;
        char* r = (char*)fn3(p2) + 0x24;
        sub_46B3A0(r, g_8a21c8);
    } else if (a == 2) {
        void* p2 = g_8c30ec;
        void* vt3 = *(void**)p2;
        void* (*fn3)(void*) = *(void*(**)(void*))vt3;
        char* r = (char*)fn3(p2) + 0x24;
        sub_46B3A0(r, g_8a21cc);
    }

    void* p3 = g_8c30ec;
    void* vt4 = *(void**)p3;
    void* (*fn4)(void*) = *(void*(**)(void*))vt4;
    char* r2 = (char*)fn4(p3) + 0x24;
    sub_46B3A0(r2, (void*)b);

    sub_545A40((char*)this + 0x24, 10);

    void* p4 = g_8c30ec;
    void* vt5 = *(void**)p4;
    void* (*fn5)(void*) = *(void*(**)(void*))vt5;
    char* r3 = (char*)fn5(p4) + 0x24;
    void* vt6 = *(void**)r3;
    void (*flush2)(void*) = *(void(**)(void*))vt6;
    flush2(r3);
}
