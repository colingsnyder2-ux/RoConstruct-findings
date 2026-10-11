// from server: 48% by colin
// roc 2008-06 00658170  unit: RBX::ArrowButton  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00658170

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct String {
    void ctor();
    void dtor();
    void assign(const String&);
};

struct ArrowButton {
    void* field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    String field18;
    void* construct(int, int, int, int, int, int, int);
};

void* ArrowButton::construct(int a, int b, int c, int d, int e, int f, int g) {
    void* p = operator_new(4);
    if (p != 0) {
        *(void**)p = this;
    } else {
        p = 0;
    }
    field0 = p;
    fieldC = 0;
    field10 = 0;
    field14 = 0;
    field18.ctor();
    String tmp;
    field18.assign(tmp);
    tmp.dtor();

    return this;
}
