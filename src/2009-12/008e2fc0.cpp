// roc 2009-12 008e2fc0  unit: CXTShadowHook  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e2fc0
//
// 008e2fc0  56                   push esi
// 008e2fc1  8bf1                 mov esi, ecx
// 008e2fc3  e88011f1ff           call 0x7f4148
// 008e2fc8  33c0                 xor eax, eax
// 008e2fca  898680000000         mov dword ptr [esi + 0x80], eax
// 008e2fd0  894658               mov dword ptr [esi + 0x58], eax
// 008e2fd3  894668               mov dword ptr [esi + 0x68], eax
// 008e2fd6  89467c               mov dword ptr [esi + 0x7c], eax
// 008e2fd9  894654               mov dword ptr [esi + 0x54], eax
// 008e2fdc  89465c               mov dword ptr [esi + 0x5c], eax
// 008e2fdf  894660               mov dword ptr [esi + 0x60], eax
// 008e2fe2  894664               mov dword ptr [esi + 0x64], eax
// 008e2fe5  c7061cc1a000         mov dword ptr [esi], 0xa0c11c
// 008e2feb  8bc6                 mov eax, esi
// 008e2fed  5e                   pop esi
// 008e2fee  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ??0CXTShadowWnd@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
