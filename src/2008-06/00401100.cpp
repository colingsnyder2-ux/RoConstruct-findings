// from server: 100% by tester
// roc 2008-06 00401100  unit: CAboutRobloxDialog  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00401100
//
// 00401100  8b01                 mov eax, dword ptr [ecx]
// 00401102  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00401108  ffd2                 call edx
// 0040110a  33c0                 xor eax, eax
// 0040110c  c20400               ret 4

struct CAboutRobloxDialog {
    int Method(int);
};

int CAboutRobloxDialog::Method(int)
{
    struct VTable {
        char pad[0x160];
        void (__thiscall *fn)(CAboutRobloxDialog*);
    };
    VTable* vt = *(VTable**)this;
    vt->fn(this);
    return 0;
}