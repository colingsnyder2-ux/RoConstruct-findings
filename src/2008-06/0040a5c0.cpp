// from server: 53% by atomic.potato
struct S
{
    struct V
    {
        unsigned char (*f)(V *, void *);
    };

    V *value;
    int equals(void *, void *);
};

int S::equals(void *a, void *b)
{
    unsigned char x;
    unsigned char y;

    x = value->f(value, a);
    y = value->f(value, b);
    return x == y;
}
