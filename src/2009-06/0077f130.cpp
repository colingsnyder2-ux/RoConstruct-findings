// roc 2009-06 0077f130  unit: CXTThemeManagerStyle  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077f130
//
// 0077f130  56                   push esi
// 0077f131  8bf1                 mov esi, ecx
// 0077f133  56                   push esi
// 0077f134  c70610cd8f00         mov dword ptr [esi], 0x8fcd10
// 0077f13a  e811fdffff           call 0x77ee50
// 0077f13f  8bc8                 mov ecx, eax
// 0077f141  83c108               add ecx, 8
// 0077f144  e829d40c00           call 0x84c572
// 0077f149  837e0400             cmp dword ptr [esi + 4], 0
// 0077f14d  7417                 je 0x77f166
// 0077f14f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077f152  85c9                 test ecx, ecx
// 0077f154  7410                 je 0x77f166
// 0077f156  8b01                 mov eax, dword ptr [ecx]
// 0077f158  8b5004               mov edx, dword ptr [eax + 4]
// 0077f15b  6a01                 push 1
// 0077f15d  ffd2                 call edx
// 0077f15f  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0077f166  5e                   pop esi
// 0077f167  c3                   ret 
// copied from an identical function in another client (function ??1CXTThemeManagerStyleHost@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp