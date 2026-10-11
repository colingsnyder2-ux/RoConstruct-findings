// roc 2008-06 005a8440  unit: RBX::Log  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8440
//
// 005a8440  6aff                 push -1
// 005a8442  68e5307d00           push 0x7d30e5
// 005a8447  64a100000000         mov eax, dword ptr fs:[0]
// 005a844d  50                   push eax
// 005a844e  64892500000000       mov dword ptr fs:[0], esp
// 005a8455  81ec84000000         sub esp, 0x84
// 005a845b  56                   push esi
// 005a845c  c744240400000000     mov dword ptr [esp + 4], 0
// 005a8464  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 005a846b  57                   push edi
// 005a846c  8bf9                 mov edi, ecx
// 005a846e  85f6                 test esi, esi
// 005a8470  0f8ec8000000         jle 0x5a853e
// 005a8476  8b07                 mov eax, dword ptr [edi]
// 005a8478  83c004               add eax, 4
// 005a847b  50                   push eax
// 005a847c  8d4c2418             lea ecx, [esp + 0x18]
// 005a8480  ff155c248000         call dword ptr [0x80245c]
// 005a8486  83fe20               cmp esi, 0x20
// 005a8489  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a848d  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 005a8498  c744241020000000     mov dword ptr [esp + 0x10], 0x20
// 005a84a0  8944240c             mov dword ptr [esp + 0xc], eax
// 005a84a4  c744240803000000     mov dword ptr [esp + 8], 3
// 005a84ac  8d4c2410             lea ecx, [esp + 0x10]
// 005a84b0  7f07                 jg 0x5a84b9
// 005a84b2  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 005a84b9  83f803               cmp eax, 3
// 005a84bc  8d44240c             lea eax, [esp + 0xc]
// 005a84c0  7204                 jb 0x5a84c6
// 005a84c2  8d442408             lea eax, [esp + 8]
// 005a84c6  8b09                 mov ecx, dword ptr [ecx]
// 005a84c8  8b10                 mov edx, dword ptr [eax]
// 005a84ca  51                   push ecx
// 005a84cb  52                   push edx
// 005a84cc  8d442438             lea eax, [esp + 0x38]
// 005a84d0  50                   push eax
// 005a84d1  8d4c2420             lea ecx, [esp + 0x20]
// 005a84d5  ff15e0238000         call dword ptr [0x8023e0]
// 005a84db  50                   push eax
// 005a84dc  8d4c2418             lea ecx, [esp + 0x18]
// 005a84e0  c684249800000001     mov byte ptr [esp + 0x98], 1
// 005a84e8  ff150c248000         call dword ptr [0x80240c]
// 005a84ee  8d4c2430             lea ecx, [esp + 0x30]
// 005a84f2  c684249400000000     mov byte ptr [esp + 0x94], 0
// 005a84fa  ff1568248000         call dword ptr [0x802468]
// 005a8500  837c242c10           cmp dword ptr [esp + 0x2c], 0x10
// 005a8505  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a8509  7304                 jae 0x5a850f
// 005a850b  8d442418             lea eax, [esp + 0x18]
// 005a850f  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a8512  51                   push ecx
// 005a8513  50                   push eax
// 005a8514  8d542454             lea edx, [esp + 0x54]
// 005a8518  6848438300           push 0x834348
// 005a851d  52                   push edx
// 005a851e  ff1530288000         call dword ptr [0x802830]
// 005a8524  83c410               add esp, 0x10
// 005a8527  8d4c2414             lea ecx, [esp + 0x14]
// 005a852b  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 005a8536  ff1568248000         call dword ptr [0x802468]
// 005a853c  eb17                 jmp 0x5a8555
// 005a853e  8b4704               mov eax, dword ptr [edi + 4]
// 005a8541  50                   push eax
// 005a8542  8d4c2450             lea ecx, [esp + 0x50]
// 005a8546  68d0358100           push 0x8135d0
// 005a854b  51                   push ecx
// 005a854c  ff1530288000         call dword ptr [0x802830]
// 005a8552  83c40c               add esp, 0xc
// 005a8555  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 005a855c  8d54244c             lea edx, [esp + 0x4c]
// 005a8560  52                   push edx
// 005a8561  8bce                 mov ecx, esi
// 005a8563  ff1558248000         call dword ptr [0x802458]
// 005a8569  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 005a8570  5f                   pop edi
// 005a8571  8bc6                 mov eax, esi
// 005a8573  5e                   pop esi
// 005a8574  64890d00000000       mov dword ptr fs:[0], ecx
// 005a857b  81c490000000         add esp, 0x90
// 005a8581  c20800               ret 8
// library openrbx-client/App\util\Guid.cpp (function ?readableString@Data@Guid@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Guid.cpp
