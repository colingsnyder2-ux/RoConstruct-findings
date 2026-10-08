// from server: 65% by colin
// roc 2007-08 006ae560  unit: CXTPRibbonTheme  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ae560
//
// 006ae560  8b442408             mov eax, dword ptr [esp + 8]
// 006ae564  83ec10               sub esp, 0x10
// 006ae567  56                   push esi
// 006ae568  8bf1                 mov esi, ecx
// 006ae56a  50                   push eax
// 006ae56b  8d4c2408             lea ecx, [esp + 8]
// 006ae56f  e88c1afdff           call 0x680000
// 006ae574  8b8e4c060000         mov ecx, dword ptr [esi + 0x64c]
// 006ae57a  51                   push ecx
// 006ae57b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ae57f  8d542408             lea edx, [esp + 8]
// 006ae583  52                   push edx
// 006ae584  e82723f8ff           call 0x6308b0
// 006ae589  5e                   pop esi
// 006ae58a  83c410               add esp, 0x10
// 006ae58d  c20800               ret 8

struct CXTPRibbonTheme {
    char pad[0x64c];
    int field_64c;
    void func(int, int);
};

struct Helper1 {
    void construct(int);
};

extern "C" void __stdcall helper_680000(Helper1*, int);
extern "C" void __stdcall helper_6308b0(int, Helper1*, int);

void CXTPRibbonTheme::func(int a, int b) {
    Helper1 h;
    helper_680000(&h, b);
    helper_6308b0(field_64c, &h, a);
}
