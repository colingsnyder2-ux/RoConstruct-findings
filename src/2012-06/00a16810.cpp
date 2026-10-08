// from server: 100% by auto
// roc 2012-06 00a16810  unit: CXTPHookManager::CHookSink  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16810
//
// 00a16810  837c240400           cmp dword ptr [esp + 4], 0
// 00a16815  56                   push esi
// 00a16816  8bf1                 mov esi, ecx
// 00a16818  742c                 je 0xa16846
// 00a1681a  837e0400             cmp dword ptr [esi + 4], 0
// 00a1681e  753b                 jne 0xa1685b
// 00a16820  57                   push edi
// 00a16821  e8acbbf6ff           call 0x9823d2
// 00a16826  8b7808               mov edi, dword ptr [eax + 8]
// 00a16829  ff15a021b200         call dword ptr [0xb221a0]
// 00a1682f  50                   push eax
// 00a16830  57                   push edi
// 00a16831  68c064a100           push 0xa164c0
// 00a16836  6a02                 push 2
// 00a16838  ff15f43cb200         call dword ptr [0xb23cf4]
// 00a1683e  5f                   pop edi
// 00a1683f  894604               mov dword ptr [esi + 4], eax
// 00a16842  5e                   pop esi
// 00a16843  c20400               ret 4
// 00a16846  8b4604               mov eax, dword ptr [esi + 4]
// 00a16849  85c0                 test eax, eax
// 00a1684b  740e                 je 0xa1685b
// 00a1684d  50                   push eax
// 00a1684e  ff15f03cb200         call dword ptr [0xb23cf0]
// 00a16854  c7460400000000       mov dword ptr [esi + 4], 0
// 00a1685b  5e                   pop esi
// 00a1685c  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPKeyboardManager.cpp (function ?SetupKeyboardHook@CXTPKeyboardManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPKeyboardManager.cpp
