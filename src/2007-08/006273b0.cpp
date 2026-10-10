// from server: 67% by colin
struct SeparateStage {
    void method_006273b0(void* arg);
};

extern "C" void __stdcall sub_609130(void*);
extern "C" void __stdcall sub_5e29b0(void*, void*, void*);

void SeparateStage::method_006273b0(void* arg)
{
    void* self = this;
    sub_609130(arg);
    void** vtable = *(void***)arg;
    int (__thiscall *fn)(void*) = (int (__thiscall *)(void*))vtable[3];
    if (fn(arg) == 1)
    {
        void* tmp = arg;
        sub_5e29b0((char*)self + 0x1c, &tmp, &tmp);
    }
    void* p = *(void**)((char*)self + 8);
    void** vt = *(void***)p;
    void (__thiscall *fn2)(void*, void*) = (void (__thiscall *)(void*, void*))vt[4];
    fn2(p, arg);
}
