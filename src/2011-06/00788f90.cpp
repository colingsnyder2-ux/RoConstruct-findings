// from server: 66% by atomic.potato
extern "C" void* sub_00788f90(void*, const char*);

struct DropperTool
{
    void* f(const char*);
};

void* DropperTool::f(const char* s)
{
    sub_00788f90((void*)this, "DropperCursor");
    return this;
}
