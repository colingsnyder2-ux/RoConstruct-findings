// from server: 66% by atomic.potato
extern "C" void std_string_ctor(void*, const char*);
extern const char g_direction_cursor[];

struct ModelSetFrontTool
{
    ModelSetFrontTool(const char*);
};

ModelSetFrontTool::ModelSetFrontTool(const char*)
{
    std_string_ctor((void*)this, g_direction_cursor);
}
