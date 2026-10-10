// from server: 53% by colin
struct EnumPropDescriptor {
    char pad[0xec];
    void* getset;
    char pad2[0x158 - 0xec - 4];
    void* vtable158;
    void* vtable15c;
    void* vtable0;
    void* vtable4;
    void* vtable10;
    void* vtable14;
    void* vtable2c;
    void* vtable44;
    void* vtable5c;
    void* vtable74;
    void* vtable8c;
    void* vtablee8;
    void* vtablefc;
    unsigned char bytef9;
    void* ptr100;
    void* ptr104;
    void* ptr108;
    unsigned char byte111;
    void* ptr114;
    void* ptr118;
    void* ptr11c;
    void* ptr120;
    unsigned char byte12c;
    void* ptr128;
    void* ptr130;
    void* ptr138;
    void* ptr13c;
    void* ptr140;
    unsigned char byte150;
    void* ptr14c;
    void* ptr154;

    EnumPropDescriptor* construct(int a, int b);
};

struct Base {
    void baseInit(int arg);
};

EnumPropDescriptor* EnumPropDescriptor::construct(int a, int b) {
    if (a != 0) {
        *(void**)((char*)this + 0xec) = (void*)0x7b900c;
        *(void**)((char*)this + 0x158) = (void*)0x7a4cd4;
        *(void**)((char*)this + 0x15c) = (void*)0x7a4ccc;
    }
    ((Base*)this)->baseInit(b);
    *(void**)((char*)this + 0xe8) = (void*)0x7b522c;
    void* ec = *(void**)((char*)this + 0xec);
    *(void**)((char*)this + 0) = (void*)0x7b8e54;
    *(void**)((char*)this + 4) = (void*)0x7b8e48;
    *(void**)((char*)this + 0x10) = (void*)0x7b8e40;
    *(void**)((char*)this + 0x14) = (void*)0x7b8e30;
    *(void**)((char*)this + 0x2c) = (void*)0x7b8e20;
    *(void**)((char*)this + 0x44) = (void*)0x7b8e10;
    *(void**)((char*)this + 0x5c) = (void*)0x7b8e00;
    *(void**)((char*)this + 0x74) = (void*)0x7b8df0;
    *(void**)((char*)this + 0x8c) = (void*)0x7b8de0;
    *(void**)((char*)this + 0xe8) = (void*)0x7b8dd4;
    void* edx = *(void**)((char*)ec + 4);
    *(void**)((char*)edx + (int)this + 0xec) = (void*)0x7b8dc8;
    void* eax = *(void**)((char*)this + 0xec);
    void* ecx = *(void**)((char*)eax + 8);
    *(void**)((char*)ecx + (int)this + 0xec) = (void*)0x7b8dc0;
    *(void**)((char*)this + 0xfc) = this;
    *(unsigned char*)((char*)this + 0xf9) = 1;
    *(void**)((char*)this + 0x100) = (void*)0x5bb250;
    *(void**)((char*)this + 0x104) = 0;
    *(void**)((char*)this + 0x108) = 0;
    *(unsigned char*)((char*)this + 0x111) = 1;
    *(void**)((char*)this + 0x114) = this;
    *(void**)((char*)this + 0x118) = (void*)0x5bb6c0;
    *(void**)((char*)this + 0x11c) = 0;
    *(void**)((char*)this + 0x120) = 0;
    *(void**)((char*)this + 0x138) = (void*)0x5bbde0;
    *(void**)((char*)this + 0x13c) = 0;
    *(unsigned char*)((char*)this + 0x12c) = 1;
    *(void**)((char*)this + 0x128) = 0;
    *(void**)((char*)this + 0x130) = this;
    *(void**)((char*)this + 0x140) = 0;
    *(unsigned char*)((char*)this + 0x150) = 1;
    *(void**)((char*)this + 0x14c) = 0;
    *(void**)((char*)this + 0x154) = 0;
    return this;
}
