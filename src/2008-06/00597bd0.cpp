// from server: 32% by colin
struct S {
    char pad[0x18];
    void* field18;
    bool f(void* a, void* b);
};

extern "C" void __stdcall sub_802460(void*);
extern "C" void __stdcall sub_802468(void*);
extern "C" void* __cdecl sub_554270();
extern "C" bool __cdecl sub_597480(void*, void*);

bool S::f(void* a, void* b) {
    char buf[0x20];
    sub_802460(buf);
    void* p = sub_554270();
    bool result;
    if (sub_597480(a, buf)) {
        void* obj = field18;
        void** vt = *(void***)obj;
        void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vt[3];
        fn(obj, a, buf);
        sub_802468(buf);
        result = true;
    } else {
        sub_802468(buf);
        result = false;
    }
    return result;
}
