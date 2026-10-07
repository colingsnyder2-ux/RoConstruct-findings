// roc 2009-06 006f9b60  unit: RBX::GroupDragTool  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9b60
//
// 006f9b60  55                   push ebp
// 006f9b61  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006f9b65  56                   push esi
// 006f9b66  8bf0                 mov esi, eax
// 006f9b68  83feff               cmp esi, -1
// 006f9b6b  7472                 je 0x6f9bdf
// 006f9b6d  53                   push ebx
// 006f9b6e  b280                 mov dl, 0x80
// 006f9b70  57                   push edi
// 006f9b71  8b4500               mov eax, dword ptr [ebp]
// 006f9b74  8b400c               mov eax, dword ptr [eax + 0xc]
// 006f9b77  8d3cb500000000       lea edi, [esi*4]
// 006f9b7e  03c7                 add eax, edi
// 006f9b80  83fe01               cmp esi, 1
// 006f9b83  7c11                 jl 0x6f9b96
// 006f9b85  8b58fc               mov ebx, dword ptr [eax - 4]
// 006f9b88  8d48fc               lea ecx, [eax - 4]
// 006f9b8b  83e33f               and ebx, 0x3f
// 006f9b8e  849374e48e00         test byte ptr [ebx + 0x8ee474], dl
// 006f9b94  7502                 jne 0x6f9b98
// 006f9b96  8bc8                 mov ecx, eax
// 006f9b98  8b01                 mov eax, dword ptr [ecx]
// 006f9b9a  8bd8                 mov ebx, eax
// 006f9b9c  83e33f               and ebx, 0x3f
// 006f9b9f  80fb1b               cmp bl, 0x1b
// 006f9ba2  751a                 jne 0x6f9bbe
// 006f9ba4  8bd8                 mov ebx, eax
// 006f9ba6  81e3ffffb5ff         and ebx, 0xffb5ffff
// 006f9bac  81cb00003400         or ebx, 0x340000
// 006f9bb2  c1eb11               shr ebx, 0x11
// 006f9bb5  2500c07f00           and eax, 0x7fc000
// 006f9bba  0bd8                 or ebx, eax
// 006f9bbc  8919                 mov dword ptr [ecx], ebx
// 006f9bbe  8b4d00               mov ecx, dword ptr [ebp]
// 006f9bc1  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006f9bc4  8b0407               mov eax, dword ptr [edi + eax]
// 006f9bc7  c1e80e               shr eax, 0xe
// 006f9bca  2dffff0100           sub eax, 0x1ffff
// 006f9bcf  83f8ff               cmp eax, -1
// 006f9bd2  7409                 je 0x6f9bdd
// 006f9bd4  8d740601             lea esi, [esi + eax + 1]
// 006f9bd8  83feff               cmp esi, -1
// 006f9bdb  7594                 jne 0x6f9b71
// 006f9bdd  5f                   pop edi
// 006f9bde  5b                   pop ebx
// 006f9bdf  5e                   pop esi
// 006f9be0  5d                   pop ebp
// 006f9be1  c3                   ret 
// library lua-5.1.4/lcode.c (function _removevalues)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
