// from server: 95% by king_originala
struct Rect
{
    int left, top, right, bottom;
};

extern "C" int (__stdcall *GetClientRect)(void *, Rect *);

struct Window;
typedef void (__thiscall *RefreshFunction)(Window *);

struct WindowTable
{
    void *reserved[84];
    RefreshFunction refresh;
};

struct Window
{
    WindowTable *table;
    char reserved0[28];
    void *handle;
    char reserved1[244];

    void move(int, int, int, int, int);
    void getRow(int, int *, int *);
    void setRow(int, int, int);
};

struct CObjectBrowser
{
    char reserved[88];
    Window first;
    Window second;

    void initial();
    void func_004339d0(int, int, int);
};

void CObjectBrowser::func_004339d0(int type, int width, int height)
{
    initial();
    if (type != 1 && first.handle)
    {
        Rect rect;
        int minimum;
        GetClientRect(first.handle, &rect);
        int savedHeight = height;
        unsigned int rectHeight =
            (unsigned int)rect.bottom - (unsigned int)rect.top;
        int difference = (unsigned int)savedHeight - rectHeight;
        first.move(0, 0, width, savedHeight, 1);

        if (second.handle)
        {
            second.getRow(0, &height, &minimum);
            type = difference + height;
            width = savedHeight - 150;
            type = *(type < width ? &type : &width);
            width = 50;
            type = *(type > width ? &type : &width);
            second.setRow(0, type, 0);
            second.table->refresh(&second);
        }
    }
}
