// from server: 34% by colin
struct CXTPPropertyGridItemColor {
    void OnInplaceButtonDown();
};

struct CPropertyGridItemColorColorPopup {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
};

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

struct CPoint {
    int x;
    int y;
};

extern "C" int __stdcall GetWindowRect(void*, CRect*);

extern "C" void* __cdecl sub_710F90();
extern "C" void* __cdecl sub_668F70();
extern "C" void* __cdecl sub_668770(void*, int);
extern "C" void __cdecl sub_7383AC(void*, void*);
extern "C" void __cdecl sub_7383A6(void*);
extern "C" void __cdecl sub_738BC2(void*, int, int, int, int, int, int);
extern "C" void __cdecl sub_63023E(void*);

void CXTPPropertyGridItemColor::OnInplaceButtonDown()
{
    CPropertyGridItemColorColorPopup* self = (CPropertyGridItemColorColorPopup*)this;
    void* p = sub_710F90();
    int flag = (*(int*)((char*)p + 8) != 0) ? 1 : 0;
    if (flag != 0)
    {
        CRect rect;
        sub_7383AC(&rect, self);
        void* obj = sub_668F70();
        void* obj2 = sub_668770(obj, 0x2b);
        CPoint pt;
        GetWindowRect(*(void**)((char*)self + 0x20), &rect);
        int w = rect.right - rect.left;
        int h = rect.bottom - rect.top;
        sub_738BC2(&rect, 0, 0, w, h, (int)obj2, (int)obj2);
        sub_7383A6(&rect);
    }
    else
    {
        sub_63023E(self);
    }
}
