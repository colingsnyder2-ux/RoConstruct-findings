// from server: 43% by atomic.potato
typedef unsigned char byte;

struct S
{
    int f(int);
    void *vtable;
};

extern "C" byte sub_40a7e0(void *, int);

int S::f(int value)
{
    byte result = sub_40a7e0(this, value);
    return ((int (__fastcall *)(void *, byte *, byte *))(*(unsigned char ***)vtable + 3))(vtable, &result, &result);
}
