// from server: 89% by atomic.potato
extern "C" void imported_destructor(void *);
extern "C" void __cdecl operator_delete(void *);

struct S
{
    int f(int);
};

int S::f(int value)
{
    char *p = reinterpret_cast<char *>(this) - 88;
    imported_destructor(p);
    if (value & 1)
        operator_delete(p);
    return reinterpret_cast<int>(p);
}
