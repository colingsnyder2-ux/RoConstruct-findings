// from server: 31% by atomic.potato
struct S {
    void* vfptr;
    char pad0[0x1c];
    void* field20;
    char pad1[0x18];
    void* field3c;
    char pad2[0x18];
    int field58;
    void* field5c;
    char pad3[0x8];
    int field68;
    int field6c;
    int field70;
    S* construct(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" void* __stdcall sub_89e4b8(void*);
extern "C" void __stdcall sub_89e4c4(void*);
extern "C" void* __cdecl sub_718a38(int);

S* S::construct(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22)
{
    void* p1;
    void* p2;
    void* p3;

    this->vfptr = (void*)0x8bd960;
    sub_89e4b8(&p1);
    sub_89e4b8(&p2);
    sub_89e4b8(&p3);
    this->field58 = a22;
    void* q = sub_718a38(4);
    if (q) {
        *(void**)q = &this->field5c;
    } else {
        q = 0;
    }
    this->field5c = q;
    this->field68 = 0;
    this->field6c = 0;
    this->field70 = 0;
    sub_89e4c4(&p1);
    sub_89e4c4(&p2);
    sub_89e4c4(&p3);
    return this;
}
