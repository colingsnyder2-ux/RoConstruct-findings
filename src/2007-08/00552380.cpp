// from server: 31% by colin
// roc 2007-08 00552380  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552380

struct Inner {
    char pad[0x40];
    void method(int);
};

struct Outer {
    char pad[0xa0];
    int field_a0;
    void func(int);
};

extern "C" void __stdcall sub_54E200(int);
extern "C" void __stdcall sub_54E990(int);

void Outer::func(int arg)
{
    sub_54E200(arg);
    int v = this->field_a0;
    if ((arg & 1) == 1) {
        int tmp = arg;
        sub_54E990(v);
    }
}
