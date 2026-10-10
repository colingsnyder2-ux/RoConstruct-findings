// from server: 51% by atomic.potato
typedef int (__thiscall *LookupFunction)(void*, int);
typedef int (__thiscall *TargetFunction)(void*);

extern LookupFunction lookupFunction;
extern TargetFunction targetFunction;

struct S
{
    int value0;
    int value4;
    int value8;
    int valueC;
    int value10;
    int value14;
    int value18;

    int f(int);
};

int S::f(int)
{
    value18 = 1;
    if (value14 == 0)
        return 0;

    int result = lookupFunction(this, value8);
    if (result == 0)
        return 0;

    return targetFunction((void*)result);
}
