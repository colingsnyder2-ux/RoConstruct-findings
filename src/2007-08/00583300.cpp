// from server: 66% by colin
struct S {
    char pad[0x100];
    int f(int);
};

extern "C" {
    void __stdcall sub_583250(int);
    void __stdcall sub_541bf0(void*, void*);
    void* __stdcall sub_77e698(const char*);
    void __stdcall sub_77e6ac(void*);
}

int S::f(int a) {
    if (a) {
        *(int*)((char*)this + 0xf8) = 0x7ac5c0;
        *(int*)((char*)this + 0x17c) = 0x7a4ccc;
    }
    sub_583250(0);
    int eax = *(int*)((char*)this + 0xf8);
    *(int*)((char*)this) = 0x7ac73c;
    *(int*)((char*)this + 4) = 0x7ac734;
    *(int*)((char*)this + 0x10) = 0x7ac72c;
    *(int*)((char*)this + 0x14) = 0x7ac71c;
    *(int*)((char*)this + 0x2c) = 0x7ac70c;
    *(int*)((char*)this + 0x44) = 0x7ac6fc;
    *(int*)((char*)this + 0x5c) = 0x7ac6ec;
    *(int*)((char*)this + 0x74) = 0x7ac6dc;
    *(int*)((char*)this + 0x8c) = 0x7ac6cc;
    *(int*)((char*)this + 0xe8) = 0x7ac6b4;
    int ecx = *(int*)(eax + 4);
    *(int*)(ecx + (int)this + 0xf8) = 0x7ac6ac;
    int edx = *(int*)((char*)this + 0xf8);
    int eax2 = *(int*)(edx + 4);
    int ecx2 = eax2 - 0x84;
    *(int*)(eax2 + (int)this + 0xf4) = ecx2;
    char buf[0x20];
    sub_77e698("AttachmentPoint");
    sub_541bf0(this, buf);
    sub_77e6ac(buf);
    return (int)this;
}
