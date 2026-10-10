// from server: 23% by colin
struct CXTPDockingPaneOffice2003Theme {
    void paint(int, int, int, int, int, int);
};

extern "C" {
    void __stdcall SetPixel(void*, int, int, unsigned long);
    void __stdcall InflateRect(void*, int, int);
}

extern void func_006e54b0();
extern void func_006308aa();
extern void func_0067f420();
extern void func_00680060();
extern void func_00680430();
extern void func_00682240();
extern void func_00682560();
extern void func_007383e8();
extern void func_00630250();
extern void func_0077ddac();
extern void func_0077ddbc();

void CXTPDockingPaneOffice2003Theme::paint(int a, int b, int c, int d, int e, int f)
{
    char buf[0x40];
    int v1, v2, v3, v4;
    int x1, y1, x2, y2;
    int w, h;
    void* dc;
    int* p;

    func_006e54b0();
    func_006308aa();
    func_006308aa();
    func_006308aa();
    func_00682240();
    func_0067f420();

    if (*(int*)((char*)this + 0x1fc) == -1)
        v1 = *(int*)((char*)this + 0x1f8);
    else
        v1 = *(int*)((char*)this + 0x1fc);

    if (*(int*)((char*)this + 0x1fc) == -1)
        v2 = *(int*)((char*)this + 0x1f8);
    else
        v2 = *(int*)((char*)this + 0x1fc);

    func_006308aa();

    w = *(int*)((char*)this + 0x78);
    x1 = a;
    y1 = b;
    x2 = c;
    y2 = d;

    func_00680060();
    func_007383e8();

    if (*(int*)((char*)this + 0x24) != 0 && *(int*)((char*)this + 0xdc) != 0)
        p = (int*)((char*)this + 0x204);
    else
        p = (int*)((char*)this + 0x1e4);

    func_00682240();
    func_00682560();

    if (*(int*)((char*)this + 0x1fc) == -1)
        v3 = *(int*)((char*)this + 0x1f8);
    else
        v3 = *(int*)((char*)this + 0x1fc);

    SetPixel(dc, x1, y1, v3);
    SetPixel(dc, x2, y2, v3);

    func_0077ddac();
    func_00630250();

    if (*(int*)((char*)this + 0x1fc) == -1)
        v4 = *(int*)((char*)this + 0x1f8);
    else
        v4 = *(int*)((char*)this + 0x1fc);

    func_0077ddbc();
    func_00680430();
}
