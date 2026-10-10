// from server: 49% by colin
struct ClearStarterpack {
    void* vtable;
    char pad[0x24];
    void construct(void* arg);
};

extern "C" void __stdcall sub_77E69C(void*, void*);
extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __cdecl sub_5E49E0(void*, void*);
extern "C" void __cdecl sub_48CBE0(void*);
extern "C" void __cdecl sub_564C50(void*, void*);

void ClearStarterpack::construct(void* arg) {
    char buf[0x24];
    void* p;
    sub_77E69C(buf, arg);
    sub_564C50(this, *(void**)(buf + 0x1c));
    p = *(void**)(buf + 0x20);
    *(void**)this = (void*)0x7A91E4;
    if (p) {
        sub_48CBE0(p);
    } else {
        p = 0;
    }
    sub_5E49E0((char*)this + 0xc, p);
    *(void**)((char*)this + 0x14) = p;
    *(void**)((char*)this + 0x18) = 0;
    *(void**)((char*)this + 0x1c) = 0;
    *(void**)((char*)this + 0x20) = p;
    sub_77E6AC(buf);
}
