// from server: 64% by atomic.potato
extern "C" void *std_string_ctor(void *, const char *);

struct GlueTool
{
    GlueTool *f(void *);
};

GlueTool *GlueTool::f(void *arg)
{
    void *s = arg;
    std_string_ctor((char *)s + 0, "GlueCursor");
    return (GlueTool *)s;
}
