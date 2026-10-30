// roc 2012-06 00a16300  unit: PAVCXTPHookManagerHookAble::?$CArray  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16300
//
// 00a16300  56                   push esi
// 00a16301  8bf1                 mov esi, ecx
// 00a16303  6a0a                 push 0xa
// 00a16305  8d4e14               lea ecx, [esi + 0x14]
// 00a16308  c70608d5c100         mov dword ptr [esi], 0xc1d508
// 00a1630e  e8adfdffff           call 0xa160c0
// 00a16313  33c0                 xor eax, eax
// 00a16315  894604               mov dword ptr [esi + 4], eax
// 00a16318  894608               mov dword ptr [esi + 8], eax
// 00a1631b  89460c               mov dword ptr [esi + 0xc], eax
// 00a1631e  894610               mov dword ptr [esi + 0x10], eax
// 00a16321  8bc6                 mov eax, esi
// 00a16323  5e                   pop esi
// 00a16324  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPKeyboardManager.cpp (function ??0CXTPKeyboardManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPKeyboardManager.cpp
