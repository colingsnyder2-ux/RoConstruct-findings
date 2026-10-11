// from server: 65% by atomic.potato
extern "C" void sub_0057e730(void *, void *);
extern "C" void std_string_ctor(void *, const char *);

struct S {
    int f(const char *);
};

int S::f(const char *p)
{
    char local[28];
    std_string_ctor(local, "Duplicate");
    sub_0057e730(this, local);
    *(int *)this = 0x8307dc;
    return (int)this;
}
