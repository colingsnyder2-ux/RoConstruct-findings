// roc 2009-12 00839880  unit: PAVCXTPDockingPaneBase::?$CList  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839880
//
// 00839880  6aff                 push -1
// 00839882  6898c59500           push 0x95c598
// 00839887  64a100000000         mov eax, dword ptr fs:[0]
// 0083988d  50                   push eax
// 0083988e  83ec1c               sub esp, 0x1c
// 00839891  53                   push ebx
// 00839892  55                   push ebp
// 00839893  56                   push esi
// 00839894  57                   push edi
// 00839895  a10052b600           mov eax, dword ptr [0xb65200]
// 0083989a  33c4                 xor eax, esp
// 0083989c  50                   push eax
// 0083989d  8d442430             lea eax, [esp + 0x30]
// 008398a1  64a300000000         mov dword ptr fs:[0], eax
// 008398a7  8bd9                 mov ebx, ecx
// 008398a9  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008398ad  85ff                 test edi, edi
// 008398af  0f84a2000000         je 0x839957
// 008398b5  837f1800             cmp dword ptr [edi + 0x18], 0
// 008398b9  7503                 jne 0x8398be
// 008398bb  8b7f10               mov edi, dword ptr [edi + 0x10]
// 008398be  85ff                 test edi, edi
// 008398c0  0f8491000000         je 0x839957
// 008398c6  8b742440             mov esi, dword ptr [esp + 0x40]
// 008398ca  837e1800             cmp dword ptr [esi + 0x18], 0
// 008398ce  7516                 jne 0x8398e6
// 008398d0  56                   push esi
// 008398d1  e8aaecffff           call 0x838580
// 008398d6  8d46e0               lea eax, [esi - 0x20]
// 008398d9  6a01                 push 1
// 008398db  8d4fac               lea ecx, [edi - 0x54]
// 008398de  50                   push eax
// 008398df  e85c970700           call 0x8b3040
// 008398e4  eb67                 jmp 0x83994d
// 008398e6  6a0a                 push 0xa
// 008398e8  8d4c2418             lea ecx, [esp + 0x18]
// 008398ec  e8cffdffff           call 0x8396c0
// 008398f1  8b06                 mov eax, dword ptr [esi]
// 008398f3  8b500c               mov edx, dword ptr [eax + 0xc]
// 008398f6  8d4c2414             lea ecx, [esp + 0x14]
// 008398fa  51                   push ecx
// 008398fb  6a00                 push 0
// 008398fd  8bce                 mov ecx, esi
// 008398ff  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00839907  ffd2                 call edx
// 00839909  8b742418             mov esi, dword ptr [esp + 0x18]
// 0083990d  85f6                 test esi, esi
// 0083990f  742b                 je 0x83993c
// 00839911  8d6fac               lea ebp, [edi - 0x54]
// 00839914  8bc6                 mov eax, esi
// 00839916  8b7808               mov edi, dword ptr [eax + 8]
// 00839919  8b36                 mov esi, dword ptr [esi]
// 0083991b  57                   push edi
// 0083991c  8bcb                 mov ecx, ebx
// 0083991e  e85decffff           call 0x838580
// 00839923  85ff                 test edi, edi
// 00839925  7405                 je 0x83992c
// 00839927  8d47e0               lea eax, [edi - 0x20]
// 0083992a  eb02                 jmp 0x83992e
// 0083992c  33c0                 xor eax, eax
// 0083992e  6a01                 push 1
// 00839930  50                   push eax
// 00839931  8bcd                 mov ecx, ebp
// 00839933  e808970700           call 0x8b3040
// 00839938  85f6                 test esi, esi
// 0083993a  75d8                 jne 0x839914
// 0083993c  8d4c2414             lea ecx, [esp + 0x14]
// 00839940  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00839948  e8a3fdffff           call 0x8396f0
// 0083994d  c7833801000000000000 mov dword ptr [ebx + 0x138], 0
// 00839957  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0083995b  64890d00000000       mov dword ptr fs:[0], ecx
// 00839962  59                   pop ecx
// 00839963  5f                   pop edi
// 00839964  5e                   pop esi
// 00839965  5d                   pop ebp
// 00839966  5b                   pop ebx
// 00839967  83c428               add esp, 0x28
// 0083996a  c20800               ret 8
// copied from an identical function in another client (function ?_AttachPane@CXTPDockingPaneManager@@AAEXPAVCXTPDockingPaneBase@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp