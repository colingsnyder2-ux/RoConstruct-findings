// roc 2009-12 0040d2c0  unit: CIDEBrowserView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d2c0
//
// 0040d2c0  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 0040d2c6  8b08                 mov ecx, dword ptr [eax]
// 0040d2c8  8b5130               mov edx, dword ptr [ecx + 0x30]
// 0040d2cb  50                   push eax
// 0040d2cc  ffd2                 call edx
// 0040d2ce  c3                   ret 
// copied from an identical function in another client (function ?Refresh@CBrowserView@ns_ROCX0000f2@@QAEHXZ)

namespace ns_ROCX0000f2 {
struct IBrowser {
    virtual int __stdcall f0() = 0; virtual int __stdcall f1() = 0; virtual int __stdcall f2() = 0;
    virtual int __stdcall f3() = 0; virtual int __stdcall f4() = 0; virtual int __stdcall f5() = 0;
    virtual int __stdcall f6() = 0; virtual int __stdcall f7() = 0; virtual int __stdcall f8() = 0;
    virtual int __stdcall f9() = 0; virtual int __stdcall f10() = 0; virtual int __stdcall f11() = 0;
    virtual int __stdcall Refresh() = 0;
};

struct CBrowserView {
    char pad[0xf0];
    IBrowser* m_browser;
    int Refresh();
};

int CBrowserView::Refresh()
{
    return m_browser->Refresh();
}
}
