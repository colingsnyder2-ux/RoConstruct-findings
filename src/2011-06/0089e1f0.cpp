// roc 2011-06 0089e1f0  unit: CXTPHookManager::CHookSink  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e1f0
//
// 0089e1f0  837c240400           cmp dword ptr [esp + 4], 0
// 0089e1f5  56                   push esi
// 0089e1f6  8bf1                 mov esi, ecx
// 0089e1f8  742c                 je 0x89e226
// 0089e1fa  837e0400             cmp dword ptr [esi + 4], 0
// 0089e1fe  753b                 jne 0x89e23b
// 0089e200  57                   push edi
// 0089e201  e816c1f6ff           call 0x80a31c
// 0089e206  8b7808               mov edi, dword ptr [eax + 8]
// 0089e209  ff157003a400         call dword ptr [0xa40370]
// 0089e20f  50                   push eax
// 0089e210  57                   push edi
// 0089e211  68a0de8900           push 0x89dea0
// 0089e216  6a02                 push 2
// 0089e218  ff15001ba400         call dword ptr [0xa41b00]
// 0089e21e  5f                   pop edi
// 0089e21f  894604               mov dword ptr [esi + 4], eax
// 0089e222  5e                   pop esi
// 0089e223  c20400               ret 4
// 0089e226  8b4604               mov eax, dword ptr [esi + 4]
// 0089e229  85c0                 test eax, eax
// 0089e22b  740e                 je 0x89e23b
// 0089e22d  50                   push eax
// 0089e22e  ff15041ba400         call dword ptr [0xa41b04]
// 0089e234  c7460400000000       mov dword ptr [esi + 4], 0
// 0089e23b  5e                   pop esi
// 0089e23c  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPKeyboardManager.cpp (function ?SetupKeyboardHook@CXTPKeyboardManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPKeyboardManager.cpp
