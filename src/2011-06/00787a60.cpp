// from server: 66% by atomic.potato
extern "C" void* __cdecl sub_00A404C4(void*, const char*);

struct WeldTool
{
    WeldTool& f(const char*);
};

WeldTool& WeldTool::f(const char* value)
{
    sub_00A404C4((void*)this, "WeldCursor");
    return *this;
}
