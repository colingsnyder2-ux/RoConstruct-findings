// from server: 63% by colin
// roc 2007-08 006d25e0  unit: CXTPReportInplaceList  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d25e0
//
// 006d25e0  83ec10               sub esp, 0x10
// 006d25e3  56                   push esi
// 006d25e4  8bf1                 mov esi, ecx
// 006d25e6  56                   push esi
// 006d25e7  8d4c2408             lea ecx, [esp + 8]
// 006d25eb  e810dafaff           call 0x680000
// 006d25f0  8b442420             mov eax, dword ptr [esp + 0x20]
// 006d25f4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d25f8  50                   push eax
// 006d25f9  51                   push ecx
// 006d25fa  8d54240c             lea edx, [esp + 0xc]
// 006d25fe  52                   push edx
// 006d25ff  ff1594ed7700         call dword ptr [0x77ed94]
// 006d2605  85c0                 test eax, eax
// 006d2607  8bce                 mov ecx, esi
// 006d2609  740c                 je 0x6d2617
// 006d260b  e8f0f7ffff           call 0x6d1e00
// 006d2610  5e                   pop esi
// 006d2611  83c410               add esp, 0x10
// 006d2614  c20c00               ret 0xc
// 006d2617  e874feffff           call 0x6d2490
// 006d261c  5e                   pop esi
// 006d261d  83c410               add esp, 0x10
// 006d2620  c20c00               ret 0xc

struct CXTPReportInplaceList {
    int OnLButtonDown(unsigned int nFlags, int x, int y);
};

struct CPoint {
    int x;
    int y;
    CPoint(int x_, int y_) : x(x_), y(y_) {}
};

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" int __stdcall PtInRect(const CRect* rect, CPoint pt);

extern "C" int __stdcall sub_680000(void* p, int x, int y);
extern "C" int __stdcall sub_6d1e00();
extern "C" int __stdcall sub_6d2490();

int CXTPReportInplaceList::OnLButtonDown(unsigned int nFlags, int x, int y) {
    CRect rect;
    sub_680000(&rect, x, y);
    CPoint pt(x, y);
    if (PtInRect(&rect, pt)) {
        return sub_6d1e00();
    }
    return sub_6d2490();
}
