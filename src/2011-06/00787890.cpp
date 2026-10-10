// from server: 57% by atomic.potato
struct GlueTool
{
    int value;
};

extern "C" void __cdecl sub_basic_string(void*, const char*);

GlueTool* __stdcall sub_787890(GlueTool* object)
{
    sub_basic_string((void*)0x00AB8E6C, "GlueCursor");
    return object;
}
