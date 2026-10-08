// from server: 100% by auto
// roc 2008-06 0071cc30  unit: CXTPHookManager::CHookSink  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071cc30
//
// 0071cc30  837c240400           cmp dword ptr [esp + 4], 0
// 0071cc35  56                   push esi
// 0071cc36  8bf1                 mov esi, ecx
// 0071cc38  742c                 je 0x71cc66
// 0071cc3a  837e0800             cmp dword ptr [esi + 8], 0
// 0071cc3e  753b                 jne 0x71cc7b
// 0071cc40  57                   push edi
// 0071cc41  e8e03cf8ff           call 0x6a0926
// 0071cc46  8b7808               mov edi, dword ptr [eax + 8]
// 0071cc49  ff1598218000         call dword ptr [0x802198]
// 0071cc4f  50                   push eax
// 0071cc50  57                   push edi
// 0071cc51  68a0c77100           push 0x71c7a0
// 0071cc56  6a04                 push 4
// 0071cc58  ff15d82b8000         call dword ptr [0x802bd8]
// 0071cc5e  5f                   pop edi
// 0071cc5f  894608               mov dword ptr [esi + 8], eax
// 0071cc62  5e                   pop esi
// 0071cc63  c20400               ret 4
// 0071cc66  8b4608               mov eax, dword ptr [esi + 8]
// 0071cc69  85c0                 test eax, eax
// 0071cc6b  740e                 je 0x71cc7b
// 0071cc6d  50                   push eax
// 0071cc6e  ff15582c8000         call dword ptr [0x802c58]
// 0071cc74  c7460800000000       mov dword ptr [esi + 8], 0
// 0071cc7b  5e                   pop esi
// 0071cc7c  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPHookManager.cpp (function ?SetupCallWndProcHook@CXTPKeyboardManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPHookManager.cpp
