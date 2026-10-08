// from server: 39% by colin
// roc 2007-08 0042af00  size: 60 bytes

extern "C" {
    void* __stdcall sub_77e69c();
    void __stdcall sub_77e6ac();
}

struct VCLuaFunction {
    void destroy();
};

void VCLuaFunction::destroy() {
    void* p = sub_77e69c();
    (void)p;
    void (*fn)(void*) = *(void(**)(void*))((char*)this + 8);
    fn(*(void**)((char*)this + 4));
    sub_77e6ac();
}
