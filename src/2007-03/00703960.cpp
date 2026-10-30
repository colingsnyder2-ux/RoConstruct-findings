// roc 2007-03 00703960  unit: seg_00700000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00703960
//
// 00703960  56                   push esi
// 00703961  8bf1                 mov esi, ecx
// 00703963  e806b1f1ff           call 0x61ea6e
// 00703968  33c0                 xor eax, eax
// 0070396a  898680000000         mov dword ptr [esi + 0x80], eax
// 00703970  894658               mov dword ptr [esi + 0x58], eax
// 00703973  894668               mov dword ptr [esi + 0x68], eax
// 00703976  89467c               mov dword ptr [esi + 0x7c], eax
// 00703979  894654               mov dword ptr [esi + 0x54], eax
// 0070397c  89465c               mov dword ptr [esi + 0x5c], eax
// 0070397f  894660               mov dword ptr [esi + 0x60], eax
// 00703982  894664               mov dword ptr [esi + 0x64], eax
// 00703985  c706bcd47d00         mov dword ptr [esi], 0x7dd4bc
// 0070398b  8bc6                 mov eax, esi
// 0070398d  5e                   pop esi
// 0070398e  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ??0CXTShadowWnd@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
