// from server: 87% by atomic.potato
extern "C" void __cdecl _invalid_parameter_noinfo();

struct LuaArguments
{
    int f(void *);
};

int __thiscall LuaArguments::f(void *other)
{
    if (*(int *)((char *)this + 4) != 0 &&
        *(int *)((char *)this + 4) != *(int *)((char *)other + 4))
        _invalid_parameter_noinfo();

    return *(int *)((char *)this + 8) != *(int *)((char *)other + 8);
}
