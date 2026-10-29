// roc 2009-12 00401220  unit: CAboutRobloxDialog  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00401220
//
// 00401220  8b01                 mov eax, dword ptr [ecx]
// 00401222  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00401228  ffd2                 call edx
// 0040122a  33c0                 xor eax, eax
// 0040122c  c20400               ret 4
// copied from an identical function in another client (function ?sub_00401230@CAboutRobloxDialog@ns_ROCX000000@@QAEHH@Z)

namespace ns_ROCX000000 {
// from server: 100% by why2
struct CAboutRobloxDialog {
    int sub_00401230(int);
};

int CAboutRobloxDialog::sub_00401230(int)
{
    void (CAboutRobloxDialog::*p)() = *(void (CAboutRobloxDialog::**)())(*(void***)this + 0x160 / 4);
    (this->*p)();
    return 0;
}
}
