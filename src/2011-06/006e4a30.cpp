// from server: 64% by atomic.potato
struct S
{
    unsigned int pad[39];
    unsigned int value;
    void f(unsigned char enabled);
};

void S::f(unsigned char enabled)
{
    value = (value & 0xfffffffbU) | (enabled ? 0U : 4U);
}
