// from server: 65% by atomic.potato
extern "C" void sub_57e730(void *, void *);
extern "C" void sub_802458(void *, const char *);

struct S {
    S *f(int);
};

S *S::f(int value)
{
    S *self = this;
    char local[28];

    sub_802458(local, "Duplicate");
    sub_57e730(self, local);
    *(int *)self = 0x8307ac;
    return self;
}
