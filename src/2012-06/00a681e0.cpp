// roc 2012-06 00a681e0  unit: CXTShadowHook  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a681e0
//
// 00a681e0  56                   push esi
// 00a681e1  8bf1                 mov esi, ecx
// 00a681e3  e8dea7f1ff           call 0x9829c6
// 00a681e8  33c0                 xor eax, eax
// 00a681ea  898680000000         mov dword ptr [esi + 0x80], eax
// 00a681f0  894658               mov dword ptr [esi + 0x58], eax
// 00a681f3  894668               mov dword ptr [esi + 0x68], eax
// 00a681f6  89467c               mov dword ptr [esi + 0x7c], eax
// 00a681f9  894654               mov dword ptr [esi + 0x54], eax
// 00a681fc  89465c               mov dword ptr [esi + 0x5c], eax
// 00a681ff  894660               mov dword ptr [esi + 0x60], eax
// 00a68202  894664               mov dword ptr [esi + 0x64], eax
// 00a68205  c706d455c200         mov dword ptr [esi], 0xc255d4
// 00a6820b  8bc6                 mov eax, esi
// 00a6820d  5e                   pop esi
// 00a6820e  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ??0CXTShadowWnd@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
