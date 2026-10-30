// roc 2012-06 009e6890  unit: CXTThemeManagerStyle  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6890
//
// 009e6890  56                   push esi
// 009e6891  8bf1                 mov esi, ecx
// 009e6893  56                   push esi
// 009e6894  c7066078c100         mov dword ptr [esi], 0xc17860
// 009e689a  e811fdffff           call 0x9e65b0
// 009e689f  8bc8                 mov ecx, eax
// 009e68a1  83c108               add ecx, 8
// 009e68a4  e8b7320b00           call 0xa99b60
// 009e68a9  837e0400             cmp dword ptr [esi + 4], 0
// 009e68ad  7417                 je 0x9e68c6
// 009e68af  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009e68b2  85c9                 test ecx, ecx
// 009e68b4  7410                 je 0x9e68c6
// 009e68b6  8b01                 mov eax, dword ptr [ecx]
// 009e68b8  8b5004               mov edx, dword ptr [eax + 4]
// 009e68bb  6a01                 push 1
// 009e68bd  ffd2                 call edx
// 009e68bf  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 009e68c6  5e                   pop esi
// 009e68c7  c3                   ret 
// copied from an identical function in another client (function ??1CXTThemeManagerStyleHost@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp