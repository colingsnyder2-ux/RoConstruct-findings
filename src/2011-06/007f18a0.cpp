// from server: 64% by atomic.potato
struct BasicString
{
    BasicString(const char*);
};

struct AdvArrowTool
{
    AdvArrowTool* f(const char* value);
};

AdvArrowTool* AdvArrowTool::f(const char* value)
{
    AdvArrowTool* result = this;
    BasicString command("advancedMove");
    return result;
}
