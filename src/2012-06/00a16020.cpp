// roc 2012-06 00a16020  unit: CXTPHookManagerHookAble  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16020
//
// 00a16020  56                   push esi
// 00a16021  8b711c               mov esi, dword ptr [ecx + 0x1c]
// 00a16024  57                   push edi
// 00a16025  85f6                 test esi, esi
// 00a16027  7438                 je 0xa16061
// 00a16029  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a1602d  8d4900               lea ecx, [ecx]
// 00a16030  8d54240c             lea edx, [esp + 0xc]
// 00a16034  52                   push edx
// 00a16035  8d542418             lea edx, [esp + 0x18]
// 00a16039  52                   push edx
// 00a1603a  8bc6                 mov eax, esi
// 00a1603c  8b4808               mov ecx, dword ptr [eax + 8]
// 00a1603f  8b7604               mov esi, dword ptr [esi + 4]
// 00a16042  8d542418             lea edx, [esp + 0x18]
// 00a16046  52                   push edx
// 00a16047  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00a1604f  8b01                 mov eax, dword ptr [ecx]
// 00a16051  8b4004               mov eax, dword ptr [eax + 4]
// 00a16054  57                   push edi
// 00a16055  6a00                 push 0
// 00a16057  ffd0                 call eax
// 00a16059  85c0                 test eax, eax
// 00a1605b  750e                 jne 0xa1606b
// 00a1605d  85f6                 test esi, esi
// 00a1605f  75cf                 jne 0xa16030
// 00a16061  5f                   pop edi
// 00a16062  b801000000           mov eax, 1
// 00a16067  5e                   pop esi
// 00a16068  c20c00               ret 0xc
// 00a1606b  33c9                 xor ecx, ecx
// 00a1606d  83f802               cmp eax, 2
// 00a16070  0f95c1               setne cl
// 00a16073  5f                   pop edi
// 00a16074  5e                   pop esi
// 00a16075  8bc1                 mov eax, ecx
// 00a16077  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPKeyboardManager.cpp (function ?ProcessKeyboardHooks@CXTPKeyboardManager@@QAEHIIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPKeyboardManager.cpp
