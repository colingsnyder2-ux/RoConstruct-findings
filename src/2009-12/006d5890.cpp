// from server: 85% by atomic.potato
extern "C" void __stdcall construct_string(void*, const char*);

struct HingeTool
{
    int f(void*);
};

int HingeTool::f(void* arg)
{
    void* value = 0;
    construct_string(&value, "HingeCursor");
    return (int)this;
}
