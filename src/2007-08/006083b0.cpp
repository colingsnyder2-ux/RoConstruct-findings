// from server: 61% by colin
// roc 2007-08 006083b0  unit: RBX::ClumpStage  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006083b0

extern "C" void __stdcall _invalid_parameter_noinfo();

struct ClumpStage {
    char pad[0x14];
    void* listHead;
    char pad2[0x4];
    void* field18;
    void addChild(void*);
    void method(void*);
    void func(void*);
};

void ClumpStage::func(void* arg) {
    void* local;
    void* iter;
    void* tmp;
    void* result;
    void* p;

    local = field18;
    iter = (void*)((char*)this + 0x14);
    tmp = 0;

    extern void* __stdcall sub_44f4c0(void*, void*, void*);
    result = sub_44f4c0(iter, &tmp, &local);

    p = *(void**)result;
    if (p != 0 && p != iter) {
        _invalid_parameter_noinfo();
    }

    if (*(void**)((char*)result + 4) == local) {
        void* v = *(void**)arg;
        void* v2 = *(void**)((char*)v + 0x20);
        if (v2 != 0) {
            addChild(v2);
        }
    }

    method(arg);
}
