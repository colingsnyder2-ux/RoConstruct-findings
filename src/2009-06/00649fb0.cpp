// from server: 67% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    char pad0[0x10];
    int field10;
};

struct Outer {
    char pad0[0x94];
    struct {
        char pad0[0x18];
        int field18;
        int field0;
    } list;
};

struct S {
    char pad0[0x94];
    struct {
        char pad0[0x18];
        int field18;
        int field0;
    } list;
    void method(int arg);
};

void Inner_method(Inner* p);

void S::method(int arg) {
    int local0;
    int local1;
    Inner* it;
    int end;
    int first;
    void (__stdcall *fn)();

    Inner* base = (Inner*)((char*)this + 0x94);
    Inner* tmp = (Inner*)((char*)this + 0x94);
    // call 0x644d50 with ecx = base, args &local1, &local0
    extern void __stdcall func644d50(Inner*, int*, int*);
    func644d50(base, &local1, &local0);

    it = (Inner*)local0;
    end = *(int*)((char*)base + 0x18);
    first = *(int*)base;
    fn = *(void(__stdcall**)())0x89e9ac;

    if (it != 0 && it == (Inner*)first) {
        // ok
    } else {
        fn();
    }

    Inner* cur = (Inner*)local1;
    if (cur != (Inner*)end) {
        if (it == 0) {
            fn();
            if (cur == (Inner*)*(int*)((char*)it + 0x18)) {
                fn();
            }
            Inner_method((Inner*)*(int*)((char*)cur + 0x10));
        } else {
            it = (Inner*)*(int*)it;
            if (cur == (Inner*)*(int*)((char*)it + 0x18)) {
                fn();
            }
            Inner_method((Inner*)*(int*)((char*)cur + 0x10));
        }
    }
}
