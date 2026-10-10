// from server: 40% by colin
struct MarshaledListener {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    MarshaledListener(int a, int b, int c, int d);
};

extern "C" void __stdcall sub_454150(int);

MarshaledListener::MarshaledListener(int a, int b, int c, int d) {
    vtable = (void*)0x794b88;
    field4 = 0;
    field8 = 0;
    fieldC = a;
    field10 = b;
    field14 = c;
    sub_454150(d);
}
