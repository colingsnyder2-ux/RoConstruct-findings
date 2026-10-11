// from server: 64% by colin
// roc 2008-06 00619fb0  unit: RBX::WeldTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619fb0

struct S;

extern "C" void __fastcall f_598c70(void*);
extern "C" void __fastcall f_5f1690(void*);
extern "C" void __fastcall f_5f13e0(void*, int);
extern "C" void __fastcall f_598c90(void*);
extern "C" void* __fastcall f_5807b0(void*);
extern "C" void __fastcall f_5bd820(void*);

struct S {
    char pad[0x18];
    void* field18;
    void method(void* arg);
};

void S::method(void* arg) {
    void** p = (void**)arg;
    f_598c70(*p);
    f_5f1690(arg);
    f_5f13e0(arg, 2);
    f_598c90(*p);
    void* r = f_5807b0(field18);
    f_5bd820(r);
}
