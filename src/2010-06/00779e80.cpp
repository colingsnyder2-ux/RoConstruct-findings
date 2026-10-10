// from server: 60% by atomic.potato
struct VPartDragToolNamed
{
    VPartDragToolNamed *f(const char *);
    char pad[0x34];
    char flag;
};

extern "C" VPartDragToolNamed *construct_string(const char *);

VPartDragToolNamed *VPartDragToolNamed::f(const char *unused)
{
    const char *name = flag ? "GrabRotateCursor" : "DragCursor";
    construct_string(name);
    return this;
}
