// from server: 97% by atomic.potato
struct S
{
    int f(int);
};

extern "C" void sub_760180(void *, void *, int);

int S::f(int value)
{
    sub_760180((char *)this + 0xa8, (char *)this + 0xb0, value);
    return value;
}
