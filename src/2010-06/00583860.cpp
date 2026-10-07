// roc 2010-06 00583860  unit: seg_00580000  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00583860
//
// 00583860  81ec1c020000         sub esp, 0x21c
// 00583866  57                   push edi
// 00583867  b8ffffff7f           mov eax, 0x7fffffff
// 0058386c  b980000000           mov ecx, 0x80
// 00583871  8d7c2420             lea edi, [esp + 0x20]
// 00583875  f3ab                 rep stosd dword ptr es:[edi], eax
// 00583877  33c0                 xor eax, eax
// 00583879  39842434020000       cmp dword ptr [esp + 0x234], eax
// 00583880  89442410             mov dword ptr [esp + 0x10], eax
// 00583884  0f8e3f010000         jle 0x5839c9
// 0058388a  53                   push ebx
// 0058388b  55                   push ebp
// 0058388c  56                   push esi
// 0058388d  8d4900               lea ecx, [ecx]
// 00583890  8b8c2444020000       mov ecx, dword ptr [esp + 0x244]
// 00583897  0fb61c08             movzx ebx, byte ptr [eax + ecx]
// 0058389b  8b942430020000       mov edx, dword ptr [esp + 0x230]
// 005838a2  8b7274               mov esi, dword ptr [edx + 0x74]
// 005838a5  8b06                 mov eax, dword ptr [esi]
// 005838a7  0fb60c03             movzx ecx, byte ptr [ebx + eax]
// 005838ab  8b5604               mov edx, dword ptr [esi + 4]
// 005838ae  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 005838b2  8b842434020000       mov eax, dword ptr [esp + 0x234]
// 005838b9  2bc1                 sub eax, ecx
// 005838bb  8b8c2438020000       mov ecx, dword ptr [esp + 0x238]
// 005838c2  2bca                 sub ecx, edx
// 005838c4  8d1449               lea edx, [ecx + ecx*2]
// 005838c7  8b4e08               mov ecx, dword ptr [esi + 8]
// 005838ca  0fb63419             movzx esi, byte ptr [ecx + ebx]
// 005838ce  8b8c243c020000       mov ecx, dword ptr [esp + 0x23c]
// 005838d5  2bce                 sub ecx, esi
// 005838d7  8bf1                 mov esi, ecx
// 005838d9  0faff1               imul esi, ecx
// 005838dc  8bfa                 mov edi, edx
// 005838de  0faffa               imul edi, edx
// 005838e1  03f7                 add esi, edi
// 005838e3  03c0                 add eax, eax
// 005838e5  8bf8                 mov edi, eax
// 005838e7  0faff8               imul edi, eax
// 005838ea  8d6c5212             lea ebp, [edx + edx*2 + 0x12]
// 005838ee  8b942448020000       mov edx, dword ptr [esp + 0x248]
// 005838f5  03ed                 add ebp, ebp
// 005838f7  03f7                 add esi, edi
// 005838f9  03ed                 add ebp, ebp
// 005838fb  8d7904               lea edi, [ecx + 4]
// 005838fe  03ed                 add ebp, ebp
// 00583900  83c008               add eax, 8
// 00583903  c1e704               shl edi, 4
// 00583906  c1e005               shl eax, 5
// 00583909  896c2428             mov dword ptr [esp + 0x28], ebp
// 0058390d  8d4c242c             lea ecx, [esp + 0x2c]
// 00583911  89442410             mov dword ptr [esp + 0x10], eax
// 00583915  c744241403000000     mov dword ptr [esp + 0x14], 3
// 0058391d  eb05                 jmp 0x583924
// 0058391f  90                   nop 
// 00583920  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00583924  8bc6                 mov eax, esi
// 00583926  89442420             mov dword ptr [esp + 0x20], eax
// 0058392a  896c2418             mov dword ptr [esp + 0x18], ebp
// 0058392e  c744242407000000     mov dword ptr [esp + 0x24], 7
// 00583936  3b01                 cmp eax, dword ptr [ecx]
// 00583938  7d04                 jge 0x58393e
// 0058393a  8901                 mov dword ptr [ecx], eax
// 0058393c  881a                 mov byte ptr [edx], bl
// 0058393e  03c7                 add eax, edi
// 00583940  3b4104               cmp eax, dword ptr [ecx + 4]
// 00583943  7d06                 jge 0x58394b
// 00583945  894104               mov dword ptr [ecx + 4], eax
// 00583948  885a01               mov byte ptr [edx + 1], bl
// 0058394b  8daf80000000         lea ebp, [edi + 0x80]
// 00583951  03c5                 add eax, ebp
// 00583953  3b4108               cmp eax, dword ptr [ecx + 8]
// 00583956  7d06                 jge 0x58395e
// 00583958  894108               mov dword ptr [ecx + 8], eax
// 0058395b  885a02               mov byte ptr [edx + 2], bl
// 0058395e  8daf00010000         lea ebp, [edi + 0x100]
// 00583964  03c5                 add eax, ebp
// 00583966  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 00583969  7d06                 jge 0x583971
// 0058396b  89410c               mov dword ptr [ecx + 0xc], eax
// 0058396e  885a03               mov byte ptr [edx + 3], bl
// 00583971  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00583975  8b442420             mov eax, dword ptr [esp + 0x20]
// 00583979  03c5                 add eax, ebp
// 0058397b  81c520010000         add ebp, 0x120
// 00583981  83c110               add ecx, 0x10
// 00583984  83c204               add edx, 4
// 00583987  836c242401           sub dword ptr [esp + 0x24], 1
// 0058398c  89442420             mov dword ptr [esp + 0x20], eax
// 00583990  896c2418             mov dword ptr [esp + 0x18], ebp
// 00583994  79a0                 jns 0x583936
// 00583996  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058399a  03f0                 add esi, eax
// 0058399c  0500020000           add eax, 0x200
// 005839a1  836c241401           sub dword ptr [esp + 0x14], 1
// 005839a6  89442410             mov dword ptr [esp + 0x10], eax
// 005839aa  0f8970ffffff         jns 0x583920
// 005839b0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005839b4  40                   inc eax
// 005839b5  3b842440020000       cmp eax, dword ptr [esp + 0x240]
// 005839bc  8944241c             mov dword ptr [esp + 0x1c], eax
// 005839c0  0f8ccafeffff         jl 0x583890
// 005839c6  5e                   pop esi
// 005839c7  5d                   pop ebp
// 005839c8  5b                   pop ebx
// 005839c9  5f                   pop edi
// 005839ca  81c41c020000         add esp, 0x21c
// 005839d0  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_best_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
