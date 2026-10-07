// roc 2011-06 0089e240  unit: CXTPHookManager::CHookSink  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e240
//
// 0089e240  837c240400           cmp dword ptr [esp + 4], 0
// 0089e245  56                   push esi
// 0089e246  8bf1                 mov esi, ecx
// 0089e248  742c                 je 0x89e276
// 0089e24a  837e0800             cmp dword ptr [esi + 8], 0
// 0089e24e  753b                 jne 0x89e28b
// 0089e250  57                   push edi
// 0089e251  e8c6c0f6ff           call 0x80a31c
// 0089e256  8b7808               mov edi, dword ptr [eax + 8]
// 0089e259  ff157003a400         call dword ptr [0xa40370]
// 0089e25f  50                   push eax
// 0089e260  57                   push edi
// 0089e261  68b0dd8900           push 0x89ddb0
// 0089e266  6a04                 push 4
// 0089e268  ff15001ba400         call dword ptr [0xa41b00]
// 0089e26e  5f                   pop edi
// 0089e26f  894608               mov dword ptr [esi + 8], eax
// 0089e272  5e                   pop esi
// 0089e273  c20400               ret 4
// 0089e276  8b4608               mov eax, dword ptr [esi + 8]
// 0089e279  85c0                 test eax, eax
// 0089e27b  740e                 je 0x89e28b
// 0089e27d  50                   push eax
// 0089e27e  ff15041ba400         call dword ptr [0xa41b04]
// 0089e284  c7460800000000       mov dword ptr [esi + 8], 0
// 0089e28b  5e                   pop esi
// 0089e28c  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPKeyboardManager.cpp (function ?SetupCallWndProcHook@CXTPKeyboardManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPKeyboardManager.cpp
