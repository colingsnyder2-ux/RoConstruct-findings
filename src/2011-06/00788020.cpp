// from server: 72% by atomic.potato
extern "C" void __stdcall basic_string_ctor(void *, const char *);

struct UniversalTool
{
    int f(void *);
};

int UniversalTool::f(void *arg)
{
    void *value = 0;
    basic_string_ctor(&value, "UniversalCursor");
    return (int)arg;
}
