// from server: 41% by colin
struct ClassDescriptor {
    char pad[0x18];
    unsigned int field_18;
    void reserve(unsigned int n);
};

extern "C" {
    void __stdcall sub_802458(void*);
    void __stdcall sub_802898(void*);
    void __stdcall sub_80245c(void*, void*);
    void __cdecl sub_6a158c(void*, void*);
}

void ClassDescriptor::reserve(unsigned int n) {
    unsigned int cur = field_18;
    if (0xCCCCCCC - cur < n) {
        void* p1 = (void*)0x80d400;
        sub_802458(&p1);
        void* p2 = (void*)0x80b110;
        sub_802898((char*)&p2 + 0x1c);
        void* p3 = (void*)0x80b11c;
        sub_80245c((char*)&p3 + 0x1c, &p1);
        sub_6a158c((char*)&p3 + 0x1c, (void*)0x8d0cc0);
    }
    field_18 = cur + n;
}
