// from server: 56% by atomic.potato
extern "C" void std_string_ctor(void *, const char *);

struct GroupDropTool
{
    GroupDropTool *f(void *);
};

GroupDropTool *GroupDropTool::f(void *arg)
{
    char buffer[16];
    std_string_ctor(buffer, "DropCursor");
    return this;
}
