// roc 2007-08 0054fe30  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054fe30
//
// 0054fe30  83ec10               sub esp, 0x10
// 0054fe33  53                   push ebx
// 0054fe34  55                   push ebp
// 0054fe35  56                   push esi
// 0054fe36  57                   push edi
// 0054fe37  8bf9                 mov edi, ecx
// 0054fe39  8b07                 mov eax, dword ptr [edi]
// 0054fe3b  f6402401             test byte ptr [eax + 0x24], 1
// 0054fe3f  7512                 jne 0x54fe53
// 0054fe41  83482401             or dword ptr [eax + 0x24], 1
// 0054fe45  8b07                 mov eax, dword ptr [edi]
// 0054fe47  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054fe4a  83c014               add eax, 0x14
// 0054fe4d  894808               mov dword ptr [eax + 8], ecx
// 0054fe50  89480c               mov dword ptr [eax + 0xc], ecx
// 0054fe53  8b07                 mov eax, dword ptr [edi]
// 0054fe55  8b7024               mov esi, dword ptr [eax + 0x24]
// 0054fe58  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0054fe5c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0054fe60  c1ee02               shr esi, 2
// 0054fe63  f7d6                 not esi
// 0054fe65  83e601               and esi, 1
// 0054fe68  894c2410             mov dword ptr [esp + 0x10], ecx
// 0054fe6c  03ca                 add ecx, edx
// 0054fe6e  8d6820               lea ebp, [eax + 0x20]
// 0054fe71  83ce04               or esi, 4
// 0054fe74  83c01c               add eax, 0x1c
// 0054fe77  894c2418             mov dword ptr [esp + 0x18], ecx
// 0054fe7b  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0054fe7f  89442414             mov dword ptr [esp + 0x14], eax
// 0054fe83  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054fe87  8b00                 mov eax, dword ptr [eax]
// 0054fe89  8b4d00               mov ecx, dword ptr [ebp]
// 0054fe8c  83fe04               cmp esi, 4
// 0054fe8f  0f94c3               sete bl
// 0054fe92  3bc1                 cmp eax, ecx
// 0054fe94  7504                 jne 0x54fe9a
// 0054fe96  84db                 test bl, bl
// 0054fe98  7470                 je 0x54ff0a
// 0054fe9a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0054fe9e  8b2f                 mov ebp, dword ptr [edi]
// 0054fea0  52                   push edx
// 0054fea1  89442430             mov dword ptr [esp + 0x30], eax
// 0054fea5  8d442414             lea eax, [esp + 0x14]
// 0054fea9  50                   push eax
// 0054feaa  51                   push ecx
// 0054feab  8d4c2438             lea ecx, [esp + 0x38]
// 0054feaf  51                   push ecx
// 0054feb0  8bcd                 mov ecx, ebp
// 0054feb2  e8d9ca0700           call 0x5cc990
// 0054feb7  84db                 test bl, bl
// 0054feb9  a19ca57b00           mov eax, dword ptr [0x7ba59c]
// 0054febe  7505                 jne 0x54fec5
// 0054fec0  a1a0a57b00           mov eax, dword ptr [0x7ba5a0]
// 0054fec5  50                   push eax
// 0054fec6  8bcd                 mov ecx, ebp
// 0054fec8  e853cb0700           call 0x5cca20
// 0054fecd  6a01                 push 1
// 0054fecf  8d542414             lea edx, [esp + 0x14]
// 0054fed3  8bd8                 mov ebx, eax
// 0054fed5  52                   push edx
// 0054fed6  8d442434             lea eax, [esp + 0x34]
// 0054feda  50                   push eax
// 0054fedb  8bcd                 mov ecx, ebp
// 0054fedd  e8deca0700           call 0x5cc9c0
// 0054fee2  53                   push ebx
// 0054fee3  e8f8c90700           call 0x5cc8e0
// 0054fee8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0054feec  8b542418             mov edx, dword ptr [esp + 0x18]
// 0054fef0  83c404               add esp, 4
// 0054fef3  3b1d84a57b00         cmp ebx, dword ptr [0x7ba584]
// 0054fef9  890a                 mov dword ptr [edx], ecx
// 0054fefb  0f94c0               sete al
// 0054fefe  84c0                 test al, al
// 0054ff00  0f8586000000         jne 0x54ff8c
// 0054ff06  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0054ff0a  83fe06               cmp esi, 6
// 0054ff0d  750f                 jne 0x54ff1e
// 0054ff0f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054ff13  8b08                 mov ecx, dword ptr [eax]
// 0054ff15  3b4d00               cmp ecx, dword ptr [ebp]
// 0054ff18  0f8485000000         je 0x54ffa3
// 0054ff1e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054ff22  3b542418             cmp edx, dword ptr [esp + 0x18]
// 0054ff26  747b                 je 0x54ffa3
// 0054ff28  83fe05               cmp esi, 5
// 0054ff2b  0f8552ffffff         jne 0x54fe83
// 0054ff31  8b07                 mov eax, dword ptr [edi]
// 0054ff33  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0054ff36  8b4014               mov eax, dword ptr [eax + 0x14]
// 0054ff39  8b742424             mov esi, dword ptr [esp + 0x24]
// 0054ff3d  51                   push ecx
// 0054ff3e  50                   push eax
// 0054ff3f  8bce                 mov ecx, esi
// 0054ff41  ff150ce67700         call dword ptr [0x77e60c]
// 0054ff47  85c0                 test eax, eax
// 0054ff49  7404                 je 0x54ff4f
// 0054ff4b  8bd0                 mov edx, eax
// 0054ff4d  eb07                 jmp 0x54ff56
// 0054ff4f  8a563c               mov dl, byte ptr [esi + 0x3c]
// 0054ff52  f6da                 neg dl
// 0054ff54  1bd2                 sbb edx, edx
// 0054ff56  83faff               cmp edx, -1
// 0054ff59  8b07                 mov eax, dword ptr [edi]
// 0054ff5b  750d                 jne 0x54ff6a
// 0054ff5d  be04000000           mov esi, 4
// 0054ff62  097024               or dword ptr [eax + 0x24], esi
// 0054ff65  e919ffffff           jmp 0x54fe83
// 0054ff6a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0054ff6d  83c014               add eax, 0x14
// 0054ff70  894808               mov dword ptr [eax + 8], ecx
// 0054ff73  03ca                 add ecx, edx
// 0054ff75  89480c               mov dword ptr [eax + 0xc], ecx
// 0054ff78  8b07                 mov eax, dword ptr [edi]
// 0054ff7a  33c9                 xor ecx, ecx
// 0054ff7c  3b5018               cmp edx, dword ptr [eax + 0x18]
// 0054ff7f  0f95c1               setne cl
// 0054ff82  83c105               add ecx, 5
// 0054ff85  8bf1                 mov esi, ecx
// 0054ff87  e9f7feffff           jmp 0x54fe83
// 0054ff8c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054ff90  2b442428             sub eax, dword ptr [esp + 0x28]
// 0054ff94  7515                 jne 0x54ffab
// 0054ff96  5f                   pop edi
// 0054ff97  5e                   pop esi
// 0054ff98  5d                   pop ebp
// 0054ff99  83c8ff               or eax, 0xffffffff
// 0054ff9c  5b                   pop ebx
// 0054ff9d  83c410               add esp, 0x10
// 0054ffa0  c20c00               ret 0xc
// 0054ffa3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054ffa7  2b442428             sub eax, dword ptr [esp + 0x28]
// 0054ffab  5f                   pop edi
// 0054ffac  5e                   pop esi
// 0054ffad  5d                   pop ebp
// 0054ffae  5b                   pop ebx
// 0054ffaf  83c410               add esp, 0x10
// 0054ffb2  c20c00               ret 0xc
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$symmetric_filter@V?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_916365a4f87a380b.cpp