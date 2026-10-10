// from server: 78% by atomic.potato
struct S
{
    int f(int);
};

extern "C" void __stdcall CallUnknown(void *, int *);

int S::f(int value)
{
    int zero = 0;
    CallUnknown((char *)this + 0xac, &zero);
    return value;
}
