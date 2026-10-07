// roc 2010-06 0077f940  unit: seg_00770000  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077f940
//
// 0077f940  81ec3c020000         sub esp, 0x23c
// 0077f946  53                   push ebx
// 0077f947  55                   push ebp
// 0077f948  8bac2450020000       mov ebp, dword ptr [esp + 0x250]
// 0077f94f  56                   push esi
// 0077f950  8bd8                 mov ebx, eax
// 0077f952  57                   push edi
// 0077f953  8d442410             lea eax, [esp + 0x10]
// 0077f957  e824f8ffff           call 0x77f180
// 0077f95c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077f960  89683c               mov dword ptr [eax + 0x3c], ebp
// 0077f963  837b1028             cmp dword ptr [ebx + 0x10], 0x28
// 0077f967  7421                 je 0x77f98a
// 0077f969  6a28                 push 0x28
// 0077f96b  53                   push ebx
// 0077f96c  e81f2b0000           call 0x782490
// 0077f971  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0077f974  50                   push eax
// 0077f975  683830a500           push 0xa53038
// 0077f97a  51                   push ecx
// 0077f97b  e86034fbff           call 0x732de0
// 0077f980  50                   push eax
// 0077f981  53                   push ebx
// 0077f982  e8092c0000           call 0x782590
// 0077f987  83c41c               add esp, 0x1c
// 0077f98a  53                   push ebx
// 0077f98b  e8f03f0000           call 0x783980
// 0077f990  83c404               add esp, 4
// 0077f993  83bc245402000000     cmp dword ptr [esp + 0x254], 0
// 0077f99b  7468                 je 0x77fa05
// 0077f99d  6a04                 push 4
// 0077f99f  686831a500           push 0xa53168
// 0077f9a4  53                   push ebx
// 0077f9a5  e8062c0000           call 0x7825b0
// 0077f9aa  8b7330               mov esi, dword ptr [ebx + 0x30]
// 0077f9ad  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 0077f9b1  42                   inc edx
// 0077f9b2  83c40c               add esp, 0xc
// 0077f9b5  81fac8000000         cmp edx, 0xc8
// 0077f9bb  8bf8                 mov edi, eax
// 0077f9bd  7e0f                 jle 0x77f9ce
// 0077f9bf  b9dc30a500           mov ecx, 0xa530dc
// 0077f9c4  bac8000000           mov edx, 0xc8
// 0077f9c9  e812f1ffff           call 0x77eae0
// 0077f9ce  57                   push edi
// 0077f9cf  53                   push ebx
// 0077f9d0  e84bf2ffff           call 0x77ec20
// 0077f9d5  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0077f9d9  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 0077f9e1  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0077f9e4  83c408               add esp, 8
// 0077f9e7  fe4032               inc byte ptr [eax + 0x32]
// 0077f9ea  0fb65032             movzx edx, byte ptr [eax + 0x32]
// 0077f9ee  0fb78c50aa000000     movzx ecx, word ptr [eax + edx*2 + 0xaa]
// 0077f9f6  8b10                 mov edx, dword ptr [eax]
// 0077f9f8  8b5218               mov edx, dword ptr [edx + 0x18]
// 0077f9fb  8b4018               mov eax, dword ptr [eax + 0x18]
// 0077f9fe  8d0c49               lea ecx, [ecx + ecx*2]
// 0077fa01  89448a04             mov dword ptr [edx + ecx*4 + 4], eax
// 0077fa05  8bfb                 mov edi, ebx
// 0077fa07  e8f4fdffff           call 0x77f800
// 0077fa0c  837b1029             cmp dword ptr [ebx + 0x10], 0x29
// 0077fa10  7421                 je 0x77fa33
// 0077fa12  6a29                 push 0x29
// 0077fa14  53                   push ebx
// 0077fa15  e8762a0000           call 0x782490
// 0077fa1a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0077fa1d  50                   push eax
// 0077fa1e  683830a500           push 0xa53038
// 0077fa23  51                   push ecx
// 0077fa24  e8b733fbff           call 0x732de0
// 0077fa29  50                   push eax
// 0077fa2a  53                   push ebx
// 0077fa2b  e8602b0000           call 0x782590
// 0077fa30  83c41c               add esp, 0x1c
// 0077fa33  53                   push ebx
// 0077fa34  e8473f0000           call 0x783980
// 0077fa39  53                   push ebx
// 0077fa3a  e8b11d0000           call 0x7817f0
// 0077fa3f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0077fa43  8b5304               mov edx, dword ptr [ebx + 4]
// 0077fa46  895040               mov dword ptr [eax + 0x40], edx
// 0077fa49  6809010000           push 0x109
// 0077fa4e  8bc5                 mov eax, ebp
// 0077fa50  bf06010000           mov edi, 0x106
// 0077fa55  8bf3                 mov esi, ebx
// 0077fa57  e8d4f0ffff           call 0x77eb30
// 0077fa5c  53                   push ebx
// 0077fa5d  e8cef7ffff           call 0x77f230
// 0077fa62  8b8c2460020000       mov ecx, dword ptr [esp + 0x260]
// 0077fa69  51                   push ecx
// 0077fa6a  8d542424             lea edx, [esp + 0x24]
// 0077fa6e  52                   push edx
// 0077fa6f  53                   push ebx
// 0077fa70  e80bf6ffff           call 0x77f080
// 0077fa75  83c41c               add esp, 0x1c
// 0077fa78  5f                   pop edi
// 0077fa79  5e                   pop esi
// 0077fa7a  5d                   pop ebp
// 0077fa7b  5b                   pop ebx
// 0077fa7c  81c43c020000         add esp, 0x23c
// 0077fa82  c3                   ret 
// library lua-5.1.4/lparser.c (function _body)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
