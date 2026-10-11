// from server: 72% by atomic.potato
extern "C" void sub_0057e730(void *, void *);
extern "C" void std_string_ctor(void *, const char *);
extern "C" int g_00802458;

struct S {
    int f(const char *);
};

int S::f(const char *p)
{
    char s[28];
    std_string_ctor(s, p);
    sub_0057e730(this, s);
    *(int *)this = 0x8307c4;
    return (int)this;
}
