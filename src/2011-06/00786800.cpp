// from server: 63% by atomic.potato
struct AxisMoveTool
{
    int pad[10];
    AxisMoveTool& f(const AxisMoveTool& value);
};

extern "C" AxisMoveTool& __cdecl sub_786830(AxisMoveTool*, const AxisMoveTool*);

AxisMoveTool& AxisMoveTool::f(const AxisMoveTool& value)
{
    AxisMoveTool* target = (AxisMoveTool*)((char*)this + 40);
    sub_786830(target, &value);
    return *(AxisMoveTool*)&value;
}
