// roc 2010-06 0045ff30  unit: CRobloxDoc  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0045ff30
//
// 0045ff30  6aff                 push -1
// 0045ff32  6863329800           push 0x983263
// 0045ff37  64a100000000         mov eax, dword ptr fs:[0]
// 0045ff3d  50                   push eax
// 0045ff3e  64892500000000       mov dword ptr fs:[0], esp
// 0045ff45  81ecec010000         sub esp, 0x1ec
// 0045ff4b  56                   push esi
// 0045ff4c  8bf1                 mov esi, ecx
// 0045ff4e  8d4c2404             lea ecx, [esp + 4]
// 0045ff52  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 0045ff58  68d0000000           push 0xd0
// 0045ff5d  8d4c2408             lea ecx, [esp + 8]
// 0045ff61  c78424fc01000000000000 mov dword ptr [esp + 0x1fc], 0
// 0045ff6c  ff15b8bf9e00         call dword ptr [0x9ebfb8]
// 0045ff72  6a01                 push 1
// 0045ff74  6a00                 push 0
// 0045ff76  6a00                 push 0
// 0045ff78  8d4c2410             lea ecx, [esp + 0x10]
// 0045ff7c  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0045ff82  50                   push eax
// 0045ff83  6a06                 push 6
// 0045ff85  6a00                 push 0
// 0045ff87  6888dea000           push 0xa0de88
// 0045ff8c  6a01                 push 1
// 0045ff8e  8d4c2430             lea ecx, [esp + 0x30]
// 0045ff92  e8f5873400           call 0x7a878c
// 0045ff97  8d4c2410             lea ecx, [esp + 0x10]
// 0045ff9b  c68424f801000001     mov byte ptr [esp + 0x1f8], 1
// 0045ffa3  e8de873400           call 0x7a8786
// 0045ffa8  83f801               cmp eax, 1
// 0045ffab  753f                 jne 0x45ffec
// 0045ffad  8d442408             lea eax, [esp + 8]
// 0045ffb1  50                   push eax
// 0045ffb2  8d4c2414             lea ecx, [esp + 0x14]
// 0045ffb6  e8c5873400           call 0x7a8780
// 0045ffbb  8bc8                 mov ecx, eax
// 0045ffbd  c68424f801000002     mov byte ptr [esp + 0x1f8], 2
// 0045ffc5  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0045ffcb  83ec1c               sub esp, 0x1c
// 0045ffce  8bcc                 mov ecx, esp
// 0045ffd0  89642428             mov dword ptr [esp + 0x28], esp
// 0045ffd4  50                   push eax
// 0045ffd5  ff1510a49e00         call dword ptr [0x9ea410]
// 0045ffdb  8bce                 mov ecx, esi
// 0045ffdd  e83efdffff           call 0x45fd20
// 0045ffe2  8d4c2408             lea ecx, [esp + 8]
// 0045ffe6  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0045ffec  8d4c2410             lea ecx, [esp + 0x10]
// 0045fff0  c68424f801000000     mov byte ptr [esp + 0x1f8], 0
// 0045fff8  e87d873400           call 0x7a877a
// 0045fffd  8d4c2404             lea ecx, [esp + 4]
// 00460001  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00460007  8b8c24f0010000       mov ecx, dword ptr [esp + 0x1f0]
// 0046000e  64890d00000000       mov dword ptr fs:[0], ecx
// 00460015  5e                   pop esi
// 00460016  81c4f8010000         add esp, 0x1f8
// 0046001c  c3                   ret 
// copied from an identical function in another client (function ?OnInsertModel@CRobloxView@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob0 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_8da179552268be3c.cpp