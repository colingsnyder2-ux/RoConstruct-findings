// from server: 100% by colin
// roc 2007-08 00717580  unit: CXTPRibbonControlTab  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00717580
//
// 00717580  8b4984               mov ecx, dword ptr [ecx - 0x7c]
// 00717583  e8f8c3f2ff           call 0x643980
// 00717588  8bc8                 mov ecx, eax
// 0071758a  e871c3f1ff           call 0x633900
// 0071758f  33c9                 xor ecx, ecx
// 00717591  394804               cmp dword ptr [eax + 4], ecx
// 00717594  0f9fc1               setg cl
// 00717597  8bc1                 mov eax, ecx
// 00717599  c3                   ret 

struct CXTPRibbonControlTab {
    int GetSomething();
};

extern "C" int __fastcall sub_643980(int);
extern "C" int __fastcall sub_633900(int);

int CXTPRibbonControlTab::GetSomething()
{
    int v = sub_643980(*(int*)((char*)this - 0x7c));
    int r = sub_633900(v);
    return (*(int*)(r + 4) > 0) ? 1 : 0;
}
