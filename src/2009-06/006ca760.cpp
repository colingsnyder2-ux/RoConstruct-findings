// from server: 66% by atomic.potato
// roc 2009-06 006ca760  unit: RBX::AnchorTool  size: 97 bytes

struct Inner {
    void* p;
    void clear();
};

struct Outer {
    char pad0[0x18];
    void* field18;
    Inner inner;
    Outer* method(void*);
};

extern "C" char __cdecl sub_65cde0(void*);
extern "C" int __cdecl sub_6ca430(void*);
extern "C" void __cdecl sub_6ca1a0(void*, void*, char*);
extern "C" void* __cdecl sub_60d830(void*);
extern "C" void __cdecl sub_649fb0(void*);

Outer* Outer::method(void* arg) {
    if (inner.p != 0) {
        if (sub_65cde0(inner.p) == 0) {
            char flag;
            void* q = (void*)sub_6ca430(inner.p);
            flag = (q != 0);
            sub_6ca1a0(inner.p, arg, &flag);
            void* r = sub_60d830(field18);
            sub_649fb0(r);
            inner.clear();
        }
    }
    return this;
}
