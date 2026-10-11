// from server: 21% by colin
extern "C" void* __stdcall func_0056cd80();
extern "C" void* __stdcall func_005b72c0(void*);
extern "C" void __stdcall func_00802468();

struct S {
    char pad[0x18];
    void* field_18;
    void func_005b8240(int, int);
};

void S::func_005b8240(int a, int b)
{
    void* p = field_18;
    void** vt = *(void***)p;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vt[2];
    void* local;
    fn(p, &local);
    void* result = func_0056cd80();
    *(void**)b = result;
    void** esi = (void**)((char*)b + 4);
    void* r = func_005b72c0(&local);
    if (r != esi) {
        void* tmp = *esi;
        *esi = *(void**)r;
        *(void**)r = tmp;
    }
    if (local) {
        void** vt2 = *(void***)local;
        void (*fn2)(void*, int) = (void (*)(void*, int))vt2[0];
        fn2(local, 1);
    }
    func_00802468();
}
