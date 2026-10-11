// from server: 65% by atomic.potato
extern "C" void basic_string_ctor(void *, const char *);
extern "C" void sub_57e730(void *, void *);

struct S
{
    int f(const char *);
};

int S::f(const char *arg)
{
    char local[28];
    basic_string_ctor(local, "FilteredSelection");
    sub_57e730(this, local);
    *(void **)this = (void *)0x830848;
    return (int)this;
}
