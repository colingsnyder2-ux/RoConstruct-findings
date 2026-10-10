// from server: 35% by atomic.potato
struct RightMotorTool
{
    RightMotorTool* f(const char*);
};

extern "C" RightMotorTool* sub_007883e0(RightMotorTool*, const char*);

RightMotorTool* RightMotorTool::f(const char* text)
{
    return sub_007883e0(this, text);
}
