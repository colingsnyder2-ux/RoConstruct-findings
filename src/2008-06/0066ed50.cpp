// from server: 66% by atomic.potato
struct Sub5;

struct Sub1 {
    char pad[0x228];
    void method(int);
};

struct Sub2 {
    void method();
};

struct Sub4 {
    void method(Sub5*);
};

struct Sub3 {
    char pad[0x21c];
    Sub4* get();
};

struct Sub5 {
    void method();
};

struct Sub6 {
    void method(Sub1*);
};

struct Sub7 {
    void method();
};

struct MovingNoPhysicsBase {
    char pad0[0xa0];
    Sub5 field_a0;
    char pad1[0x20];
    Sub1* field_c4;
    char pad2[0x8];
    Sub2 field_d0;
    char pad3[0x4];
    Sub6* field_cc;

    void func();
};

void MovingNoPhysicsBase::func() {
    Sub1* p = field_c4;
    if (p) {
        Sub1* q = (Sub1*)((char*)p + 0x228);
        if (q) {
            q->method(0);
        }
    }
    field_d0.method();
    Sub3* s3 = (Sub3*)this;
    Sub4* s4 = s3->get();
    s4->method(&field_a0);
    Sub7* s7 = (Sub7*)s4;
    s7->method();
    Sub6* s6 = field_cc;
    s6->method(field_c4);
    ((Sub2*)((char*)this + 0xc4))->method();
}
