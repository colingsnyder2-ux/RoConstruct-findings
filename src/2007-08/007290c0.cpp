// from server: 83% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct S {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    char field18;
    void f();
};

void S::f() {
    void (__stdcall *fn)() = *(void (__stdcall **)())0x77e6d8;
    while (true) {
        if (field0 != 0 && field0 != field8) {
            fn();
        }
        if (field4 == fieldC) {
            break;
        }
        if (field0 == 0) {
            fn();
        }
        if (field4 == *(void**)((char*)field0 + 0x18)) {
            fn();
        }
        if (*(void**)((char*)field4 + 0x20) == 0) {
            ((void (__thiscall *)(S*))0x4a5190)(this);
            continue;
        }
        break;
    }
    if (field0 != 0 && field0 != field8) {
        fn();
    }
    if (field4 != fieldC) {
        if (field0 == 0) {
            fn();
        }
        if (field4 == *(void**)((char*)field0 + 0x18)) {
            fn();
        }
        field10 = (char*)field4 + 0x18;
        field14 = *(void**)(*(void**)((char*)field4 + 0x1c));
        field18 = 1;
    }
}
