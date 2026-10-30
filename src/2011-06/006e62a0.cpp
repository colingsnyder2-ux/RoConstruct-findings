// roc 2011-06 006e62a0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 547 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e62a0
//
// 006e62a0  6aff                 push -1
// 006e62a2  68e1419f00           push 0x9f41e1
// 006e62a7  64a100000000         mov eax, dword ptr fs:[0]
// 006e62ad  50                   push eax
// 006e62ae  64892500000000       mov dword ptr fs:[0], esp
// 006e62b5  83ec64               sub esp, 0x64
// 006e62b8  53                   push ebx
// 006e62b9  55                   push ebp
// 006e62ba  56                   push esi
// 006e62bb  57                   push edi
// 006e62bc  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 006e62c3  83ec58               sub esp, 0x58
// 006e62c6  8be9                 mov ebp, ecx
// 006e62c8  8bcc                 mov ecx, esp
// 006e62ca  8964246c             mov dword ptr [esp + 0x6c], esp
// 006e62ce  57                   push edi
// 006e62cf  896c2474             mov dword ptr [esp + 0x74], ebp
// 006e62d3  e868adffff           call 0x6e1040
// 006e62d8  8d442474             lea eax, [esp + 0x74]
// 006e62dc  50                   push eax
// 006e62dd  e8eeadffff           call 0x6e10d0
// 006e62e2  83c45c               add esp, 0x5c
// 006e62e5  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 006e62ec  50                   push eax
// 006e62ed  51                   push ecx
// 006e62ee  33db                 xor ebx, ebx
// 006e62f0  8bcd                 mov ecx, ebp
// 006e62f2  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 006e62f9  e8f2d7ffff           call 0x6e3af0
// 006e62fe  8d4c2450             lea ecx, [esp + 0x50]
// 006e6302  c644247c03           mov byte ptr [esp + 0x7c], 3
// 006e6307  ff15d004a400         call dword ptr [0xa404d0]
// 006e630d  8d4c2434             lea ecx, [esp + 0x34]
// 006e6311  c644247c02           mov byte ptr [esp + 0x7c], 2
// 006e6316  ff15d004a400         call dword ptr [0xa404d0]
// 006e631c  8d7508               lea esi, [ebp + 8]
// 006e631f  8bce                 mov ecx, esi
// 006e6321  ff15bc04a400         call dword ptr [0xa404bc]
// 006e6327  8d4d24               lea ecx, [ebp + 0x24]
// 006e632a  c644247c04           mov byte ptr [esp + 0x7c], 4
// 006e632f  ff15bc04a400         call dword ptr [0xa404bc]
// 006e6335  895d40               mov dword ptr [ebp + 0x40], ebx
// 006e6338  895d44               mov dword ptr [ebp + 0x44], ebx
// 006e633b  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006e633e  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 006e6341  3bc3                 cmp eax, ebx
// 006e6343  0f95c3               setne bl
// 006e6346  85c9                 test ecx, ecx
// 006e6348  0f95c2               setne dl
// 006e634b  c644247c05           mov byte ptr [esp + 0x7c], 5
// 006e6350  88942484000000       mov byte ptr [esp + 0x84], dl
// 006e6357  84db                 test bl, bl
// 006e6359  7407                 je 0x6e6362
// 006e635b  40                   inc eax
// 006e635c  89442410             mov dword ptr [esp + 0x10], eax
// 006e6360  eb08                 jmp 0x6e636a
// 006e6362  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006e636a  84d2                 test dl, dl
// 006e636c  740a                 je 0x6e6378
// 006e636e  41                   inc ecx
// 006e636f  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 006e6376  eb0b                 jmp 0x6e6383
// 006e6378  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 006e6383  8b07                 mov eax, dword ptr [edi]
// 006e6385  33d2                 xor edx, edx
// 006e6387  3b05cc02ac00         cmp eax, dword ptr [0xac02cc]
// 006e638d  0f95c2               setne dl
// 006e6390  33c9                 xor ecx, ecx
// 006e6392  4a                   dec edx
// 006e6393  83e204               and edx, 4
// 006e6396  3b05d002ac00         cmp eax, dword ptr [0xac02d0]
// 006e639c  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e63a0  0f95c1               setne cl
// 006e63a3  49                   dec ecx
// 006e63a4  83e102               and ecx, 2
// 006e63a7  03d1                 add edx, ecx
// 006e63a9  89542414             mov dword ptr [esp + 0x14], edx
// 006e63ad  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 006e63b4  8d4c020a             lea ecx, [edx + eax + 0xa]
// 006e63b8  51                   push ecx
// 006e63b9  8bce                 mov ecx, esi
// 006e63bb  ff155804a400         call dword ptr [0xa40458]
// 006e63c1  6a1f                 push 0x1f
// 006e63c3  8bce                 mov ecx, esi
// 006e63c5  ff151005a400         call dword ptr [0xa40510]
// 006e63cb  6a8b                 push -0x75
// 006e63cd  8bce                 mov ecx, esi
// 006e63cf  ff151005a400         call dword ptr [0xa40510]
// 006e63d5  6a08                 push 8
// 006e63d7  8bce                 mov ecx, esi
// 006e63d9  ff151005a400         call dword ptr [0xa40510]
// 006e63df  8a942484000000       mov dl, byte ptr [esp + 0x84]
// 006e63e6  f6da                 neg dl
// 006e63e8  1ad2                 sbb dl, dl
// 006e63ea  80e210               and dl, 0x10
// 006e63ed  8ac3                 mov al, bl
// 006e63ef  f6d8                 neg al
// 006e63f1  1ac0                 sbb al, al
// 006e63f3  2408                 and al, 8
// 006e63f5  02d0                 add dl, al
// 006e63f7  0fb6ca               movzx ecx, dl
// 006e63fa  51                   push ecx
// 006e63fb  8bce                 mov ecx, esi
// 006e63fd  ff151005a400         call dword ptr [0xa40510]
// 006e6403  0fb65750             movzx edx, byte ptr [edi + 0x50]
// 006e6407  52                   push edx
// 006e6408  8bce                 mov ecx, esi
// 006e640a  ff151005a400         call dword ptr [0xa40510]
// 006e6410  8b4750               mov eax, dword ptr [edi + 0x50]
// 006e6413  8b5754               mov edx, dword ptr [edi + 0x54]
// 006e6416  b108                 mov cl, 8
// 006e6418  e883571200           call 0x80bba0
// 006e641d  0fb6c0               movzx eax, al
// 006e6420  50                   push eax
// 006e6421  8bce                 mov ecx, esi
// 006e6423  ff151005a400         call dword ptr [0xa40510]
// 006e6429  8b4750               mov eax, dword ptr [edi + 0x50]
// 006e642c  8b5754               mov edx, dword ptr [edi + 0x54]
// 006e642f  b110                 mov cl, 0x10
// 006e6431  e86a571200           call 0x80bba0
// 006e6436  0fb6c8               movzx ecx, al
// 006e6439  51                   push ecx
// 006e643a  8bce                 mov ecx, esi
// 006e643c  ff151005a400         call dword ptr [0xa40510]
// 006e6442  8b4750               mov eax, dword ptr [edi + 0x50]
// 006e6445  8b5754               mov edx, dword ptr [edi + 0x54]
// 006e6448  b118                 mov cl, 0x18
// 006e644a  e851571200           call 0x80bba0
// 006e644f  0fb6d0               movzx edx, al
// 006e6452  52                   push edx
// 006e6453  8bce                 mov ecx, esi
// 006e6455  ff151005a400         call dword ptr [0xa40510]
// 006e645b  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e645f  50                   push eax
// 006e6460  8bce                 mov ecx, esi
// 006e6462  ff151005a400         call dword ptr [0xa40510]
// 006e6468  6aff                 push -1
// 006e646a  8bce                 mov ecx, esi
// 006e646c  ff151005a400         call dword ptr [0xa40510]
// 006e6472  84db                 test bl, bl
// 006e6474  7416                 je 0x6e648c
// 006e6476  8d4f18               lea ecx, [edi + 0x18]
// 006e6479  51                   push ecx
// 006e647a  8bce                 mov ecx, esi
// 006e647c  ff15b804a400         call dword ptr [0xa404b8]
// 006e6482  6a00                 push 0
// 006e6484  8bce                 mov ecx, esi
// 006e6486  ff151005a400         call dword ptr [0xa40510]
// 006e648c  80bc248400000000     cmp byte ptr [esp + 0x84], 0
// 006e6494  7416                 je 0x6e64ac
// 006e6496  83c734               add edi, 0x34
// 006e6499  57                   push edi
// 006e649a  8bce                 mov ecx, esi
// 006e649c  ff15b804a400         call dword ptr [0xa404b8]
// 006e64a2  6a00                 push 0
// 006e64a4  8bce                 mov ecx, esi
// 006e64a6  ff151005a400         call dword ptr [0xa40510]
// 006e64ac  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 006e64b0  5f                   pop edi
// 006e64b1  5e                   pop esi
// 006e64b2  8bc5                 mov eax, ebp
// 006e64b4  5d                   pop ebp
// 006e64b5  64890d00000000       mov dword ptr fs:[0], ecx
// 006e64bc  5b                   pop ebx
// 006e64bd  83c470               add esp, 0x70
// 006e64c0  c20800               ret 8
// copied from an identical function in another client (function ??0?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABUgzip_params@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp