// roc 2007-03 00513690  unit: seg_00510000  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513690
//
// 00513690  833b00               cmp dword ptr [ebx], 0
// 00513693  55                   push ebp
// 00513694  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00513698  56                   push esi
// 00513699  57                   push edi
// 0051369a  8bf0                 mov esi, eax
// 0051369c  750b                 jne 0x5136a9
// 0051369e  55                   push ebp
// 0051369f  e87c180000           call 0x514f20
// 005136a4  83c404               add esp, 4
// 005136a7  8903                 mov dword ptr [ebx], eax
// 005136a9  8b03                 mov eax, dword ptr [ebx]
// 005136ab  8b0e                 mov ecx, dword ptr [esi]
// 005136ad  8908                 mov dword ptr [eax], ecx
// 005136af  8b5604               mov edx, dword ptr [esi + 4]
// 005136b2  895004               mov dword ptr [eax + 4], edx
// 005136b5  8b4e08               mov ecx, dword ptr [esi + 8]
// 005136b8  894808               mov dword ptr [eax + 8], ecx
// 005136bb  8b560c               mov edx, dword ptr [esi + 0xc]
// 005136be  89500c               mov dword ptr [eax + 0xc], edx
// 005136c1  8a4e10               mov cl, byte ptr [esi + 0x10]
// 005136c4  884810               mov byte ptr [eax + 0x10], cl
// 005136c7  33ff                 xor edi, edi
// 005136c9  8d4603               lea eax, [esi + 3]
// 005136cc  b904000000           mov ecx, 4
// 005136d1  0fb670ff             movzx esi, byte ptr [eax - 1]
// 005136d5  0fb650fe             movzx edx, byte ptr [eax - 2]
// 005136d9  03d6                 add edx, esi
// 005136db  0fb67001             movzx esi, byte ptr [eax + 1]
// 005136df  03d6                 add edx, esi
// 005136e1  0fb630               movzx esi, byte ptr [eax]
// 005136e4  03f7                 add esi, edi
// 005136e6  83c004               add eax, 4
// 005136e9  83e901               sub ecx, 1
// 005136ec  8d3c16               lea edi, [esi + edx]
// 005136ef  75e0                 jne 0x5136d1
// 005136f1  83ff01               cmp edi, 1
// 005136f4  7c08                 jl 0x5136fe
// 005136f6  81ff00010000         cmp edi, 0x100
// 005136fc  7e15                 jle 0x513713
// 005136fe  8b4500               mov eax, dword ptr [ebp]
// 00513701  c7401408000000       mov dword ptr [eax + 0x14], 8
// 00513708  8b4d00               mov ecx, dword ptr [ebp]
// 0051370b  8b11                 mov edx, dword ptr [ecx]
// 0051370d  55                   push ebp
// 0051370e  ffd2                 call edx
// 00513710  83c404               add esp, 4
// 00513713  8b442414             mov eax, dword ptr [esp + 0x14]
// 00513717  8b0b                 mov ecx, dword ptr [ebx]
// 00513719  57                   push edi
// 0051371a  50                   push eax
// 0051371b  83c111               add ecx, 0x11
// 0051371e  51                   push ecx
// 0051371f  e8beba1000           call 0x61f1e2
// 00513724  8b13                 mov edx, dword ptr [ebx]
// 00513726  83c40c               add esp, 0xc
// 00513729  5f                   pop edi
// 0051372a  5e                   pop esi
// 0051372b  c6821101000000       mov byte ptr [edx + 0x111], 0
// 00513732  5d                   pop ebp
// 00513733  c3                   ret 
// library jpeg-6b/jcparam.c (function _add_huff_table)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
