// from server: 43% by atomic.potato
struct PaneBase;

struct Theme {
    char pad0[0x34];
    int m_flag34;
    char pad1[0x9c - 0x38];
    void* m_p98;
};

struct Pane {
    char pad0[0x88];
    int m_x88;
    int m_x8c;
};

struct Rect {
    int left;
    int top;
    int right;
    int bottom;
};

struct S_func_00809140 {
    char pad0[48];
    int m_x;
    int* f();
};

extern "C" int __stdcall sub_008ba530(void*);
extern "C" int __stdcall sub_008101a0(int);
extern "C" int __stdcall sub_00810eb0(int, int, int, int, int, int);
extern "C" int __stdcall sub_0041ca00(void*, int*);

struct Theme2 {
    char pad0[0x34];
    int m_flag34;
    char pad1[0x9c - 0x38];
    void* m_p98;
    int IsCaptionEnabled(void*);
    void Draw(int, int, int, int);
};

int Theme2::IsCaptionEnabled(void* p)
{
    int r = sub_008ba530(p);
    if (r == 0)
        return 1;
    return ((S_func_00809140*)r)->f() != 0;
}

void Theme2::Draw(int a, int b, int c, int d)
{
    if (m_flag34 == 0)
        return;
    Pane* p = (Pane*)m_p98;
    int bx = p->m_x88;
    int si = p->m_x8c;
    void* v = (void*)sub_008ba530((void*)a);
    if (v == 0)
        return;
    int ebp = ((int (__thiscall*)(void*, int))(*(int**)v)[0x64/4])(v, bx);
    if (ebp == 0)
        return;
    int cap = IsCaptionEnabled((void*)a);
    int eax;
    if (cap == 0)
        eax = sub_008101a0(1);
    else
        eax = (int)((S_func_00809140*)ebp)->f();
    if (d == 0) {
        Rect* rc = (Rect*)c;
        int dx = rc->right - rc->left;
        if (dx < bx)
            return;
        int cx = (rc->bottom + rc->top) / 2;
        int ax = si / 2;
        cx -= ax;
        sub_00810eb0(ebp, a, rc->left, cx, bx, si);
        rc->left += bx + 3;
    } else {
        Rect* rc = (Rect*)c;
        int dy = rc->bottom - rc->top;
        if (dy < si)
            return;
        int tmp;
        sub_0041ca00(rc, &tmp);
        int ax = si / 2;
        int cx = tmp - ax;
        sub_00810eb0(ebp, a, rc->top, cx, bx, si);
        rc->top += si + 3;
    }
}
