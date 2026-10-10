// from server: 95% by colin
struct RootInstance {
    char pad[0x294];
    void* field294;
    void* field298;
    void* destroy(char flag);
};

extern "C" void __cdecl sub_567FD0();
extern "C" void (__stdcall *pfree)(void*);

void* RootInstance::destroy(char flag)
{
    sub_567FD0();
    void* p = field298;
    field294 = (void*)0x7a4cac;
    void* q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 0x298) = (void*)0x7a4ca4;
    if (flag & 1) {
        pfree(this);
    }
    return this;
}
