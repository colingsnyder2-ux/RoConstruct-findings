// from server: 48% by colin
struct Inner {
    char pad0[4];
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
};

struct Outer {
    Inner* field0;
    char pad4[4];
    Outer* construct();
};

extern "C" void* __cdecl func_62fef6(unsigned int);
extern "C" void __cdecl func_40cc20(void*, void*, void*);
extern "C" void __cdecl func_5527c0(void*, void*);
extern "C" void __cdecl func_5a0100(void*);

Outer* Outer::construct() {
    Inner* q = (Inner*)func_62fef6(0x20);
    if (q != 0) {
        func_5a0100(q);
        q->field4 = 0;
        q->field8 = 0;
        q->fieldC = 0;
        q->field10 = 0x1000;
        q->field14 = 0x80;
        q->field18 = 4;
        q->field1C = 4;
    } else {
        q = 0;
    }
    field0 = q;
    func_5527c0((char*)this + 4, q);
    func_40cc20((char*)this + 4, q, q);
    return this;
}
