// from server: 60% by atomic.potato
extern "C" void construct_string(void*, const char*);

struct HammerTool
{
    int state;
    int a;
    int b;
    int cursor;
    HammerTool* f(int);
};

HammerTool* __thiscall HammerTool::f(int)
{
    const char* name = cursor ? "HammerOverCursor" : "HammerCursor";
    construct_string(this, name);
    return this;
}
