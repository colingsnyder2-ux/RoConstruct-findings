// roc 2009-12 0045b920  unit: CRobloxDoc  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0045b920
//
// 0045b920  6aff                 push -1
// 0045b922  6813c39200           push 0x92c313
// 0045b927  64a100000000         mov eax, dword ptr fs:[0]
// 0045b92d  50                   push eax
// 0045b92e  64892500000000       mov dword ptr fs:[0], esp
// 0045b935  81ecec010000         sub esp, 0x1ec
// 0045b93b  56                   push esi
// 0045b93c  8bf1                 mov esi, ecx
// 0045b93e  8d4c2404             lea ecx, [esp + 4]
// 0045b942  ff1574de9800         call dword ptr [0x98de74]
// 0045b948  68d0000000           push 0xd0
// 0045b94d  8d4c2408             lea ecx, [esp + 8]
// 0045b951  c78424fc01000000000000 mov dword ptr [esp + 0x1fc], 0
// 0045b95c  ff1560cf9800         call dword ptr [0x98cf60]
// 0045b962  6a01                 push 1
// 0045b964  6a00                 push 0
// 0045b966  6a00                 push 0
// 0045b968  8d4c2410             lea ecx, [esp + 0x10]
// 0045b96c  ff1580de9800         call dword ptr [0x98de80]
// 0045b972  50                   push eax
// 0045b973  6a06                 push 6
// 0045b975  6a00                 push 0
// 0045b977  6808d09a00           push 0x9ad008
// 0045b97c  6a01                 push 1
// 0045b97e  8d4c2430             lea ecx, [esp + 0x30]
// 0045b982  e8c58c3900           call 0x7f464c
// 0045b987  8d4c2410             lea ecx, [esp + 0x10]
// 0045b98b  c68424f801000001     mov byte ptr [esp + 0x1f8], 1
// 0045b993  e8ae8c3900           call 0x7f4646
// 0045b998  83f801               cmp eax, 1
// 0045b99b  753f                 jne 0x45b9dc
// 0045b99d  8d442408             lea eax, [esp + 8]
// 0045b9a1  50                   push eax
// 0045b9a2  8d4c2414             lea ecx, [esp + 0x14]
// 0045b9a6  e8958c3900           call 0x7f4640
// 0045b9ab  8bc8                 mov ecx, eax
// 0045b9ad  c68424f801000002     mov byte ptr [esp + 0x1f8], 2
// 0045b9b5  ff1580de9800         call dword ptr [0x98de80]
// 0045b9bb  83ec1c               sub esp, 0x1c
// 0045b9be  8bcc                 mov ecx, esp
// 0045b9c0  89642428             mov dword ptr [esp + 0x28], esp
// 0045b9c4  50                   push eax
// 0045b9c5  ff15f4b69800         call dword ptr [0x98b6f4]
// 0045b9cb  8bce                 mov ecx, esi
// 0045b9cd  e83efdffff           call 0x45b710
// 0045b9d2  8d4c2408             lea ecx, [esp + 8]
// 0045b9d6  ff15c0de9800         call dword ptr [0x98dec0]
// 0045b9dc  8d4c2410             lea ecx, [esp + 0x10]
// 0045b9e0  c68424f801000000     mov byte ptr [esp + 0x1f8], 0
// 0045b9e8  e84d8c3900           call 0x7f463a
// 0045b9ed  8d4c2404             lea ecx, [esp + 4]
// 0045b9f1  ff15c0de9800         call dword ptr [0x98dec0]
// 0045b9f7  8b8c24f0010000       mov ecx, dword ptr [esp + 0x1f0]
// 0045b9fe  64890d00000000       mov dword ptr fs:[0], ecx
// 0045ba05  5e                   pop esi
// 0045ba06  81c4f8010000         add esp, 0x1f8
// 0045ba0c  c3                   ret 
// copied from an identical function in another client (function ?OnInsertModel@CRobloxView@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob0 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_8da179552268be3c.cpp