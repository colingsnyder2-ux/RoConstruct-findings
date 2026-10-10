// from server: 52% by tester
struct DescribedNonCreatable {
    void __cdecl construct(void* arg);
};

void DescribedNonCreatable::construct(void* arg) {
    void* p = *(void**)arg;
    char buf[0x20];
    *(int*)buf = 0;
    void* q = *(void**)((char*)p + 8);
    if (q) {
        *(void**)buf = q;
        void* r = *(void**)((char*)p + 8);
        void* v = *(void**)r;
        ((void (__stdcall*)(void*, void*, int))v)((char*)p + 0x10, buf + 8, 0);
    }
    void* a = *(void**)(buf + 0x2c);
    void* b = *(void**)(buf + 0x28);
    void* f = *(void**)p;
    ((void (__stdcall*)(void*, void*))f)(b, a);
}
