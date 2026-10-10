// from server: 90% by colin
struct Sub1 {
    virtual void f0();
    virtual void f1();
    virtual void f2(int);
};

struct Sub2 {
    void method(int);
};

struct S {
    char pad[0x140];
    Sub2 sub2;
    char pad2[0x1c0 - 0x140 - sizeof(Sub2)];
    int field_1c0;
    void func(int);
};

void S::func(int a)
{
    int* p = (int*)(field_1c0 + 4);
    Sub1* obj = (Sub1*)*p;
    obj->f2(a);
    sub2.method(a);
}
