// from server: 69% by atomic.potato
struct S
{
    int f(int);
    char pad0[0x20];
    int value;
    char pad1[0x20];
};

extern "C" void sub_7bbfaa(S *);
extern "C" void sub_6a30c0(void *);

int S::f(int value)
{
    sub_7bbfaa(this);
    sub_6a30c0((char *)this + 0x24);
    this->value = value;
    *(int *)this = 0x850494;
    return (int)this;
}
