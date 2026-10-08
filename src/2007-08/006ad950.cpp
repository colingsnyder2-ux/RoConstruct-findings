// from server: 100% by colin
// roc 2007-08 006ad950  unit: CXTPRibbonTheme::CRibbonAppearanceSet  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ad950
//
// 006ad950  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006ad953  8b8030060000         mov eax, dword ptr [eax + 0x630]
// 006ad959  83c001               add eax, 1
// 006ad95c  c20400               ret 4

struct CXTPRibbonTheme {
    char pad[0x2c];
    int* field_2c;
    int get(int);
};

int CXTPRibbonTheme::get(int)
{
    return *(int*)((char*)field_2c + 0x630) + 1;
}
