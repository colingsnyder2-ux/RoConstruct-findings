// roc 2011-06 00412de0  unit: CIDEBrowserView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00412de0
//
// 00412de0  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 00412de6  8b08                 mov ecx, dword ptr [eax]
// 00412de8  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00412deb  50                   push eax
// 00412dec  ffd2                 call edx
// 00412dee  c3                   ret 
// copied from an identical function in another client (function ?Refresh@CBrowserView@ns_ROCX000002@@QAEHXZ)

namespace ns_ROCX000002 {
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
