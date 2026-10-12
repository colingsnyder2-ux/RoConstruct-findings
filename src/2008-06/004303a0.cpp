// from server: 97% by king_originala
struct Bar;

struct Rect
{
    int left;
    int top;
    int right;
    int bottom;

    Rect(Bar*);
};

extern "C" int (__stdcall *OffsetRect)(Rect*, int, int);

struct CommandBars
{
    int func_006a2a00(void*, Rect*, void*);
};

struct Bar
{
    char reserved0[0x100];
    int position;
    char reserved1[0x7C];
    void* menu;
};

struct CWrapperView
{
    char reserved[0xEC];
    CommandBars* commandBars;

    void func_006a0fc8(int, int, int, int, Rect*, Rect*, int);
    int func_004303a0(void*, Bar*);
};

int CWrapperView::func_004303a0(void* context, Bar* bar)
{
    func_006a0fc8(0xE800, 0xE8FF, 0xE900, 0, 0, 0, 1);

    Rect rect(bar);

    switch (bar->position)
    {
    case 2:
    case 3:
    case 5:
        OffsetRect(&rect, 0, rect.bottom - rect.top);
        break;
    default:
        OffsetRect(&rect, rect.right - rect.left, 0);
        break;
    }

    return commandBars->func_006a2a00(context, &rect, bar->menu);
}
