// from server: 44% by colin
struct Vector3Item {
    char pad0[0x20];
    char pad20[0x100 - 0x20];
    char pad100[0x11c - 0x100];
    int field11c;
    void construct(int a, int b);
    void init(int a);
};

extern "C" void __stdcall sub_43c9d0(int a, int b);
extern "C" void __stdcall sub_698cc0(int a);

void Vector3Item::construct(int a, int b) {
    sub_43c9d0(a, b);
    *(void**)this = (void*)0x78ea54;
    *(void**)((char*)this + 0x20) = (void*)0x78e9f4;
    *(void**)((char*)this + 0x100) = (void*)0x78e9e8;
    field11c = a;
    sub_698cc0(1);
}
