// roc 2009-06 008084e0  unit: CXTShadowHook  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008084e0
//
// 008084e0  56                   push esi
// 008084e1  8bf1                 mov esi, ecx
// 008084e3  e8380ef1ff           call 0x719320
// 008084e8  33c0                 xor eax, eax
// 008084ea  898680000000         mov dword ptr [esi + 0x80], eax
// 008084f0  894658               mov dword ptr [esi + 0x58], eax
// 008084f3  894668               mov dword ptr [esi + 0x68], eax
// 008084f6  89467c               mov dword ptr [esi + 0x7c], eax
// 008084f9  894654               mov dword ptr [esi + 0x54], eax
// 008084fc  89465c               mov dword ptr [esi + 0x5c], eax
// 008084ff  894660               mov dword ptr [esi + 0x60], eax
// 00808502  894664               mov dword ptr [esi + 0x64], eax
// 00808505  c706acbc9000         mov dword ptr [esi], 0x90bcac
// 0080850b  8bc6                 mov eax, esi
// 0080850d  5e                   pop esi
// 0080850e  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ??0CXTShadowWnd@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
