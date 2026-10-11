// roc 2011-06 00645b10  unit: RBX::Workspace  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00645b10
//
// 00645b10  6aff                 push -1
// 00645b12  6875bf9e00           push 0x9ebf75
// 00645b17  64a100000000         mov eax, dword ptr fs:[0]
// 00645b1d  50                   push eax
// 00645b1e  64892500000000       mov dword ptr fs:[0], esp
// 00645b25  81ec84000000         sub esp, 0x84
// 00645b2b  56                   push esi
// 00645b2c  c744240400000000     mov dword ptr [esp + 4], 0
// 00645b34  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 00645b3b  57                   push edi
// 00645b3c  8bf9                 mov edi, ecx
// 00645b3e  85f6                 test esi, esi
// 00645b40  0f8ec8000000         jle 0x645c0e
// 00645b46  8b07                 mov eax, dword ptr [edi]
// 00645b48  83c004               add eax, 4
// 00645b4b  50                   push eax
// 00645b4c  8d4c2418             lea ecx, [esp + 0x18]
// 00645b50  ff15c804a400         call dword ptr [0xa404c8]
// 00645b56  83fe20               cmp esi, 0x20
// 00645b59  8b442428             mov eax, dword ptr [esp + 0x28]
// 00645b5d  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 00645b68  c744241020000000     mov dword ptr [esp + 0x10], 0x20
// 00645b70  8944240c             mov dword ptr [esp + 0xc], eax
// 00645b74  c744240803000000     mov dword ptr [esp + 8], 3
// 00645b7c  8d4c2410             lea ecx, [esp + 0x10]
// 00645b80  7f07                 jg 0x645b89
// 00645b82  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00645b89  83f803               cmp eax, 3
// 00645b8c  8d44240c             lea eax, [esp + 0xc]
// 00645b90  7204                 jb 0x645b96
// 00645b92  8d442408             lea eax, [esp + 8]
// 00645b96  8b09                 mov ecx, dword ptr [ecx]
// 00645b98  8b10                 mov edx, dword ptr [eax]
// 00645b9a  51                   push ecx
// 00645b9b  52                   push edx
// 00645b9c  8d442438             lea eax, [esp + 0x38]
// 00645ba0  50                   push eax
// 00645ba1  8d4c2420             lea ecx, [esp + 0x20]
// 00645ba5  ff153004a400         call dword ptr [0xa40430]
// 00645bab  50                   push eax
// 00645bac  8d4c2418             lea ecx, [esp + 0x18]
// 00645bb0  c684249800000001     mov byte ptr [esp + 0x98], 1
// 00645bb8  ff15a804a400         call dword ptr [0xa404a8]
// 00645bbe  8d4c2430             lea ecx, [esp + 0x30]
// 00645bc2  c684249400000000     mov byte ptr [esp + 0x94], 0
// 00645bca  ff15d004a400         call dword ptr [0xa404d0]
// 00645bd0  837c242c10           cmp dword ptr [esp + 0x2c], 0x10
// 00645bd5  8b442418             mov eax, dword ptr [esp + 0x18]
// 00645bd9  7304                 jae 0x645bdf
// 00645bdb  8d442418             lea eax, [esp + 0x18]
// 00645bdf  8b4f04               mov ecx, dword ptr [edi + 4]
// 00645be2  51                   push ecx
// 00645be3  50                   push eax
// 00645be4  8d542454             lea edx, [esp + 0x54]
// 00645be8  68c883a900           push 0xa983c8
// 00645bed  52                   push edx
// 00645bee  ff15c009a400         call dword ptr [0xa409c0]
// 00645bf4  83c410               add esp, 0x10
// 00645bf7  8d4c2414             lea ecx, [esp + 0x14]
// 00645bfb  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 00645c06  ff15d004a400         call dword ptr [0xa404d0]
// 00645c0c  eb17                 jmp 0x645c25
// 00645c0e  8b4704               mov eax, dword ptr [edi + 4]
// 00645c11  50                   push eax
// 00645c12  8d4c2450             lea ecx, [esp + 0x50]
// 00645c16  681c91a600           push 0xa6911c
// 00645c1b  51                   push ecx
// 00645c1c  ff15c009a400         call dword ptr [0xa409c0]
// 00645c22  83c40c               add esp, 0xc
// 00645c25  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 00645c2c  8d54244c             lea edx, [esp + 0x4c]
// 00645c30  52                   push edx
// 00645c31  8bce                 mov ecx, esi
// 00645c33  ff15c404a400         call dword ptr [0xa404c4]
// 00645c39  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00645c40  5f                   pop edi
// 00645c41  8bc6                 mov eax, esi
// 00645c43  5e                   pop esi
// 00645c44  64890d00000000       mov dword ptr fs:[0], ecx
// 00645c4b  81c490000000         add esp, 0x90
// 00645c51  c20800               ret 8
// library openrbx-client/App\util\Guid.cpp (function ?readableString@Data@Guid@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
