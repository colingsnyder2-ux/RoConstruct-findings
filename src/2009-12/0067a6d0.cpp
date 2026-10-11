// from server: 56% by atomic.potato
struct S
{
    int f(const char *);
};

extern "C" void sub_67a5c0(S *);
extern "C" void string_ctor(void *, const char *);

int S::f(const char *arg)
{
    char local[28];
    string_ctor(local, "d$XP");
    sub_67a5c0(this);
    *(void **)this = (void *)0x9cfdc4;
    return (int)this;
}
