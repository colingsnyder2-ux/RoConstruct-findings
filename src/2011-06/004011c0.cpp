// from server: 100% by tester
// roc 2011-06 004011c0  unit: CAboutRobloxDialog  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004011c0
//
// 004011c0  8b01                 mov eax, dword ptr [ecx]
// 004011c2  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 004011c8  ffd2                 call edx
// 004011ca  33c0                 xor eax, eax
// 004011cc  c20400               ret 4

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