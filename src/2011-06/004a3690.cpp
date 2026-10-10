// from server: 57% by atomic.potato
extern "C" void *std_string_copy(void *, const void *);

struct S
{
    char pad[0xb0];
    void f(void *);
};

void S::f(void *arg)
{
    char *p = pad + 0xb0;
    int zero = 0;
    std_string_copy(arg, p);
}
