// from server: 45% by atomic.potato
struct S
{
    int (**vtable)(void *, int);
    void *unknown;
    char *data;
    int f(void *, int);
};

int S::f(void *p, int value)
{
    if (p != 0)
        return (*vtable)(data + ((char *)p - (char *)20), value);
    return (*vtable)(data, value);
}
