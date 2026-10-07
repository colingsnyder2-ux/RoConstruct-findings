// roc 2012-06 00665220  unit: seg_00660000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00665220
//
// 00665220  81ec1c020000         sub esp, 0x21c
// 00665226  57                   push edi
// 00665227  b8ffffff7f           mov eax, 0x7fffffff
// 0066522c  b980000000           mov ecx, 0x80
// 00665231  8d7c2420             lea edi, [esp + 0x20]
// 00665235  f3ab                 rep stosd dword ptr es:[edi], eax
// 00665237  33c0                 xor eax, eax
// 00665239  39842434020000       cmp dword ptr [esp + 0x234], eax
// 00665240  89442410             mov dword ptr [esp + 0x10], eax
// 00665244  0f8e3f010000         jle 0x665389
// 0066524a  53                   push ebx
// 0066524b  55                   push ebp
// 0066524c  56                   push esi
// 0066524d  8d4900               lea ecx, [ecx]
// 00665250  8b8c2444020000       mov ecx, dword ptr [esp + 0x244]
// 00665257  0fb61c08             movzx ebx, byte ptr [eax + ecx]
// 0066525b  8b942430020000       mov edx, dword ptr [esp + 0x230]
// 00665262  8b7274               mov esi, dword ptr [edx + 0x74]
// 00665265  8b06                 mov eax, dword ptr [esi]
// 00665267  0fb60c03             movzx ecx, byte ptr [ebx + eax]
// 0066526b  8b5604               mov edx, dword ptr [esi + 4]
// 0066526e  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 00665272  8b842434020000       mov eax, dword ptr [esp + 0x234]
// 00665279  2bc1                 sub eax, ecx
// 0066527b  8b8c2438020000       mov ecx, dword ptr [esp + 0x238]
// 00665282  2bca                 sub ecx, edx
// 00665284  8d1449               lea edx, [ecx + ecx*2]
// 00665287  8b4e08               mov ecx, dword ptr [esi + 8]
// 0066528a  0fb63419             movzx esi, byte ptr [ecx + ebx]
// 0066528e  8b8c243c020000       mov ecx, dword ptr [esp + 0x23c]
// 00665295  2bce                 sub ecx, esi
// 00665297  8bf1                 mov esi, ecx
// 00665299  0faff1               imul esi, ecx
// 0066529c  8bfa                 mov edi, edx
// 0066529e  0faffa               imul edi, edx
// 006652a1  03f7                 add esi, edi
// 006652a3  03c0                 add eax, eax
// 006652a5  8bf8                 mov edi, eax
// 006652a7  0faff8               imul edi, eax
// 006652aa  8d6c5212             lea ebp, [edx + edx*2 + 0x12]
// 006652ae  8b942448020000       mov edx, dword ptr [esp + 0x248]
// 006652b5  03ed                 add ebp, ebp
// 006652b7  03f7                 add esi, edi
// 006652b9  03ed                 add ebp, ebp
// 006652bb  8d7904               lea edi, [ecx + 4]
// 006652be  03ed                 add ebp, ebp
// 006652c0  83c008               add eax, 8
// 006652c3  c1e704               shl edi, 4
// 006652c6  c1e005               shl eax, 5
// 006652c9  896c2428             mov dword ptr [esp + 0x28], ebp
// 006652cd  8d4c242c             lea ecx, [esp + 0x2c]
// 006652d1  89442410             mov dword ptr [esp + 0x10], eax
// 006652d5  c744241403000000     mov dword ptr [esp + 0x14], 3
// 006652dd  eb05                 jmp 0x6652e4
// 006652df  90                   nop 
// 006652e0  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 006652e4  8bc6                 mov eax, esi
// 006652e6  89442420             mov dword ptr [esp + 0x20], eax
// 006652ea  896c2418             mov dword ptr [esp + 0x18], ebp
// 006652ee  c744242407000000     mov dword ptr [esp + 0x24], 7
// 006652f6  3b01                 cmp eax, dword ptr [ecx]
// 006652f8  7d04                 jge 0x6652fe
// 006652fa  8901                 mov dword ptr [ecx], eax
// 006652fc  881a                 mov byte ptr [edx], bl
// 006652fe  03c7                 add eax, edi
// 00665300  3b4104               cmp eax, dword ptr [ecx + 4]
// 00665303  7d06                 jge 0x66530b
// 00665305  894104               mov dword ptr [ecx + 4], eax
// 00665308  885a01               mov byte ptr [edx + 1], bl
// 0066530b  8daf80000000         lea ebp, [edi + 0x80]
// 00665311  03c5                 add eax, ebp
// 00665313  3b4108               cmp eax, dword ptr [ecx + 8]
// 00665316  7d06                 jge 0x66531e
// 00665318  894108               mov dword ptr [ecx + 8], eax
// 0066531b  885a02               mov byte ptr [edx + 2], bl
// 0066531e  8daf00010000         lea ebp, [edi + 0x100]
// 00665324  03c5                 add eax, ebp
// 00665326  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 00665329  7d06                 jge 0x665331
// 0066532b  89410c               mov dword ptr [ecx + 0xc], eax
// 0066532e  885a03               mov byte ptr [edx + 3], bl
// 00665331  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00665335  8b442420             mov eax, dword ptr [esp + 0x20]
// 00665339  03c5                 add eax, ebp
// 0066533b  81c520010000         add ebp, 0x120
// 00665341  83c110               add ecx, 0x10
// 00665344  83c204               add edx, 4
// 00665347  836c242401           sub dword ptr [esp + 0x24], 1
// 0066534c  89442420             mov dword ptr [esp + 0x20], eax
// 00665350  896c2418             mov dword ptr [esp + 0x18], ebp
// 00665354  79a0                 jns 0x6652f6
// 00665356  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066535a  03f0                 add esi, eax
// 0066535c  0500020000           add eax, 0x200
// 00665361  836c241401           sub dword ptr [esp + 0x14], 1
// 00665366  89442410             mov dword ptr [esp + 0x10], eax
// 0066536a  0f8970ffffff         jns 0x6652e0
// 00665370  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00665374  40                   inc eax
// 00665375  3b842440020000       cmp eax, dword ptr [esp + 0x240]
// 0066537c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00665380  0f8ccafeffff         jl 0x665250
// 00665386  5e                   pop esi
// 00665387  5d                   pop ebp
// 00665388  5b                   pop ebx
// 00665389  5f                   pop edi
// 0066538a  81c41c020000         add esp, 0x21c
// 00665390  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_best_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
