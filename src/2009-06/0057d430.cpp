// roc 2009-06 0057d430  unit: G3D::_internal::DialogTemplate  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057d430
//
// 0057d430  6aff                 push -1
// 0057d432  68b70b8600           push 0x860bb7
// 0057d437  64a100000000         mov eax, dword ptr fs:[0]
// 0057d43d  50                   push eax
// 0057d43e  64892500000000       mov dword ptr fs:[0], esp
// 0057d445  81ecb4000000         sub esp, 0xb4
// 0057d44b  53                   push ebx
// 0057d44c  56                   push esi
// 0057d44d  8bf1                 mov esi, ecx
// 0057d44f  57                   push edi
// 0057d450  8d4c2434             lea ecx, [esp + 0x34]
// 0057d454  c6461c01             mov byte ptr [esi + 0x1c], 1
// 0057d458  ff15c0e48900         call dword ptr [0x89e4c0]
// 0057d45e  33db                 xor ebx, ebx
// 0057d460  8d4c246c             lea ecx, [esp + 0x6c]
// 0057d464  899c24c8000000       mov dword ptr [esp + 0xc8], ebx
// 0057d46b  ff15c0e48900         call dword ptr [0x89e4c0]
// 0057d471  8d4c2450             lea ecx, [esp + 0x50]
// 0057d475  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 0057d47d  ff15c0e48900         call dword ptr [0x89e4c0]
// 0057d483  8d4c2418             lea ecx, [esp + 0x18]
// 0057d487  c68424c800000002     mov byte ptr [esp + 0xc8], 2
// 0057d48f  ff15c0e48900         call dword ptr [0x89e4c0]
// 0057d495  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057d499  895c2414             mov dword ptr [esp + 0x14], ebx
// 0057d49d  895c240c             mov dword ptr [esp + 0xc], ebx
// 0057d4a1  8d442450             lea eax, [esp + 0x50]
// 0057d4a5  50                   push eax
// 0057d4a6  8d4c2470             lea ecx, [esp + 0x70]
// 0057d4aa  51                   push ecx
// 0057d4ab  8d542414             lea edx, [esp + 0x14]
// 0057d4af  52                   push edx
// 0057d4b0  8d442440             lea eax, [esp + 0x40]
// 0057d4b4  50                   push eax
// 0057d4b5  56                   push esi
// 0057d4b6  c68424dc00000004     mov byte ptr [esp + 0xdc], 4
// 0057d4be  e8fd85ffff           call 0x575ac0
// 0057d4c3  6a2f                 push 0x2f
// 0057d4c5  8d4c2424             lea ecx, [esp + 0x24]
// 0057d4c9  51                   push ecx
// 0057d4ca  8d9424c0000000       lea edx, [esp + 0xc0]
// 0057d4d1  52                   push edx
// 0057d4d2  e87970ffff           call 0x574550
// 0057d4d7  50                   push eax
// 0057d4d8  8d442458             lea eax, [esp + 0x58]
// 0057d4dc  50                   push eax
// 0057d4dd  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 0057d4e4  51                   push ecx
// 0057d4e5  c68424f400000005     mov byte ptr [esp + 0xf4], 5
// 0057d4ed  ff150ce58900         call dword ptr [0x89e50c]
// 0057d4f3  83c42c               add esp, 0x2c
// 0057d4f6  50                   push eax
// 0057d4f7  8d4c241c             lea ecx, [esp + 0x1c]
// 0057d4fb  c68424cc00000006     mov byte ptr [esp + 0xcc], 6
// 0057d503  ff1564e48900         call dword ptr [0x89e464]
// 0057d509  8d8c2488000000       lea ecx, [esp + 0x88]
// 0057d510  c68424c800000005     mov byte ptr [esp + 0xc8], 5
// 0057d518  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057d51e  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0057d525  c68424c800000004     mov byte ptr [esp + 0xc8], 4
// 0057d52d  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057d533  8d542418             lea edx, [esp + 0x18]
// 0057d537  52                   push edx
// 0057d538  e80384ffff           call 0x575940
// 0057d53d  83c404               add esp, 4
// 0057d540  84c0                 test al, al
// 0057d542  750d                 jne 0x57d551
// 0057d544  8d442418             lea eax, [esp + 0x18]
// 0057d548  50                   push eax
// 0057d549  e8d28affff           call 0x576020
// 0057d54e  83c404               add esp, 4
// 0057d551  b960c18c00           mov ecx, 0x8cc160
// 0057d556  395e44               cmp dword ptr [esi + 0x44], ebx
// 0057d559  7705                 ja 0x57d560
// 0057d55b  b9e8678c00           mov ecx, 0x8c67e8
// 0057d560  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0057d564  7205                 jb 0x57d56b
// 0057d566  8b4604               mov eax, dword ptr [esi + 4]
// 0057d569  eb03                 jmp 0x57d56e
// 0057d56b  8d4604               lea eax, [esi + 4]
// 0057d56e  51                   push ecx
// 0057d56f  50                   push eax
// 0057d570  ff1514e98900         call dword ptr [0x89e914]
// 0057d576  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0057d579  8bf8                 mov edi, eax
// 0057d57b  8b4634               mov eax, dword ptr [esi + 0x34]
// 0057d57e  014644               add dword ptr [esi + 0x44], eax
// 0057d581  57                   push edi
// 0057d582  6a01                 push 1
// 0057d584  50                   push eax
// 0057d585  51                   push ecx
// 0057d586  ff15a0e88900         call dword ptr [0x89e8a0]
// 0057d58c  83c418               add esp, 0x18
// 0057d58f  389c24d0000000       cmp byte ptr [esp + 0xd0], bl
// 0057d596  740a                 je 0x57d5a2
// 0057d598  57                   push edi
// 0057d599  ff152ce98900         call dword ptr [0x89e92c]
// 0057d59f  83c404               add esp, 4
// 0057d5a2  57                   push edi
// 0057d5a3  ff15a4e88900         call dword ptr [0x89e8a4]
// 0057d5a9  83c404               add esp, 4
// 0057d5ac  8d4c240c             lea ecx, [esp + 0xc]
// 0057d5b0  c68424c800000003     mov byte ptr [esp + 0xc8], 3
// 0057d5b8  e8d3e4feff           call 0x56ba90
// 0057d5bd  8d4c2418             lea ecx, [esp + 0x18]
// 0057d5c1  c68424c800000002     mov byte ptr [esp + 0xc8], 2
// 0057d5c9  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057d5cf  8d4c2450             lea ecx, [esp + 0x50]
// 0057d5d3  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 0057d5db  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057d5e1  8d4c246c             lea ecx, [esp + 0x6c]
// 0057d5e5  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 0057d5ec  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057d5f2  8d4c2434             lea ecx, [esp + 0x34]
// 0057d5f6  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 0057d601  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057d607  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 0057d60e  5f                   pop edi
// 0057d60f  5e                   pop esi
// 0057d610  5b                   pop ebx
// 0057d611  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d618  81c4c0000000         add esp, 0xc0
// 0057d61e  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?commit@BinaryOutput@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
