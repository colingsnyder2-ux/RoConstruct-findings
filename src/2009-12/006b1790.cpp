// from server: 50% by atomic.potato
struct DropperTool {
    int __cdecl f(int a, int b);
};

extern "C" void sub_00454bc0(DropperTool *, int);

int DropperTool::f(int a, int b)
{
    sub_00454bc0(this, 0);
    return (int)this;
}
