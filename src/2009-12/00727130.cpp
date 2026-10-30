// roc 2009-12 00727130  unit: boost::iostreams::Uinput::?$filtering_stream  size: 547 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00727130
//
// 00727130  6aff                 push -1
// 00727132  68b1ef9400           push 0x94efb1
// 00727137  64a100000000         mov eax, dword ptr fs:[0]
// 0072713d  50                   push eax
// 0072713e  64892500000000       mov dword ptr fs:[0], esp
// 00727145  83ec64               sub esp, 0x64
// 00727148  53                   push ebx
// 00727149  55                   push ebp
// 0072714a  56                   push esi
// 0072714b  57                   push edi
// 0072714c  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 00727153  83ec58               sub esp, 0x58
// 00727156  8be9                 mov ebp, ecx
// 00727158  8bcc                 mov ecx, esp
// 0072715a  8964246c             mov dword ptr [esp + 0x6c], esp
// 0072715e  57                   push edi
// 0072715f  896c2474             mov dword ptr [esp + 0x74], ebp
// 00727163  e838abffff           call 0x721ca0
// 00727168  8d442474             lea eax, [esp + 0x74]
// 0072716c  50                   push eax
// 0072716d  e8beabffff           call 0x721d30
// 00727172  83c45c               add esp, 0x5c
// 00727175  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0072717c  50                   push eax
// 0072717d  51                   push ecx
// 0072717e  33db                 xor ebx, ebx
// 00727180  8bcd                 mov ecx, ebp
// 00727182  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 00727189  e812d6ffff           call 0x7247a0
// 0072718e  8d4c2450             lea ecx, [esp + 0x50]
// 00727192  c644247c03           mov byte ptr [esp + 0x7c], 3
// 00727197  ff15e4b69800         call dword ptr [0x98b6e4]
// 0072719d  8d4c2434             lea ecx, [esp + 0x34]
// 007271a1  c644247c02           mov byte ptr [esp + 0x7c], 2
// 007271a6  ff15e4b69800         call dword ptr [0x98b6e4]
// 007271ac  8d7508               lea esi, [ebp + 8]
// 007271af  8bce                 mov ecx, esi
// 007271b1  ff15e8b69800         call dword ptr [0x98b6e8]
// 007271b7  8d4d24               lea ecx, [ebp + 0x24]
// 007271ba  c644247c04           mov byte ptr [esp + 0x7c], 4
// 007271bf  ff15e8b69800         call dword ptr [0x98b6e8]
// 007271c5  895d40               mov dword ptr [ebp + 0x40], ebx
// 007271c8  895d44               mov dword ptr [ebp + 0x44], ebx
// 007271cb  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007271ce  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 007271d1  3bc3                 cmp eax, ebx
// 007271d3  0f95c3               setne bl
// 007271d6  85c9                 test ecx, ecx
// 007271d8  0f95c2               setne dl
// 007271db  c644247c05           mov byte ptr [esp + 0x7c], 5
// 007271e0  88942484000000       mov byte ptr [esp + 0x84], dl
// 007271e7  84db                 test bl, bl
// 007271e9  7407                 je 0x7271f2
// 007271eb  40                   inc eax
// 007271ec  89442410             mov dword ptr [esp + 0x10], eax
// 007271f0  eb08                 jmp 0x7271fa
// 007271f2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007271fa  84d2                 test dl, dl
// 007271fc  740a                 je 0x727208
// 007271fe  41                   inc ecx
// 007271ff  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00727206  eb0b                 jmp 0x727213
// 00727208  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 00727213  8b07                 mov eax, dword ptr [edi]
// 00727215  33d2                 xor edx, edx
// 00727217  3b0534fc9e00         cmp eax, dword ptr [0x9efc34]
// 0072721d  0f95c2               setne dl
// 00727220  33c9                 xor ecx, ecx
// 00727222  4a                   dec edx
// 00727223  83e204               and edx, 4
// 00727226  3b0538fc9e00         cmp eax, dword ptr [0x9efc38]
// 0072722c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00727230  0f95c1               setne cl
// 00727233  49                   dec ecx
// 00727234  83e102               and ecx, 2
// 00727237  03d1                 add edx, ecx
// 00727239  89542414             mov dword ptr [esp + 0x14], edx
// 0072723d  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00727244  8d4c020a             lea ecx, [edx + eax + 0xa]
// 00727248  51                   push ecx
// 00727249  8bce                 mov ecx, esi
// 0072724b  ff152cb59800         call dword ptr [0x98b52c]
// 00727251  6a1f                 push 0x1f
// 00727253  8bce                 mov ecx, esi
// 00727255  ff154cb59800         call dword ptr [0x98b54c]
// 0072725b  6a8b                 push -0x75
// 0072725d  8bce                 mov ecx, esi
// 0072725f  ff154cb59800         call dword ptr [0x98b54c]
// 00727265  6a08                 push 8
// 00727267  8bce                 mov ecx, esi
// 00727269  ff154cb59800         call dword ptr [0x98b54c]
// 0072726f  8a942484000000       mov dl, byte ptr [esp + 0x84]
// 00727276  f6da                 neg dl
// 00727278  1ad2                 sbb dl, dl
// 0072727a  80e210               and dl, 0x10
// 0072727d  8ac3                 mov al, bl
// 0072727f  f6d8                 neg al
// 00727281  1ac0                 sbb al, al
// 00727283  2408                 and al, 8
// 00727285  02d0                 add dl, al
// 00727287  0fb6ca               movzx ecx, dl
// 0072728a  51                   push ecx
// 0072728b  8bce                 mov ecx, esi
// 0072728d  ff154cb59800         call dword ptr [0x98b54c]
// 00727293  0fb65750             movzx edx, byte ptr [edi + 0x50]
// 00727297  52                   push edx
// 00727298  8bce                 mov ecx, esi
// 0072729a  ff154cb59800         call dword ptr [0x98b54c]
// 007272a0  8b4750               mov eax, dword ptr [edi + 0x50]
// 007272a3  8b5754               mov edx, dword ptr [edi + 0x54]
// 007272a6  b108                 mov cl, 8
// 007272a8  e8b3e00c00           call 0x7f5360
// 007272ad  0fb6c0               movzx eax, al
// 007272b0  50                   push eax
// 007272b1  8bce                 mov ecx, esi
// 007272b3  ff154cb59800         call dword ptr [0x98b54c]
// 007272b9  8b4750               mov eax, dword ptr [edi + 0x50]
// 007272bc  8b5754               mov edx, dword ptr [edi + 0x54]
// 007272bf  b110                 mov cl, 0x10
// 007272c1  e89ae00c00           call 0x7f5360
// 007272c6  0fb6c8               movzx ecx, al
// 007272c9  51                   push ecx
// 007272ca  8bce                 mov ecx, esi
// 007272cc  ff154cb59800         call dword ptr [0x98b54c]
// 007272d2  8b4750               mov eax, dword ptr [edi + 0x50]
// 007272d5  8b5754               mov edx, dword ptr [edi + 0x54]
// 007272d8  b118                 mov cl, 0x18
// 007272da  e881e00c00           call 0x7f5360
// 007272df  0fb6d0               movzx edx, al
// 007272e2  52                   push edx
// 007272e3  8bce                 mov ecx, esi
// 007272e5  ff154cb59800         call dword ptr [0x98b54c]
// 007272eb  8b442414             mov eax, dword ptr [esp + 0x14]
// 007272ef  50                   push eax
// 007272f0  8bce                 mov ecx, esi
// 007272f2  ff154cb59800         call dword ptr [0x98b54c]
// 007272f8  6aff                 push -1
// 007272fa  8bce                 mov ecx, esi
// 007272fc  ff154cb59800         call dword ptr [0x98b54c]
// 00727302  84db                 test bl, bl
// 00727304  7416                 je 0x72731c
// 00727306  8d4f18               lea ecx, [edi + 0x18]
// 00727309  51                   push ecx
// 0072730a  8bce                 mov ecx, esi
// 0072730c  ff15fcb69800         call dword ptr [0x98b6fc]
// 00727312  6a00                 push 0
// 00727314  8bce                 mov ecx, esi
// 00727316  ff154cb59800         call dword ptr [0x98b54c]
// 0072731c  80bc248400000000     cmp byte ptr [esp + 0x84], 0
// 00727324  7416                 je 0x72733c
// 00727326  83c734               add edi, 0x34
// 00727329  57                   push edi
// 0072732a  8bce                 mov ecx, esi
// 0072732c  ff15fcb69800         call dword ptr [0x98b6fc]
// 00727332  6a00                 push 0
// 00727334  8bce                 mov ecx, esi
// 00727336  ff154cb59800         call dword ptr [0x98b54c]
// 0072733c  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00727340  5f                   pop edi
// 00727341  5e                   pop esi
// 00727342  8bc5                 mov eax, ebp
// 00727344  5d                   pop ebp
// 00727345  64890d00000000       mov dword ptr fs:[0], ecx
// 0072734c  5b                   pop ebx
// 0072734d  83c470               add esp, 0x70
// 00727350  c20800               ret 8
// copied from an identical function in another client (function ??0?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABUgzip_params@12@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp