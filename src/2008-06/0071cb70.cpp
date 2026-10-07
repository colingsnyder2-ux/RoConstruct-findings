// roc 2008-06 0071cb70  unit: CXTPHookManager::CHookSink  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071cb70
//
// 0071cb70  83ec08               sub esp, 8
// 0071cb73  56                   push esi
// 0071cb74  8bf1                 mov esi, ecx
// 0071cb76  8b460c               mov eax, dword ptr [esi + 0xc]
// 0071cb79  f7d8                 neg eax
// 0071cb7b  1bc0                 sbb eax, eax
// 0071cb7d  c744240400000000     mov dword ptr [esp + 4], 0
// 0071cb85  89442408             mov dword ptr [esp + 8], eax
// 0071cb89  742d                 je 0x71cbb8
// 0071cb8b  57                   push edi
// 0071cb8c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0071cb90  8d442408             lea eax, [esp + 8]
// 0071cb94  50                   push eax
// 0071cb95  8d4c2418             lea ecx, [esp + 0x18]
// 0071cb99  51                   push ecx
// 0071cb9a  8d542414             lea edx, [esp + 0x14]
// 0071cb9e  52                   push edx
// 0071cb9f  8bce                 mov ecx, esi
// 0071cba1  e8aac20400           call 0x768e50
// 0071cba6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071cbaa  57                   push edi
// 0071cbab  e810feffff           call 0x71c9c0
// 0071cbb0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0071cbb5  75d9                 jne 0x71cb90
// 0071cbb7  5f                   pop edi
// 0071cbb8  5e                   pop esi
// 0071cbb9  83c408               add esp, 8
// 0071cbbc  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPHookManager.cpp (function ?RemoveAll@CXTPHookManager@@QAEXPAVCXTPHookManagerHookAble@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPHookManager.cpp
