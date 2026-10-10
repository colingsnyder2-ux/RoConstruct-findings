// from server: 51% by colin
struct S {
    void* field0;
    char pad[0x40];
    S* construct();
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl sub_40CC20(void*, void*, void*);
extern "C" void __cdecl sub_552730(void*, void*);
extern "C" void* __cdecl sub_5A0100(void*);

S* S::construct() {
    S* p = (S*)operator_new(0x20);
    if (p != 0) {
        *(void**)((char*)p + 4) = sub_5A0100(p);
        *(int*)((char*)p + 8) = 0;
        *(int*)((char*)p + 12) = 0;
        *(int*)((char*)p + 16) = 0x1000;
        *(int*)((char*)p + 20) = 0x80;
        *(int*)((char*)p + 24) = 4;
        *(int*)((char*)p + 28) = 4;
    } else {
        p = 0;
    }
    field0 = p;
    sub_552730((char*)this + 4, p);
    sub_40CC20((char*)this + 4, p, p);
    return this;
}
