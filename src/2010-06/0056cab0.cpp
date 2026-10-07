// roc 2010-06 0056cab0  unit: seg_00560000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056cab0
//
// 0056cab0  56                   push esi
// 0056cab1  57                   push edi
// 0056cab2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056cab6  833f00               cmp dword ptr [edi], 0
// 0056cab9  8bf0                 mov esi, eax
// 0056cabb  750f                 jne 0x56cacc
// 0056cabd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056cac1  50                   push eax
// 0056cac2  e8295dffff           call 0x5627f0
// 0056cac7  83c404               add esp, 4
// 0056caca  8907                 mov dword ptr [edi], eax
// 0056cacc  8b07                 mov eax, dword ptr [edi]
// 0056cace  8b0e                 mov ecx, dword ptr [esi]
// 0056cad0  8908                 mov dword ptr [eax], ecx
// 0056cad2  8b5604               mov edx, dword ptr [esi + 4]
// 0056cad5  895004               mov dword ptr [eax + 4], edx
// 0056cad8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0056cadb  894808               mov dword ptr [eax + 8], ecx
// 0056cade  8b560c               mov edx, dword ptr [esi + 0xc]
// 0056cae1  89500c               mov dword ptr [eax + 0xc], edx
// 0056cae4  8a4e10               mov cl, byte ptr [esi + 0x10]
// 0056cae7  53                   push ebx
// 0056cae8  884810               mov byte ptr [eax + 0x10], cl
// 0056caeb  33ff                 xor edi, edi
// 0056caed  33db                 xor ebx, ebx
// 0056caef  33d2                 xor edx, edx
// 0056caf1  8d4602               lea eax, [esi + 2]
// 0056caf4  55                   push ebp
// 0056caf5  33c9                 xor ecx, ecx
// 0056caf7  8d7704               lea esi, [edi + 4]
// 0056cafa  8d9b00000000         lea ebx, [ebx]
// 0056cb00  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 0056cb04  03fd                 add edi, ebp
// 0056cb06  0fb628               movzx ebp, byte ptr [eax]
// 0056cb09  03cd                 add ecx, ebp
// 0056cb0b  0fb66801             movzx ebp, byte ptr [eax + 1]
// 0056cb0f  03d5                 add edx, ebp
// 0056cb11  0fb66802             movzx ebp, byte ptr [eax + 2]
// 0056cb15  03dd                 add ebx, ebp
// 0056cb17  83c004               add eax, 4
// 0056cb1a  83ee01               sub esi, 1
// 0056cb1d  75e1                 jne 0x56cb00
// 0056cb1f  03da                 add ebx, edx
// 0056cb21  03d9                 add ebx, ecx
// 0056cb23  03fb                 add edi, ebx
// 0056cb25  83ff01               cmp edi, 1
// 0056cb28  5d                   pop ebp
// 0056cb29  5b                   pop ebx
// 0056cb2a  7c08                 jl 0x56cb34
// 0056cb2c  81ff00010000         cmp edi, 0x100
// 0056cb32  7e17                 jle 0x56cb4b
// 0056cb34  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056cb38  8b10                 mov edx, dword ptr [eax]
// 0056cb3a  c7421408000000       mov dword ptr [edx + 0x14], 8
// 0056cb41  8b08                 mov ecx, dword ptr [eax]
// 0056cb43  8b11                 mov edx, dword ptr [ecx]
// 0056cb45  50                   push eax
// 0056cb46  ffd2                 call edx
// 0056cb48  83c404               add esp, 4
// 0056cb4b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056cb4f  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056cb53  8b0e                 mov ecx, dword ptr [esi]
// 0056cb55  57                   push edi
// 0056cb56  50                   push eax
// 0056cb57  83c111               add ecx, 0x11
// 0056cb5a  51                   push ecx
// 0056cb5b  e8c6c22300           call 0x7a8e26
// 0056cb60  8b16                 mov edx, dword ptr [esi]
// 0056cb62  83c40c               add esp, 0xc
// 0056cb65  5f                   pop edi
// 0056cb66  c6821101000000       mov byte ptr [edx + 0x111], 0
// 0056cb6d  5e                   pop esi
// 0056cb6e  c3                   ret 
// library jpeg-6b/jcparam.c (function _add_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
