// from server: 65% by colin
struct AnchorTool {
    char pad[0x20];
    int m_flag20;
    char pad2[4];
    bool m_allAnchored;
    void* getCursorName();
};

extern "C" void* __stdcall string_ctor(void* self, const char* s);

void* AnchorTool::getCursorName()
{
    void* result = (void*)0;
    if (m_flag20 != 0 && m_allAnchored) {
        string_ctor(&result, "AnchorCursor");
    } else {
        string_ctor(&result, "UnAnchorCursor");
    }
    return result;
}
