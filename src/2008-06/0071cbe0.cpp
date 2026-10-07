// roc 2008-06 0071cbe0  unit: CXTPHookManager::CHookSink  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071cbe0
//
// 0071cbe0  837c240400           cmp dword ptr [esp + 4], 0
// 0071cbe5  56                   push esi
// 0071cbe6  8bf1                 mov esi, ecx
// 0071cbe8  742c                 je 0x71cc16
// 0071cbea  837e0400             cmp dword ptr [esi + 4], 0
// 0071cbee  753b                 jne 0x71cc2b
// 0071cbf0  57                   push edi
// 0071cbf1  e8303df8ff           call 0x6a0926
// 0071cbf6  8b7808               mov edi, dword ptr [eax + 8]
// 0071cbf9  ff1598218000         call dword ptr [0x802198]
// 0071cbff  50                   push eax
// 0071cc00  57                   push edi
// 0071cc01  6890c87100           push 0x71c890
// 0071cc06  6a02                 push 2
// 0071cc08  ff15d82b8000         call dword ptr [0x802bd8]
// 0071cc0e  5f                   pop edi
// 0071cc0f  894604               mov dword ptr [esi + 4], eax
// 0071cc12  5e                   pop esi
// 0071cc13  c20400               ret 4
// 0071cc16  8b4604               mov eax, dword ptr [esi + 4]
// 0071cc19  85c0                 test eax, eax
// 0071cc1b  740e                 je 0x71cc2b
// 0071cc1d  50                   push eax
// 0071cc1e  ff15582c8000         call dword ptr [0x802c58]
// 0071cc24  c7460400000000       mov dword ptr [esi + 4], 0
// 0071cc2b  5e                   pop esi
// 0071cc2c  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPHookManager.cpp (function ?SetupKeyboardHook@CXTPKeyboardManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPHookManager.cpp
