// from server: 63% by atomic.potato
extern "C" void sub_57e730(void *, void *);
extern "C" void basic_string_ctor(void *, const char *);

struct S {
    void f(void *);
};

void S::f(void *arg)
{
    char local[28];
    basic_string_ctor(local, "Duplicate");
    sub_57e730(this, local);
    *(void **)this = (void *)0x8307f4;
}
