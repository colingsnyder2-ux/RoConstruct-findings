// roc 2008-06 0066abc0  unit: RBX::GroupDragTool  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066abc0
//
// 0066abc0  55                   push ebp
// 0066abc1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0066abc5  56                   push esi
// 0066abc6  8bf0                 mov esi, eax
// 0066abc8  83feff               cmp esi, -1
// 0066abcb  7472                 je 0x66ac3f
// 0066abcd  53                   push ebx
// 0066abce  b280                 mov dl, 0x80
// 0066abd0  57                   push edi
// 0066abd1  8b4500               mov eax, dword ptr [ebp]
// 0066abd4  8b400c               mov eax, dword ptr [eax + 0xc]
// 0066abd7  8d3cb500000000       lea edi, [esi*4]
// 0066abde  03c7                 add eax, edi
// 0066abe0  83fe01               cmp esi, 1
// 0066abe3  7c11                 jl 0x66abf6
// 0066abe5  8b58fc               mov ebx, dword ptr [eax - 4]
// 0066abe8  8d48fc               lea ecx, [eax - 4]
// 0066abeb  83e33f               and ebx, 0x3f
// 0066abee  849344c98400         test byte ptr [ebx + 0x84c944], dl
// 0066abf4  7502                 jne 0x66abf8
// 0066abf6  8bc8                 mov ecx, eax
// 0066abf8  8b01                 mov eax, dword ptr [ecx]
// 0066abfa  8bd8                 mov ebx, eax
// 0066abfc  83e33f               and ebx, 0x3f
// 0066abff  80fb1b               cmp bl, 0x1b
// 0066ac02  751a                 jne 0x66ac1e
// 0066ac04  8bd8                 mov ebx, eax
// 0066ac06  81e3ffffb5ff         and ebx, 0xffb5ffff
// 0066ac0c  81cb00003400         or ebx, 0x340000
// 0066ac12  c1eb11               shr ebx, 0x11
// 0066ac15  2500c07f00           and eax, 0x7fc000
// 0066ac1a  0bd8                 or ebx, eax
// 0066ac1c  8919                 mov dword ptr [ecx], ebx
// 0066ac1e  8b4d00               mov ecx, dword ptr [ebp]
// 0066ac21  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0066ac24  8b0407               mov eax, dword ptr [edi + eax]
// 0066ac27  c1e80e               shr eax, 0xe
// 0066ac2a  2dffff0100           sub eax, 0x1ffff
// 0066ac2f  83f8ff               cmp eax, -1
// 0066ac32  7409                 je 0x66ac3d
// 0066ac34  8d740601             lea esi, [esi + eax + 1]
// 0066ac38  83feff               cmp esi, -1
// 0066ac3b  7594                 jne 0x66abd1
// 0066ac3d  5f                   pop edi
// 0066ac3e  5b                   pop ebx
// 0066ac3f  5e                   pop esi
// 0066ac40  5d                   pop ebp
// 0066ac41  c3                   ret 
// library lua-5.1.4/lcode.c (function _removevalues)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
