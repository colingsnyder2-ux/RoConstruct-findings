// roc 2007-03 005f8860  unit: seg_005f0000  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f8860
//
// 005f8860  56                   push esi
// 005f8861  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f8865  8a06                 mov al, byte ptr [esi]
// 005f8867  3c3d                 cmp al, 0x3d
// 005f8869  57                   push edi
// 005f886a  751f                 jne 0x5f888b
// 005f886c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005f8870  57                   push edi
// 005f8871  83c601               add esi, 1
// 005f8874  56                   push esi
// 005f8875  8b742414             mov esi, dword ptr [esp + 0x14]
// 005f8879  56                   push esi
// 005f887a  ff15c0e97700         call dword ptr [0x77e9c0]
// 005f8880  83c40c               add esp, 0xc
// 005f8883  c6443eff00           mov byte ptr [esi + edi - 1], 0
// 005f8888  5f                   pop edi
// 005f8889  5e                   pop esi
// 005f888a  c3                   ret 
// 005f888b  3c40                 cmp al, 0x40
// 005f888d  756f                 jne 0x5f88fe
// 005f888f  8b542414             mov edx, dword ptr [esp + 0x14]
// 005f8893  83c601               add esi, 1
// 005f8896  8bc6                 mov eax, esi
// 005f8898  83ea08               sub edx, 8
// 005f889b  8d7801               lea edi, [eax + 1]
// 005f889e  8bff                 mov edi, edi
// 005f88a0  8a08                 mov cl, byte ptr [eax]
// 005f88a2  83c001               add eax, 1
// 005f88a5  84c9                 test cl, cl
// 005f88a7  75f7                 jne 0x5f88a0
// 005f88a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f88ad  2bc7                 sub eax, edi
// 005f88af  3bc2                 cmp eax, edx
// 005f88b1  c60100               mov byte ptr [ecx], 0
// 005f88b4  761b                 jbe 0x5f88d1
// 005f88b6  2bc2                 sub eax, edx
// 005f88b8  8bf9                 mov edi, ecx
// 005f88ba  03f0                 add esi, eax
// 005f88bc  83c7ff               add edi, -1
// 005f88bf  90                   nop 
// 005f88c0  8a4701               mov al, byte ptr [edi + 1]
// 005f88c3  83c701               add edi, 1
// 005f88c6  84c0                 test al, al
// 005f88c8  75f6                 jne 0x5f88c0
// 005f88ca  a1d0017c00           mov eax, dword ptr [0x7c01d0]
// 005f88cf  8907                 mov dword ptr [edi], eax
// 005f88d1  8bc6                 mov eax, esi
// 005f88d3  8a10                 mov dl, byte ptr [eax]
// 005f88d5  83c001               add eax, 1
// 005f88d8  84d2                 test dl, dl
// 005f88da  75f7                 jne 0x5f88d3
// 005f88dc  2bc6                 sub eax, esi
// 005f88de  83c1ff               add ecx, -1
// 005f88e1  8a5101               mov dl, byte ptr [ecx + 1]
// 005f88e4  83c101               add ecx, 1
// 005f88e7  84d2                 test dl, dl
// 005f88e9  75f6                 jne 0x5f88e1
// 005f88eb  8bf9                 mov edi, ecx
// 005f88ed  8bc8                 mov ecx, eax
// 005f88ef  c1e902               shr ecx, 2
// 005f88f2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005f88f4  8bc8                 mov ecx, eax
// 005f88f6  83e103               and ecx, 3
// 005f88f9  f3a4                 rep movsb byte ptr es:[edi], byte ptr [esi]
// 005f88fb  5f                   pop edi
// 005f88fc  5e                   pop esi
// 005f88fd  c3                   ret 
// 005f88fe  6814327900           push 0x793214
// 005f8903  56                   push esi
// 005f8904  ff1510e87700         call dword ptr [0x77e810]
// 005f890a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f890e  83e911               sub ecx, 0x11
// 005f8911  83c408               add esp, 8
// 005f8914  3bc1                 cmp eax, ecx
// 005f8916  7602                 jbe 0x5f891a
// 005f8918  8bc1                 mov eax, ecx
// 005f891a  8b0dc4017c00         mov ecx, dword ptr [0x7c01c4]
// 005f8920  53                   push ebx
// 005f8921  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005f8925  890b                 mov dword ptr [ebx], ecx
// 005f8927  8b15c8017c00         mov edx, dword ptr [0x7c01c8]
// 005f892d  895304               mov dword ptr [ebx + 4], edx
// 005f8930  668b0dcc017c00       mov cx, word ptr [0x7c01cc]
// 005f8937  66894b08             mov word ptr [ebx + 8], cx
// 005f893b  803c3000             cmp byte ptr [eax + esi], 0
// 005f893f  7425                 je 0x5f8966
// 005f8941  50                   push eax
// 005f8942  56                   push esi
// 005f8943  53                   push ebx
// 005f8944  ff1514e87700         call dword ptr [0x77e814]
// 005f894a  8bfb                 mov edi, ebx
// 005f894c  83c40c               add esp, 0xc
// 005f894f  83c7ff               add edi, -1
// 005f8952  8a4701               mov al, byte ptr [edi + 1]
// 005f8955  83c701               add edi, 1
// 005f8958  84c0                 test al, al
// 005f895a  75f6                 jne 0x5f8952
// 005f895c  8b15d0017c00         mov edx, dword ptr [0x7c01d0]
// 005f8962  8917                 mov dword ptr [edi], edx
// 005f8964  eb2a                 jmp 0x5f8990
// 005f8966  8bc6                 mov eax, esi
// 005f8968  8a08                 mov cl, byte ptr [eax]
// 005f896a  83c001               add eax, 1
// 005f896d  84c9                 test cl, cl
// 005f896f  75f7                 jne 0x5f8968
// 005f8971  8bfb                 mov edi, ebx
// 005f8973  2bc6                 sub eax, esi
// 005f8975  83c7ff               add edi, -1
// 005f8978  8a4f01               mov cl, byte ptr [edi + 1]
// 005f897b  83c701               add edi, 1
// 005f897e  84c9                 test cl, cl
// 005f8980  75f6                 jne 0x5f8978
// 005f8982  8bc8                 mov ecx, eax
// 005f8984  c1e902               shr ecx, 2
// 005f8987  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005f8989  8bc8                 mov ecx, eax
// 005f898b  83e103               and ecx, 3
// 005f898e  f3a4                 rep movsb byte ptr es:[edi], byte ptr [esi]
// 005f8990  83c3ff               add ebx, -1
// 005f8993  8a4301               mov al, byte ptr [ebx + 1]
// 005f8996  83c301               add ebx, 1
// 005f8999  84c0                 test al, al
// 005f899b  75f6                 jne 0x5f8993
// 005f899d  66a1c0017c00         mov ax, word ptr [0x7c01c0]
// 005f89a3  668903               mov word ptr [ebx], ax
// 005f89a6  8a0dc2017c00         mov cl, byte ptr [0x7c01c2]
// 005f89ac  884b02               mov byte ptr [ebx + 2], cl
// 005f89af  5b                   pop ebx
// 005f89b0  5f                   pop edi
// 005f89b1  5e                   pop esi
// 005f89b2  c3                   ret 
// copied from an identical function in another client (function _luaO_chunkid)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: lua-5.1-dll lobject.c