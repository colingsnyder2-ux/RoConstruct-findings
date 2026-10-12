// from server: 90% by king_originala
extern "C" {
    extern int (__stdcall *IsZoomed)(void *);
}

struct SizeSource {
    int get_19c(int *out);
};

SizeSource *func_00412d50();

struct Rect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CChildFrame;
typedef void (__thiscall *RectFunction)(CChildFrame *, Rect *, int);

struct FrameTable {
    RectFunction entries[29];
};

struct CChildFrame {
    FrameTable *table;
    char padding[0x1c];
    void *window;

    void func_006a0c68();
    int func_006a0974();
    void func_00412e60(int *param);
};

void CChildFrame::func_00412e60(int *param)
{
    func_006a0c68();
    int value = func_006a0974();
    int *p = param;

    if (value != 0 &&
        *(char *)(value + 0xf8) != 0 &&
        *(int *)(*(int *)(value + 0xec) + 0x84) == 0)
    {
        p[2] += 40;
        p[3] += 40;
        p[8] += 40;
        p[9] += 40;
    }

    if (IsZoomed(window) == 0)
    {
        func_00412d50()->get_19c((int *)&param);

        Rect rect;
        rect.right = ((short *)&param)[0];
        rect.bottom = ((short *)&param)[1];
        rect.left = 0;
        rect.top = 0;

        table->entries[28](this, &rect, 0);

        p[8] = rect.right - rect.left;
        p[9] = rect.bottom - rect.top;
    }
}
