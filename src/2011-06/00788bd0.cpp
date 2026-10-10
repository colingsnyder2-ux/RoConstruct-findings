// from server: 59% by atomic.potato
struct FillTool
{
    FillTool();
    int value;
};

extern "C" void __cdecl sub_788BD0(void*, const char*);

FillTool::FillTool()
{
    value = 0;
    sub_788BD0(this, "FillCursor");
}
