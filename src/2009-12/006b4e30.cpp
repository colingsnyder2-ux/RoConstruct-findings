// from server: 90% by atomic.potato
struct S
{
    int vtable;
    int field4;
    int field8;
    int fieldc;
    int field10;
    int field14;
    int field18;
    int field1c;

    void f();
};

void S::f()
{
    vtable = 0x9d5dd4;
    field4 = 0x9d5dc8;
    field18 = 0x9d5dbc;
    field1c = 0x9d5db4;
}
