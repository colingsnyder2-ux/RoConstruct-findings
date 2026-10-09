// roc 2007-03 00680670  unit: seg_00680000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00680670
//
// 00680670  56                   push esi
// 00680671  8b742414             mov esi, dword ptr [esp + 0x14]
// 00680675  56                   push esi
// 00680676  8b742414             mov esi, dword ptr [esp + 0x14]
// 0068067a  8bc1                 mov eax, ecx
// 0068067c  8b4804               mov ecx, dword ptr [eax + 4]
// 0068067f  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00680682  8b11                 mov edx, dword ptr [ecx]
// 00680684  8b5204               mov edx, dword ptr [edx + 4]
// 00680687  56                   push esi
// 00680688  8b742414             mov esi, dword ptr [esp + 0x14]
// 0068068c  56                   push esi
// 0068068d  50                   push eax
// 0068068e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00680692  50                   push eax
// 00680693  ffd2                 call edx
// 00680695  5e                   pop esi
// 00680696  c21000               ret 0x10
// library xtp-11.2.2/Source\SkinFramework\XTPSkinManager.cpp (function ?DrawThemeBackground@CXTPSkinManagerClass@@QAEHPAVCDC@@HHPBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinManager.cpp
