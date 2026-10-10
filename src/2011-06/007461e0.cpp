// from server: 53% by atomic.potato
struct S
{
    int f();
};

extern "C" void sub_745e10(S *, unsigned char *, int *);

int S::f()
{
    int value = 0;
    unsigned char flag = 0;
    sub_745e10(this, &flag, &value);
    return (int)this;
}
