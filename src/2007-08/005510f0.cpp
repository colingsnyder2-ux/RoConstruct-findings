// roc 2007-08 005510f0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 544 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005510f0
//
// 005510f0  6aff                 push -1
// 005510f2  68812a7500           push 0x752a81
// 005510f7  64a100000000         mov eax, dword ptr fs:[0]
// 005510fd  50                   push eax
// 005510fe  64892500000000       mov dword ptr fs:[0], esp
// 00551105  83ec64               sub esp, 0x64
// 00551108  53                   push ebx
// 00551109  55                   push ebp
// 0055110a  56                   push esi
// 0055110b  57                   push edi
// 0055110c  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 00551113  83ec58               sub esp, 0x58
// 00551116  8be9                 mov ebp, ecx
// 00551118  8bcc                 mov ecx, esp
// 0055111a  8964246c             mov dword ptr [esp + 0x6c], esp
// 0055111e  57                   push edi
// 0055111f  896c2474             mov dword ptr [esp + 0x74], ebp
// 00551123  e8f899ffff           call 0x54ab20
// 00551128  8d442474             lea eax, [esp + 0x74]
// 0055112c  50                   push eax
// 0055112d  e87e9affff           call 0x54abb0
// 00551132  83c45c               add esp, 0x5c
// 00551135  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0055113c  50                   push eax
// 0055113d  51                   push ecx
// 0055113e  33db                 xor ebx, ebx
// 00551140  8bcd                 mov ecx, ebp
// 00551142  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 00551149  e842ddffff           call 0x54ee90
// 0055114e  8d4c2450             lea ecx, [esp + 0x50]
// 00551152  c644247c03           mov byte ptr [esp + 0x7c], 3
// 00551157  ff15ace67700         call dword ptr [0x77e6ac]
// 0055115d  8d4c2434             lea ecx, [esp + 0x34]
// 00551161  c644247c02           mov byte ptr [esp + 0x7c], 2
// 00551166  ff15ace67700         call dword ptr [0x77e6ac]
// 0055116c  8d7508               lea esi, [ebp + 8]
// 0055116f  8bce                 mov ecx, esi
// 00551171  ff15a4e67700         call dword ptr [0x77e6a4]
// 00551177  8d4d24               lea ecx, [ebp + 0x24]
// 0055117a  c644247c04           mov byte ptr [esp + 0x7c], 4
// 0055117f  ff15a4e67700         call dword ptr [0x77e6a4]
// 00551185  895d40               mov dword ptr [ebp + 0x40], ebx
// 00551188  895d44               mov dword ptr [ebp + 0x44], ebx
// 0055118b  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0055118e  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00551191  3bc3                 cmp eax, ebx
// 00551193  0f95c3               setne bl
// 00551196  85c9                 test ecx, ecx
// 00551198  0f95c2               setne dl
// 0055119b  84db                 test bl, bl
// 0055119d  c644247c05           mov byte ptr [esp + 0x7c], 5
// 005511a2  88942484000000       mov byte ptr [esp + 0x84], dl
// 005511a9  7409                 je 0x5511b4
// 005511ab  83c001               add eax, 1
// 005511ae  89442410             mov dword ptr [esp + 0x10], eax
// 005511b2  eb08                 jmp 0x5511bc
// 005511b4  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005511bc  84d2                 test dl, dl
// 005511be  740c                 je 0x5511cc
// 005511c0  83c101               add ecx, 1
// 005511c3  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 005511ca  eb0b                 jmp 0x5511d7
// 005511cc  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 005511d7  8b07                 mov eax, dword ptr [edi]
// 005511d9  33d2                 xor edx, edx
// 005511db  3b0564a57b00         cmp eax, dword ptr [0x7ba564]
// 005511e1  0f95c2               setne dl
// 005511e4  33c9                 xor ecx, ecx
// 005511e6  83ea01               sub edx, 1
// 005511e9  83e204               and edx, 4
// 005511ec  3b0568a57b00         cmp eax, dword ptr [0x7ba568]
// 005511f2  8b442410             mov eax, dword ptr [esp + 0x10]
// 005511f6  0f95c1               setne cl
// 005511f9  83e901               sub ecx, 1
// 005511fc  83e102               and ecx, 2
// 005511ff  03d1                 add edx, ecx
// 00551201  89542414             mov dword ptr [esp + 0x14], edx
// 00551205  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0055120c  8d4c020a             lea ecx, [edx + eax + 0xa]
// 00551210  51                   push ecx
// 00551211  8bce                 mov ecx, esi
// 00551213  ff154ce57700         call dword ptr [0x77e54c]
// 00551219  6a1f                 push 0x1f
// 0055121b  8bce                 mov ecx, esi
// 0055121d  ff155ce57700         call dword ptr [0x77e55c]
// 00551223  6a8b                 push -0x75
// 00551225  8bce                 mov ecx, esi
// 00551227  ff155ce57700         call dword ptr [0x77e55c]
// 0055122d  6a08                 push 8
// 0055122f  8bce                 mov ecx, esi
// 00551231  ff155ce57700         call dword ptr [0x77e55c]
// 00551237  8a942484000000       mov dl, byte ptr [esp + 0x84]
// 0055123e  f6da                 neg dl
// 00551240  1ad2                 sbb dl, dl
// 00551242  8ac3                 mov al, bl
// 00551244  8bce                 mov ecx, esi
// 00551246  83e210               and edx, 0x10
// 00551249  f6d8                 neg al
// 0055124b  1ac0                 sbb al, al
// 0055124d  83e008               and eax, 8
// 00551250  02d0                 add dl, al
// 00551252  52                   push edx
// 00551253  ff155ce57700         call dword ptr [0x77e55c]
// 00551259  0fb64f50             movzx ecx, byte ptr [edi + 0x50]
// 0055125d  51                   push ecx
// 0055125e  8bce                 mov ecx, esi
// 00551260  ff155ce57700         call dword ptr [0x77e55c]
// 00551266  8b4750               mov eax, dword ptr [edi + 0x50]
// 00551269  8b5754               mov edx, dword ptr [edi + 0x54]
// 0055126c  b108                 mov cl, 8
// 0055126e  e8fd000e00           call 0x631370
// 00551273  50                   push eax
// 00551274  8bce                 mov ecx, esi
// 00551276  ff155ce57700         call dword ptr [0x77e55c]
// 0055127c  8b4750               mov eax, dword ptr [edi + 0x50]
// 0055127f  8b5754               mov edx, dword ptr [edi + 0x54]
// 00551282  b110                 mov cl, 0x10
// 00551284  e8e7000e00           call 0x631370
// 00551289  50                   push eax
// 0055128a  8bce                 mov ecx, esi
// 0055128c  ff155ce57700         call dword ptr [0x77e55c]
// 00551292  8b4750               mov eax, dword ptr [edi + 0x50]
// 00551295  8b5754               mov edx, dword ptr [edi + 0x54]
// 00551298  b118                 mov cl, 0x18
// 0055129a  e8d1000e00           call 0x631370
// 0055129f  50                   push eax
// 005512a0  8bce                 mov ecx, esi
// 005512a2  ff155ce57700         call dword ptr [0x77e55c]
// 005512a8  8b542414             mov edx, dword ptr [esp + 0x14]
// 005512ac  52                   push edx
// 005512ad  8bce                 mov ecx, esi
// 005512af  ff155ce57700         call dword ptr [0x77e55c]
// 005512b5  6aff                 push -1
// 005512b7  8bce                 mov ecx, esi
// 005512b9  ff155ce57700         call dword ptr [0x77e55c]
// 005512bf  84db                 test bl, bl
// 005512c1  7416                 je 0x5512d9
// 005512c3  8d4718               lea eax, [edi + 0x18]
// 005512c6  50                   push eax
// 005512c7  8bce                 mov ecx, esi
// 005512c9  ff1564e67700         call dword ptr [0x77e664]
// 005512cf  6a00                 push 0
// 005512d1  8bce                 mov ecx, esi
// 005512d3  ff155ce57700         call dword ptr [0x77e55c]
// 005512d9  80bc248400000000     cmp byte ptr [esp + 0x84], 0
// 005512e1  7416                 je 0x5512f9
// 005512e3  83c734               add edi, 0x34
// 005512e6  57                   push edi
// 005512e7  8bce                 mov ecx, esi
// 005512e9  ff1564e67700         call dword ptr [0x77e664]
// 005512ef  6a00                 push 0
// 005512f1  8bce                 mov ecx, esi
// 005512f3  ff155ce57700         call dword ptr [0x77e55c]
// 005512f9  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005512fd  5f                   pop edi
// 005512fe  5e                   pop esi
// 005512ff  8bc5                 mov eax, ebp
// 00551301  5d                   pop ebp
// 00551302  64890d00000000       mov dword ptr fs:[0], ecx
// 00551309  5b                   pop ebx
// 0055130a  83c470               add esp, 0x70
// 0055130d  c20800               ret 8
// copied from an identical function in another client (function ??0?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABUgzip_params@12@H@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp