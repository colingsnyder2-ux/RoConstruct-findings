// from server: 60% by atomic.potato
extern "C" void __stdcall sub_6404C4(void*, const char*, int);

struct DecalTool
{
    DecalTool(const char*);
};

DecalTool::DecalTool(const char*)
{
    sub_6404C4(this, "ArrowCursorDecalDrag", 0);
}
