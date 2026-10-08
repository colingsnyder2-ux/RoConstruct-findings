// from server: 100% by colin
// roc 2007-08 00401110  unit: CAboutRobloxDialog  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401110
//
// 00401110  8b01                 mov eax, dword ptr [ecx]
// 00401112  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00401118  ffd2                 call edx
// 0040111a  33c0                 xor eax, eax
// 0040111c  c20400               ret 4

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
