// roc 2012-06 00a16860  unit: CXTPHookManager::CHookSink  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16860
//
// 00a16860  837c240400           cmp dword ptr [esp + 4], 0
// 00a16865  56                   push esi
// 00a16866  8bf1                 mov esi, ecx
// 00a16868  742c                 je 0xa16896
// 00a1686a  837e0800             cmp dword ptr [esi + 8], 0
// 00a1686e  753b                 jne 0xa168ab
// 00a16870  57                   push edi
// 00a16871  e85cbbf6ff           call 0x9823d2
// 00a16876  8b7808               mov edi, dword ptr [eax + 8]
// 00a16879  ff15a021b200         call dword ptr [0xb221a0]
// 00a1687f  50                   push eax
// 00a16880  57                   push edi
// 00a16881  68d063a100           push 0xa163d0
// 00a16886  6a04                 push 4
// 00a16888  ff15f43cb200         call dword ptr [0xb23cf4]
// 00a1688e  5f                   pop edi
// 00a1688f  894608               mov dword ptr [esi + 8], eax
// 00a16892  5e                   pop esi
// 00a16893  c20400               ret 4
// 00a16896  8b4608               mov eax, dword ptr [esi + 8]
// 00a16899  85c0                 test eax, eax
// 00a1689b  740e                 je 0xa168ab
// 00a1689d  50                   push eax
// 00a1689e  ff15f03cb200         call dword ptr [0xb23cf0]
// 00a168a4  c7460800000000       mov dword ptr [esi + 8], 0
// 00a168ab  5e                   pop esi
// 00a168ac  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPKeyboardManager.cpp (function ?SetupCallWndProcHook@CXTPKeyboardManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPKeyboardManager.cpp
