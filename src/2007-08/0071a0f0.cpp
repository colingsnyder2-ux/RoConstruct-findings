// from server: 71% by colin
struct QPoint
{
    int x;
    int y;
};

struct QRect
{
    int x1;
    int y1;
    int x2;
    int y2;
};

extern "C" int __stdcall PtInRect(const QRect* rect, QPoint pt);

struct RibbonSystemPopupBar
{
    char pad[0x180];
    void* field_180;

    int method_71a0f0(int a, int b);
};

extern int func_00719970(void*);
extern int func_00630202(int);
extern int func_0063020e(void*, void*);
extern int func_006479a0(void*, int, int);

int RibbonSystemPopupBar::method_71a0f0(int a, int b)
{
    int result = func_00630202(func_00719970(field_180));
    if (result == 0)
    {
        return func_006479a0(this, a, b);
    }

    char* p = (char*)field_180;
    QRect rect;
    rect.x1 = *(int*)(p + 0xc0);
    rect.y1 = *(int*)(p + 0xc4);
    rect.x2 = *(int*)(p + 0xc8);
    rect.y2 = *(int*)(p + 0xcc);

    QPoint pt;
    func_0063020e((void*)(p + 0xfc), &pt);

    if (PtInRect(&rect, pt) != 0)
    {
        return -1;
    }

    return func_006479a0(this, a, b);
}
