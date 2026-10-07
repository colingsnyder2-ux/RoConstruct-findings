// roc 2011-06 00781b00  unit: lua_exception  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00781b00
//
// 00781b00  51                   push ecx
// 00781b01  53                   push ebx
// 00781b02  57                   push edi
// 00781b03  8d442408             lea eax, [esp + 8]
// 00781b07  50                   push eax
// 00781b08  51                   push ecx
// 00781b09  52                   push edx
// 00781b0a  e88126feff           call 0x764190
// 00781b0f  8d9e0c020000         lea ebx, [esi + 0x20c]
// 00781b15  83c40c               add esp, 0xc
// 00781b18  8bf8                 mov edi, eax
// 00781b1a  391e                 cmp dword ptr [esi], ebx
// 00781b1c  7209                 jb 0x781b27
// 00781b1e  56                   push esi
// 00781b1f  e8cc1efeff           call 0x7639f0
// 00781b24  83c404               add esp, 4
// 00781b27  8b06                 mov eax, dword ptr [esi]
// 00781b29  c60022               mov byte ptr [eax], 0x22
// 00781b2c  ff06                 inc dword ptr [esi]
// 00781b2e  837c240800           cmp dword ptr [esp + 8], 0
// 00781b33  0f848f000000         je 0x781bc8
// 00781b39  8da42400000000       lea esp, [esp]
// 00781b40  ff4c2408             dec dword ptr [esp + 8]
// 00781b44  0fbe07               movsx eax, byte ptr [edi]
// 00781b47  83f85c               cmp eax, 0x5c
// 00781b4a  775b                 ja 0x781ba7
// 00781b4c  0fb688f41b7800       movzx ecx, byte ptr [eax + 0x781bf4]
// 00781b53  ff248de41b7800       jmp dword ptr [ecx*4 + 0x781be4]
// 00781b5a  391e                 cmp dword ptr [esi], ebx
// 00781b5c  7209                 jb 0x781b67
// 00781b5e  56                   push esi
// 00781b5f  e88c1efeff           call 0x7639f0
// 00781b64  83c404               add esp, 4
// 00781b67  8b16                 mov edx, dword ptr [esi]
// 00781b69  c6025c               mov byte ptr [edx], 0x5c
// 00781b6c  ff06                 inc dword ptr [esi]
// 00781b6e  391e                 cmp dword ptr [esi], ebx
// 00781b70  7209                 jb 0x781b7b
// 00781b72  56                   push esi
// 00781b73  e8781efeff           call 0x7639f0
// 00781b78  83c404               add esp, 4
// 00781b7b  8b06                 mov eax, dword ptr [esi]
// 00781b7d  8a0f                 mov cl, byte ptr [edi]
// 00781b7f  8808                 mov byte ptr [eax], cl
// 00781b81  eb37                 jmp 0x781bba
// 00781b83  6a02                 push 2
// 00781b85  68c8ffa700           push 0xa7ffc8
// 00781b8a  56                   push esi
// 00781b8b  e8a01efeff           call 0x763a30
// 00781b90  83c40c               add esp, 0xc
// 00781b93  eb27                 jmp 0x781bbc
// 00781b95  6a04                 push 4
// 00781b97  686c7eab00           push 0xab7e6c
// 00781b9c  56                   push esi
// 00781b9d  e88e1efeff           call 0x763a30
// 00781ba2  83c40c               add esp, 0xc
// 00781ba5  eb15                 jmp 0x781bbc
// 00781ba7  391e                 cmp dword ptr [esi], ebx
// 00781ba9  7209                 jb 0x781bb4
// 00781bab  56                   push esi
// 00781bac  e83f1efeff           call 0x7639f0
// 00781bb1  83c404               add esp, 4
// 00781bb4  8b16                 mov edx, dword ptr [esi]
// 00781bb6  8a07                 mov al, byte ptr [edi]
// 00781bb8  8802                 mov byte ptr [edx], al
// 00781bba  ff06                 inc dword ptr [esi]
// 00781bbc  47                   inc edi
// 00781bbd  837c240800           cmp dword ptr [esp + 8], 0
// 00781bc2  0f8578ffffff         jne 0x781b40
// 00781bc8  ff4c2408             dec dword ptr [esp + 8]
// 00781bcc  391e                 cmp dword ptr [esi], ebx
// 00781bce  5f                   pop edi
// 00781bcf  5b                   pop ebx
// 00781bd0  7209                 jb 0x781bdb
// 00781bd2  56                   push esi
// 00781bd3  e8181efeff           call 0x7639f0
// 00781bd8  83c404               add esp, 4
// 00781bdb  8b0e                 mov ecx, dword ptr [esi]
// 00781bdd  c60122               mov byte ptr [ecx], 0x22
// 00781be0  ff06                 inc dword ptr [esi]
// 00781be2  59                   pop ecx
// 00781be3  c3                   ret 
// 00781be4  95                   xchg ebp, eax
// 00781be5  1b7800               sbb edi, dword ptr [eax]
// 00781be8  5a                   pop edx
// 00781be9  1b7800               sbb edi, dword ptr [eax]
// 00781bec  831b78               sbb dword ptr [ebx], 0x78
// 00781bef  00a71b780000         add byte ptr [edi + 0x781b], ah
// 00781bf5  0303                 add eax, dword ptr [ebx]
// 00781bf7  0303                 add eax, dword ptr [ebx]
// 00781bf9  0303                 add eax, dword ptr [ebx]
// 00781bfb  0303                 add eax, dword ptr [ebx]
// 00781bfd  0301                 add eax, dword ptr [ecx]
// 00781bff  0303                 add eax, dword ptr [ebx]
// 00781c01  0203                 add al, byte ptr [ebx]
// 00781c03  0303                 add eax, dword ptr [ebx]
// 00781c05  0303                 add eax, dword ptr [ebx]
// 00781c07  0303                 add eax, dword ptr [ebx]
// 00781c09  0303                 add eax, dword ptr [ebx]
// 00781c0b  0303                 add eax, dword ptr [ebx]
// 00781c0d  0303                 add eax, dword ptr [ebx]
// 00781c0f  0303                 add eax, dword ptr [ebx]
// 00781c11  0303                 add eax, dword ptr [ebx]
// 00781c13  0303                 add eax, dword ptr [ebx]
// 00781c15  0301                 add eax, dword ptr [ecx]
// 00781c17  0303                 add eax, dword ptr [ebx]
// 00781c19  0303                 add eax, dword ptr [ebx]
// 00781c1b  0303                 add eax, dword ptr [ebx]
// 00781c1d  0303                 add eax, dword ptr [ebx]
// 00781c1f  0303                 add eax, dword ptr [ebx]
// 00781c21  0303                 add eax, dword ptr [ebx]
// 00781c23  0303                 add eax, dword ptr [ebx]
// 00781c25  0303                 add eax, dword ptr [ebx]
// 00781c27  0303                 add eax, dword ptr [ebx]
// 00781c29  0303                 add eax, dword ptr [ebx]
// 00781c2b  0303                 add eax, dword ptr [ebx]
// 00781c2d  0303                 add eax, dword ptr [ebx]
// 00781c2f  0303                 add eax, dword ptr [ebx]
// 00781c31  0303                 add eax, dword ptr [ebx]
// 00781c33  0303                 add eax, dword ptr [ebx]
// 00781c35  0303                 add eax, dword ptr [ebx]
// 00781c37  0303                 add eax, dword ptr [ebx]
// 00781c39  0303                 add eax, dword ptr [ebx]
// 00781c3b  0303                 add eax, dword ptr [ebx]
// 00781c3d  0303                 add eax, dword ptr [ebx]
// 00781c3f  0303                 add eax, dword ptr [ebx]
// 00781c41  0303                 add eax, dword ptr [ebx]
// 00781c43  0303                 add eax, dword ptr [ebx]
// 00781c45  0303                 add eax, dword ptr [ebx]
// 00781c47  0303                 add eax, dword ptr [ebx]
// 00781c49  0303                 add eax, dword ptr [ebx]
// 00781c4b  0303                 add eax, dword ptr [ebx]
// 00781c4d  0303                 add eax, dword ptr [ebx]
// 00781c4f  0301                 add eax, dword ptr [ecx]
// library lua-5.1.4/lstrlib.c (function _addquoted)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
