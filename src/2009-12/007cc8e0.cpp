// from server: 73% by atomic.potato
struct S
{
    unsigned char pad[0x28];
    unsigned char flag;
    int f(const char *);
};

extern "C" void __stdcall G1_func_0098b6f4(const char *, const char *);

int S::f(const char *arg)
{
    const char *value = flag ? "GrabRotateCursor" : "DragCursor";
    G1_func_0098b6f4(arg, value);
    return (int)arg;
}
