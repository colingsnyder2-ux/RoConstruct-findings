// from server: 100% by auto
// roc 2011-06 0056a740  unit: seg_00560000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056a740
//
// 0056a740  53                   push ebx
// 0056a741  56                   push esi
// 0056a742  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056a746  57                   push edi
// 0056a747  68d8000000           push 0xd8
// 0056a74c  e85ff2ffff           call 0x5699b0
// 0056a751  83c404               add esp, 4
// 0056a754  33ff                 xor edi, edi
// 0056a756  8d5e48               lea ebx, [esi + 0x48]
// 0056a759  8da42400000000       lea esp, [esp]
// 0056a760  833b00               cmp dword ptr [ebx], 0
// 0056a763  740b                 je 0x56a770
// 0056a765  57                   push edi
// 0056a766  8bc6                 mov eax, esi
// 0056a768  e823f3ffff           call 0x569a90
// 0056a76d  83c404               add esp, 4
// 0056a770  47                   inc edi
// 0056a771  83c304               add ebx, 4
// 0056a774  83ff04               cmp edi, 4
// 0056a777  7ce7                 jl 0x56a760
// 0056a779  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0056a780  7533                 jne 0x56a7b5
// 0056a782  33ff                 xor edi, edi
// 0056a784  8d5e68               lea ebx, [esi + 0x68]
// 0056a787  837bf000             cmp dword ptr [ebx - 0x10], 0
// 0056a78b  740d                 je 0x56a79a
// 0056a78d  6a00                 push 0
// 0056a78f  57                   push edi
// 0056a790  8bc6                 mov eax, esi
// 0056a792  e8d9f4ffff           call 0x569c70
// 0056a797  83c408               add esp, 8
// 0056a79a  833b00               cmp dword ptr [ebx], 0
// 0056a79d  740d                 je 0x56a7ac
// 0056a79f  6a01                 push 1
// 0056a7a1  57                   push edi
// 0056a7a2  8bc6                 mov eax, esi
// 0056a7a4  e8c7f4ffff           call 0x569c70
// 0056a7a9  83c408               add esp, 8
// 0056a7ac  47                   inc edi
// 0056a7ad  83c304               add ebx, 4
// 0056a7b0  83ff04               cmp edi, 4
// 0056a7b3  7cd2                 jl 0x56a787
// 0056a7b5  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a7b8  8b08                 mov ecx, dword ptr [eax]
// 0056a7ba  c601ff               mov byte ptr [ecx], 0xff
// 0056a7bd  ff00                 inc dword ptr [eax]
// 0056a7bf  83cfff               or edi, 0xffffffff
// 0056a7c2  017804               add dword ptr [eax + 4], edi
// 0056a7c5  8d5f19               lea ebx, [edi + 0x19]
// 0056a7c8  751c                 jne 0x56a7e6
// 0056a7ca  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a7cd  56                   push esi
// 0056a7ce  ffd2                 call edx
// 0056a7d0  83c404               add esp, 4
// 0056a7d3  84c0                 test al, al
// 0056a7d5  750f                 jne 0x56a7e6
// 0056a7d7  8b06                 mov eax, dword ptr [esi]
// 0056a7d9  895814               mov dword ptr [eax + 0x14], ebx
// 0056a7dc  8b0e                 mov ecx, dword ptr [esi]
// 0056a7de  8b11                 mov edx, dword ptr [ecx]
// 0056a7e0  56                   push esi
// 0056a7e1  ffd2                 call edx
// 0056a7e3  83c404               add esp, 4
// 0056a7e6  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a7e9  8b08                 mov ecx, dword ptr [eax]
// 0056a7eb  c601d9               mov byte ptr [ecx], 0xd9
// 0056a7ee  ff00                 inc dword ptr [eax]
// 0056a7f0  017804               add dword ptr [eax + 4], edi
// 0056a7f3  751c                 jne 0x56a811
// 0056a7f5  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a7f8  56                   push esi
// 0056a7f9  ffd2                 call edx
// 0056a7fb  83c404               add esp, 4
// 0056a7fe  84c0                 test al, al
// 0056a800  750f                 jne 0x56a811
// 0056a802  8b06                 mov eax, dword ptr [esi]
// 0056a804  895814               mov dword ptr [eax + 0x14], ebx
// 0056a807  8b0e                 mov ecx, dword ptr [esi]
// 0056a809  8b11                 mov edx, dword ptr [ecx]
// 0056a80b  56                   push esi
// 0056a80c  ffd2                 call edx
// 0056a80e  83c404               add esp, 4
// 0056a811  5f                   pop edi
// 0056a812  5e                   pop esi
// 0056a813  5b                   pop ebx
// 0056a814  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_tables_only)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
