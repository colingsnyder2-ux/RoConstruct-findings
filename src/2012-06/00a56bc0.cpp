// from server: 32% by atomic.potato
extern "C" int __stdcall call_00b24658(void *);

struct S
{
    int f(int);
};

int S::f(int value)
{
    if (value < 0)
        return 0;
    if (value < call_00b24658((char *)this + 132))
        return 1;
    return 0;
}
