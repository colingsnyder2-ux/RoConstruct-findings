// roc 2011-06 0057ba30  unit: seg_00570000  size: 504 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057ba30
//
// 0057ba30  81ec14050000         sub esp, 0x514
// 0057ba36  53                   push ebx
// 0057ba37  55                   push ebp
// 0057ba38  56                   push esi
// 0057ba39  8bb4242c050000       mov esi, dword ptr [esp + 0x52c]
// 0057ba40  57                   push edi
// 0057ba41  bf32000000           mov edi, 0x32
// 0057ba46  85f6                 test esi, esi
// 0057ba48  7c05                 jl 0x57ba4f
// 0057ba4a  83fe04               cmp esi, 4
// 0057ba4d  7c20                 jl 0x57ba6f
// 0057ba4f  8bac2428050000       mov ebp, dword ptr [esp + 0x528]
// 0057ba56  8b4500               mov eax, dword ptr [ebp]
// 0057ba59  897814               mov dword ptr [eax + 0x14], edi
// 0057ba5c  8b4d00               mov ecx, dword ptr [ebp]
// 0057ba5f  897118               mov dword ptr [ecx + 0x18], esi
// 0057ba62  8b5500               mov edx, dword ptr [ebp]
// 0057ba65  8b02                 mov eax, dword ptr [edx]
// 0057ba67  55                   push ebp
// 0057ba68  ffd0                 call eax
// 0057ba6a  83c404               add esp, 4
// 0057ba6d  eb07                 jmp 0x57ba76
// 0057ba6f  8bac2428050000       mov ebp, dword ptr [esp + 0x528]
// 0057ba76  80bc242c05000000     cmp byte ptr [esp + 0x52c], 0
// 0057ba7e  740a                 je 0x57ba8a
// 0057ba80  8b4cb558             mov ecx, dword ptr [ebp + esi*4 + 0x58]
// 0057ba84  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057ba88  eb08                 jmp 0x57ba92
// 0057ba8a  8b54b568             mov edx, dword ptr [ebp + esi*4 + 0x68]
// 0057ba8e  89542410             mov dword ptr [esp + 0x10], edx
// 0057ba92  837c241000           cmp dword ptr [esp + 0x10], 0
// 0057ba97  7517                 jne 0x57bab0
// 0057ba99  8b4500               mov eax, dword ptr [ebp]
// 0057ba9c  897814               mov dword ptr [eax + 0x14], edi
// 0057ba9f  8b4d00               mov ecx, dword ptr [ebp]
// 0057baa2  897118               mov dword ptr [ecx + 0x18], esi
// 0057baa5  8b5500               mov edx, dword ptr [ebp]
// 0057baa8  8b02                 mov eax, dword ptr [edx]
// 0057baaa  55                   push ebp
// 0057baab  ffd0                 call eax
// 0057baad  83c404               add esp, 4
// 0057bab0  8bb42434050000       mov esi, dword ptr [esp + 0x534]
// 0057bab7  833e00               cmp dword ptr [esi], 0
// 0057baba  7514                 jne 0x57bad0
// 0057babc  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0057babf  8b11                 mov edx, dword ptr [ecx]
// 0057bac1  6800050000           push 0x500
// 0057bac6  6a01                 push 1
// 0057bac8  55                   push ebp
// 0057bac9  ffd2                 call edx
// 0057bacb  83c40c               add esp, 0xc
// 0057bace  8906                 mov dword ptr [esi], eax
// 0057bad0  8b06                 mov eax, dword ptr [esi]
// 0057bad2  89442418             mov dword ptr [esp + 0x18], eax
// 0057bad6  33ff                 xor edi, edi
// 0057bad8  bb01000000           mov ebx, 1
// 0057badd  8d4900               lea ecx, [ecx]
// 0057bae0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057bae4  0fb6340b             movzx esi, byte ptr [ebx + ecx]
// 0057bae8  85f6                 test esi, esi
// 0057baea  7c0b                 jl 0x57baf7
// 0057baec  8d143e               lea edx, [esi + edi]
// 0057baef  81fa00010000         cmp edx, 0x100
// 0057baf5  7e15                 jle 0x57bb0c
// 0057baf7  8b4500               mov eax, dword ptr [ebp]
// 0057bafa  c7401408000000       mov dword ptr [eax + 0x14], 8
// 0057bb01  8b4d00               mov ecx, dword ptr [ebp]
// 0057bb04  8b11                 mov edx, dword ptr [ecx]
// 0057bb06  55                   push ebp
// 0057bb07  ffd2                 call edx
// 0057bb09  83c404               add esp, 4
// 0057bb0c  85f6                 test esi, esi
// 0057bb0e  7411                 je 0x57bb21
// 0057bb10  56                   push esi
// 0057bb11  8d443c20             lea eax, [esp + edi + 0x20]
// 0057bb15  53                   push ebx
// 0057bb16  50                   push eax
// 0057bb17  e8c8f72800           call 0x80b2e4
// 0057bb1c  83c40c               add esp, 0xc
// 0057bb1f  03fe                 add edi, esi
// 0057bb21  43                   inc ebx
// 0057bb22  83fb10               cmp ebx, 0x10
// 0057bb25  7eb9                 jle 0x57bae0
// 0057bb27  c6443c1c00           mov byte ptr [esp + edi + 0x1c], 0
// 0057bb2c  8a44241c             mov al, byte ptr [esp + 0x1c]
// 0057bb30  897c2414             mov dword ptr [esp + 0x14], edi
// 0057bb34  33ff                 xor edi, edi
// 0057bb36  33f6                 xor esi, esi
// 0057bb38  0fbed8               movsx ebx, al
// 0057bb3b  84c0                 test al, al
// 0057bb3d  7451                 je 0x57bb90
// 0057bb3f  8d44241c             lea eax, [esp + 0x1c]
// 0057bb43  0fbe00               movsx eax, byte ptr [eax]
// 0057bb46  3bc3                 cmp eax, ebx
// 0057bb48  7518                 jne 0x57bb62
// 0057bb4a  8d9b00000000         lea ebx, [ebx]
// 0057bb50  0fbe4c341d           movsx ecx, byte ptr [esp + esi + 0x1d]
// 0057bb55  89bcb420010000       mov dword ptr [esp + esi*4 + 0x120], edi
// 0057bb5c  46                   inc esi
// 0057bb5d  47                   inc edi
// 0057bb5e  3bcb                 cmp ecx, ebx
// 0057bb60  74ee                 je 0x57bb50
// 0057bb62  ba01000000           mov edx, 1
// 0057bb67  8bcb                 mov ecx, ebx
// 0057bb69  d3e2                 shl edx, cl
// 0057bb6b  3bfa                 cmp edi, edx
// 0057bb6d  7c15                 jl 0x57bb84
// 0057bb6f  8b4500               mov eax, dword ptr [ebp]
// 0057bb72  c7401408000000       mov dword ptr [eax + 0x14], 8
// 0057bb79  8b4d00               mov ecx, dword ptr [ebp]
// 0057bb7c  8b11                 mov edx, dword ptr [ecx]
// 0057bb7e  55                   push ebp
// 0057bb7f  ffd2                 call edx
// 0057bb81  83c404               add esp, 4
// 0057bb84  8d44341c             lea eax, [esp + esi + 0x1c]
// 0057bb88  03ff                 add edi, edi
// 0057bb8a  43                   inc ebx
// 0057bb8b  803800               cmp byte ptr [eax], 0
// 0057bb8e  75b3                 jne 0x57bb43
// 0057bb90  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0057bb94  6800010000           push 0x100
// 0057bb99  81c500040000         add ebp, 0x400
// 0057bb9f  6a00                 push 0
// 0057bba1  55                   push ebp
// 0057bba2  e83df72800           call 0x80b2e4
// 0057bba7  0fb69c2438050000     movzx ebx, byte ptr [esp + 0x538]
// 0057bbaf  83c40c               add esp, 0xc
// 0057bbb2  f7db                 neg ebx
// 0057bbb4  1bdb                 sbb ebx, ebx
// 0057bbb6  81e310ffffff         and ebx, 0xffffff10
// 0057bbbc  33f6                 xor esi, esi
// 0057bbbe  81c3ff000000         add ebx, 0xff
// 0057bbc4  39742414             cmp dword ptr [esp + 0x14], esi
// 0057bbc8  7e53                 jle 0x57bc1d
// 0057bbca  8d9b00000000         lea ebx, [ebx]
// 0057bbd0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057bbd4  0fb67c3011           movzx edi, byte ptr [eax + esi + 0x11]
// 0057bbd9  85ff                 test edi, edi
// 0057bbdb  7c0a                 jl 0x57bbe7
// 0057bbdd  3bfb                 cmp edi, ebx
// 0057bbdf  7f06                 jg 0x57bbe7
// 0057bbe1  803c2f00             cmp byte ptr [edi + ebp], 0
// 0057bbe5  741a                 je 0x57bc01
// 0057bbe7  8b842428050000       mov eax, dword ptr [esp + 0x528]
// 0057bbee  8b08                 mov ecx, dword ptr [eax]
// 0057bbf0  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 0057bbf7  8b10                 mov edx, dword ptr [eax]
// 0057bbf9  50                   push eax
// 0057bbfa  8b02                 mov eax, dword ptr [edx]
// 0057bbfc  ffd0                 call eax
// 0057bbfe  83c404               add esp, 4
// 0057bc01  8b8cb420010000       mov ecx, dword ptr [esp + esi*4 + 0x120]
// 0057bc08  8a44341c             mov al, byte ptr [esp + esi + 0x1c]
// 0057bc0c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057bc10  46                   inc esi
// 0057bc11  3b742414             cmp esi, dword ptr [esp + 0x14]
// 0057bc15  890cba               mov dword ptr [edx + edi*4], ecx
// 0057bc18  88042f               mov byte ptr [edi + ebp], al
// 0057bc1b  7cb3                 jl 0x57bbd0
// 0057bc1d  5f                   pop edi
// 0057bc1e  5e                   pop esi
// 0057bc1f  5d                   pop ebp
// 0057bc20  5b                   pop ebx
// 0057bc21  81c414050000         add esp, 0x514
// 0057bc27  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_make_c_derived_tbl)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
