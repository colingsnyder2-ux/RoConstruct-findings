// from server: 57% by atomic.potato
extern "C" void std_string_copy(void *, const void *);

struct S_func_006f4270 {
    char pad0[152];
    void f(const void *);
};

void S_func_006f4270::f(const void *arg)
{
    char *dst = reinterpret_cast<char *>(this) + 152;
    std_string_copy(dst, arg);
}
