// from server: 90% by atomic.potato
struct S
{
    unsigned char pad[0x9c];
    unsigned int value;
    void f(unsigned int enabled);
};

void S::f(unsigned int enabled)
{
    value = (value & 0xffffffefu) | (enabled ? 0u : 0x10u);
}
