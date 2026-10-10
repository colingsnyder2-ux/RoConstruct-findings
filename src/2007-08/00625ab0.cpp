// from server: 73% by colin
struct PartDragTool {
    char pad[0x30];
    bool flag;
    void* MakeCursor(void* arg);
};

extern "C" void __stdcall SetCursorString(void* self, const char* name);

void* PartDragTool::MakeCursor(void* arg)
{
    const char* name = flag ? "GrabRotateCursor" : "DragCursor";
    void* result = arg;
    SetCursorString(arg, name);
    return result;
}
