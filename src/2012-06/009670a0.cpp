// roc 2012-06 009670a0  unit: RBX::CellContact  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009670a0
//
// 009670a0  55                   push ebp
// 009670a1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 009670a5  56                   push esi
// 009670a6  8bf0                 mov esi, eax
// 009670a8  83feff               cmp esi, -1
// 009670ab  7472                 je 0x96711f
// 009670ad  53                   push ebx
// 009670ae  b280                 mov dl, 0x80
// 009670b0  57                   push edi
// 009670b1  8b4500               mov eax, dword ptr [ebp]
// 009670b4  8b400c               mov eax, dword ptr [eax + 0xc]
// 009670b7  8d3cb500000000       lea edi, [esi*4]
// 009670be  03c7                 add eax, edi
// 009670c0  83fe01               cmp esi, 1
// 009670c3  7c11                 jl 0x9670d6
// 009670c5  8b58fc               mov ebx, dword ptr [eax - 4]
// 009670c8  8d48fc               lea ecx, [eax - 4]
// 009670cb  83e33f               and ebx, 0x3f
// 009670ce  8493c4f8bf00         test byte ptr [ebx + 0xbff8c4], dl
// 009670d4  7502                 jne 0x9670d8
// 009670d6  8bc8                 mov ecx, eax
// 009670d8  8b01                 mov eax, dword ptr [ecx]
// 009670da  8bd8                 mov ebx, eax
// 009670dc  83e33f               and ebx, 0x3f
// 009670df  80fb1b               cmp bl, 0x1b
// 009670e2  751a                 jne 0x9670fe
// 009670e4  8bd8                 mov ebx, eax
// 009670e6  81e3ffffb5ff         and ebx, 0xffb5ffff
// 009670ec  81cb00003400         or ebx, 0x340000
// 009670f2  c1eb11               shr ebx, 0x11
// 009670f5  2500c07f00           and eax, 0x7fc000
// 009670fa  0bd8                 or ebx, eax
// 009670fc  8919                 mov dword ptr [ecx], ebx
// 009670fe  8b4d00               mov ecx, dword ptr [ebp]
// 00967101  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00967104  8b0407               mov eax, dword ptr [edi + eax]
// 00967107  c1e80e               shr eax, 0xe
// 0096710a  2dffff0100           sub eax, 0x1ffff
// 0096710f  83f8ff               cmp eax, -1
// 00967112  7409                 je 0x96711d
// 00967114  8d740601             lea esi, [esi + eax + 1]
// 00967118  83feff               cmp esi, -1
// 0096711b  7594                 jne 0x9670b1
// 0096711d  5f                   pop edi
// 0096711e  5b                   pop ebx
// 0096711f  5e                   pop esi
// 00967120  5d                   pop ebp
// 00967121  c3                   ret 
// library lua-5.1.4/lcode.c (function _removevalues)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
