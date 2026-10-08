// roc 2009-12 005f5ca0  unit: G3D::BinaryInput  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f5ca0
//
// 005f5ca0  6aff                 push -1
// 005f5ca2  6883f59300           push 0x93f583
// 005f5ca7  64a100000000         mov eax, dword ptr fs:[0]
// 005f5cad  50                   push eax
// 005f5cae  64892500000000       mov dword ptr fs:[0], esp
// 005f5cb5  83ec50               sub esp, 0x50
// 005f5cb8  53                   push ebx
// 005f5cb9  55                   push ebp
// 005f5cba  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 005f5cbe  56                   push esi
// 005f5cbf  57                   push edi
// 005f5cc0  55                   push ebp
// 005f5cc1  b9443fb800           mov ecx, 0xb83f44
// 005f5cc6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005f5cce  e8dd5dffff           call 0x5ebab0
// 005f5cd3  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 005f5cd7  8d5d04               lea ebx, [ebp + 4]
// 005f5cda  7204                 jb 0x5f5ce0
// 005f5cdc  8b03                 mov eax, dword ptr [ebx]
// 005f5cde  eb02                 jmp 0x5f5ce2
// 005f5ce0  8bc3                 mov eax, ebx
// 005f5ce2  8d4c2430             lea ecx, [esp + 0x30]
// 005f5ce6  51                   push ecx
// 005f5ce7  50                   push eax
// 005f5ce8  ff1548b89800         call dword ptr [0x98b848]
// 005f5cee  83c408               add esp, 8
// 005f5cf1  83f8ff               cmp eax, -1
// 005f5cf4  740e                 je 0x5f5d04
// 005f5cf6  8b442444             mov eax, dword ptr [esp + 0x44]
// 005f5cfa  99                   cdq 
// 005f5cfb  8bf8                 mov edi, eax
// 005f5cfd  23c2                 and eax, edx
// 005f5cff  83f8ff               cmp eax, -1
// 005f5d02  7526                 jne 0x5f5d2a
// 005f5d04  8b742470             mov esi, dword ptr [esp + 0x70]
// 005f5d08  6856fd9900           push 0x99fd56
// 005f5d0d  8bce                 mov ecx, esi
// 005f5d0f  ff15f4b69800         call dword ptr [0x98b6f4]
// 005f5d15  5f                   pop edi
// 005f5d16  8bc6                 mov eax, esi
// 005f5d18  5e                   pop esi
// 005f5d19  5d                   pop ebp
// 005f5d1a  5b                   pop ebx
// 005f5d1b  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005f5d1f  64890d00000000       mov dword ptr fs:[0], ecx
// 005f5d26  83c45c               add esp, 0x5c
// 005f5d29  c3                   ret 
// 005f5d2a  8d4f01               lea ecx, [edi + 1]
// 005f5d2d  51                   push ecx
// 005f5d2e  ff1578b79800         call dword ptr [0x98b778]
// 005f5d34  83c404               add esp, 4
// 005f5d37  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 005f5d3b  8bf0                 mov esi, eax
// 005f5d3d  7204                 jb 0x5f5d43
// 005f5d3f  8b03                 mov eax, dword ptr [ebx]
// 005f5d41  eb02                 jmp 0x5f5d45
// 005f5d43  8bc3                 mov eax, ebx
// 005f5d45  6818e99b00           push 0x9be918
// 005f5d4a  50                   push eax
// 005f5d4b  ff1504b89800         call dword ptr [0x98b804]
// 005f5d51  8be8                 mov ebp, eax
// 005f5d53  55                   push ebp
// 005f5d54  57                   push edi
// 005f5d55  bb01000000           mov ebx, 1
// 005f5d5a  53                   push ebx
// 005f5d5b  56                   push esi
// 005f5d5c  ff15a4b89800         call dword ptr [0x98b8a4]
// 005f5d62  55                   push ebp
// 005f5d63  ff1584b89800         call dword ptr [0x98b884]
// 005f5d69  83c41c               add esp, 0x1c
// 005f5d6c  56                   push esi
// 005f5d6d  8d4c2418             lea ecx, [esp + 0x18]
// 005f5d71  c6043700             mov byte ptr [edi + esi], 0
// 005f5d75  ff15f4b69800         call dword ptr [0x98b6f4]
// 005f5d7b  56                   push esi
// 005f5d7c  895c246c             mov dword ptr [esp + 0x6c], ebx
// 005f5d80  ff1540b79800         call dword ptr [0x98b740]
// 005f5d86  8b742474             mov esi, dword ptr [esp + 0x74]
// 005f5d8a  83c404               add esp, 4
// 005f5d8d  8d542414             lea edx, [esp + 0x14]
// 005f5d91  52                   push edx
// 005f5d92  8bce                 mov ecx, esi
// 005f5d94  ff15f0b69800         call dword ptr [0x98b6f0]
// 005f5d9a  8d4c2414             lea ecx, [esp + 0x14]
// 005f5d9e  895c2410             mov dword ptr [esp + 0x10], ebx
// 005f5da2  c644246800           mov byte ptr [esp + 0x68], 0
// 005f5da7  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f5dad  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005f5db1  5f                   pop edi
// 005f5db2  8bc6                 mov eax, esi
// 005f5db4  5e                   pop esi
// 005f5db5  5d                   pop ebp
// 005f5db6  5b                   pop ebx
// 005f5db7  64890d00000000       mov dword ptr fs:[0], ecx
// 005f5dbe  83c45c               add esp, 0x5c
// 005f5dc1  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?readFileAsString@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
