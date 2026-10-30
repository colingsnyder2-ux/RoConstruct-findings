// roc 2009-06 0077f520  unit: CXTThemeManager  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077f520
//
// 0077f520  56                   push esi
// 0077f521  8bf1                 mov esi, ecx
// 0077f523  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077f526  c70628cd8f00         mov dword ptr [esi], 0x8fcd28
// 0077f52c  85c9                 test ecx, ecx
// 0077f52e  740f                 je 0x77f53f
// 0077f530  8b01                 mov eax, dword ptr [ecx]
// 0077f532  8b10                 mov edx, dword ptr [eax]
// 0077f534  6a01                 push 1
// 0077f536  ffd2                 call edx
// 0077f538  c7460400000000       mov dword ptr [esi + 4], 0
// 0077f53f  e87cffffff           call 0x77f4c0
// 0077f544  83c024               add eax, 0x24
// 0077f547  56                   push esi
// 0077f548  8bc8                 mov ecx, eax
// 0077f54a  e823d00c00           call 0x84c572
// 0077f54f  c7460800000000       mov dword ptr [esi + 8], 0
// 0077f556  5e                   pop esi
// 0077f557  c3                   ret 
// copied from an identical function in another client (function ??1CXTThemeManagerStyleFactory@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp