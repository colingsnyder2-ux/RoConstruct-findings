// from server: 100% by colin
// roc 2007-08 0068a470  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a470
//
// 0068a470  56                   push esi
// 0068a471  8bf1                 mov esi, ecx
// 0068a473  e8683e0700           call 0x6fe2e0
// 0068a478  dd05e8fe7800         fld qword ptr [0x78fee8]
// 0068a47e  dd9e90000000         fstp qword ptr [esi + 0x90]
// 0068a484  c706d4f77c00         mov dword ptr [esi], 0x7cf7d4
// 0068a48a  c7868c00000000000000 mov dword ptr [esi + 0x8c], 0
// 0068a494  8bc6                 mov eax, esi
// 0068a496  5e                   pop esi
// 0068a497  c3                   ret 

struct CXTPTabClientWnd_CNavigateButtonActiveFiles {
    CXTPTabClientWnd_CNavigateButtonActiveFiles* construct();
    char pad[0x8c];
    double field_90;
};

extern double g_value_78fee8;
extern int g_vtable_7cf7d4;

extern "C" void __stdcall sub_6fe2e0();

CXTPTabClientWnd_CNavigateButtonActiveFiles* CXTPTabClientWnd_CNavigateButtonActiveFiles::construct() {
    sub_6fe2e0();
    field_90 = g_value_78fee8;
    *(int*)this = (int)&g_vtable_7cf7d4;
    *(int*)((char*)this + 0x8c) = 0;
    return this;
}
