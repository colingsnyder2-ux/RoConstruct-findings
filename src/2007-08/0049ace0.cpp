// from server: 46% by colin
struct VClientSignalDesc {
    char pad[0x10];
    void addDesc(const void* desc);
};

extern "C" void* __cdecl sub_570270(int);
extern "C" void __stdcall sub_77e69c(void*, const void*);
extern "C" void __stdcall sub_77e6ac(void*);
extern "C" void __cdecl sub_49a910(void*, const void*);

void VClientSignalDesc::addDesc(const void* desc) {
    void* p = sub_570270(*(int*)((char*)this + 0x20));
    if (p) {
        char buf[0x1c];
        sub_77e69c(buf, desc);
        sub_49a910((char*)p + 0x10, buf);
    }
    sub_77e6ac((char*)this + 0x14);
}
