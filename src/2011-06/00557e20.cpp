// from server: 100% by auto
// roc 2011-06 00557e20  unit: seg_00550000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557e20
//
// 00557e20  56                   push esi
// 00557e21  57                   push edi
// 00557e22  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00557e26  833f00               cmp dword ptr [edi], 0
// 00557e29  8bf0                 mov esi, eax
// 00557e2b  750f                 jne 0x557e3c
// 00557e2d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00557e31  50                   push eax
// 00557e32  e849ff0000           call 0x567d80
// 00557e37  83c404               add esp, 4
// 00557e3a  8907                 mov dword ptr [edi], eax
// 00557e3c  8b07                 mov eax, dword ptr [edi]
// 00557e3e  8b0e                 mov ecx, dword ptr [esi]
// 00557e40  8908                 mov dword ptr [eax], ecx
// 00557e42  8b5604               mov edx, dword ptr [esi + 4]
// 00557e45  895004               mov dword ptr [eax + 4], edx
// 00557e48  8b4e08               mov ecx, dword ptr [esi + 8]
// 00557e4b  894808               mov dword ptr [eax + 8], ecx
// 00557e4e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00557e51  89500c               mov dword ptr [eax + 0xc], edx
// 00557e54  8a4e10               mov cl, byte ptr [esi + 0x10]
// 00557e57  53                   push ebx
// 00557e58  884810               mov byte ptr [eax + 0x10], cl
// 00557e5b  33ff                 xor edi, edi
// 00557e5d  33db                 xor ebx, ebx
// 00557e5f  33d2                 xor edx, edx
// 00557e61  8d4602               lea eax, [esi + 2]
// 00557e64  55                   push ebp
// 00557e65  33c9                 xor ecx, ecx
// 00557e67  8d7704               lea esi, [edi + 4]
// 00557e6a  8d9b00000000         lea ebx, [ebx]
// 00557e70  0fb668ff             movzx ebp, byte ptr [eax - 1]
// 00557e74  03fd                 add edi, ebp
// 00557e76  0fb628               movzx ebp, byte ptr [eax]
// 00557e79  03cd                 add ecx, ebp
// 00557e7b  0fb66801             movzx ebp, byte ptr [eax + 1]
// 00557e7f  03d5                 add edx, ebp
// 00557e81  0fb66802             movzx ebp, byte ptr [eax + 2]
// 00557e85  03dd                 add ebx, ebp
// 00557e87  83c004               add eax, 4
// 00557e8a  83ee01               sub esi, 1
// 00557e8d  75e1                 jne 0x557e70
// 00557e8f  03da                 add ebx, edx
// 00557e91  03d9                 add ebx, ecx
// 00557e93  03fb                 add edi, ebx
// 00557e95  83ff01               cmp edi, 1
// 00557e98  5d                   pop ebp
// 00557e99  5b                   pop ebx
// 00557e9a  7c08                 jl 0x557ea4
// 00557e9c  81ff00010000         cmp edi, 0x100
// 00557ea2  7e17                 jle 0x557ebb
// 00557ea4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00557ea8  8b10                 mov edx, dword ptr [eax]
// 00557eaa  c7421408000000       mov dword ptr [edx + 0x14], 8
// 00557eb1  8b08                 mov ecx, dword ptr [eax]
// 00557eb3  8b11                 mov edx, dword ptr [ecx]
// 00557eb5  50                   push eax
// 00557eb6  ffd2                 call edx
// 00557eb8  83c404               add esp, 4
// 00557ebb  8b742410             mov esi, dword ptr [esp + 0x10]
// 00557ebf  8b442414             mov eax, dword ptr [esp + 0x14]
// 00557ec3  8b0e                 mov ecx, dword ptr [esi]
// 00557ec5  57                   push edi
// 00557ec6  50                   push eax
// 00557ec7  83c111               add ecx, 0x11
// 00557eca  51                   push ecx
// 00557ecb  e80c372b00           call 0x80b5dc
// 00557ed0  8b16                 mov edx, dword ptr [esi]
// 00557ed2  83c40c               add esp, 0xc
// 00557ed5  5f                   pop edi
// 00557ed6  c6821101000000       mov byte ptr [edx + 0x111], 0
// 00557edd  5e                   pop esi
// 00557ede  c3                   ret 
// library jpeg-6b/jcparam.c (function _add_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
