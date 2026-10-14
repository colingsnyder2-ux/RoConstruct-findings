// roc 2008-06 00473350  unit: G3D::ReferenceCountedObject  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00473350
//
// 00473350  6aff                 push -1
// 00473352  6860457c00           push 0x7c4560
// 00473357  64a100000000         mov eax, dword ptr fs:[0]
// 0047335d  50                   push eax
// 0047335e  64892500000000       mov dword ptr fs:[0], esp
// 00473365  81ecb4000000         sub esp, 0xb4
// 0047336b  68a4e28100           push 0x81e2a4
// 00473370  8d4c2404             lea ecx, [esp + 4]
// 00473374  ff1558248000         call dword ptr [0x802458]
// 0047337a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0047337f  a1e8238000           mov eax, dword ptr [0x8023e8]
// 00473384  8b08                 mov ecx, dword ptr [eax]
// 00473386  8b442404             mov eax, dword ptr [esp + 4]
// 0047338a  c78424bc00000000000000 mov dword ptr [esp + 0xbc], 0
// 00473395  7304                 jae 0x47339b
// 00473397  8d442404             lea eax, [esp + 4]
// 0047339b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047339f  56                   push esi
// 004733a0  57                   push edi
// 004733a1  8bbc24cc000000       mov edi, dword ptr [esp + 0xcc]
// 004733a8  52                   push edx
// 004733a9  51                   push ecx
// 004733aa  50                   push eax
// 004733ab  8bcf                 mov ecx, edi
// 004733ad  ff159c248000         call dword ptr [0x80249c]
// 004733b3  8bf0                 mov esi, eax
// 004733b5  83feff               cmp esi, -1
// 004733b8  0f84a5000000         je 0x473463
// 004733be  56                   push esi
// 004733bf  6a00                 push 0
// 004733c1  8d44242c             lea eax, [esp + 0x2c]
// 004733c5  50                   push eax
// 004733c6  8bcf                 mov ecx, edi
// 004733c8  ff15e0238000         call dword ptr [0x8023e0]
// 004733ce  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 004733d5  50                   push eax
// 004733d6  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 004733de  ff150c248000         call dword ptr [0x80240c]
// 004733e4  8d4c2424             lea ecx, [esp + 0x24]
// 004733e8  c68424c400000000     mov byte ptr [esp + 0xc4], 0
// 004733f0  ff1568248000         call dword ptr [0x802468]
// 004733f6  8b4714               mov eax, dword ptr [edi + 0x14]
// 004733f9  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 004733fd  8d4c2424             lea ecx, [esp + 0x24]
// 00473401  2bc6                 sub eax, esi
// 00473403  50                   push eax
// 00473404  46                   inc esi
// 00473405  56                   push esi
// 00473406  51                   push ecx
// 00473407  8bcf                 mov ecx, edi
// 00473409  ff15e0238000         call dword ptr [0x8023e0]
// 0047340f  8b8c24d4000000       mov ecx, dword ptr [esp + 0xd4]
// 00473416  50                   push eax
// 00473417  c68424c800000002     mov byte ptr [esp + 0xc8], 2
// 0047341f  ff150c248000         call dword ptr [0x80240c]
// 00473425  8d4c2424             lea ecx, [esp + 0x24]
// 00473429  c68424c400000000     mov byte ptr [esp + 0xc4], 0
// 00473431  ff1568248000         call dword ptr [0x802468]
// 00473437  8d4c2408             lea ecx, [esp + 8]
// 0047343b  c78424c4000000ffffffff mov dword ptr [esp + 0xc4], 0xffffffff
// 00473446  ff1568248000         call dword ptr [0x802468]
// 0047344c  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 00473453  5f                   pop edi
// 00473454  5e                   pop esi
// 00473455  64890d00000000       mov dword ptr fs:[0], ecx
// 0047345c  81c4c0000000         add esp, 0xc0
// 00473462  c3                   ret 
// 00473463  6858e28100           push 0x81e258
// 00473468  8d4c2444             lea ecx, [esp + 0x44]
// 0047346c  ff1558248000         call dword ptr [0x802458]
// 00473472  57                   push edi
// 00473473  8d542444             lea edx, [esp + 0x44]
// 00473477  52                   push edx
// 00473478  8d4c2464             lea ecx, [esp + 0x64]
// 0047347c  c68424cc00000003     mov byte ptr [esp + 0xcc], 3
// 00473484  e827f4ffff           call 0x4728b0
// 00473489  6878c48d00           push 0x8dc478
// 0047348e  8d442460             lea eax, [esp + 0x60]
// 00473492  50                   push eax
// 00473493  e8f4e02200           call 0x6a158c
// library g3d-6.09-rbx2008/GLG3Dcpp\roc_export_a69fe47bb0e6952c.cpp (function ?splitFilenameAtWildCard@Texture@G3D@@SAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV34@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/roc_export_a69fe47bb0e6952c.cpp
