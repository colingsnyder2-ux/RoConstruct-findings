// from server: 60% by atomic.potato
extern "C" void *G1_func_00a404c4(void *, const char *);

struct S {
    char pad[44];
    unsigned char flag;
    void *f(void *);
};

void *S::f(void *arg)
{
    const char *value = flag ? "DragCursor" : "GrabRotateCursor";
    G1_func_00a404c4(arg, value);
    return arg;
}
