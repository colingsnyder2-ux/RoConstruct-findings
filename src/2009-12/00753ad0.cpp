// from server: 81% by atomic.potato
struct S_00753ad0
{
    char pad0[0xD0];
    int* m_value;
    int f();
};

int S_00753ad0::f()
{
    return ((int*)m_value[0xF4 / 4])[0x2C / 4];
}
