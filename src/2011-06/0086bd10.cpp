// roc 2011-06 0086bd10  unit: CXTThemeManager  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086bd10
//
// 0086bd10  56                   push esi
// 0086bd11  8bf1                 mov esi, ecx
// 0086bd13  8b4e04               mov ecx, dword ptr [esi + 4]
// 0086bd16  c70670bdac00         mov dword ptr [esi], 0xacbd70
// 0086bd1c  85c9                 test ecx, ecx
// 0086bd1e  740f                 je 0x86bd2f
// 0086bd20  8b01                 mov eax, dword ptr [ecx]
// 0086bd22  8b10                 mov edx, dword ptr [eax]
// 0086bd24  6a01                 push 1
// 0086bd26  ffd2                 call edx
// 0086bd28  c7460400000000       mov dword ptr [esi + 4], 0
// 0086bd2f  e87cffffff           call 0x86bcb0
// 0086bd34  83c024               add eax, 0x24
// 0086bd37  56                   push esi
// 0086bd38  8bc8                 mov ecx, eax
// 0086bd3a  e8830d1600           call 0x9ccac2
// 0086bd3f  c7460800000000       mov dword ptr [esi + 8], 0
// 0086bd46  5e                   pop esi
// 0086bd47  c3                   ret 
// copied from an identical function in another client (function ??1CXTThemeManagerStyleFactory@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTThemeManager.cpp