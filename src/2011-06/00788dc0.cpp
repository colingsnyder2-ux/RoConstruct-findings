// from server: 72% by atomic.potato
extern "C" void* __stdcall basic_string_ctor(void*, const char*);

struct MaterialTool
{
    MaterialTool* f(const char*);
};

MaterialTool* MaterialTool::f(const char* value)
{
    basic_string_ctor((void*)0xAB9710, "MaterialCursor");
    return this;
}
