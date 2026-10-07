// roc 2008-06 0078fe60  unit: CXTShadowHook  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078fe60
//
// 0078fe60  56                   push esi
// 0078fe61  8bf1                 mov esi, ecx
// 0078fe63  e82810f1ff           call 0x6a0e90
// 0078fe68  33c0                 xor eax, eax
// 0078fe6a  898680000000         mov dword ptr [esi + 0x80], eax
// 0078fe70  894658               mov dword ptr [esi + 0x58], eax
// 0078fe73  894668               mov dword ptr [esi + 0x68], eax
// 0078fe76  89467c               mov dword ptr [esi + 0x7c], eax
// 0078fe79  894654               mov dword ptr [esi + 0x54], eax
// 0078fe7c  89465c               mov dword ptr [esi + 0x5c], eax
// 0078fe7f  894660               mov dword ptr [esi + 0x60], eax
// 0078fe82  894664               mov dword ptr [esi + 0x64], eax
// 0078fe85  c70684ac8600         mov dword ptr [esi], 0x86ac84
// 0078fe8b  8bc6                 mov eax, esi
// 0078fe8d  5e                   pop esi
// 0078fe8e  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ??0CXTShadowWnd@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
