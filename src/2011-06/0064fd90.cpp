// from server: 57% by atomic.potato
struct DropperTool
{
    DropperTool * __cdecl f(void *arg);
};

struct DropperTool;

extern "C" void sub_46F000(DropperTool *, void *, int);

DropperTool *DropperTool::f(void *arg)
{
    sub_46F000(this, arg, 0);
    return this;
}
