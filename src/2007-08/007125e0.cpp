// roc 2007-08 007125e0  unit: CXTShadowHook  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007125e0
//
// 007125e0  56                   push esi
// 007125e1  8bf1                 mov esi, ecx
// 007125e3  e8f2dff1ff           call 0x6305da
// 007125e8  33c0                 xor eax, eax
// 007125ea  898680000000         mov dword ptr [esi + 0x80], eax
// 007125f0  894658               mov dword ptr [esi + 0x58], eax
// 007125f3  894668               mov dword ptr [esi + 0x68], eax
// 007125f6  89467c               mov dword ptr [esi + 0x7c], eax
// 007125f9  894654               mov dword ptr [esi + 0x54], eax
// 007125fc  89465c               mov dword ptr [esi + 0x5c], eax
// 007125ff  894660               mov dword ptr [esi + 0x60], eax
// 00712602  894664               mov dword ptr [esi + 0x64], eax
// 00712605  c706d4e77d00         mov dword ptr [esi], 0x7de7d4
// 0071260b  8bc6                 mov eax, esi
// 0071260d  5e                   pop esi
// 0071260e  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ??0CXTShadowWnd@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp
