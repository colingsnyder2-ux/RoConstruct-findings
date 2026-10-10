// from server: 48% by atomic.potato
extern void G1_func_00479f50(void *);

struct DropperTool
{
    DropperTool * __cdecl f(int);
};

DropperTool *DropperTool::f(int value)
{
    G1_func_00479f50((void *)value);
    return this;
}
