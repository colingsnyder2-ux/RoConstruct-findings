// from server: 70% by atomic.potato
extern "C" int sub_995e00(void *, void *);

struct S
{
    int f(int);
};

int S::f(int value)
{
    return sub_995e00((char *)this + 0x20, (void *)&value) ? value : 0;
}
