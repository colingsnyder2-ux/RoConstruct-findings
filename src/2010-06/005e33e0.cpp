// from server: 51% by atomic.potato
extern "C" void std_string_ctor(const char *, const char *);

struct S
{
    int f(const char *);
};

int S::f(const char *s)
{
    char buffer[28];
    std_string_ctor(buffer, "Duplicate");
    *(int *)this = 0xA2E45C;
    return (int)this;
}
