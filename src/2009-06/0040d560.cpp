// roc 2009-06 0040d560  unit: CIDEBrowserView  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040d560
//
// 0040d560  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 0040d566  8b08                 mov ecx, dword ptr [eax]
// 0040d568  8b5130               mov edx, dword ptr [ecx + 0x30]
// 0040d56b  50                   push eax
// 0040d56c  ffd2                 call edx
// 0040d56e  c3                   ret 
// copied from an identical function in another client (function ?Refresh@CBrowserView@ns_ROCX000089@@QAEHXZ)

namespace ns_ROCX000089 {
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
