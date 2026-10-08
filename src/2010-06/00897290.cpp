// roc 2010-06 00897290  unit: CXTShadowHook  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897290
//
// 00897290  56                   push esi
// 00897291  8bf1                 mov esi, ecx
// 00897293  e8f00ff1ff           call 0x7a8288
// 00897298  33c0                 xor eax, eax
// 0089729a  898680000000         mov dword ptr [esi + 0x80], eax
// 008972a0  894658               mov dword ptr [esi + 0x58], eax
// 008972a3  894668               mov dword ptr [esi + 0x68], eax
// 008972a6  89467c               mov dword ptr [esi + 0x7c], eax
// 008972a9  894654               mov dword ptr [esi + 0x54], eax
// 008972ac  89465c               mov dword ptr [esi + 0x5c], eax
// 008972af  894660               mov dword ptr [esi + 0x60], eax
// 008972b2  894664               mov dword ptr [esi + 0x64], eax
// 008972b5  c7061404a700         mov dword ptr [esi], 0xa70414
// 008972bb  8bc6                 mov eax, esi
// 008972bd  5e                   pop esi
// 008972be  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ??0CXTShadowWnd@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
