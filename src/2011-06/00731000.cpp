// from server: 88% by atomic.potato
extern void G1_func_00730df0();

struct S
{
    char padding[0x98];
    short value;
    short f();
};

short S::f()
{
    G1_func_00730df0();
    return (short)value;
}
