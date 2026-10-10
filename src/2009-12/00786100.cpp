// from server: 61% by atomic.potato
extern "C" void __stdcall ConstructString(void *, const char *);

struct ArrowTool
{
    char pad[28];
    unsigned char dragging;
    int f(const char *);
};

int ArrowTool::f(const char *unused)
{
    const char *name = dragging ? "DragCursor" : "ArrowCursor";
    ConstructString((void *)0x98b6f4, name);
    return (int)this;
}
