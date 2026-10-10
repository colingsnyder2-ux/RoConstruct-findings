// from server: 58% by atomic.potato
extern "C" void __stdcall G1_construct_string(void *, const char *);

struct S
{
    char padding[40];
    char named;
    int f(const char *);
};

int S::f(const char *arg)
{
    const char *text = named ? "GrabRotateCursor" : "DragCursor";
    G1_construct_string((void *)0, text);
    return (int)this;
}
