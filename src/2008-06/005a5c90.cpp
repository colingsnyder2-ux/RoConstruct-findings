// from server: 23% by colin
struct String {
    char storage[28];
};

struct Property;

extern "C" {
    void __stdcall string_ctor(void*);
    void __stdcall string_dtor(void*);
    bool __cdecl func_0060a2f0();
}

extern void (__thiscall *string_construct)(void *);
extern bool (__cdecl *stringNotEqual)(const String&, const String&);
extern String& (__thiscall *stringAssign)(String*, const String&);

struct Data6 {
    unsigned long a, b, c, d, e, f;
};

struct Data4 {
    unsigned long a, b, c, d;
};

struct Argument {
    Data4 data;
    unsigned long extra;
};

struct S {
    char pad0[0x10];
    void* vt10;
    void* vt14;
    char pad18[8];
    void* vt20;
    void* vt24;
    char pad28[0x1c];
    void* vt44;
    char pad48[0x1c];
    void* vt64;
    char pad68[0x1c];
    void* vt84;
    char pad88[0x1c];
    void* vta4;
    char padA8[0x1c];
    void* vtc4;

    void f(int a, int b, int c);

    void call_55af90(void* p);
    void call_5a52c0(void* p);
    void call_5a5430(void* p);
    void call_5a55a0(void* p);
    void* call_5c9c70(void* p);
    void* call_5ca240(void* p);
    void call_5a2e30(void* p);
    void call_5a2e90(void* p);
    void call_5a2ef0(void* p);
    void call_5a2f50(void* p);
    void call_5a2860(void* p);
};

void S::f(int a, int b, int c) {
    string_construct(this);
    this->vt10 = (void*)0x8340a0;
    this->vt14 = (void*)0x834098;
    this->vt20 = (void*)0x834090;
    this->vt24 = (void*)0x834080;
    this->vt44 = (void*)0x834070;
    this->vt64 = (void*)0x834060;
    this->vt84 = (void*)0x834050;
    this->vta4 = (void*)0x834040;
    this->vtc4 = (void*)0x834030;
    *(void**)this = (void*)0x8340ac;

    String s;
    string_ctor(&s);
    call_55af90(&s);
    string_dtor(&s);

    int* p = (int*)a;
    int v428 = *(int*)((char*)p + 0x428);
    int v42c = *(int*)((char*)p + 0x42c);
    int v430 = *(int*)((char*)p + 0x430);
    int v434 = *(int*)((char*)p + 0x434);
    int v438 = *(int*)((char*)p + 0x438);

    int* q = (int*)b;
    int vfc = *(int*)((char*)q + 0xfc);
    int v104 = *(int*)((char*)q + 0x104);
    int v108 = *(int*)((char*)q + 0x108);
    int v110 = *(int*)((char*)q + 0x110);

    call_5a52c0((void*)0x82ffb4);
    call_5a2e30((void*)0x574fd0);
    call_5a5430((void*)0x834018);
    call_5a2e90((void*)0x5a0090);
    call_5a52c0((void*)0x834008);
    call_5a2e90((void*)0x5a00b0);
    call_5a52c0((void*)0x833ff8);
    call_5a2e90((void*)0x5a00d0);
    call_5a52c0((void*)0x833fec);
    call_5a2e90((void*)0x575690);
    call_5a52c0((void*)0x833fe0);

    void* r = call_5ca240((void*)v428);
    r = call_5ca240((void*)v42c);
    r = call_5ca240((void*)vfc);
    r = call_5ca240((void*)v104);
    r = call_5ca240((void*)v108);
    r = call_5ca240((void*)v110);
    r = call_5ca240((void*)v430);
    r = call_5ca240((void*)v434);
    r = call_5ca240((void*)v438);

    void* t = call_5c9c70((void*)0x833fd8);
    call_5a2ef0((void*)0x5a0490);
    call_5a55a0((void*)0x833fcc);
    call_5a2ef0((void*)0x574fc0);
    call_5a55a0((void*)0x833fc4);
    call_5a2ef0((void*)0x574fb0);
    call_5a55a0((void*)0x833fb8);

    void* u = call_5c9c70((void*)0x833fb8);
    call_5a2f50((void*)0x5e9160);
    call_5a55a0((void*)0x833fa8);
    call_5a2f50((void*)0x5e9160);
    call_5a55a0((void*)0x833f98);
    call_5a2f50((void*)0x5e9160);
    call_5a55a0((void*)0x833f88);
    call_5a2f50((void*)0x5e9160);
    call_5a55a0((void*)0x833f78);
    call_5a2ef0((void*)0x574fa0);
    call_5a55a0((void*)0x833f6c);
    call_5a2ef0((void*)0x5e9170);
    call_5a55a0((void*)0x833f5c);
    call_5a2ef0((void*)0x5e9180);
    call_5a55a0((void*)0x833f4c);

    void* v = call_5c9c70((void*)0x833f44);
    call_5a55a0((void*)0x833f30);
    call_5a55a0((void*)0x833f24);
    call_5a55a0((void*)0x833f1c);
    call_5a55a0((void*)0x833f10);
    call_5a55a0((void*)0x833f08);

    void* w = call_5c9c70((void*)0x833ef8);
    call_5a2860((void*)0x5a0120);
    call_5a52c0((void*)0x833ee8);
    call_5a2860((void*)0x5a00f0);
    call_5a52c0((void*)0x833ed4);
    call_5a2860((void*)0x5a0100);
    call_5a52c0((void*)0x833ec4);
    call_5a2860((void*)0x5a0110);
    call_5a52c0((void*)0x833eb4);
}
