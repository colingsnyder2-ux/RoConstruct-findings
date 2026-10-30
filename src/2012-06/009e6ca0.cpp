// roc 2012-06 009e6ca0  unit: CXTThemeManager  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6ca0
//
// 009e6ca0  56                   push esi
// 009e6ca1  8bf1                 mov esi, ecx
// 009e6ca3  8b4e04               mov ecx, dword ptr [esi + 4]
// 009e6ca6  c7067878c100         mov dword ptr [esi], 0xc17878
// 009e6cac  85c9                 test ecx, ecx
// 009e6cae  740f                 je 0x9e6cbf
// 009e6cb0  8b01                 mov eax, dword ptr [ecx]
// 009e6cb2  8b10                 mov edx, dword ptr [eax]
// 009e6cb4  6a01                 push 1
// 009e6cb6  ffd2                 call edx
// 009e6cb8  c7460400000000       mov dword ptr [esi + 4], 0
// 009e6cbf  e87cffffff           call 0x9e6c40
// 009e6cc4  83c024               add eax, 0x24
// 009e6cc7  56                   push esi
// 009e6cc8  8bc8                 mov ecx, eax
// 009e6cca  e8912e0b00           call 0xa99b60
// 009e6ccf  c7460800000000       mov dword ptr [esi + 8], 0
// 009e6cd6  5e                   pop esi
// 009e6cd7  c3                   ret 
// copied from an identical function in another client (function ??1CXTThemeManagerStyleFactory@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp