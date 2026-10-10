// from server: 61% by atomic.potato
extern "C" void std_string_copy(void*, const void*);

struct S_func_0059e2d0
{
    int __cdecl f(const void* value);
};

int S_func_0059e2d0::f(const void* value)
{
    std_string_copy(this, value);
    return (int)this;
}
