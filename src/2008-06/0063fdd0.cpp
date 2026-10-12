// from server: 95% by king_originala
struct S_func_006159f0 {
    int f(int a1);
};

struct CloneTool {
    CloneTool* f(int a1);
};

CloneTool* CloneTool::f(int a1)
{
    ((S_func_006159f0*)this)->f(a1);
    *(volatile int*)((char*)this + 0) = 0x84a4dc;
    *(volatile int*)((char*)this + 4) = 0x84a4c0;
    *(volatile int*)((char*)this + 0x1c) = 0;
    *(volatile int*)((char*)this + 0x20) = 0;
    return this;
}
