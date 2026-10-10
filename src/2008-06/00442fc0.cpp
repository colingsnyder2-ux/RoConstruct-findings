// from server: 80% by atomic.potato
typedef int (__cdecl *FunctionType)(void *, const void *, const void *, int);

struct Classes
{
    int f(void *);
};

int Classes::f(void *value)
{
    FunctionType function = (FunctionType)0x006a17c6;
    return function(value, (const void *)0x0092907c, (const void *)0x0092ac4c, 0) != 0;
}
