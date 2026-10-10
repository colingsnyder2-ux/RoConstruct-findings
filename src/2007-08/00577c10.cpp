// from server: 43% by colin
struct EnumPropertyDescriptor {
    char pad[0xec];
    void* getset;
    char pad2[0x158 - 0xec - 4];
    void* vtable158;
    void* vtable15c;
};

struct EnumPropDescriptor {
    char pad[0xec];
    void* getset;
    char pad2[0x158 - 0xec - 4];
    void* vtable158;
    void* vtable15c;

    EnumPropDescriptor(const char* name, const char* category, int get, int set, int flags, int security);
};

extern "C" void __stdcall sub_573A40(void* desc, int a, int b);
extern "C" int __stdcall sub_577100();

EnumPropDescriptor::EnumPropDescriptor(const char* name, const char* category, int get, int set, int flags, int security)
{
    if (name != 0) {
        *(void**)((char*)this + 0xec) = (void*)0x7b900c;
        *(void**)((char*)this + 0x158) = (void*)0x7a4cd4;
        *(void**)((char*)this + 0x15c) = (void*)0x7a4ccc;
    }
    sub_573A40(this, (int)name, 0);
    *(void**)((char*)this + 0xec);
    *(void**)this = (void*)0x7aae14;
    *(void**)((char*)this + 4) = (void*)0x7aae08;
    *(void**)((char*)this + 0x10) = (void*)0x7aae00;
    *(void**)((char*)this + 0x14) = (void*)0x7aadf0;
    *(void**)((char*)this + 0x2c) = (void*)0x7aade0;
    *(void**)((char*)this + 0x44) = (void*)0x7aadd0;
    *(void**)((char*)this + 0x5c) = (void*)0x7aadc0;
    *(void**)((char*)this + 0x74) = (void*)0x7aadb0;
    *(void**)((char*)this + 0x8c) = (void*)0x7aada0;
    *(void**)((char*)this + 0xe8) = (void*)0x7aad94;
    void* p = *(void**)((char*)this + 0xec);
    void* q = *(void**)((char*)p + 4);
    *(void**)((char*)q + (int)this + 0xec) = (void*)0x7aad88;
    void* r = *(void**)((char*)this + 0xec);
    void* s = *(void**)((char*)r + 8);
    *(void**)((char*)s + (int)this + 0xec) = (void*)0x7aad80;
    *(int*)((char*)this + 0xc) = sub_577100();
}
