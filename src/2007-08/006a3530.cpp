// roc 2007-08 006a3530  unit: CXTPHookManager::CHookSink  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3530
//
// 006a3530  837c240400           cmp dword ptr [esp + 4], 0
// 006a3535  56                   push esi
// 006a3536  8bf1                 mov esi, ecx
// 006a3538  742c                 je 0x6a3566
// 006a353a  837e0400             cmp dword ptr [esi + 4], 0
// 006a353e  753b                 jne 0x6a357b
// 006a3540  57                   push edi
// 006a3541  e8bcc9f8ff           call 0x62ff02
// 006a3546  8b7808               mov edi, dword ptr [eax + 8]
// 006a3549  ff15c4d27700         call dword ptr [0x77d2c4]
// 006a354f  50                   push eax
// 006a3550  57                   push edi
// 006a3551  6890316a00           push 0x6a3190
// 006a3556  6a02                 push 2
// 006a3558  ff153cee7700         call dword ptr [0x77ee3c]
// 006a355e  5f                   pop edi
// 006a355f  894604               mov dword ptr [esi + 4], eax
// 006a3562  5e                   pop esi
// 006a3563  c20400               ret 4
// 006a3566  8b4604               mov eax, dword ptr [esi + 4]
// 006a3569  85c0                 test eax, eax
// 006a356b  740e                 je 0x6a357b
// 006a356d  50                   push eax
// 006a356e  ff1538ee7700         call dword ptr [0x77ee38]
// 006a3574  c7460400000000       mov dword ptr [esi + 4], 0
// 006a357b  5e                   pop esi
// 006a357c  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPHookManager.cpp (function ?SetupKeyboardHook@CXTPKeyboardManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPHookManager.cpp
