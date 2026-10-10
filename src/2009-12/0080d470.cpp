// from server: 94% by atomic.potato
extern "C" int __stdcall sub_80c980(void *, int, int *);

struct S
{
    int f(int);
};

int S::f(int value)
{
    return sub_80c980((char *)this + 0x28, value, &value) ? value : 0;
}
