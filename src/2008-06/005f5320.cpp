// from server: 70% by atomic.potato
struct S
{
    unsigned char pad0[0x8c];
    void* value;
    unsigned char pad1[0x0c];
    unsigned char flags;
    void f(void*);
};

typedef void (__thiscall *P1)(void*, void*);
typedef void (__thiscall *P2)(void*);

extern P1 g_802568;
extern P2 g_802564;

void S::f(void* arg)
{
    if ((flags & 1) != 0 && value != 0)
    {
        g_802568(value, arg);
        g_802564(&value);
    }
}
