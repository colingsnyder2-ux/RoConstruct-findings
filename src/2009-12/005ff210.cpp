// roc 2009-12 005ff210  unit: G3D::_internal::DialogTemplate  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ff210
//
// 005ff210  6aff                 push -1
// 005ff212  6847fb9300           push 0x93fb47
// 005ff217  64a100000000         mov eax, dword ptr fs:[0]
// 005ff21d  50                   push eax
// 005ff21e  64892500000000       mov dword ptr fs:[0], esp
// 005ff225  81ecb4000000         sub esp, 0xb4
// 005ff22b  53                   push ebx
// 005ff22c  56                   push esi
// 005ff22d  8bf1                 mov esi, ecx
// 005ff22f  57                   push edi
// 005ff230  8d4c2434             lea ecx, [esp + 0x34]
// 005ff234  c6461c01             mov byte ptr [esi + 0x1c], 1
// 005ff238  ff15e8b69800         call dword ptr [0x98b6e8]
// 005ff23e  33db                 xor ebx, ebx
// 005ff240  8d4c246c             lea ecx, [esp + 0x6c]
// 005ff244  899c24c8000000       mov dword ptr [esp + 0xc8], ebx
// 005ff24b  ff15e8b69800         call dword ptr [0x98b6e8]
// 005ff251  8d4c2450             lea ecx, [esp + 0x50]
// 005ff255  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 005ff25d  ff15e8b69800         call dword ptr [0x98b6e8]
// 005ff263  8d4c2418             lea ecx, [esp + 0x18]
// 005ff267  c68424c800000002     mov byte ptr [esp + 0xc8], 2
// 005ff26f  ff15e8b69800         call dword ptr [0x98b6e8]
// 005ff275  895c2410             mov dword ptr [esp + 0x10], ebx
// 005ff279  895c2414             mov dword ptr [esp + 0x14], ebx
// 005ff27d  895c240c             mov dword ptr [esp + 0xc], ebx
// 005ff281  8d442450             lea eax, [esp + 0x50]
// 005ff285  50                   push eax
// 005ff286  8d4c2470             lea ecx, [esp + 0x70]
// 005ff28a  51                   push ecx
// 005ff28b  8d542414             lea edx, [esp + 0x14]
// 005ff28f  52                   push edx
// 005ff290  8d442440             lea eax, [esp + 0x40]
// 005ff294  50                   push eax
// 005ff295  56                   push esi
// 005ff296  c68424dc00000004     mov byte ptr [esp + 0xdc], 4
// 005ff29e  e82d6bffff           call 0x5f5dd0
// 005ff2a3  6a2f                 push 0x2f
// 005ff2a5  8d4c2424             lea ecx, [esp + 0x24]
// 005ff2a9  51                   push ecx
// 005ff2aa  8d9424c0000000       lea edx, [esp + 0xc0]
// 005ff2b1  52                   push edx
// 005ff2b2  e86942ffff           call 0x5f3520
// 005ff2b7  50                   push eax
// 005ff2b8  8d442458             lea eax, [esp + 0x58]
// 005ff2bc  50                   push eax
// 005ff2bd  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 005ff2c4  51                   push ecx
// 005ff2c5  c68424f400000005     mov byte ptr [esp + 0xf4], 5
// 005ff2cd  ff159cb59800         call dword ptr [0x98b59c]
// 005ff2d3  83c42c               add esp, 0x2c
// 005ff2d6  50                   push eax
// 005ff2d7  8d4c241c             lea ecx, [esp + 0x1c]
// 005ff2db  c68424cc00000006     mov byte ptr [esp + 0xcc], 6
// 005ff2e3  ff159cb69800         call dword ptr [0x98b69c]
// 005ff2e9  8d8c2488000000       lea ecx, [esp + 0x88]
// 005ff2f0  c68424c800000005     mov byte ptr [esp + 0xc8], 5
// 005ff2f8  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ff2fe  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 005ff305  c68424c800000004     mov byte ptr [esp + 0xc8], 4
// 005ff30d  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ff313  8d542418             lea edx, [esp + 0x18]
// 005ff317  52                   push edx
// 005ff318  e83369ffff           call 0x5f5c50
// 005ff31d  83c404               add esp, 4
// 005ff320  84c0                 test al, al
// 005ff322  750d                 jne 0x5ff331
// 005ff324  8d442418             lea eax, [esp + 0x18]
// 005ff328  50                   push eax
// 005ff329  e80270ffff           call 0x5f6330
// 005ff32e  83c404               add esp, 4
// 005ff331  b908309c00           mov ecx, 0x9c3008
// 005ff336  395e44               cmp dword ptr [esi + 0x44], ebx
// 005ff339  7705                 ja 0x5ff340
// 005ff33b  b914e99b00           mov ecx, 0x9be914
// 005ff340  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 005ff344  7205                 jb 0x5ff34b
// 005ff346  8b4604               mov eax, dword ptr [esi + 4]
// 005ff349  eb03                 jmp 0x5ff34e
// 005ff34b  8d4604               lea eax, [esi + 4]
// 005ff34e  51                   push ecx
// 005ff34f  50                   push eax
// 005ff350  ff1504b89800         call dword ptr [0x98b804]
// 005ff356  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005ff359  8bf8                 mov edi, eax
// 005ff35b  8b4634               mov eax, dword ptr [esi + 0x34]
// 005ff35e  014644               add dword ptr [esi + 0x44], eax
// 005ff361  57                   push edi
// 005ff362  6a01                 push 1
// 005ff364  50                   push eax
// 005ff365  51                   push ecx
// 005ff366  ff158cb89800         call dword ptr [0x98b88c]
// 005ff36c  83c418               add esp, 0x18
// 005ff36f  389c24d0000000       cmp byte ptr [esp + 0xd0], bl
// 005ff376  740a                 je 0x5ff382
// 005ff378  57                   push edi
// 005ff379  ff15ecb79800         call dword ptr [0x98b7ec]
// 005ff37f  83c404               add esp, 4
// 005ff382  57                   push edi
// 005ff383  ff1584b89800         call dword ptr [0x98b884]
// 005ff389  83c404               add esp, 4
// 005ff38c  8d4c240c             lea ecx, [esp + 0xc]
// 005ff390  c68424c800000003     mov byte ptr [esp + 0xc8], 3
// 005ff398  e823b8feff           call 0x5eabc0
// 005ff39d  8d4c2418             lea ecx, [esp + 0x18]
// 005ff3a1  c68424c800000002     mov byte ptr [esp + 0xc8], 2
// 005ff3a9  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ff3af  8d4c2450             lea ecx, [esp + 0x50]
// 005ff3b3  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 005ff3bb  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ff3c1  8d4c246c             lea ecx, [esp + 0x6c]
// 005ff3c5  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 005ff3cc  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ff3d2  8d4c2434             lea ecx, [esp + 0x34]
// 005ff3d6  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 005ff3e1  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ff3e7  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 005ff3ee  5f                   pop edi
// 005ff3ef  5e                   pop esi
// 005ff3f0  5b                   pop ebx
// 005ff3f1  64890d00000000       mov dword ptr fs:[0], ecx
// 005ff3f8  81c4c0000000         add esp, 0xc0
// 005ff3fe  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?commit@BinaryOutput@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
