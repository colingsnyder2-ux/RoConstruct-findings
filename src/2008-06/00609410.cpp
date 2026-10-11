// from server: 35% by colin
struct S {
    void* field0;
    void f(int a, int b, int c, int d, int e, int f, int g);
};

struct T {
    void method(void* p);
};

extern "C" void* __stdcall sub_608E90(void* out, void* in);
extern "C" void* __stdcall sub_585090(int a, int b);
extern "C" void __cdecl sub_6A067A(void* p);

void S::f(int a, int b, int c, int d, int e, int f, int g) {
    void* local[3];
    local[0] = (void*)a;
    local[1] = (void*)b;
    local[2] = (void*)c;
    void* tmp = 0;
    void* r = sub_608E90(&tmp, local);
    void* v = *(void**)r;
    *(void**)r = 0;
    void* r2 = sub_585090(d, e);
    ((T*)this)->method(r2);
    if (tmp) {
        sub_6A067A(tmp);
    }
    this->field0 = (void*)0x8428b8;
}
