// from server: 58% by atomic.potato
struct S {
    int (**vtable)();
    int f();
};

int S::f()
{
    int (*fn)(int) = (int (*)(int))vtable[119];
    int unused = 0;
    return fn(0);
}
