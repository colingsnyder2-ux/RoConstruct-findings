// from server: 65% by tester
struct Name {
    void mutex();
};

struct VClient {
    char pad[0xc];
    void* ptr;
    void method();
};

extern "C" double __stdcall sub_4ffef0();
extern "C" void __stdcall sub_487f40(void*, void*);

double g_796460;

void VClient::method()
{
    sub_4ffef0();
    double d = *(double*)&g_796460;
    double t = *(float*)((char*)this + 0x10) / d;
    t += *(double*)((char*)this + 0xc);
    *(double*)((char*)this + 0xc) = t;

    void* p = this->ptr;
    void* vtbl = *(void**)p;
    void* (__stdcall *fn)(void*) = *(void* (__stdcall**)(void*))((char*)vtbl + 0x3c);
    void* r = fn(p);
    if (r) {
        void* vtbl2 = *(void**)this->ptr;
        void (__stdcall *fn2)(void*, void*) = *(void (__stdcall**)(void*, void*))((char*)vtbl2 + 0x40);
        fn2(this->ptr, r);
        sub_4ffef0();
        double d2 = *(double*)((char*)this + 0xc);
        if (d2 == t) {
            // loop
        }
    }
    sub_487f40((char*)this - 0xec, (void*)0x4a4e60);
}
