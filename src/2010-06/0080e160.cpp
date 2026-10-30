// roc 2010-06 0080e160  unit: CXTThemeManagerStyle  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080e160
//
// 0080e160  56                   push esi
// 0080e161  8bf1                 mov esi, ecx
// 0080e163  56                   push esi
// 0080e164  c7067814a600         mov dword ptr [esi], 0xa61478
// 0080e16a  e811fdffff           call 0x80de80
// 0080e16f  8bc8                 mov ecx, eax
// 0080e171  83c108               add ecx, 8
// 0080e174  e8a7f21600           call 0x97d420
// 0080e179  837e0400             cmp dword ptr [esi + 4], 0
// 0080e17d  7417                 je 0x80e196
// 0080e17f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0080e182  85c9                 test ecx, ecx
// 0080e184  7410                 je 0x80e196
// 0080e186  8b01                 mov eax, dword ptr [ecx]
// 0080e188  8b5004               mov edx, dword ptr [eax + 4]
// 0080e18b  6a01                 push 1
// 0080e18d  ffd2                 call edx
// 0080e18f  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0080e196  5e                   pop esi
// 0080e197  c3                   ret 
// copied from an identical function in another client (function ??1CXTThemeManagerStyleHost@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp