// roc 2011-06 008efd90  unit: CXTShadowHook  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008efd90
//
// 008efd90  56                   push esi
// 008efd91  8bf1                 mov esi, ecx
// 008efd93  e8aeabf1ff           call 0x80a946
// 008efd98  33c0                 xor eax, eax
// 008efd9a  898680000000         mov dword ptr [esi + 0x80], eax
// 008efda0  894658               mov dword ptr [esi + 0x58], eax
// 008efda3  894668               mov dword ptr [esi + 0x68], eax
// 008efda6  89467c               mov dword ptr [esi + 0x7c], eax
// 008efda9  894654               mov dword ptr [esi + 0x54], eax
// 008efdac  89465c               mov dword ptr [esi + 0x5c], eax
// 008efdaf  894660               mov dword ptr [esi + 0x60], eax
// 008efdb2  894664               mov dword ptr [esi + 0x64], eax
// 008efdb5  c7063c9fad00         mov dword ptr [esi], 0xad9f3c
// 008efdbb  8bc6                 mov eax, esi
// 008efdbd  5e                   pop esi
// 008efdbe  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ??0CXTShadowWnd@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
