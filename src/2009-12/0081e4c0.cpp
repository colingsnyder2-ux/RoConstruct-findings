// from server: 82% by atomic.potato
struct S {
    int field_000[162];
    int f();
};

int call_81c4d0(int);

int S::f()
{
    return call_81c4d0(*(int *)((char *)field_000[162] + 0x94));
}
