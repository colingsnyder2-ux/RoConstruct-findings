// from server: 51% by atomic.potato
typedef double (__cdecl *ConvertFunction)(void *, double);
typedef void (__thiscall *ApplyFunction)(void *, double *, double);

extern double __cdecl G1_func_005641e0(void *, double);

struct S
{
    void f(double);
    void *member18;
};

void S::f(double value)
{
    double converted = G1_func_005641e0(0, value);
    void *object = member18;
    ApplyFunction apply = *(ApplyFunction *)(*(void ***)object + 12);
    apply(object, &converted, value);
}
