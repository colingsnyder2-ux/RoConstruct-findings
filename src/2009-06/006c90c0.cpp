// roc 2009-06 006c90c0  unit: seg_006c0000  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c90c0
//
// 006c90c0  56                   push esi
// 006c90c1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c90c5  8a06                 mov al, byte ptr [esi]
// 006c90c7  57                   push edi
// 006c90c8  3c3d                 cmp al, 0x3d
// 006c90ca  751d                 jne 0x6c90e9
// 006c90cc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006c90d0  57                   push edi
// 006c90d1  46                   inc esi
// 006c90d2  56                   push esi
// 006c90d3  8b742414             mov esi, dword ptr [esp + 0x14]
// 006c90d7  56                   push esi
// 006c90d8  ff1590e88900         call dword ptr [0x89e890]
// 006c90de  83c40c               add esp, 0xc
// 006c90e1  c6443eff00           mov byte ptr [esi + edi - 1], 0
// 006c90e6  5f                   pop edi
// 006c90e7  5e                   pop esi
// 006c90e8  c3                   ret 
// 006c90e9  3c40                 cmp al, 0x40
// 006c90eb  756e                 jne 0x6c915b
// 006c90ed  8b542414             mov edx, dword ptr [esp + 0x14]
// 006c90f1  46                   inc esi
// 006c90f2  8bc6                 mov eax, esi
// 006c90f4  83ea08               sub edx, 8
// 006c90f7  8d7801               lea edi, [eax + 1]
// 006c90fa  8d9b00000000         lea ebx, [ebx]
// 006c9100  8a08                 mov cl, byte ptr [eax]
// 006c9102  40                   inc eax
// 006c9103  84c9                 test cl, cl
// 006c9105  75f9                 jne 0x6c9100
// 006c9107  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c910b  2bc7                 sub eax, edi
// 006c910d  c60100               mov byte ptr [ecx], 0
// 006c9110  3bc2                 cmp eax, edx
// 006c9112  761b                 jbe 0x6c912f
// 006c9114  2bc2                 sub eax, edx
// 006c9116  8bf9                 mov edi, ecx
// 006c9118  03f0                 add esi, eax
// 006c911a  4f                   dec edi
// 006c911b  eb03                 jmp 0x6c9120
// 006c911d  8d4900               lea ecx, [ecx]
// 006c9120  8a4701               mov al, byte ptr [edi + 1]
// 006c9123  47                   inc edi
// 006c9124  84c0                 test al, al
// 006c9126  75f8                 jne 0x6c9120
// 006c9128  a1a4c48e00           mov eax, dword ptr [0x8ec4a4]
// 006c912d  8907                 mov dword ptr [edi], eax
// 006c912f  8bc6                 mov eax, esi
// 006c9131  8a10                 mov dl, byte ptr [eax]
// 006c9133  40                   inc eax
// 006c9134  84d2                 test dl, dl
// 006c9136  75f9                 jne 0x6c9131
// 006c9138  2bc6                 sub eax, esi
// 006c913a  49                   dec ecx
// 006c913b  eb03                 jmp 0x6c9140
// 006c913d  8d4900               lea ecx, [ecx]
// 006c9140  8a5101               mov dl, byte ptr [ecx + 1]
// 006c9143  41                   inc ecx
// 006c9144  84d2                 test dl, dl
// 006c9146  75f8                 jne 0x6c9140
// 006c9148  8bf9                 mov edi, ecx
// 006c914a  8bc8                 mov ecx, eax
// 006c914c  c1e902               shr ecx, 2
// 006c914f  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006c9151  8bc8                 mov ecx, eax
// 006c9153  83e103               and ecx, 3
// 006c9156  f3a4                 rep movsb byte ptr es:[edi], byte ptr [esi]
// 006c9158  5f                   pop edi
// 006c9159  5e                   pop esi
// 006c915a  c3                   ret 
// 006c915b  6864b68b00           push 0x8bb664
// 006c9160  56                   push esi
// 006c9161  ff15a8e78900         call dword ptr [0x89e7a8]
// 006c9167  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c916b  83e911               sub ecx, 0x11
// 006c916e  83c408               add esp, 8
// 006c9171  3bc1                 cmp eax, ecx
// 006c9173  7602                 jbe 0x6c9177
// 006c9175  8bc1                 mov eax, ecx
// 006c9177  8b0d98c48e00         mov ecx, dword ptr [0x8ec498]
// 006c917d  53                   push ebx
// 006c917e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006c9182  890b                 mov dword ptr [ebx], ecx
// 006c9184  8b159cc48e00         mov edx, dword ptr [0x8ec49c]
// 006c918a  895304               mov dword ptr [ebx + 4], edx
// 006c918d  668b0da0c48e00       mov cx, word ptr [0x8ec4a0]
// 006c9194  66894b08             mov word ptr [ebx + 8], cx
// 006c9198  803c3000             cmp byte ptr [eax + esi], 0
// 006c919c  7424                 je 0x6c91c2
// 006c919e  50                   push eax
// 006c919f  56                   push esi
// 006c91a0  53                   push ebx
// 006c91a1  ff15ace78900         call dword ptr [0x89e7ac]
// 006c91a7  8bfb                 mov edi, ebx
// 006c91a9  83c40c               add esp, 0xc
// 006c91ac  4f                   dec edi
// 006c91ad  8d4900               lea ecx, [ecx]
// 006c91b0  8a4701               mov al, byte ptr [edi + 1]
// 006c91b3  47                   inc edi
// 006c91b4  84c0                 test al, al
// 006c91b6  75f8                 jne 0x6c91b0
// 006c91b8  8b15a4c48e00         mov edx, dword ptr [0x8ec4a4]
// 006c91be  8917                 mov dword ptr [edi], edx
// 006c91c0  eb24                 jmp 0x6c91e6
// 006c91c2  8bc6                 mov eax, esi
// 006c91c4  8a08                 mov cl, byte ptr [eax]
// 006c91c6  40                   inc eax
// 006c91c7  84c9                 test cl, cl
// 006c91c9  75f9                 jne 0x6c91c4
// 006c91cb  8bfb                 mov edi, ebx
// 006c91cd  2bc6                 sub eax, esi
// 006c91cf  4f                   dec edi
// 006c91d0  8a4f01               mov cl, byte ptr [edi + 1]
// 006c91d3  47                   inc edi
// 006c91d4  84c9                 test cl, cl
// 006c91d6  75f8                 jne 0x6c91d0
// 006c91d8  8bc8                 mov ecx, eax
// 006c91da  c1e902               shr ecx, 2
// 006c91dd  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006c91df  8bc8                 mov ecx, eax
// 006c91e1  83e103               and ecx, 3
// 006c91e4  f3a4                 rep movsb byte ptr es:[edi], byte ptr [esi]
// 006c91e6  4b                   dec ebx
// 006c91e7  8a4301               mov al, byte ptr [ebx + 1]
// 006c91ea  43                   inc ebx
// 006c91eb  84c0                 test al, al
// 006c91ed  75f8                 jne 0x6c91e7
// 006c91ef  66a194c48e00         mov ax, word ptr [0x8ec494]
// 006c91f5  668903               mov word ptr [ebx], ax
// 006c91f8  8a0d96c48e00         mov cl, byte ptr [0x8ec496]
// 006c91fe  884b02               mov byte ptr [ebx + 2], cl
// 006c9201  5b                   pop ebx
// 006c9202  5f                   pop edi
// 006c9203  5e                   pop esi
// 006c9204  c3                   ret 
// copied from an identical function in another client (function _luaO_chunkid)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS /MD
// roc-lib: lua-5.1-dll lobject.c