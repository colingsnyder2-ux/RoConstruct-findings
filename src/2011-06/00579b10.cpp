// from server: 100% by auto
// roc 2011-06 00579b10  unit: seg_00570000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00579b10
//
// 00579b10  81ec1c020000         sub esp, 0x21c
// 00579b16  57                   push edi
// 00579b17  b8ffffff7f           mov eax, 0x7fffffff
// 00579b1c  b980000000           mov ecx, 0x80
// 00579b21  8d7c2420             lea edi, [esp + 0x20]
// 00579b25  f3ab                 rep stosd dword ptr es:[edi], eax
// 00579b27  33c0                 xor eax, eax
// 00579b29  39842434020000       cmp dword ptr [esp + 0x234], eax
// 00579b30  89442410             mov dword ptr [esp + 0x10], eax
// 00579b34  0f8e3f010000         jle 0x579c79
// 00579b3a  53                   push ebx
// 00579b3b  55                   push ebp
// 00579b3c  56                   push esi
// 00579b3d  8d4900               lea ecx, [ecx]
// 00579b40  8b8c2444020000       mov ecx, dword ptr [esp + 0x244]
// 00579b47  0fb61c08             movzx ebx, byte ptr [eax + ecx]
// 00579b4b  8b942430020000       mov edx, dword ptr [esp + 0x230]
// 00579b52  8b7274               mov esi, dword ptr [edx + 0x74]
// 00579b55  8b06                 mov eax, dword ptr [esi]
// 00579b57  0fb60c03             movzx ecx, byte ptr [ebx + eax]
// 00579b5b  8b5604               mov edx, dword ptr [esi + 4]
// 00579b5e  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 00579b62  8b842434020000       mov eax, dword ptr [esp + 0x234]
// 00579b69  2bc1                 sub eax, ecx
// 00579b6b  8b8c2438020000       mov ecx, dword ptr [esp + 0x238]
// 00579b72  2bca                 sub ecx, edx
// 00579b74  8d1449               lea edx, [ecx + ecx*2]
// 00579b77  8b4e08               mov ecx, dword ptr [esi + 8]
// 00579b7a  0fb63419             movzx esi, byte ptr [ecx + ebx]
// 00579b7e  8b8c243c020000       mov ecx, dword ptr [esp + 0x23c]
// 00579b85  2bce                 sub ecx, esi
// 00579b87  8bf1                 mov esi, ecx
// 00579b89  0faff1               imul esi, ecx
// 00579b8c  8bfa                 mov edi, edx
// 00579b8e  0faffa               imul edi, edx
// 00579b91  03f7                 add esi, edi
// 00579b93  03c0                 add eax, eax
// 00579b95  8bf8                 mov edi, eax
// 00579b97  0faff8               imul edi, eax
// 00579b9a  8d6c5212             lea ebp, [edx + edx*2 + 0x12]
// 00579b9e  8b942448020000       mov edx, dword ptr [esp + 0x248]
// 00579ba5  03ed                 add ebp, ebp
// 00579ba7  03f7                 add esi, edi
// 00579ba9  03ed                 add ebp, ebp
// 00579bab  8d7904               lea edi, [ecx + 4]
// 00579bae  03ed                 add ebp, ebp
// 00579bb0  83c008               add eax, 8
// 00579bb3  c1e704               shl edi, 4
// 00579bb6  c1e005               shl eax, 5
// 00579bb9  896c2428             mov dword ptr [esp + 0x28], ebp
// 00579bbd  8d4c242c             lea ecx, [esp + 0x2c]
// 00579bc1  89442410             mov dword ptr [esp + 0x10], eax
// 00579bc5  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00579bcd  eb05                 jmp 0x579bd4
// 00579bcf  90                   nop 
// 00579bd0  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00579bd4  8bc6                 mov eax, esi
// 00579bd6  89442420             mov dword ptr [esp + 0x20], eax
// 00579bda  896c2418             mov dword ptr [esp + 0x18], ebp
// 00579bde  c744242407000000     mov dword ptr [esp + 0x24], 7
// 00579be6  3b01                 cmp eax, dword ptr [ecx]
// 00579be8  7d04                 jge 0x579bee
// 00579bea  8901                 mov dword ptr [ecx], eax
// 00579bec  881a                 mov byte ptr [edx], bl
// 00579bee  03c7                 add eax, edi
// 00579bf0  3b4104               cmp eax, dword ptr [ecx + 4]
// 00579bf3  7d06                 jge 0x579bfb
// 00579bf5  894104               mov dword ptr [ecx + 4], eax
// 00579bf8  885a01               mov byte ptr [edx + 1], bl
// 00579bfb  8daf80000000         lea ebp, [edi + 0x80]
// 00579c01  03c5                 add eax, ebp
// 00579c03  3b4108               cmp eax, dword ptr [ecx + 8]
// 00579c06  7d06                 jge 0x579c0e
// 00579c08  894108               mov dword ptr [ecx + 8], eax
// 00579c0b  885a02               mov byte ptr [edx + 2], bl
// 00579c0e  8daf00010000         lea ebp, [edi + 0x100]
// 00579c14  03c5                 add eax, ebp
// 00579c16  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 00579c19  7d06                 jge 0x579c21
// 00579c1b  89410c               mov dword ptr [ecx + 0xc], eax
// 00579c1e  885a03               mov byte ptr [edx + 3], bl
// 00579c21  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00579c25  8b442420             mov eax, dword ptr [esp + 0x20]
// 00579c29  03c5                 add eax, ebp
// 00579c2b  81c520010000         add ebp, 0x120
// 00579c31  83c110               add ecx, 0x10
// 00579c34  83c204               add edx, 4
// 00579c37  836c242401           sub dword ptr [esp + 0x24], 1
// 00579c3c  89442420             mov dword ptr [esp + 0x20], eax
// 00579c40  896c2418             mov dword ptr [esp + 0x18], ebp
// 00579c44  79a0                 jns 0x579be6
// 00579c46  8b442410             mov eax, dword ptr [esp + 0x10]
// 00579c4a  03f0                 add esi, eax
// 00579c4c  0500020000           add eax, 0x200
// 00579c51  836c241401           sub dword ptr [esp + 0x14], 1
// 00579c56  89442410             mov dword ptr [esp + 0x10], eax
// 00579c5a  0f8970ffffff         jns 0x579bd0
// 00579c60  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00579c64  40                   inc eax
// 00579c65  3b842440020000       cmp eax, dword ptr [esp + 0x240]
// 00579c6c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00579c70  0f8ccafeffff         jl 0x579b40
// 00579c76  5e                   pop esi
// 00579c77  5d                   pop ebp
// 00579c78  5b                   pop ebx
// 00579c79  5f                   pop edi
// 00579c7a  81c41c020000         add esp, 0x21c
// 00579c80  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_best_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
