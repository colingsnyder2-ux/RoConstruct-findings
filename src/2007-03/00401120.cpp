// roc 2007-03 00401120  unit: seg_00400000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00401120
//
// 00401120  8b01                 mov eax, dword ptr [ecx]
// 00401122  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00401128  ffd2                 call edx
// 0040112a  33c0                 xor eax, eax
// 0040112c  c20400               ret 4
// copied from an identical function in another client (function ?Method@CAboutRobloxDialog@ns_ROCX000004@@QAEHH@Z)

namespace ns_ROCX000004 {
struct CAboutRobloxDialog {
    int Method(int);
};

int CAboutRobloxDialog::Method(int)
{
    struct VTable {
        char pad[0x158];
        void (__thiscall *fn)(CAboutRobloxDialog*);
    };
    VTable* vt = *(VTable**)this;
    vt->fn(this);
    return 0;
}
}
