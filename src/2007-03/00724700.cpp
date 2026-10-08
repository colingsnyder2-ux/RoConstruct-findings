// roc 2007-03 00724700  unit: seg_00720000  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00724700
//
// 00724700  83ec20               sub esp, 0x20
// 00724703  8b5104               mov edx, dword ptr [ecx + 4]
// 00724706  53                   push ebx
// 00724707  8b19                 mov ebx, dword ptr [ecx]
// 00724709  8b4908               mov ecx, dword ptr [ecx + 8]
// 0072470c  89542418             mov dword ptr [esp + 0x18], edx
// 00724710  8b5104               mov edx, dword ptr [ecx + 4]
// 00724713  55                   push ebp
// 00724714  8b29                 mov ebp, dword ptr [ecx]
// 00724716  89542424             mov dword ptr [esp + 0x24], edx
// 0072471a  8b5108               mov edx, dword ptr [ecx + 8]
// 0072471d  56                   push esi
// 0072471e  8b7110               mov esi, dword ptr [ecx + 0x10]
// 00724721  33c9                 xor ecx, ecx
// 00724723  89883c0b0000         mov dword ptr [eax + 0xb3c], ecx
// 00724729  8988400b0000         mov dword ptr [eax + 0xb40], ecx
// 0072472f  8988440b0000         mov dword ptr [eax + 0xb44], ecx
// 00724735  8988480b0000         mov dword ptr [eax + 0xb48], ecx
// 0072473b  89884c0b0000         mov dword ptr [eax + 0xb4c], ecx
// 00724741  8988500b0000         mov dword ptr [eax + 0xb50], ecx
// 00724747  8988540b0000         mov dword ptr [eax + 0xb54], ecx
// 0072474d  8988580b0000         mov dword ptr [eax + 0xb58], ecx
// 00724753  89542424             mov dword ptr [esp + 0x24], edx
// 00724757  8b9054140000         mov edx, dword ptr [eax + 0x1454]
// 0072475d  8b94905c0b0000       mov edx, dword ptr [eax + edx*4 + 0xb5c]
// 00724764  57                   push edi
// 00724765  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 0072476a  8bb854140000         mov edi, dword ptr [eax + 0x1454]
// 00724770  83c701               add edi, 1
// 00724773  81ff3d020000         cmp edi, 0x23d
// 00724779  8974241c             mov dword ptr [esp + 0x1c], esi
// 0072477d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00724781  0f8d88010000         jge 0x72490f
// 00724787  8d8cb85c0b0000       lea ecx, [eax + edi*4 + 0xb5c]
// 0072478e  894c2414             mov dword ptr [esp + 0x14], ecx
// 00724792  b93d020000           mov ecx, 0x23d
// 00724797  2bcf                 sub ecx, edi
// 00724799  03f9                 add edi, ecx
// 0072479b  894c2420             mov dword ptr [esp + 0x20], ecx
// 0072479f  897c2410             mov dword ptr [esp + 0x10], edi
// 007247a3  eb04                 jmp 0x7247a9
// 007247a5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007247a9  8b542414             mov edx, dword ptr [esp + 0x14]
// 007247ad  8b12                 mov edx, dword ptr [edx]
// 007247af  0fb74c9302           movzx ecx, word ptr [ebx + edx*4 + 2]
// 007247b4  0fb74c8b02           movzx ecx, word ptr [ebx + ecx*4 + 2]
// 007247b9  83c101               add ecx, 1
// 007247bc  3bce                 cmp ecx, esi
// 007247be  7e07                 jle 0x7247c7
// 007247c0  8344241801           add dword ptr [esp + 0x18], 1
// 007247c5  8bce                 mov ecx, esi
// 007247c7  3b542424             cmp edx, dword ptr [esp + 0x24]
// 007247cb  66894c9302           mov word ptr [ebx + edx*4 + 2], cx
// 007247d0  7f48                 jg 0x72481a
// 007247d2  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007247d6  668384483c0b000001   add word ptr [eax + ecx*2 + 0xb3c], 1
// 007247df  33f6                 xor esi, esi
// 007247e1  3bd7                 cmp edx, edi
// 007247e3  7c0b                 jl 0x7247f0
// 007247e5  8bf2                 mov esi, edx
// 007247e7  2bf7                 sub esi, edi
// 007247e9  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007247ed  8b34b7               mov esi, dword ptr [edi + esi*4]
// 007247f0  0fb73c93             movzx edi, word ptr [ebx + edx*4]
// 007247f4  0fb7ff               movzx edi, di
// 007247f7  03ce                 add ecx, esi
// 007247f9  0fafcf               imul ecx, edi
// 007247fc  0188a8160000         add dword ptr [eax + 0x16a8], ecx
// 00724802  85ed                 test ebp, ebp
// 00724804  7410                 je 0x724816
// 00724806  0fb7549502           movzx edx, word ptr [ebp + edx*4 + 2]
// 0072480b  03d6                 add edx, esi
// 0072480d  0fafd7               imul edx, edi
// 00724810  0190ac160000         add dword ptr [eax + 0x16ac], edx
// 00724816  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0072481a  8344241404           add dword ptr [esp + 0x14], 4
// 0072481f  836c242001           sub dword ptr [esp + 0x20], 1
// 00724824  0f857bffffff         jne 0x7247a5
// 0072482a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0072482e  85ed                 test ebp, ebp
// 00724830  0f84d9000000         je 0x72490f
// 00724836  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072483a  8d51ff               lea edx, [ecx - 1]
// 0072483d  8954242c             mov dword ptr [esp + 0x2c], edx
// 00724841  8db4483c0b0000       lea esi, [eax + ecx*2 + 0xb3c]
// 00724848  eb06                 jmp 0x724850
// 0072484a  8d9b00000000         lea ebx, [ebx]
// 00724850  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00724854  6683bc483c0b000000   cmp word ptr [eax + ecx*2 + 0xb3c], 0
// 0072485d  8d94483c0b0000       lea edx, [eax + ecx*2 + 0xb3c]
// 00724864  750c                 jne 0x724872
// 00724866  83ea02               sub edx, 2
// 00724869  83e901               sub ecx, 1
// 0072486c  66833a00             cmp word ptr [edx], 0
// 00724870  74f4                 je 0x724866
// 00724872  668184483c0b0000ffff add word ptr [eax + ecx*2 + 0xb3c], 0xffff
// 0072487c  668384483e0b000002   add word ptr [eax + ecx*2 + 0xb3e], 2
// 00724885  668106ffff           add word ptr [esi], 0xffff
// 0072488a  83ed02               sub ebp, 2
// 0072488d  85ed                 test ebp, ebp
// 0072488f  7fbf                 jg 0x724850
// 00724891  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00724895  85d2                 test edx, edx
// 00724897  7476                 je 0x72490f
// 00724899  89742420             mov dword ptr [esp + 0x20], esi
// 0072489d  8d4900               lea ecx, [ecx]
// 007248a0  0fb736               movzx esi, word ptr [esi]
// 007248a3  85f6                 test esi, esi
// 007248a5  8974241c             mov dword ptr [esp + 0x1c], esi
// 007248a9  7452                 je 0x7248fd
// 007248ab  8dacb85c0b0000       lea ebp, [eax + edi*4 + 0xb5c]
// 007248b2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 007248b5  836c241001           sub dword ptr [esp + 0x10], 1
// 007248ba  83ed04               sub ebp, 4
// 007248bd  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 007248c1  896c242c             mov dword ptr [esp + 0x2c], ebp
// 007248c5  7f2e                 jg 0x7248f5
// 007248c7  0fb77c8b02           movzx edi, word ptr [ebx + ecx*4 + 2]
// 007248cc  3bfa                 cmp edi, edx
// 007248ce  8d748b02             lea esi, [ebx + ecx*4 + 2]
// 007248d2  7418                 je 0x7248ec
// 007248d4  0fb70c8b             movzx ecx, word ptr [ebx + ecx*4]
// 007248d8  8bea                 mov ebp, edx
// 007248da  2bef                 sub ebp, edi
// 007248dc  0fafe9               imul ebp, ecx
// 007248df  01a8a8160000         add dword ptr [eax + 0x16a8], ebp
// 007248e5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007248e9  668916               mov word ptr [esi], dx
// 007248ec  836c241c01           sub dword ptr [esp + 0x1c], 1
// 007248f1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007248f5  85f6                 test esi, esi
// 007248f7  75b9                 jne 0x7248b2
// 007248f9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007248fd  8b742420             mov esi, dword ptr [esp + 0x20]
// 00724901  83ea01               sub edx, 1
// 00724904  83ee02               sub esi, 2
// 00724907  85d2                 test edx, edx
// 00724909  89742420             mov dword ptr [esp + 0x20], esi
// 0072490d  7591                 jne 0x7248a0
// 0072490f  5f                   pop edi
// 00724910  5e                   pop esi
// 00724911  5d                   pop ebp
// 00724912  5b                   pop ebx
// 00724913  83c420               add esp, 0x20
// 00724916  c3                   ret 
// library zlib-1.2.3/trees.c (function _gen_bitlen)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
