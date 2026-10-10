// from server: 73% by atomic.potato
struct S
{
    int f(void *);
    char pad[52];
};

extern "C" void __stdcall G1_func_0098b6f4(void *, const char *);

int S::f(void *arg)
{
    G1_func_0098b6f4(arg, pad[52] ? "GrabRotateCursor" : "DragCursor");
    return (int)arg;
}
