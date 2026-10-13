// from server: 100% by colin
// roc 2008-06 00529760  unit: G3D::Line  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00529760
//
// 00529760  83ec20               sub esp, 0x20
// 00529763  803823               cmp byte ptr [eax], 0x23
// 00529766  56                   push esi
// 00529767  0f85da000000         jne 0x529847
// 0052976d  53                   push ebx
// 0052976e  55                   push ebp
// 0052976f  8d4c241f             lea ecx, [esp + 0x1f]
// 00529773  2bc8                 sub ecx, eax
// 00529775  57                   push edi
// 00529776  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052977a  8d5c2420             lea ebx, [esp + 0x20]
// 0052977e  8d7c2421             lea edi, [esp + 0x21]
// 00529782  8d6c2422             lea ebp, [esp + 0x22]
// 00529786  2bd8                 sub ebx, eax
// 00529788  2be8                 sub ebp, eax
// 0052978a  8d4c2424             lea ecx, [esp + 0x24]
// 0052978e  33f6                 xor esi, esi
// 00529790  2bf8                 sub edi, eax
// 00529792  2bc8                 sub ecx, eax
// 00529794  895c2414             mov dword ptr [esp + 0x14], ebx
// 00529798  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052979c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005297a0  eb08                 jmp 0x5297aa
// 005297a2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005297a6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005297aa  803c0620             cmp byte ptr [esi + eax], 0x20
// 005297ae  8a540601             mov dl, byte ptr [esi + eax + 1]
// 005297b2  8d0c06               lea ecx, [esi + eax]
// 005297b5  88140b               mov byte ptr [ebx + ecx], dl
// 005297b8  7452                 je 0x52980c
// 005297ba  8a5c0602             mov bl, byte ptr [esi + eax + 2]
// 005297be  881c0f               mov byte ptr [edi + ecx], bl
// 005297c1  80fa20               cmp dl, 0x20
// 005297c4  7436                 je 0x5297fc
// 005297c6  8a540603             mov dl, byte ptr [esi + eax + 3]
// 005297ca  881429               mov byte ptr [ecx + ebp], dl
// 005297cd  80fb20               cmp bl, 0x20
// 005297d0  742d                 je 0x5297ff
// 005297d2  8a5c0604             mov bl, byte ptr [esi + eax + 4]
// 005297d6  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005297da  881c29               mov byte ptr [ecx + ebp], bl
// 005297dd  80fa20               cmp dl, 0x20
// 005297e0  7422                 je 0x529804
// 005297e2  8a540605             mov dl, byte ptr [esi + eax + 5]
// 005297e6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005297ea  881429               mov byte ptr [ecx + ebp], dl
// 005297ed  80fb20               cmp bl, 0x20
// 005297f0  7417                 je 0x529809
// 005297f2  83c605               add esi, 5
// 005297f5  83fe0f               cmp esi, 0xf
// 005297f8  7ca8                 jl 0x5297a2
// 005297fa  eb10                 jmp 0x52980c
// 005297fc  46                   inc esi
// 005297fd  eb0d                 jmp 0x52980c
// 005297ff  83c602               add esi, 2
// 00529802  eb08                 jmp 0x52980c
// 00529804  83c603               add esi, 3
// 00529807  eb03                 jmp 0x52980c
// 00529809  83c604               add esi, 4
// 0052980c  5f                   pop edi
// 0052980d  8d4efe               lea ecx, [esi - 2]
// 00529810  5d                   pop ebp
// 00529811  5b                   pop ebx
// 00529812  83f90c               cmp ecx, 0xc
// 00529815  7714                 ja 0x52982b
// 00529817  c644341300           mov byte ptr [esp + esi + 0x13], 0
// 0052981c  03f0                 add esi, eax
// 0052981e  56                   push esi
// 0052981f  8d542418             lea edx, [esp + 0x18]
// 00529823  52                   push edx
// 00529824  68f8ba8200           push 0x82baf8
// 00529829  eb07                 jmp 0x529832
// 0052982b  56                   push esi
// 0052982c  50                   push eax
// 0052982d  68d8ba8200           push 0x82bad8
// 00529832  ff1558278000         call dword ptr [0x802758]
// 00529838  83c040               add eax, 0x40
// 0052983b  50                   push eax
// 0052983c  ff151c288000         call dword ptr [0x80281c]
// 00529842  83c410               add esp, 0x10
// 00529845  eb19                 jmp 0x529860
// 00529847  50                   push eax
// 00529848  68c4ba8200           push 0x82bac4
// 0052984d  ff1558278000         call dword ptr [0x802758]
// 00529853  83c040               add eax, 0x40
// 00529856  50                   push eax
// 00529857  ff151c288000         call dword ptr [0x80281c]
// 0052985d  83c40c               add esp, 0xc
// 00529860  8b442428             mov eax, dword ptr [esp + 0x28]
// 00529864  6a01                 push 1
// 00529866  50                   push eax
// 00529867  ff1548278000         call dword ptr [0x802748]
// 0052986d  5e                   pop esi
// library libpng-1.2.5-dll/pngerror.c (function _png_default_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5-dll pngerror.c
