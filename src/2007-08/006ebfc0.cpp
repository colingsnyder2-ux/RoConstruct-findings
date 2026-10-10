// from server: 32% by colin
extern "C" {
    __declspec(dllimport) void* __stdcall CreateCompatibleBitmap(void*, int, int);
    __declspec(dllimport) int __stdcall BitBlt(void*, int, int, int, int, void*, int, int, unsigned long);
}

struct CPoint {
    int x;
    int y;
};

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CSomething {
    int a;
    int b;
};

struct CSticker {
    void func_006ebfc0(CRect* src, void* p2, int p3, int p4);
};

extern void* __cdecl func_006b3010();
extern void func_00630238(void* self, void* p);
extern void func_00680770(void* self, void* p1, void* p2);
extern void func_00680880(void* self);
extern void func_006ebef0(void* self, void* p1, void* p2, void* p3, void* p4);
extern void func_0041f680(void* self);

void CSticker::func_006ebfc0(CRect* src, void* p2, int p3, int p4)
{
    void* vtable;
    void* obj;
    int width;
    int height;
    void* memDC;
    CSomething local1;
    CSomething local2;
    CPoint pt1;
    CPoint pt2;
    CRect rect;

    local1.a = 0;
    local1.b = 0x788300;
    local2.a = 0;
    local2.b = 0x788300;

    obj = func_006b3010();
    vtable = *(void**)obj;
    (*(void(__thiscall**)(void*, void*, void*))(*(int*)vtable + 0x10))(obj, &local1, p2);

    width = src->right - src->left;
    height = src->bottom - src->top;

    memDC = CreateCompatibleBitmap(*(void**)((char*)p2 + 4), width, height);
    func_00630238(&local2, memDC);

    if (local2.a != 0) {
        func_00680770(&rect, p2, &local2);
        func_00680770(&pt1, p2, &local1);
        BitBlt(*(void**)((char*)p2 + 4), src->left, src->top, width, height, memDC, pt1.x, pt1.y, 0xCC0020);
        func_00680880(&pt1);
        func_00680880(&rect);
    }

    if (p3 == 0) {
        pt2.x = 0;
        pt2.y = 0;
        src = (CRect*)&pt2;
    }

    func_006ebef0(this, p2, src, &local1, &local2);

    local1.b = 0x788300;
    func_0041f680(&local1);
    local2.b = 0x788300;
    func_0041f680(&local2);
}
