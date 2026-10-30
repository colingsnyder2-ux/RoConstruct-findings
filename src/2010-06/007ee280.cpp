// roc 2010-06 007ee280  unit: CXTPDockingPaneManager  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ee280
//
// 007ee280  53                   push ebx
// 007ee281  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007ee285  55                   push ebp
// 007ee286  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007ee28a  56                   push esi
// 007ee28b  57                   push edi
// 007ee28c  8bf1                 mov esi, ecx
// 007ee28e  83fd02               cmp ebp, 2
// 007ee291  754f                 jne 0x7ee2e2
// 007ee293  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 007ee29a  742c                 je 0x7ee2c8
// 007ee29c  6870ca7e00           push 0x7eca70
// 007ee2a1  b95062c200           mov ecx, 0xc26250
// 007ee2a6  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 007ee2b0  e8c3ea1800           call 0x97cd78
// 007ee2b5  85c0                 test eax, eax
// 007ee2b7  7505                 jne 0x7ee2be
// 007ee2b9  e88e99fbff           call 0x7a7c4c
// 007ee2be  6a00                 push 0
// 007ee2c0  56                   push esi
// 007ee2c1  8bc8                 mov ecx, eax
// 007ee2c3  e8f8410700           call 0x8624c0
// 007ee2c8  8b542420             mov edx, dword ptr [esp + 0x20]
// 007ee2cc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ee2d0  52                   push edx
// 007ee2d1  50                   push eax
// 007ee2d2  53                   push ebx
// 007ee2d3  55                   push ebp
// 007ee2d4  8bce                 mov ecx, esi
// 007ee2d6  e83f98fbff           call 0x7a7b1a
// 007ee2db  5f                   pop edi
// 007ee2dc  5e                   pop esi
// 007ee2dd  5d                   pop ebp
// 007ee2de  5b                   pop ebx
// 007ee2df  c21000               ret 0x10
// 007ee2e2  81fd12010000         cmp ebp, 0x112
// 007ee2e8  75de                 jne 0x7ee2c8
// 007ee2ea  81fb00f10000         cmp ebx, 0xf100
// 007ee2f0  7540                 jne 0x7ee332
// 007ee2f2  66837c241c2d         cmp word ptr [esp + 0x1c], 0x2d
// 007ee2f8  75ce                 jne 0x7ee2c8
// 007ee2fa  8bbed8000000         mov edi, dword ptr [esi + 0xd8]
// 007ee300  85ff                 test edi, edi
// 007ee302  74c4                 je 0x7ee2c8
// 007ee304  8bcf                 mov ecx, edi
// 007ee306  e8c5260200           call 0x8109d0
// 007ee30b  85c0                 test eax, eax
// 007ee30d  75b9                 jne 0x7ee2c8
// 007ee30f  8b4720               mov eax, dword ptr [edi + 0x20]
// 007ee312  8b501c               mov edx, dword ptr [eax + 0x1c]
// 007ee315  8d4f20               lea ecx, [edi + 0x20]
// 007ee318  ffd2                 call edx
// 007ee31a  85c0                 test eax, eax
// 007ee31c  75aa                 jne 0x7ee2c8
// 007ee31e  57                   push edi
// 007ee31f  8bce                 mov ecx, esi
// 007ee321  e82af2ffff           call 0x7ed550
// 007ee326  5f                   pop edi
// 007ee327  5e                   pop esi
// 007ee328  5d                   pop ebp
// 007ee329  b801000000           mov eax, 1
// 007ee32e  5b                   pop ebx
// 007ee32f  c21000               ret 0x10
// 007ee332  81fb40f00000         cmp ebx, 0xf040
// 007ee338  7408                 je 0x7ee342
// 007ee33a  81fb50f00000         cmp ebx, 0xf050
// 007ee340  7586                 jne 0x7ee2c8
// 007ee342  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 007ee348  33c9                 xor ecx, ecx
// 007ee34a  81fb40f00000         cmp ebx, 0xf040
// 007ee350  0f94c1               sete cl
// 007ee353  51                   push ecx
// 007ee354  50                   push eax
// 007ee355  8bce                 mov ecx, esi
// 007ee357  e864f3ffff           call 0x7ed6c0
// 007ee35c  5f                   pop edi
// 007ee35d  5e                   pop esi
// 007ee35e  5d                   pop ebp
// 007ee35f  5b                   pop ebx
// 007ee360  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnWndMsg@CXTPDockingPaneManager@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
