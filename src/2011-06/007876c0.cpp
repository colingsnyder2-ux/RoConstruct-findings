// from server: 56% by atomic.potato
extern "C" void* sub_00A404C4(void*, const char*);

struct FlatTool
{
    FlatTool(const char*);
};

FlatTool::FlatTool(const char* value)
{
    sub_00A404C4(this, value);
}
