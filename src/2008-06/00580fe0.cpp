// from server: 61% by atomic.potato
typedef int (*Callback)();

struct DuplicateSelectionVerb
{
    int f();
};

int DuplicateSelectionVerb::f()
{
    int value;
    int count;

    value = *((int *)((char *)this + 0x20));
    if (value)
        value = ((Callback)value)();
    else
        value = 0;

    value = *((int *)((char *)value + 0x154));
    count = *((int *)((char *)value + 0x10)) -
            *((int *)((char *)value + 0x0c));

    return (count >> 3) != 0;
}
