// from server: 62% by colin
struct BoundFuncDesc {
    char pad[0x100];
    void sub_52D350(float, float);
    void sub_52ED30(float*, float, float);
    void sub_570270(void*);
    void func(float, float);
};

extern "C" void* __stdcall sub_570270_impl(void*);
extern "C" void __stdcall sub_52D350_impl(void*, float, float);
extern "C" void __stdcall sub_52ED30_impl(void*, float*, float, float);

void BoundFuncDesc::func(float a, float b) {
    sub_52D350(a, b);
    void* p = (this != 0) ? (void*)((char*)this + 4) : 0;
    void* r = sub_570270_impl(p);
    if (r != 0) {
        float tmp;
        sub_52ED30_impl((char*)r + 0x10, &tmp, a, b);
    }
}
