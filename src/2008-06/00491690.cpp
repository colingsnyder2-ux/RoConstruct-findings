// from server: 31% by tester
struct S {
    void* field0;
    void f();
};

void S::f() {
    S* p = this;
    if (p != 0) {
        void* v = p->field0;
        if (v != 0) {
            void* vt = *(void**)v;
            void (*fn)(void*) = *(void (**)(void*))((char*)vt + 4);
            fn(v);
        } else {
            v = (void*)0x929614;
        }
        const char* name = (const char*)0x937010;
        bool eq = ((bool (__thiscall*)(void*, const char*))0x802878)(v, name);
        if (eq) {
            char* q = (char*)p->field0 + 4;
            if (q != 0) {
                return;
            }
        }
    }
    void* ex = (void*)0x80ba2c;
    *(void**)0x80ba2c = (void*)0x80ba2c;
    ((void (__thiscall*)(void*, const char*))0x802864)(&ex, (const char*)0x80ba34);
    ((void (__cdecl*)(void*, void*))0x40a3f0)(&ex, (void*)0x80ba2c);
}
