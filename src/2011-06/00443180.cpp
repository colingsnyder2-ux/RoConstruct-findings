// from server: 61% by atomic.potato
struct S
{
    int (__thiscall *vtable_call)(S *, unsigned char);
    unsigned char XItem(const char *);
};

unsigned char S::XItem(const char *value)
{
    return (unsigned char)vtable_call(this, *value);
}
