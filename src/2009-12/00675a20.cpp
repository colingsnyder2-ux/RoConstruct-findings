// from server: 49% by atomic.potato
extern "C" void basic_string_copy(void *destination, const void *source);

struct S_func_00675a20 {
    char pad0[168];
    int f(const void *source);
};

int S_func_00675a20::f(const void *source)
{
    basic_string_copy((void *)(this + 168), source);
    return 0;
}
