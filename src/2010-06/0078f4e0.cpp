// from server: 100% by auto
// roc 2010-06 0078f4e0  unit: RBX::GroupDragTool  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f4e0
//
// 0078f4e0  55                   push ebp
// 0078f4e1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0078f4e5  56                   push esi
// 0078f4e6  8bf0                 mov esi, eax
// 0078f4e8  83feff               cmp esi, -1
// 0078f4eb  7472                 je 0x78f55f
// 0078f4ed  53                   push ebx
// 0078f4ee  b280                 mov dl, 0x80
// 0078f4f0  57                   push edi
// 0078f4f1  8b4500               mov eax, dword ptr [ebp]
// 0078f4f4  8b400c               mov eax, dword ptr [eax + 0xc]
// 0078f4f7  8d3cb500000000       lea edi, [esi*4]
// 0078f4fe  03c7                 add eax, edi
// 0078f500  83fe01               cmp esi, 1
// 0078f503  7c11                 jl 0x78f516
// 0078f505  8b58fc               mov ebx, dword ptr [eax - 4]
// 0078f508  8d48fc               lea ecx, [eax - 4]
// 0078f50b  83e33f               and ebx, 0x3f
// 0078f50e  8493e434a500         test byte ptr [ebx + 0xa534e4], dl
// 0078f514  7502                 jne 0x78f518
// 0078f516  8bc8                 mov ecx, eax
// 0078f518  8b01                 mov eax, dword ptr [ecx]
// 0078f51a  8bd8                 mov ebx, eax
// 0078f51c  83e33f               and ebx, 0x3f
// 0078f51f  80fb1b               cmp bl, 0x1b
// 0078f522  751a                 jne 0x78f53e
// 0078f524  8bd8                 mov ebx, eax
// 0078f526  81e3ffffb5ff         and ebx, 0xffb5ffff
// 0078f52c  81cb00003400         or ebx, 0x340000
// 0078f532  c1eb11               shr ebx, 0x11
// 0078f535  2500c07f00           and eax, 0x7fc000
// 0078f53a  0bd8                 or ebx, eax
// 0078f53c  8919                 mov dword ptr [ecx], ebx
// 0078f53e  8b4d00               mov ecx, dword ptr [ebp]
// 0078f541  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0078f544  8b0407               mov eax, dword ptr [edi + eax]
// 0078f547  c1e80e               shr eax, 0xe
// 0078f54a  2dffff0100           sub eax, 0x1ffff
// 0078f54f  83f8ff               cmp eax, -1
// 0078f552  7409                 je 0x78f55d
// 0078f554  8d740601             lea esi, [esi + eax + 1]
// 0078f558  83feff               cmp esi, -1
// 0078f55b  7594                 jne 0x78f4f1
// 0078f55d  5f                   pop edi
// 0078f55e  5b                   pop ebx
// 0078f55f  5e                   pop esi
// 0078f560  5d                   pop ebp
// 0078f561  c3                   ret 
// library lua-5.1.4/lcode.c (function _removevalues)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
