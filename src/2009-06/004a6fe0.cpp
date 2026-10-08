// from server: 100% by auto
// roc 2009-06 004a6fe0  unit: G3D::TextureManager::TextureArgs  size: 868 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a6fe0
//
// 004a6fe0  6aff                 push -1
// 004a6fe2  68ca788500           push 0x8578ca
// 004a6fe7  64a100000000         mov eax, dword ptr fs:[0]
// 004a6fed  50                   push eax
// 004a6fee  64892500000000       mov dword ptr fs:[0], esp
// 004a6ff5  81ec7c040000         sub esp, 0x47c
// 004a6ffb  56                   push esi
// 004a6ffc  c744240800000000     mov dword ptr [esp + 8], 0
// 004a7004  e8d7feffff           call 0x4a6ee0
// 004a7009  83f802               cmp eax, 2
// 004a700c  0f85cb000000         jne 0x4a70dd
// 004a7012  f605acc9a30001       test byte ptr [0xa3c9ac], 1
// 004a7019  753e                 jne 0x4a7059
// 004a701b  b801000000           mov eax, 1
// 004a7020  0905acc9a300         or dword ptr [0xa3c9ac], eax
// 004a7026  68021f0000           push 0x1f02
// 004a702b  8984248c040000       mov dword ptr [esp + 0x48c], eax
// 004a7032  ff158cea8900         call dword ptr [0x89ea8c]
// 004a7038  50                   push eax
// 004a7039  b990c9a300           mov ecx, 0xa3c990
// 004a703e  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a7044  68e04e8900           push 0x894ee0
// 004a7049  e8ad2a2700           call 0x719afb
// 004a704e  83c404               add esp, 4
// 004a7051  c684248804000000     mov byte ptr [esp + 0x488], 0
// 004a7059  a16ce48900           mov eax, dword ptr [0x89e46c]
// 004a705e  8b00                 mov eax, dword ptr [eax]
// 004a7060  6a01                 push 1
// 004a7062  50                   push eax
// 004a7063  8d4c240c             lea ecx, [esp + 0xc]
// 004a7067  51                   push ecx
// 004a7068  b990c9a300           mov ecx, 0xa3c990
// 004a706d  c644241020           mov byte ptr [esp + 0x10], 0x20
// 004a7072  ff1540e58900         call dword ptr [0x89e540]
// 004a7078  8b156ce48900         mov edx, dword ptr [0x89e46c]
// 004a707e  8bb42490040000       mov esi, dword ptr [esp + 0x490]
// 004a7085  3b02                 cmp eax, dword ptr [edx]
// 004a7087  7525                 jne 0x4a70ae
// 004a7089  68700e8c00           push 0x8c0e70
// 004a708e  8bce                 mov ecx, esi
// 004a7090  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a7096  8bc6                 mov eax, esi
// 004a7098  5e                   pop esi
// 004a7099  8b8c247c040000       mov ecx, dword ptr [esp + 0x47c]
// 004a70a0  64890d00000000       mov dword ptr fs:[0], ecx
// 004a70a7  81c488040000         add esp, 0x488
// 004a70ad  c3                   ret 
// 004a70ae  8b0da4c9a300         mov ecx, dword ptr [0xa3c9a4]
// 004a70b4  2bc8                 sub ecx, eax
// 004a70b6  51                   push ecx
// 004a70b7  40                   inc eax
// 004a70b8  50                   push eax
// 004a70b9  56                   push esi
// 004a70ba  b990c9a300           mov ecx, 0xa3c990
// 004a70bf  ff1570e48900         call dword ptr [0x89e470]
// 004a70c5  8bc6                 mov eax, esi
// 004a70c7  5e                   pop esi
// 004a70c8  8b8c247c040000       mov ecx, dword ptr [esp + 0x47c]
// 004a70cf  64890d00000000       mov dword ptr fs:[0], ecx
// 004a70d6  81c488040000         add esp, 0x488
// 004a70dc  c3                   ret 
// 004a70dd  8d4c240c             lea ecx, [esp + 0xc]
// 004a70e1  ff15c0e48900         call dword ptr [0x89e4c0]
// 004a70e7  6800040000           push 0x400
// 004a70ec  8d942484000000       lea edx, [esp + 0x84]
// 004a70f3  52                   push edx
// 004a70f4  c784249004000002000000 mov dword ptr [esp + 0x490], 2
// 004a70ff  ff1590e28900         call dword ptr [0x89e290]
// 004a7105  85c0                 test eax, eax
// 004a7107  7546                 jne 0x4a714f
// 004a7109  68480e8c00           push 0x8c0e48
// 004a710e  8bb42494040000       mov esi, dword ptr [esp + 0x494]
// 004a7115  8bce                 mov ecx, esi
// 004a7117  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a711d  8d4c240c             lea ecx, [esp + 0xc]
// 004a7121  c744240801000000     mov dword ptr [esp + 8], 1
// 004a7129  c684248804000000     mov byte ptr [esp + 0x488], 0
// 004a7131  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a7137  8bc6                 mov eax, esi
// 004a7139  5e                   pop esi
// 004a713a  8b8c247c040000       mov ecx, dword ptr [esp + 0x47c]
// 004a7141  64890d00000000       mov dword ptr fs:[0], ecx
// 004a7148  81c488040000         add esp, 0x488
// 004a714e  c3                   ret 
// 004a714f  8d842480000000       lea eax, [esp + 0x80]
// 004a7156  50                   push eax
// 004a7157  8d4c2410             lea ecx, [esp + 0x10]
// 004a715b  ff15a8e48900         call dword ptr [0x89e4a8]
// 004a7161  e87afdffff           call 0x4a6ee0
// 004a7166  83e800               sub eax, 0
// 004a7169  743d                 je 0x4a71a8
// 004a716b  83e801               sub eax, 1
// 004a716e  7407                 je 0x4a7177
// 004a7170  682c0e8c00           push 0x8c0e2c
// 004a7175  eb97                 jmp 0x4a710e
// 004a7177  681c0e8c00           push 0x8c0e1c
// 004a717c  8d4c2410             lea ecx, [esp + 0x10]
// 004a7180  51                   push ecx
// 004a7181  8d54246c             lea edx, [esp + 0x6c]
// 004a7185  52                   push edx
// 004a7186  ff1548e48900         call dword ptr [0x89e448]
// 004a718c  83c40c               add esp, 0xc
// 004a718f  50                   push eax
// 004a7190  8d4c2410             lea ecx, [esp + 0x10]
// 004a7194  c684248c04000004     mov byte ptr [esp + 0x48c], 4
// 004a719c  ff1564e48900         call dword ptr [0x89e464]
// 004a71a2  8d4c2464             lea ecx, [esp + 0x64]
// 004a71a6  eb2f                 jmp 0x4a71d7
// 004a71a8  680c0e8c00           push 0x8c0e0c
// 004a71ad  8d442410             lea eax, [esp + 0x10]
// 004a71b1  50                   push eax
// 004a71b2  8d4c2450             lea ecx, [esp + 0x50]
// 004a71b6  51                   push ecx
// 004a71b7  ff1548e48900         call dword ptr [0x89e448]
// 004a71bd  83c40c               add esp, 0xc
// 004a71c0  50                   push eax
// 004a71c1  8d4c2410             lea ecx, [esp + 0x10]
// 004a71c5  c684248c04000003     mov byte ptr [esp + 0x48c], 3
// 004a71cd  ff1564e48900         call dword ptr [0x89e464]
// 004a71d3  8d4c2448             lea ecx, [esp + 0x48]
// 004a71d7  c684248804000002     mov byte ptr [esp + 0x488], 2
// 004a71df  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a71e5  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 004a71ea  55                   push ebp
// 004a71eb  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004a71ef  7304                 jae 0x4a71f5
// 004a71f1  8d6c2414             lea ebp, [esp + 0x14]
// 004a71f5  57                   push edi
// 004a71f6  8d542430             lea edx, [esp + 0x30]
// 004a71fa  52                   push edx
// 004a71fb  55                   push ebp
// 004a71fc  e8c93f3700           call 0x81b1ca
// 004a7201  8bf8                 mov edi, eax
// 004a7203  85ff                 test edi, edi
// 004a7205  7521                 jne 0x4a7228
// 004a7207  68f00d8c00           push 0x8c0df0
// 004a720c  8bb4249c040000       mov esi, dword ptr [esp + 0x49c]
// 004a7213  8bce                 mov ecx, esi
// 004a7215  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a721b  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004a7223  e9f0000000           jmp 0x4a7318
// 004a7228  57                   push edi
// 004a7229  e8ec1a2700           call 0x718d1a
// 004a722e  83c404               add esp, 4
// 004a7231  8bf0                 mov esi, eax
// 004a7233  56                   push esi
// 004a7234  57                   push edi
// 004a7235  6a00                 push 0
// 004a7237  55                   push ebp
// 004a7238  e8873f3700           call 0x81b1c4
// 004a723d  85c0                 test eax, eax
// 004a723f  7510                 jne 0x4a7251
// 004a7241  56                   push esi
// 004a7242  e8971a2700           call 0x718cde
// 004a7247  83c404               add esp, 4
// 004a724a  68d8e78b00           push 0x8be7d8
// 004a724f  ebbb                 jmp 0x4a720c
// 004a7251  8d4606               lea eax, [esi + 6]
// 004a7254  8d5002               lea edx, [eax + 2]
// 004a7257  668b08               mov cx, word ptr [eax]
// 004a725a  83c002               add eax, 2
// 004a725d  6685c9               test cx, cx
// 004a7260  75f5                 jne 0x4a7257
// 004a7262  2bc2                 sub eax, edx
// 004a7264  d1f8                 sar eax, 1
// 004a7266  8d444608             lea eax, [esi + eax*2 + 8]
// 004a726a  2bc6                 sub eax, esi
// 004a726c  83c003               add eax, 3
// 004a726f  83e0fc               and eax, 0xfffffffc
// 004a7272  03c6                 add eax, esi
// 004a7274  68d40d8c00           push 0x8c0dd4
// 004a7279  8d4c2438             lea ecx, [esp + 0x38]
// 004a727d  8bf8                 mov edi, eax
// 004a727f  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a7285  66837e0200           cmp word ptr [esi + 2], 0
// 004a728a  c684249004000005     mov byte ptr [esp + 0x490], 5
// 004a7292  744d                 je 0x4a72e1
// 004a7294  8b4714               mov eax, dword ptr [edi + 0x14]
// 004a7297  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 004a729a  0fb7d0               movzx edx, ax
// 004a729d  52                   push edx
// 004a729e  c1e810               shr eax, 0x10
// 004a72a1  50                   push eax
// 004a72a2  0fb7c1               movzx eax, cx
// 004a72a5  50                   push eax
// 004a72a6  c1e910               shr ecx, 0x10
// 004a72a9  51                   push ecx
// 004a72aa  8d4c2460             lea ecx, [esp + 0x60]
// 004a72ae  68c80d8c00           push 0x8c0dc8
// 004a72b3  51                   push ecx
// 004a72b4  e8c7200d00           call 0x579380
// 004a72b9  83c418               add esp, 0x18
// 004a72bc  50                   push eax
// 004a72bd  8d4c2438             lea ecx, [esp + 0x38]
// 004a72c1  c684249404000006     mov byte ptr [esp + 0x494], 6
// 004a72c9  ff1564e48900         call dword ptr [0x89e464]
// 004a72cf  8d4c2450             lea ecx, [esp + 0x50]
// 004a72d3  c684249004000005     mov byte ptr [esp + 0x490], 5
// 004a72db  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a72e1  56                   push esi
// 004a72e2  e8f7192700           call 0x718cde
// 004a72e7  8bb4249c040000       mov esi, dword ptr [esp + 0x49c]
// 004a72ee  83c404               add esp, 4
// 004a72f1  8d542434             lea edx, [esp + 0x34]
// 004a72f5  52                   push edx
// 004a72f6  8bce                 mov ecx, esi
// 004a72f8  ff15b8e48900         call dword ptr [0x89e4b8]
// 004a72fe  8d4c2434             lea ecx, [esp + 0x34]
// 004a7302  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004a730a  c684249004000002     mov byte ptr [esp + 0x490], 2
// 004a7312  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a7318  8d4c2414             lea ecx, [esp + 0x14]
// 004a731c  c684249004000000     mov byte ptr [esp + 0x490], 0
// 004a7324  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a732a  8b8c2488040000       mov ecx, dword ptr [esp + 0x488]
// 004a7331  5f                   pop edi
// 004a7332  5d                   pop ebp
// 004a7333  8bc6                 mov eax, esi
// 004a7335  5e                   pop esi
// 004a7336  64890d00000000       mov dword ptr fs:[0], ecx
// 004a733d  81c488040000         add esp, 0x488
// 004a7343  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?getDriverVersion@GLCaps@G3D@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
