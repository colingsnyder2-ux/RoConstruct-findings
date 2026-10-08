// from server: 100% by auto
// roc 2007-08 0050c0e0  unit: G3D::BinaryInput  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050c0e0
//
// 0050c0e0  51                   push ecx
// 0050c0e1  56                   push esi
// 0050c0e2  8bf1                 mov esi, ecx
// 0050c0e4  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050c0e7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050c0ea  8b5638               mov edx, dword ptr [esi + 0x38]
// 0050c0ed  57                   push edi
// 0050c0ee  03c8                 add ecx, eax
// 0050c0f0  83ea01               sub edx, 1
// 0050c0f3  33ff                 xor edi, edi
// 0050c0f5  3bca                 cmp ecx, edx
// 0050c0f7  c744240800000000     mov dword ptr [esp + 8], 0
// 0050c0ff  7d12                 jge 0x50c113
// 0050c101  83c001               add eax, 1
// 0050c104  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0050c107  7e0a                 jle 0x50c113
// 0050c109  6a01                 push 1
// 0050c10b  51                   push ecx
// 0050c10c  8bce                 mov ecx, esi
// 0050c10e  e8adfbffff           call 0x50bcc0
// 0050c113  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050c116  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050c119  8b5638               mov edx, dword ptr [esi + 0x38]
// 0050c11c  03c8                 add ecx, eax
// 0050c11e  83c2ff               add edx, -1
// 0050c121  3bca                 cmp ecx, edx
// 0050c123  7d51                 jge 0x50c176
// 0050c125  53                   push ebx
// 0050c126  8b5e40               mov ebx, dword ptr [esi + 0x40]
// 0050c129  803c1800             cmp byte ptr [eax + ebx], 0
// 0050c12d  7446                 je 0x50c175
// 0050c12f  8d5901               lea ebx, [ecx + 1]
// 0050c132  3bda                 cmp ebx, edx
// 0050c134  bf01000000           mov edi, 1
// 0050c139  7d3a                 jge 0x50c175
// 0050c13b  eb03                 jmp 0x50c140
// 0050c13d  8d4900               lea ecx, [ecx]
// 0050c140  8b5640               mov edx, dword ptr [esi + 0x40]
// 0050c143  03d0                 add edx, eax
// 0050c145  803c3a00             cmp byte ptr [edx + edi], 0
// 0050c149  742a                 je 0x50c175
// 0050c14b  83c001               add eax, 1
// 0050c14e  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0050c151  7e0a                 jle 0x50c15d
// 0050c153  6a01                 push 1
// 0050c155  51                   push ecx
// 0050c156  8bce                 mov ecx, esi
// 0050c158  e863fbffff           call 0x50bcc0
// 0050c15d  8b4644               mov eax, dword ptr [esi + 0x44]
// 0050c160  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0050c163  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 0050c166  83c701               add edi, 1
// 0050c169  03c8                 add ecx, eax
// 0050c16b  8d1439               lea edx, [ecx + edi]
// 0050c16e  83eb01               sub ebx, 1
// 0050c171  3bd3                 cmp edx, ebx
// 0050c173  7ccb                 jl 0x50c140
// 0050c175  5b                   pop ebx
// 0050c176  83c701               add edi, 1
// 0050c179  57                   push edi
// 0050c17a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050c17e  57                   push edi
// 0050c17f  8bce                 mov ecx, esi
// 0050c181  e89afeffff           call 0x50c020
// 0050c186  8bc7                 mov eax, edi
// 0050c188  5f                   pop edi
// 0050c189  5e                   pop esi
// 0050c18a  59                   pop ecx
// 0050c18b  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?readString@BinaryInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
