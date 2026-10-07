// roc 2007-08 005298b0  unit: seg_00520000  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005298b0
//
// 005298b0  81ec1c020000         sub esp, 0x21c
// 005298b6  57                   push edi
// 005298b7  b8ffffff7f           mov eax, 0x7fffffff
// 005298bc  b980000000           mov ecx, 0x80
// 005298c1  8d7c2420             lea edi, [esp + 0x20]
// 005298c5  f3ab                 rep stosd dword ptr es:[edi], eax
// 005298c7  33c0                 xor eax, eax
// 005298c9  39842434020000       cmp dword ptr [esp + 0x234], eax
// 005298d0  89442410             mov dword ptr [esp + 0x10], eax
// 005298d4  0f8e41010000         jle 0x529a1b
// 005298da  53                   push ebx
// 005298db  55                   push ebp
// 005298dc  56                   push esi
// 005298dd  8d4900               lea ecx, [ecx]
// 005298e0  8b8c2444020000       mov ecx, dword ptr [esp + 0x244]
// 005298e7  0fb61c08             movzx ebx, byte ptr [eax + ecx]
// 005298eb  8b942430020000       mov edx, dword ptr [esp + 0x230]
// 005298f2  8b7274               mov esi, dword ptr [edx + 0x74]
// 005298f5  8b06                 mov eax, dword ptr [esi]
// 005298f7  0fb60c03             movzx ecx, byte ptr [ebx + eax]
// 005298fb  8b5604               mov edx, dword ptr [esi + 4]
// 005298fe  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 00529902  8b842434020000       mov eax, dword ptr [esp + 0x234]
// 00529909  2bc1                 sub eax, ecx
// 0052990b  8b8c2438020000       mov ecx, dword ptr [esp + 0x238]
// 00529912  2bca                 sub ecx, edx
// 00529914  8d1449               lea edx, [ecx + ecx*2]
// 00529917  8b4e08               mov ecx, dword ptr [esi + 8]
// 0052991a  0fb63419             movzx esi, byte ptr [ecx + ebx]
// 0052991e  8b8c243c020000       mov ecx, dword ptr [esp + 0x23c]
// 00529925  2bce                 sub ecx, esi
// 00529927  8bf1                 mov esi, ecx
// 00529929  0faff1               imul esi, ecx
// 0052992c  8bfa                 mov edi, edx
// 0052992e  0faffa               imul edi, edx
// 00529931  03f7                 add esi, edi
// 00529933  03c0                 add eax, eax
// 00529935  8bf8                 mov edi, eax
// 00529937  0faff8               imul edi, eax
// 0052993a  8d6c5212             lea ebp, [edx + edx*2 + 0x12]
// 0052993e  8b942448020000       mov edx, dword ptr [esp + 0x248]
// 00529945  03ed                 add ebp, ebp
// 00529947  03f7                 add esi, edi
// 00529949  03ed                 add ebp, ebp
// 0052994b  8d7904               lea edi, [ecx + 4]
// 0052994e  03ed                 add ebp, ebp
// 00529950  83c008               add eax, 8
// 00529953  c1e704               shl edi, 4
// 00529956  c1e005               shl eax, 5
// 00529959  896c2428             mov dword ptr [esp + 0x28], ebp
// 0052995d  8d4c242c             lea ecx, [esp + 0x2c]
// 00529961  89442410             mov dword ptr [esp + 0x10], eax
// 00529965  c744241403000000     mov dword ptr [esp + 0x14], 3
// 0052996d  eb05                 jmp 0x529974
// 0052996f  90                   nop 
// 00529970  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00529974  8bc6                 mov eax, esi
// 00529976  89442420             mov dword ptr [esp + 0x20], eax
// 0052997a  896c2418             mov dword ptr [esp + 0x18], ebp
// 0052997e  c744242407000000     mov dword ptr [esp + 0x24], 7
// 00529986  3b01                 cmp eax, dword ptr [ecx]
// 00529988  7d04                 jge 0x52998e
// 0052998a  8901                 mov dword ptr [ecx], eax
// 0052998c  881a                 mov byte ptr [edx], bl
// 0052998e  03c7                 add eax, edi
// 00529990  3b4104               cmp eax, dword ptr [ecx + 4]
// 00529993  7d06                 jge 0x52999b
// 00529995  894104               mov dword ptr [ecx + 4], eax
// 00529998  885a01               mov byte ptr [edx + 1], bl
// 0052999b  8daf80000000         lea ebp, [edi + 0x80]
// 005299a1  03c5                 add eax, ebp
// 005299a3  3b4108               cmp eax, dword ptr [ecx + 8]
// 005299a6  7d06                 jge 0x5299ae
// 005299a8  894108               mov dword ptr [ecx + 8], eax
// 005299ab  885a02               mov byte ptr [edx + 2], bl
// 005299ae  8daf00010000         lea ebp, [edi + 0x100]
// 005299b4  03c5                 add eax, ebp
// 005299b6  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 005299b9  7d06                 jge 0x5299c1
// 005299bb  89410c               mov dword ptr [ecx + 0xc], eax
// 005299be  885a03               mov byte ptr [edx + 3], bl
// 005299c1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005299c5  8b442420             mov eax, dword ptr [esp + 0x20]
// 005299c9  03c5                 add eax, ebp
// 005299cb  81c520010000         add ebp, 0x120
// 005299d1  83c110               add ecx, 0x10
// 005299d4  83c204               add edx, 4
// 005299d7  836c242401           sub dword ptr [esp + 0x24], 1
// 005299dc  89442420             mov dword ptr [esp + 0x20], eax
// 005299e0  896c2418             mov dword ptr [esp + 0x18], ebp
// 005299e4  79a0                 jns 0x529986
// 005299e6  8b442410             mov eax, dword ptr [esp + 0x10]
// 005299ea  03f0                 add esi, eax
// 005299ec  0500020000           add eax, 0x200
// 005299f1  836c241401           sub dword ptr [esp + 0x14], 1
// 005299f6  89442410             mov dword ptr [esp + 0x10], eax
// 005299fa  0f8970ffffff         jns 0x529970
// 00529a00  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00529a04  83c001               add eax, 1
// 00529a07  3b842440020000       cmp eax, dword ptr [esp + 0x240]
// 00529a0e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00529a12  0f8cc8feffff         jl 0x5298e0
// 00529a18  5e                   pop esi
// 00529a19  5d                   pop ebp
// 00529a1a  5b                   pop ebx
// 00529a1b  5f                   pop edi
// 00529a1c  81c41c020000         add esp, 0x21c
// 00529a22  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_best_colors)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
