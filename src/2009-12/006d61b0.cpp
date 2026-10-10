// from server: 46% by atomic.potato
extern "C" void *basic_string_ctor(void *, const char *);

struct DropperTool {
    char pad[4];
    void *m_string;
    DropperTool *f(void *);
};

DropperTool *DropperTool::f(void *arg)
{
    basic_string_ctor(&m_string, "DropperCursor");
    return this;
}
