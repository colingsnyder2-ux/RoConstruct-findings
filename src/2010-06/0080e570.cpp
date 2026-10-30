// roc 2010-06 0080e570  unit: CXTThemeManager  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080e570
//
// 0080e570  56                   push esi
// 0080e571  8bf1                 mov esi, ecx
// 0080e573  8b4e04               mov ecx, dword ptr [esi + 4]
// 0080e576  c7069014a600         mov dword ptr [esi], 0xa61490
// 0080e57c  85c9                 test ecx, ecx
// 0080e57e  740f                 je 0x80e58f
// 0080e580  8b01                 mov eax, dword ptr [ecx]
// 0080e582  8b10                 mov edx, dword ptr [eax]
// 0080e584  6a01                 push 1
// 0080e586  ffd2                 call edx
// 0080e588  c7460400000000       mov dword ptr [esi + 4], 0
// 0080e58f  e87cffffff           call 0x80e510
// 0080e594  83c024               add eax, 0x24
// 0080e597  56                   push esi
// 0080e598  8bc8                 mov ecx, eax
// 0080e59a  e881ee1600           call 0x97d420
// 0080e59f  c7460800000000       mov dword ptr [esi + 8], 0
// 0080e5a6  5e                   pop esi
// 0080e5a7  c3                   ret 
// copied from an identical function in another client (function ??1CXTThemeManagerStyleFactory@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp