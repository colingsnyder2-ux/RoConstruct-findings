// from server: 100% by auto
// roc 2010-06 0057bb70  unit: seg_00570000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057bb70
//
// 0057bb70  53                   push ebx
// 0057bb71  56                   push esi
// 0057bb72  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057bb76  57                   push edi
// 0057bb77  68d8000000           push 0xd8
// 0057bb7c  e85ff2ffff           call 0x57ade0
// 0057bb81  83c404               add esp, 4
// 0057bb84  33ff                 xor edi, edi
// 0057bb86  8d5e48               lea ebx, [esi + 0x48]
// 0057bb89  8da42400000000       lea esp, [esp]
// 0057bb90  833b00               cmp dword ptr [ebx], 0
// 0057bb93  740b                 je 0x57bba0
// 0057bb95  57                   push edi
// 0057bb96  8bc6                 mov eax, esi
// 0057bb98  e823f3ffff           call 0x57aec0
// 0057bb9d  83c404               add esp, 4
// 0057bba0  47                   inc edi
// 0057bba1  83c304               add ebx, 4
// 0057bba4  83ff04               cmp edi, 4
// 0057bba7  7ce7                 jl 0x57bb90
// 0057bba9  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0057bbb0  7533                 jne 0x57bbe5
// 0057bbb2  33ff                 xor edi, edi
// 0057bbb4  8d5e68               lea ebx, [esi + 0x68]
// 0057bbb7  837bf000             cmp dword ptr [ebx - 0x10], 0
// 0057bbbb  740d                 je 0x57bbca
// 0057bbbd  6a00                 push 0
// 0057bbbf  57                   push edi
// 0057bbc0  8bc6                 mov eax, esi
// 0057bbc2  e8d9f4ffff           call 0x57b0a0
// 0057bbc7  83c408               add esp, 8
// 0057bbca  833b00               cmp dword ptr [ebx], 0
// 0057bbcd  740d                 je 0x57bbdc
// 0057bbcf  6a01                 push 1
// 0057bbd1  57                   push edi
// 0057bbd2  8bc6                 mov eax, esi
// 0057bbd4  e8c7f4ffff           call 0x57b0a0
// 0057bbd9  83c408               add esp, 8
// 0057bbdc  47                   inc edi
// 0057bbdd  83c304               add ebx, 4
// 0057bbe0  83ff04               cmp edi, 4
// 0057bbe3  7cd2                 jl 0x57bbb7
// 0057bbe5  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057bbe8  8b08                 mov ecx, dword ptr [eax]
// 0057bbea  c601ff               mov byte ptr [ecx], 0xff
// 0057bbed  ff00                 inc dword ptr [eax]
// 0057bbef  83cfff               or edi, 0xffffffff
// 0057bbf2  017804               add dword ptr [eax + 4], edi
// 0057bbf5  8d5f19               lea ebx, [edi + 0x19]
// 0057bbf8  751c                 jne 0x57bc16
// 0057bbfa  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057bbfd  56                   push esi
// 0057bbfe  ffd2                 call edx
// 0057bc00  83c404               add esp, 4
// 0057bc03  84c0                 test al, al
// 0057bc05  750f                 jne 0x57bc16
// 0057bc07  8b06                 mov eax, dword ptr [esi]
// 0057bc09  895814               mov dword ptr [eax + 0x14], ebx
// 0057bc0c  8b0e                 mov ecx, dword ptr [esi]
// 0057bc0e  8b11                 mov edx, dword ptr [ecx]
// 0057bc10  56                   push esi
// 0057bc11  ffd2                 call edx
// 0057bc13  83c404               add esp, 4
// 0057bc16  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057bc19  8b08                 mov ecx, dword ptr [eax]
// 0057bc1b  c601d9               mov byte ptr [ecx], 0xd9
// 0057bc1e  ff00                 inc dword ptr [eax]
// 0057bc20  017804               add dword ptr [eax + 4], edi
// 0057bc23  751c                 jne 0x57bc41
// 0057bc25  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057bc28  56                   push esi
// 0057bc29  ffd2                 call edx
// 0057bc2b  83c404               add esp, 4
// 0057bc2e  84c0                 test al, al
// 0057bc30  750f                 jne 0x57bc41
// 0057bc32  8b06                 mov eax, dword ptr [esi]
// 0057bc34  895814               mov dword ptr [eax + 0x14], ebx
// 0057bc37  8b0e                 mov ecx, dword ptr [esi]
// 0057bc39  8b11                 mov edx, dword ptr [ecx]
// 0057bc3b  56                   push esi
// 0057bc3c  ffd2                 call edx
// 0057bc3e  83c404               add esp, 4
// 0057bc41  5f                   pop edi
// 0057bc42  5e                   pop esi
// 0057bc43  5b                   pop ebx
// 0057bc44  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_tables_only)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
