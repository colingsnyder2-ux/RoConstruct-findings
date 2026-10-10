// from server: 80% by atomic.potato
extern "C" int __stdcall sub_86ac70(void *, int, int);

struct S
{
    int value;
    int f(int);
};

int S::f(int arg)
{
    return sub_86ac70((char *)this + 0x2c, value, arg);
}
