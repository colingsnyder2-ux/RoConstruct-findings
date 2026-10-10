// roc 2008-06 0071c6d0  unit: PAVCXTPHookManagerHookAble::?$CArray  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071c6d0
//
// 0071c6d0  56                   push esi
// 0071c6d1  8bf1                 mov esi, ecx
// 0071c6d3  6a0a                 push 0xa
// 0071c6d5  8d4e14               lea ecx, [esi + 0x14]
// 0071c6d8  c70620f48500         mov dword ptr [esi], 0x85f420
// 0071c6de  e8edfdffff           call 0x71c4d0
// 0071c6e3  33c0                 xor eax, eax
// 0071c6e5  894604               mov dword ptr [esi + 4], eax
// 0071c6e8  894608               mov dword ptr [esi + 8], eax
// 0071c6eb  89460c               mov dword ptr [esi + 0xc], eax
// 0071c6ee  894610               mov dword ptr [esi + 0x10], eax
// 0071c6f1  8bc6                 mov eax, esi
// 0071c6f3  5e                   pop esi
// 0071c6f4  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPHookManager.cpp (function ??0CXTPKeyboardManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPHookManager.cpp
