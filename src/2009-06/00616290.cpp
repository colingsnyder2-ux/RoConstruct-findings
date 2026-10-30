// roc 2009-06 00616290  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 547 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00616290
//
// 00616290  6aff                 push -1
// 00616292  68d17e8600           push 0x867ed1
// 00616297  64a100000000         mov eax, dword ptr fs:[0]
// 0061629d  50                   push eax
// 0061629e  64892500000000       mov dword ptr fs:[0], esp
// 006162a5  83ec64               sub esp, 0x64
// 006162a8  53                   push ebx
// 006162a9  55                   push ebp
// 006162aa  56                   push esi
// 006162ab  57                   push edi
// 006162ac  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 006162b3  83ec58               sub esp, 0x58
// 006162b6  8be9                 mov ebp, ecx
// 006162b8  8bcc                 mov ecx, esp
// 006162ba  8964246c             mov dword ptr [esp + 0x6c], esp
// 006162be  57                   push edi
// 006162bf  896c2474             mov dword ptr [esp + 0x74], ebp
// 006162c3  e8e8ceffff           call 0x6131b0
// 006162c8  8d442474             lea eax, [esp + 0x74]
// 006162cc  50                   push eax
// 006162cd  e86ecfffff           call 0x613240
// 006162d2  83c45c               add esp, 0x5c
// 006162d5  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 006162dc  50                   push eax
// 006162dd  51                   push ecx
// 006162de  33db                 xor ebx, ebx
// 006162e0  8bcd                 mov ecx, ebp
// 006162e2  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 006162e9  e8c2eaffff           call 0x614db0
// 006162ee  8d4c2450             lea ecx, [esp + 0x50]
// 006162f2  c644247c03           mov byte ptr [esp + 0x7c], 3
// 006162f7  ff15c4e48900         call dword ptr [0x89e4c4]
// 006162fd  8d4c2434             lea ecx, [esp + 0x34]
// 00616301  c644247c02           mov byte ptr [esp + 0x7c], 2
// 00616306  ff15c4e48900         call dword ptr [0x89e4c4]
// 0061630c  8d7508               lea esi, [ebp + 8]
// 0061630f  8bce                 mov ecx, esi
// 00616311  ff15c0e48900         call dword ptr [0x89e4c0]
// 00616317  8d4d24               lea ecx, [ebp + 0x24]
// 0061631a  c644247c04           mov byte ptr [esp + 0x7c], 4
// 0061631f  ff15c0e48900         call dword ptr [0x89e4c0]
// 00616325  895d40               mov dword ptr [ebp + 0x40], ebx
// 00616328  895d44               mov dword ptr [ebp + 0x44], ebx
// 0061632b  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0061632e  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00616331  3bc3                 cmp eax, ebx
// 00616333  0f95c3               setne bl
// 00616336  85c9                 test ecx, ecx
// 00616338  0f95c2               setne dl
// 0061633b  c644247c05           mov byte ptr [esp + 0x7c], 5
// 00616340  88942484000000       mov byte ptr [esp + 0x84], dl
// 00616347  84db                 test bl, bl
// 00616349  7407                 je 0x616352
// 0061634b  40                   inc eax
// 0061634c  89442410             mov dword ptr [esp + 0x10], eax
// 00616350  eb08                 jmp 0x61635a
// 00616352  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061635a  84d2                 test dl, dl
// 0061635c  740a                 je 0x616368
// 0061635e  41                   inc ecx
// 0061635f  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00616366  eb0b                 jmp 0x616373
// 00616368  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 00616373  8b07                 mov eax, dword ptr [edi]
// 00616375  33d2                 xor edx, edx
// 00616377  3b0574fe8e00         cmp eax, dword ptr [0x8efe74]
// 0061637d  0f95c2               setne dl
// 00616380  33c9                 xor ecx, ecx
// 00616382  4a                   dec edx
// 00616383  83e204               and edx, 4
// 00616386  3b0578fe8e00         cmp eax, dword ptr [0x8efe78]
// 0061638c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00616390  0f95c1               setne cl
// 00616393  49                   dec ecx
// 00616394  83e102               and ecx, 2
// 00616397  03d1                 add edx, ecx
// 00616399  89542414             mov dword ptr [esp + 0x14], edx
// 0061639d  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 006163a4  8d4c020a             lea ecx, [edx + eax + 0xa]
// 006163a8  51                   push ecx
// 006163a9  8bce                 mov ecx, esi
// 006163ab  ff1564e58900         call dword ptr [0x89e564]
// 006163b1  6a1f                 push 0x1f
// 006163b3  8bce                 mov ecx, esi
// 006163b5  ff1558e58900         call dword ptr [0x89e558]
// 006163bb  6a8b                 push -0x75
// 006163bd  8bce                 mov ecx, esi
// 006163bf  ff1558e58900         call dword ptr [0x89e558]
// 006163c5  6a08                 push 8
// 006163c7  8bce                 mov ecx, esi
// 006163c9  ff1558e58900         call dword ptr [0x89e558]
// 006163cf  8a942484000000       mov dl, byte ptr [esp + 0x84]
// 006163d6  f6da                 neg dl
// 006163d8  1ad2                 sbb dl, dl
// 006163da  80e210               and dl, 0x10
// 006163dd  8ac3                 mov al, bl
// 006163df  f6d8                 neg al
// 006163e1  1ac0                 sbb al, al
// 006163e3  2408                 and al, 8
// 006163e5  02d0                 add dl, al
// 006163e7  0fb6ca               movzx ecx, dl
// 006163ea  51                   push ecx
// 006163eb  8bce                 mov ecx, esi
// 006163ed  ff1558e58900         call dword ptr [0x89e558]
// 006163f3  0fb65750             movzx edx, byte ptr [edi + 0x50]
// 006163f7  52                   push edx
// 006163f8  8bce                 mov ecx, esi
// 006163fa  ff1558e58900         call dword ptr [0x89e558]
// 00616400  8b4750               mov eax, dword ptr [edi + 0x50]
// 00616403  8b5754               mov edx, dword ptr [edi + 0x54]
// 00616406  b108                 mov cl, 8
// 00616408  e873401000           call 0x71a480
// 0061640d  0fb6c0               movzx eax, al
// 00616410  50                   push eax
// 00616411  8bce                 mov ecx, esi
// 00616413  ff1558e58900         call dword ptr [0x89e558]
// 00616419  8b4750               mov eax, dword ptr [edi + 0x50]
// 0061641c  8b5754               mov edx, dword ptr [edi + 0x54]
// 0061641f  b110                 mov cl, 0x10
// 00616421  e85a401000           call 0x71a480
// 00616426  0fb6c8               movzx ecx, al
// 00616429  51                   push ecx
// 0061642a  8bce                 mov ecx, esi
// 0061642c  ff1558e58900         call dword ptr [0x89e558]
// 00616432  8b4750               mov eax, dword ptr [edi + 0x50]
// 00616435  8b5754               mov edx, dword ptr [edi + 0x54]
// 00616438  b118                 mov cl, 0x18
// 0061643a  e841401000           call 0x71a480
// 0061643f  0fb6d0               movzx edx, al
// 00616442  52                   push edx
// 00616443  8bce                 mov ecx, esi
// 00616445  ff1558e58900         call dword ptr [0x89e558]
// 0061644b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061644f  50                   push eax
// 00616450  8bce                 mov ecx, esi
// 00616452  ff1558e58900         call dword ptr [0x89e558]
// 00616458  6aff                 push -1
// 0061645a  8bce                 mov ecx, esi
// 0061645c  ff1558e58900         call dword ptr [0x89e558]
// 00616462  84db                 test bl, bl
// 00616464  7416                 je 0x61647c
// 00616466  8d4f18               lea ecx, [edi + 0x18]
// 00616469  51                   push ecx
// 0061646a  8bce                 mov ecx, esi
// 0061646c  ff15ace48900         call dword ptr [0x89e4ac]
// 00616472  6a00                 push 0
// 00616474  8bce                 mov ecx, esi
// 00616476  ff1558e58900         call dword ptr [0x89e558]
// 0061647c  80bc248400000000     cmp byte ptr [esp + 0x84], 0
// 00616484  7416                 je 0x61649c
// 00616486  83c734               add edi, 0x34
// 00616489  57                   push edi
// 0061648a  8bce                 mov ecx, esi
// 0061648c  ff15ace48900         call dword ptr [0x89e4ac]
// 00616492  6a00                 push 0
// 00616494  8bce                 mov ecx, esi
// 00616496  ff1558e58900         call dword ptr [0x89e558]
// 0061649c  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 006164a0  5f                   pop edi
// 006164a1  5e                   pop esi
// 006164a2  8bc5                 mov eax, ebp
// 006164a4  5d                   pop ebp
// 006164a5  64890d00000000       mov dword ptr fs:[0], ecx
// 006164ac  5b                   pop ebx
// 006164ad  83c470               add esp, 0x70
// 006164b0  c20800               ret 8
// copied from an identical function in another client (function ??0?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABUgzip_params@12@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp