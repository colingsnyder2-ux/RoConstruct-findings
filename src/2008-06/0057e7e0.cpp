// from server: 59% by atomic.potato
extern "C" void sub_57e730(void *);
extern "C" void ctor_string(void *, const char *);
extern void *g_call;
extern const char *g_text;
extern int g_vftable;

struct S
{
    S *f(void *);
};

S *S::f(void *arg)
{
    char local[28];
    S *self = this;
    ctor_string(local, "Duplicate");
    sub_57e730(self);
    *(int *)self = g_vftable;
    return self;
}
