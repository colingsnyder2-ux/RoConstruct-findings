// from server: 100% by auto
// roc 2010-06 00736b00  unit: seg_00730000  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00736b00
//
// 00736b00  51                   push ecx
// 00736b01  53                   push ebx
// 00736b02  57                   push edi
// 00736b03  8d442408             lea eax, [esp + 8]
// 00736b07  50                   push eax
// 00736b08  51                   push ecx
// 00736b09  52                   push edx
// 00736b0a  e811c4feff           call 0x722f20
// 00736b0f  8d9e0c020000         lea ebx, [esi + 0x20c]
// 00736b15  83c40c               add esp, 0xc
// 00736b18  8bf8                 mov edi, eax
// 00736b1a  391e                 cmp dword ptr [esi], ebx
// 00736b1c  7209                 jb 0x736b27
// 00736b1e  56                   push esi
// 00736b1f  e85cbcfeff           call 0x722780
// 00736b24  83c404               add esp, 4
// 00736b27  8b06                 mov eax, dword ptr [esi]
// 00736b29  c60022               mov byte ptr [eax], 0x22
// 00736b2c  ff06                 inc dword ptr [esi]
// 00736b2e  837c240800           cmp dword ptr [esp + 8], 0
// 00736b33  0f848f000000         je 0x736bc8
// 00736b39  8da42400000000       lea esp, [esp]
// 00736b40  ff4c2408             dec dword ptr [esp + 8]
// 00736b44  0fbe07               movsx eax, byte ptr [edi]
// 00736b47  83f85c               cmp eax, 0x5c
// 00736b4a  775b                 ja 0x736ba7
// 00736b4c  0fb688f46b7300       movzx ecx, byte ptr [eax + 0x736bf4]
// 00736b53  ff248de46b7300       jmp dword ptr [ecx*4 + 0x736be4]
// 00736b5a  391e                 cmp dword ptr [esi], ebx
// 00736b5c  7209                 jb 0x736b67
// 00736b5e  56                   push esi
// 00736b5f  e81cbcfeff           call 0x722780
// 00736b64  83c404               add esp, 4
// 00736b67  8b16                 mov edx, dword ptr [esi]
// 00736b69  c6025c               mov byte ptr [edx], 0x5c
// 00736b6c  ff06                 inc dword ptr [esi]
// 00736b6e  391e                 cmp dword ptr [esi], ebx
// 00736b70  7209                 jb 0x736b7b
// 00736b72  56                   push esi
// 00736b73  e808bcfeff           call 0x722780
// 00736b78  83c404               add esp, 4
// 00736b7b  8b06                 mov eax, dword ptr [esi]
// 00736b7d  8a0f                 mov cl, byte ptr [edi]
// 00736b7f  8808                 mov byte ptr [eax], cl
// 00736b81  eb37                 jmp 0x736bba
// 00736b83  6a02                 push 2
// 00736b85  68ac08a200           push 0xa208ac
// 00736b8a  56                   push esi
// 00736b8b  e830bcfeff           call 0x7227c0
// 00736b90  83c40c               add esp, 0xc
// 00736b93  eb27                 jmp 0x736bbc
// 00736b95  6a04                 push 4
// 00736b97  685ce4a400           push 0xa4e45c
// 00736b9c  56                   push esi
// 00736b9d  e81ebcfeff           call 0x7227c0
// 00736ba2  83c40c               add esp, 0xc
// 00736ba5  eb15                 jmp 0x736bbc
// 00736ba7  391e                 cmp dword ptr [esi], ebx
// 00736ba9  7209                 jb 0x736bb4
// 00736bab  56                   push esi
// 00736bac  e8cfbbfeff           call 0x722780
// 00736bb1  83c404               add esp, 4
// 00736bb4  8b16                 mov edx, dword ptr [esi]
// 00736bb6  8a07                 mov al, byte ptr [edi]
// 00736bb8  8802                 mov byte ptr [edx], al
// 00736bba  ff06                 inc dword ptr [esi]
// 00736bbc  47                   inc edi
// 00736bbd  837c240800           cmp dword ptr [esp + 8], 0
// 00736bc2  0f8578ffffff         jne 0x736b40
// 00736bc8  ff4c2408             dec dword ptr [esp + 8]
// 00736bcc  391e                 cmp dword ptr [esi], ebx
// 00736bce  5f                   pop edi
// 00736bcf  5b                   pop ebx
// 00736bd0  7209                 jb 0x736bdb
// 00736bd2  56                   push esi
// 00736bd3  e8a8bbfeff           call 0x722780
// 00736bd8  83c404               add esp, 4
// 00736bdb  8b0e                 mov ecx, dword ptr [esi]
// 00736bdd  c60122               mov byte ptr [ecx], 0x22
// 00736be0  ff06                 inc dword ptr [esi]
// 00736be2  59                   pop ecx
// 00736be3  c3                   ret 
// 00736be4  95                   xchg ebp, eax
// 00736be5  6b73005a             imul esi, dword ptr [ebx], 0x5a
// 00736be9  6b730083             imul esi, dword ptr [ebx], -0x7d
// 00736bed  6b7300a7             imul esi, dword ptr [ebx], -0x59
// 00736bf1  6b730000             imul esi, dword ptr [ebx], 0
// 00736bf5  0303                 add eax, dword ptr [ebx]
// 00736bf7  0303                 add eax, dword ptr [ebx]
// 00736bf9  0303                 add eax, dword ptr [ebx]
// 00736bfb  0303                 add eax, dword ptr [ebx]
// 00736bfd  0301                 add eax, dword ptr [ecx]
// 00736bff  0303                 add eax, dword ptr [ebx]
// 00736c01  0203                 add al, byte ptr [ebx]
// 00736c03  0303                 add eax, dword ptr [ebx]
// 00736c05  0303                 add eax, dword ptr [ebx]
// 00736c07  0303                 add eax, dword ptr [ebx]
// 00736c09  0303                 add eax, dword ptr [ebx]
// 00736c0b  0303                 add eax, dword ptr [ebx]
// 00736c0d  0303                 add eax, dword ptr [ebx]
// 00736c0f  0303                 add eax, dword ptr [ebx]
// 00736c11  0303                 add eax, dword ptr [ebx]
// 00736c13  0303                 add eax, dword ptr [ebx]
// 00736c15  0301                 add eax, dword ptr [ecx]
// 00736c17  0303                 add eax, dword ptr [ebx]
// 00736c19  0303                 add eax, dword ptr [ebx]
// 00736c1b  0303                 add eax, dword ptr [ebx]
// 00736c1d  0303                 add eax, dword ptr [ebx]
// 00736c1f  0303                 add eax, dword ptr [ebx]
// 00736c21  0303                 add eax, dword ptr [ebx]
// 00736c23  0303                 add eax, dword ptr [ebx]
// 00736c25  0303                 add eax, dword ptr [ebx]
// 00736c27  0303                 add eax, dword ptr [ebx]
// 00736c29  0303                 add eax, dword ptr [ebx]
// 00736c2b  0303                 add eax, dword ptr [ebx]
// 00736c2d  0303                 add eax, dword ptr [ebx]
// 00736c2f  0303                 add eax, dword ptr [ebx]
// 00736c31  0303                 add eax, dword ptr [ebx]
// 00736c33  0303                 add eax, dword ptr [ebx]
// 00736c35  0303                 add eax, dword ptr [ebx]
// 00736c37  0303                 add eax, dword ptr [ebx]
// 00736c39  0303                 add eax, dword ptr [ebx]
// 00736c3b  0303                 add eax, dword ptr [ebx]
// 00736c3d  0303                 add eax, dword ptr [ebx]
// 00736c3f  0303                 add eax, dword ptr [ebx]
// 00736c41  0303                 add eax, dword ptr [ebx]
// 00736c43  0303                 add eax, dword ptr [ebx]
// 00736c45  0303                 add eax, dword ptr [ebx]
// 00736c47  0303                 add eax, dword ptr [ebx]
// 00736c49  0303                 add eax, dword ptr [ebx]
// 00736c4b  0303                 add eax, dword ptr [ebx]
// 00736c4d  0303                 add eax, dword ptr [ebx]
// 00736c4f  0301                 add eax, dword ptr [ecx]
// library lua-5.1.4/lstrlib.c (function _addquoted)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
