// from server: 66% by atomic.potato
extern "C" void construct_string(void *, const char *);

struct InletTool
{
    InletTool(const char *);
};

InletTool::InletTool(const char *value)
{
    construct_string((char *)this, "InletCursor");
}
