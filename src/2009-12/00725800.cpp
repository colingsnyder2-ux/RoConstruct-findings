// from server: 70% by atomic.potato
struct S
{
    unsigned char pad[0x9c];
    unsigned long value;
    void f(unsigned char flag);
};

void S::f(unsigned char flag)
{
    value = (value & ~4UL) | ((unsigned long)(-(int)flag) & 4UL);
}
