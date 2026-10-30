// roc 2009-12 00621d00  unit: seg_00620000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00621d00
//
// 00621d00  81ec1c020000         sub esp, 0x21c
// 00621d06  57                   push edi
// 00621d07  b8ffffff7f           mov eax, 0x7fffffff
// 00621d0c  b980000000           mov ecx, 0x80
// 00621d11  8d7c2420             lea edi, [esp + 0x20]
// 00621d15  f3ab                 rep stosd dword ptr es:[edi], eax
// 00621d17  33c0                 xor eax, eax
// 00621d19  39842434020000       cmp dword ptr [esp + 0x234], eax
// 00621d20  89442410             mov dword ptr [esp + 0x10], eax
// 00621d24  0f8e3f010000         jle 0x621e69
// 00621d2a  53                   push ebx
// 00621d2b  55                   push ebp
// 00621d2c  56                   push esi
// 00621d2d  8d4900               lea ecx, [ecx]
// 00621d30  8b8c2444020000       mov ecx, dword ptr [esp + 0x244]
// 00621d37  0fb61c08             movzx ebx, byte ptr [eax + ecx]
// 00621d3b  8b942430020000       mov edx, dword ptr [esp + 0x230]
// 00621d42  8b7274               mov esi, dword ptr [edx + 0x74]
// 00621d45  8b06                 mov eax, dword ptr [esi]
// 00621d47  0fb60c03             movzx ecx, byte ptr [ebx + eax]
// 00621d4b  8b5604               mov edx, dword ptr [esi + 4]
// 00621d4e  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 00621d52  8b842434020000       mov eax, dword ptr [esp + 0x234]
// 00621d59  2bc1                 sub eax, ecx
// 00621d5b  8b8c2438020000       mov ecx, dword ptr [esp + 0x238]
// 00621d62  2bca                 sub ecx, edx
// 00621d64  8d1449               lea edx, [ecx + ecx*2]
// 00621d67  8b4e08               mov ecx, dword ptr [esi + 8]
// 00621d6a  0fb63419             movzx esi, byte ptr [ecx + ebx]
// 00621d6e  8b8c243c020000       mov ecx, dword ptr [esp + 0x23c]
// 00621d75  2bce                 sub ecx, esi
// 00621d77  8bf1                 mov esi, ecx
// 00621d79  0faff1               imul esi, ecx
// 00621d7c  8bfa                 mov edi, edx
// 00621d7e  0faffa               imul edi, edx
// 00621d81  03f7                 add esi, edi
// 00621d83  03c0                 add eax, eax
// 00621d85  8bf8                 mov edi, eax
// 00621d87  0faff8               imul edi, eax
// 00621d8a  8d6c5212             lea ebp, [edx + edx*2 + 0x12]
// 00621d8e  8b942448020000       mov edx, dword ptr [esp + 0x248]
// 00621d95  03ed                 add ebp, ebp
// 00621d97  03f7                 add esi, edi
// 00621d99  03ed                 add ebp, ebp
// 00621d9b  8d7904               lea edi, [ecx + 4]
// 00621d9e  03ed                 add ebp, ebp
// 00621da0  83c008               add eax, 8
// 00621da3  c1e704               shl edi, 4
// 00621da6  c1e005               shl eax, 5
// 00621da9  896c2428             mov dword ptr [esp + 0x28], ebp
// 00621dad  8d4c242c             lea ecx, [esp + 0x2c]
// 00621db1  89442410             mov dword ptr [esp + 0x10], eax
// 00621db5  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00621dbd  eb05                 jmp 0x621dc4
// 00621dbf  90                   nop 
// 00621dc0  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00621dc4  8bc6                 mov eax, esi
// 00621dc6  89442420             mov dword ptr [esp + 0x20], eax
// 00621dca  896c2418             mov dword ptr [esp + 0x18], ebp
// 00621dce  c744242407000000     mov dword ptr [esp + 0x24], 7
// 00621dd6  3b01                 cmp eax, dword ptr [ecx]
// 00621dd8  7d04                 jge 0x621dde
// 00621dda  8901                 mov dword ptr [ecx], eax
// 00621ddc  881a                 mov byte ptr [edx], bl
// 00621dde  03c7                 add eax, edi
// 00621de0  3b4104               cmp eax, dword ptr [ecx + 4]
// 00621de3  7d06                 jge 0x621deb
// 00621de5  894104               mov dword ptr [ecx + 4], eax
// 00621de8  885a01               mov byte ptr [edx + 1], bl
// 00621deb  8daf80000000         lea ebp, [edi + 0x80]
// 00621df1  03c5                 add eax, ebp
// 00621df3  3b4108               cmp eax, dword ptr [ecx + 8]
// 00621df6  7d06                 jge 0x621dfe
// 00621df8  894108               mov dword ptr [ecx + 8], eax
// 00621dfb  885a02               mov byte ptr [edx + 2], bl
// 00621dfe  8daf00010000         lea ebp, [edi + 0x100]
// 00621e04  03c5                 add eax, ebp
// 00621e06  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 00621e09  7d06                 jge 0x621e11
// 00621e0b  89410c               mov dword ptr [ecx + 0xc], eax
// 00621e0e  885a03               mov byte ptr [edx + 3], bl
// 00621e11  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00621e15  8b442420             mov eax, dword ptr [esp + 0x20]
// 00621e19  03c5                 add eax, ebp
// 00621e1b  81c520010000         add ebp, 0x120
// 00621e21  83c110               add ecx, 0x10
// 00621e24  83c204               add edx, 4
// 00621e27  836c242401           sub dword ptr [esp + 0x24], 1
// 00621e2c  89442420             mov dword ptr [esp + 0x20], eax
// 00621e30  896c2418             mov dword ptr [esp + 0x18], ebp
// 00621e34  79a0                 jns 0x621dd6
// 00621e36  8b442410             mov eax, dword ptr [esp + 0x10]
// 00621e3a  03f0                 add esi, eax
// 00621e3c  0500020000           add eax, 0x200
// 00621e41  836c241401           sub dword ptr [esp + 0x14], 1
// 00621e46  89442410             mov dword ptr [esp + 0x10], eax
// 00621e4a  0f8970ffffff         jns 0x621dc0
// 00621e50  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00621e54  40                   inc eax
// 00621e55  3b842440020000       cmp eax, dword ptr [esp + 0x240]
// 00621e5c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00621e60  0f8ccafeffff         jl 0x621d30
// 00621e66  5e                   pop esi
// 00621e67  5d                   pop ebp
// 00621e68  5b                   pop ebx
// 00621e69  5f                   pop edi
// 00621e6a  81c41c020000         add esp, 0x21c
// 00621e70  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_best_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
