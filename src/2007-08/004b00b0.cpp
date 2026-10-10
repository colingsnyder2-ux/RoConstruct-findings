// from server: 30% by colin
struct S {
    char pad0[4];
    void* field4;
    void* field8;
    char padC[0x1c];
    int f();
};

extern "C" void __stdcall sub_630AF7(void*, int, int, void*);
extern "C" void __stdcall sub_4673A0(void*, void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_62FC62(void*);

int S::f() {
    sub_630AF7((char*)this + 0xc, 0x1c, 0x80, *(void**)0x77e6ac);
    void* p = this->field4;
    void* q = *(void**)p;
    sub_4673A0(this, &p, this, q, this, p);
    sub_62FC62(this->field4);
    this->field4 = 0;
    this->field8 = 0;
    return 0;
}
