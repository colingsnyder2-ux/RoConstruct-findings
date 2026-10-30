// from server: 100% by auto
// roc 2009-06 0059fcd0  unit: seg_00590000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059fcd0
//
// 0059fcd0  81ec1c020000         sub esp, 0x21c
// 0059fcd6  57                   push edi
// 0059fcd7  b8ffffff7f           mov eax, 0x7fffffff
// 0059fcdc  b980000000           mov ecx, 0x80
// 0059fce1  8d7c2420             lea edi, [esp + 0x20]
// 0059fce5  f3ab                 rep stosd dword ptr es:[edi], eax
// 0059fce7  33c0                 xor eax, eax
// 0059fce9  39842434020000       cmp dword ptr [esp + 0x234], eax
// 0059fcf0  89442410             mov dword ptr [esp + 0x10], eax
// 0059fcf4  0f8e3f010000         jle 0x59fe39
// 0059fcfa  53                   push ebx
// 0059fcfb  55                   push ebp
// 0059fcfc  56                   push esi
// 0059fcfd  8d4900               lea ecx, [ecx]
// 0059fd00  8b8c2444020000       mov ecx, dword ptr [esp + 0x244]
// 0059fd07  0fb61c08             movzx ebx, byte ptr [eax + ecx]
// 0059fd0b  8b942430020000       mov edx, dword ptr [esp + 0x230]
// 0059fd12  8b7274               mov esi, dword ptr [edx + 0x74]
// 0059fd15  8b06                 mov eax, dword ptr [esi]
// 0059fd17  0fb60c03             movzx ecx, byte ptr [ebx + eax]
// 0059fd1b  8b5604               mov edx, dword ptr [esi + 4]
// 0059fd1e  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 0059fd22  8b842434020000       mov eax, dword ptr [esp + 0x234]
// 0059fd29  2bc1                 sub eax, ecx
// 0059fd2b  8b8c2438020000       mov ecx, dword ptr [esp + 0x238]
// 0059fd32  2bca                 sub ecx, edx
// 0059fd34  8d1449               lea edx, [ecx + ecx*2]
// 0059fd37  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059fd3a  0fb63419             movzx esi, byte ptr [ecx + ebx]
// 0059fd3e  8b8c243c020000       mov ecx, dword ptr [esp + 0x23c]
// 0059fd45  2bce                 sub ecx, esi
// 0059fd47  8bf1                 mov esi, ecx
// 0059fd49  0faff1               imul esi, ecx
// 0059fd4c  8bfa                 mov edi, edx
// 0059fd4e  0faffa               imul edi, edx
// 0059fd51  03f7                 add esi, edi
// 0059fd53  03c0                 add eax, eax
// 0059fd55  8bf8                 mov edi, eax
// 0059fd57  0faff8               imul edi, eax
// 0059fd5a  8d6c5212             lea ebp, [edx + edx*2 + 0x12]
// 0059fd5e  8b942448020000       mov edx, dword ptr [esp + 0x248]
// 0059fd65  03ed                 add ebp, ebp
// 0059fd67  03f7                 add esi, edi
// 0059fd69  03ed                 add ebp, ebp
// 0059fd6b  8d7904               lea edi, [ecx + 4]
// 0059fd6e  03ed                 add ebp, ebp
// 0059fd70  83c008               add eax, 8
// 0059fd73  c1e704               shl edi, 4
// 0059fd76  c1e005               shl eax, 5
// 0059fd79  896c2428             mov dword ptr [esp + 0x28], ebp
// 0059fd7d  8d4c242c             lea ecx, [esp + 0x2c]
// 0059fd81  89442410             mov dword ptr [esp + 0x10], eax
// 0059fd85  c744241403000000     mov dword ptr [esp + 0x14], 3
// 0059fd8d  eb05                 jmp 0x59fd94
// 0059fd8f  90                   nop 
// 0059fd90  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0059fd94  8bc6                 mov eax, esi
// 0059fd96  89442420             mov dword ptr [esp + 0x20], eax
// 0059fd9a  896c2418             mov dword ptr [esp + 0x18], ebp
// 0059fd9e  c744242407000000     mov dword ptr [esp + 0x24], 7
// 0059fda6  3b01                 cmp eax, dword ptr [ecx]
// 0059fda8  7d04                 jge 0x59fdae
// 0059fdaa  8901                 mov dword ptr [ecx], eax
// 0059fdac  881a                 mov byte ptr [edx], bl
// 0059fdae  03c7                 add eax, edi
// 0059fdb0  3b4104               cmp eax, dword ptr [ecx + 4]
// 0059fdb3  7d06                 jge 0x59fdbb
// 0059fdb5  894104               mov dword ptr [ecx + 4], eax
// 0059fdb8  885a01               mov byte ptr [edx + 1], bl
// 0059fdbb  8daf80000000         lea ebp, [edi + 0x80]
// 0059fdc1  03c5                 add eax, ebp
// 0059fdc3  3b4108               cmp eax, dword ptr [ecx + 8]
// 0059fdc6  7d06                 jge 0x59fdce
// 0059fdc8  894108               mov dword ptr [ecx + 8], eax
// 0059fdcb  885a02               mov byte ptr [edx + 2], bl
// 0059fdce  8daf00010000         lea ebp, [edi + 0x100]
// 0059fdd4  03c5                 add eax, ebp
// 0059fdd6  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 0059fdd9  7d06                 jge 0x59fde1
// 0059fddb  89410c               mov dword ptr [ecx + 0xc], eax
// 0059fdde  885a03               mov byte ptr [edx + 3], bl
// 0059fde1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0059fde5  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059fde9  03c5                 add eax, ebp
// 0059fdeb  81c520010000         add ebp, 0x120
// 0059fdf1  83c110               add ecx, 0x10
// 0059fdf4  83c204               add edx, 4
// 0059fdf7  836c242401           sub dword ptr [esp + 0x24], 1
// 0059fdfc  89442420             mov dword ptr [esp + 0x20], eax
// 0059fe00  896c2418             mov dword ptr [esp + 0x18], ebp
// 0059fe04  79a0                 jns 0x59fda6
// 0059fe06  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059fe0a  03f0                 add esi, eax
// 0059fe0c  0500020000           add eax, 0x200
// 0059fe11  836c241401           sub dword ptr [esp + 0x14], 1
// 0059fe16  89442410             mov dword ptr [esp + 0x10], eax
// 0059fe1a  0f8970ffffff         jns 0x59fd90
// 0059fe20  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059fe24  40                   inc eax
// 0059fe25  3b842440020000       cmp eax, dword ptr [esp + 0x240]
// 0059fe2c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0059fe30  0f8ccafeffff         jl 0x59fd00
// 0059fe36  5e                   pop esi
// 0059fe37  5d                   pop ebp
// 0059fe38  5b                   pop ebx
// 0059fe39  5f                   pop edi
// 0059fe3a  81c41c020000         add esp, 0x21c
// 0059fe40  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_best_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
