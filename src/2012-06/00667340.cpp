// from server: 100% by auto
// roc 2012-06 00667340  unit: seg_00660000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667340
//
// 00667340  51                   push ecx
// 00667341  53                   push ebx
// 00667342  55                   push ebp
// 00667343  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00667346  8bd8                 mov ebx, eax
// 00667348  57                   push edi
// 00667349  85db                 test ebx, ebx
// 0066734b  7519                 jne 0x667366
// 0066734d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00667350  8b08                 mov ecx, dword ptr [eax]
// 00667352  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 00667359  8b4620               mov eax, dword ptr [esi + 0x20]
// 0066735c  8b10                 mov edx, dword ptr [eax]
// 0066735e  50                   push eax
// 0066735f  8b02                 mov eax, dword ptr [edx]
// 00667361  ffd0                 call eax
// 00667363  83c404               add esp, 4
// 00667366  8bcb                 mov ecx, ebx
// 00667368  bf01000000           mov edi, 1
// 0066736d  d3e7                 shl edi, cl
// 0066736f  03eb                 add ebp, ebx
// 00667371  b918000000           mov ecx, 0x18
// 00667376  2bcd                 sub ecx, ebp
// 00667378  4f                   dec edi
// 00667379  237c2414             and edi, dword ptr [esp + 0x14]
// 0066737d  896c240c             mov dword ptr [esp + 0xc], ebp
// 00667381  d3e7                 shl edi, cl
// 00667383  0b7e08               or edi, dword ptr [esi + 8]
// 00667386  83fd08               cmp ebp, 8
// 00667389  7c7f                 jl 0x66740a
// 0066738b  eb03                 jmp 0x667390
// 0066738d  8d4900               lea ecx, [ecx]
// 00667390  8b0e                 mov ecx, dword ptr [esi]
// 00667392  8bdf                 mov ebx, edi
// 00667394  c1fb10               sar ebx, 0x10
// 00667397  81e3ff000000         and ebx, 0xff
// 0066739d  8819                 mov byte ptr [ecx], bl
// 0066739f  ff06                 inc dword ptr [esi]
// 006673a1  834604ff             add dword ptr [esi + 4], -1
// 006673a5  7522                 jne 0x6673c9
// 006673a7  8b4620               mov eax, dword ptr [esi + 0x20]
// 006673aa  8b6818               mov ebp, dword ptr [eax + 0x18]
// 006673ad  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006673b0  50                   push eax
// 006673b1  ffd2                 call edx
// 006673b3  83c404               add esp, 4
// 006673b6  84c0                 test al, al
// 006673b8  745d                 je 0x667417
// 006673ba  8b4500               mov eax, dword ptr [ebp]
// 006673bd  8906                 mov dword ptr [esi], eax
// 006673bf  8b4d04               mov ecx, dword ptr [ebp + 4]
// 006673c2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006673c6  894e04               mov dword ptr [esi + 4], ecx
// 006673c9  81fbff000000         cmp ebx, 0xff
// 006673cf  752a                 jne 0x6673fb
// 006673d1  8b16                 mov edx, dword ptr [esi]
// 006673d3  c60200               mov byte ptr [edx], 0
// 006673d6  ff06                 inc dword ptr [esi]
// 006673d8  834604ff             add dword ptr [esi + 4], -1
// 006673dc  751d                 jne 0x6673fb
// 006673de  8b4620               mov eax, dword ptr [esi + 0x20]
// 006673e1  8b5818               mov ebx, dword ptr [eax + 0x18]
// 006673e4  50                   push eax
// 006673e5  8b430c               mov eax, dword ptr [ebx + 0xc]
// 006673e8  ffd0                 call eax
// 006673ea  83c404               add esp, 4
// 006673ed  84c0                 test al, al
// 006673ef  7426                 je 0x667417
// 006673f1  8b0b                 mov ecx, dword ptr [ebx]
// 006673f3  890e                 mov dword ptr [esi], ecx
// 006673f5  8b5304               mov edx, dword ptr [ebx + 4]
// 006673f8  895604               mov dword ptr [esi + 4], edx
// 006673fb  83ed08               sub ebp, 8
// 006673fe  c1e708               shl edi, 8
// 00667401  83fd08               cmp ebp, 8
// 00667404  896c240c             mov dword ptr [esp + 0xc], ebp
// 00667408  7d86                 jge 0x667390
// 0066740a  897e08               mov dword ptr [esi + 8], edi
// 0066740d  5f                   pop edi
// 0066740e  896e0c               mov dword ptr [esi + 0xc], ebp
// 00667411  5d                   pop ebp
// 00667412  b001                 mov al, 1
// 00667414  5b                   pop ebx
// 00667415  59                   pop ecx
// 00667416  c3                   ret 
// 00667417  5f                   pop edi
// 00667418  5d                   pop ebp
// 00667419  32c0                 xor al, al
// 0066741b  5b                   pop ebx
// 0066741c  59                   pop ecx
// 0066741d  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
