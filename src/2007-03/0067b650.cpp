// roc 2007-03 0067b650  unit: seg_00670000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067b650
//
// 0067b650  56                   push esi
// 0067b651  8bf1                 mov esi, ecx
// 0067b653  56                   push esi
// 0067b654  c706b0d47c00         mov dword ptr [esi], 0x7cd4b0
// 0067b65a  e811fdffff           call 0x67b370
// 0067b65f  8bc8                 mov ecx, eax
// 0067b661  83c108               add ecx, 8
// 0067b664  e803fc0b00           call 0x73b26c
// 0067b669  837e0400             cmp dword ptr [esi + 4], 0
// 0067b66d  7417                 je 0x67b686
// 0067b66f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0067b672  85c9                 test ecx, ecx
// 0067b674  7410                 je 0x67b686
// 0067b676  8b01                 mov eax, dword ptr [ecx]
// 0067b678  8b5004               mov edx, dword ptr [eax + 4]
// 0067b67b  6a01                 push 1
// 0067b67d  ffd2                 call edx
// 0067b67f  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0067b686  5e                   pop esi
// 0067b687  c3                   ret 
// copied from an identical function in another client (function ??1CXTThemeManagerStyleHost@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp