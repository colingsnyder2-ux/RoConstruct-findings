// from server: 43% by atomic.potato
struct S_func_008ac780 {
    virtual void f0(int);
    void f1(int);
    unsigned char pad[0x3c];
    unsigned char flags;
};

void S_func_008ac780::f1(int)
{
    if (flags & 0x10)
        f0(2);
}
