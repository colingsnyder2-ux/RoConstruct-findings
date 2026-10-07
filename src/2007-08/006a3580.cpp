// roc 2007-08 006a3580  unit: CXTPHookManager::CHookSink  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3580
//
// 006a3580  837c240400           cmp dword ptr [esp + 4], 0
// 006a3585  56                   push esi
// 006a3586  8bf1                 mov esi, ecx
// 006a3588  742c                 je 0x6a35b6
// 006a358a  837e0800             cmp dword ptr [esi + 8], 0
// 006a358e  753b                 jne 0x6a35cb
// 006a3590  57                   push edi
// 006a3591  e86cc9f8ff           call 0x62ff02
// 006a3596  8b7808               mov edi, dword ptr [eax + 8]
// 006a3599  ff15c4d27700         call dword ptr [0x77d2c4]
// 006a359f  50                   push eax
// 006a35a0  57                   push edi
// 006a35a1  68a0306a00           push 0x6a30a0
// 006a35a6  6a04                 push 4
// 006a35a8  ff153cee7700         call dword ptr [0x77ee3c]
// 006a35ae  5f                   pop edi
// 006a35af  894608               mov dword ptr [esi + 8], eax
// 006a35b2  5e                   pop esi
// 006a35b3  c20400               ret 4
// 006a35b6  8b4608               mov eax, dword ptr [esi + 8]
// 006a35b9  85c0                 test eax, eax
// 006a35bb  740e                 je 0x6a35cb
// 006a35bd  50                   push eax
// 006a35be  ff1538ee7700         call dword ptr [0x77ee38]
// 006a35c4  c7460800000000       mov dword ptr [esi + 8], 0
// 006a35cb  5e                   pop esi
// 006a35cc  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPHookManager.cpp (function ?SetupCallWndProcHook@CXTPKeyboardManager@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPHookManager.cpp
