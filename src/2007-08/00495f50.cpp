// from server: 37% by colin
struct FunctionDescriptor {
    void construct(const char*, int, int);
};

struct BoundFuncDesc : FunctionDescriptor {
    char pad[0x14];
    int field_14;
    int field_28;
    int field_2c;
    char pad2[0x4];
    int field_34;
    void* field_38;

    BoundFuncDesc(int a, int b, int c, int d, int e);
};

extern "C" void* __stdcall sub_494e80(int, int);
extern "C" void __stdcall sub_570db0();
extern "C" void __stdcall sub_56d3c0();
extern "C" int __stdcall sub_56d350();
extern "C" void* __stdcall sub_56da00(void*);
extern "C" void* __stdcall sub_52c940(int, int, int);
extern "C" void __stdcall sub_56d400();

BoundFuncDesc::BoundFuncDesc(int a, int b, int c, int d, int e) {
    void* p = sub_494e80(c, d);
    sub_570db0();
    this->field_28 = b;
    this->field_2c = a;
    *(void**)this = (void*)0x79bbc8;
    sub_56d3c0();
    this->field_14 = sub_56d350();
    void* q = sub_56da00((char*)this + 0x30);
    void* r = sub_52c940(e, -1, (int)q);
    sub_56d400();
}
