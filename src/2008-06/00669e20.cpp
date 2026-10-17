// from server: 45% by colin
// roc 2008-06 00669e20  unit: RBX::TreeStage  size: 233 bytes

struct CNameItem {
    void ctor();
};

struct Obj {
    char pad[0xb8];
    int arr[1];
};

struct Result {
    char pad[0x88];
};

extern "C" void __cdecl sub_4782d0(void* p);
extern "C" int __cdecl sub_645560(Obj* a, int b, Obj* c, int d);
extern "C" void __cdecl sub_645980(void* out1, void* out2, Obj* a, int b, Obj* c, int d);
extern "C" void* __cdecl sub_6a0920(unsigned int size);
extern "C" void __cdecl sub_6455c0(Result* self, Obj* a, int b, void* out1, void* out2);

struct TreeStage {
    Result* make(Obj* a, int b, Obj* c, int d);
};

Result* TreeStage::make(Obj* a, int b, Obj* c, int d) {
    int v1 = c->arr[b];
    int v2 = a->arr[d];
    if (v1 != 2 && v2 != 2)
        return 0;
    if (!sub_645560(a, d, c, b))
        return 0;
    char buf1[0x30];
    char buf2[0x30];
    sub_4782d0(buf1);
    sub_4782d0(buf2);
    sub_645980(buf1, buf2, a, d, c, b);
    Result* r = (Result*)sub_6a0920(0x88);
    if (!r)
        return 0;
    sub_6455c0(r, a, d, buf1, buf2);
    *(void**)r = (void*)0x83e0bc;
    return r;
}
