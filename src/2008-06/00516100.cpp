// roc 2008-06 00516100  unit: G3D::BinaryInput  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516100
//
// 00516100  55                   push ebp
// 00516101  56                   push esi
// 00516102  8bf1                 mov esi, ecx
// 00516104  8b460c               mov eax, dword ptr [esi + 0xc]
// 00516107  57                   push edi
// 00516108  85c0                 test eax, eax
// 0051610a  7504                 jne 0x516110
// 0051610c  33ed                 xor ebp, ebp
// 0051610e  eb05                 jmp 0x516115
// 00516110  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 00516113  2be8                 sub ebp, eax
// 00516115  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00516119  85ff                 test edi, edi
// 0051611b  0f844f010000         je 0x516270
// 00516121  53                   push ebx
// 00516122  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00516125  8bc8                 mov ecx, eax
// 00516127  2bcb                 sub ecx, ebx
// 00516129  49                   dec ecx
// 0051612a  3bcf                 cmp ecx, edi
// 0051612c  7305                 jae 0x516133
// 0051612e  e80d0cfbff           call 0x4c6d40
// 00516133  8bd3                 mov edx, ebx
// 00516135  2bd0                 sub edx, eax
// 00516137  8d043a               lea eax, [edx + edi]
// 0051613a  3be8                 cmp ebp, eax
// 0051613c  0f839c000000         jae 0x5161de
// 00516142  8bcd                 mov ecx, ebp
// 00516144  d1e9                 shr ecx, 1
// 00516146  83caff               or edx, 0xffffffff
// 00516149  2bd1                 sub edx, ecx
// 0051614b  3bd5                 cmp edx, ebp
// 0051614d  7304                 jae 0x516153
// 0051614f  33ed                 xor ebp, ebp
// 00516151  eb02                 jmp 0x516155
// 00516153  03e9                 add ebp, ecx
// 00516155  3be8                 cmp ebp, eax
// 00516157  7302                 jae 0x51615b
// 00516159  8be8                 mov ebp, eax
// 0051615b  6a00                 push 0
// 0051615d  55                   push ebp
// 0051615e  e82dfbffff           call 0x515c90
// 00516163  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00516166  8bd8                 mov ebx, eax
// 00516168  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051616c  83c408               add esp, 8
// 0051616f  2bc1                 sub eax, ecx
// 00516171  8d1418               lea edx, [eax + ebx]
// 00516174  8954241c             mov dword ptr [esp + 0x1c], edx
// 00516178  740d                 je 0x516187
// 0051617a  50                   push eax
// 0051617b  51                   push ecx
// 0051617c  50                   push eax
// 0051617d  53                   push ebx
// 0051617e  ff1550288000         call dword ptr [0x802850]
// 00516184  83c410               add esp, 0x10
// 00516187  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051618b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051618f  50                   push eax
// 00516190  57                   push edi
// 00516191  51                   push ecx
// 00516192  8bce                 mov ecx, esi
// 00516194  e837ffffff           call 0x5160d0
// 00516199  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0051619c  8b542418             mov edx, dword ptr [esp + 0x18]
// 005161a0  2bca                 sub ecx, edx
// 005161a2  740d                 je 0x5161b1
// 005161a4  51                   push ecx
// 005161a5  52                   push edx
// 005161a6  51                   push ecx
// 005161a7  50                   push eax
// 005161a8  ff1550288000         call dword ptr [0x802850]
// 005161ae  83c410               add esp, 0x10
// 005161b1  8b460c               mov eax, dword ptr [esi + 0xc]
// 005161b4  8b5610               mov edx, dword ptr [esi + 0x10]
// 005161b7  2bd0                 sub edx, eax
// 005161b9  03fa                 add edi, edx
// 005161bb  85c0                 test eax, eax
// 005161bd  7409                 je 0x5161c8
// 005161bf  50                   push eax
// 005161c0  e8b5a41800           call 0x6a067a
// 005161c5  83c404               add esp, 4
// 005161c8  8d042b               lea eax, [ebx + ebp]
// 005161cb  8d0c3b               lea ecx, [ebx + edi]
// 005161ce  895e0c               mov dword ptr [esi + 0xc], ebx
// 005161d1  5b                   pop ebx
// 005161d2  5f                   pop edi
// 005161d3  894614               mov dword ptr [esi + 0x14], eax
// 005161d6  894e10               mov dword ptr [esi + 0x10], ecx
// 005161d9  5e                   pop esi
// 005161da  5d                   pop ebp
// 005161db  c21000               ret 0x10
// 005161de  8b442418             mov eax, dword ptr [esp + 0x18]
// 005161e2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005161e6  8bd3                 mov edx, ebx
// 005161e8  2bd0                 sub edx, eax
// 005161ea  3bd7                 cmp edx, edi
// 005161ec  8a11                 mov dl, byte ptr [ecx]
// 005161ee  88542420             mov byte ptr [esp + 0x20], dl
// 005161f2  7348                 jae 0x51623c
// 005161f4  8d0c38               lea ecx, [eax + edi]
// 005161f7  51                   push ecx
// 005161f8  53                   push ebx
// 005161f9  50                   push eax
// 005161fa  8bce                 mov ecx, esi
// 005161fc  e87ffdffff           call 0x515f80
// 00516201  8b4610               mov eax, dword ptr [esi + 0x10]
// 00516204  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00516208  2bc8                 sub ecx, eax
// 0051620a  8d542420             lea edx, [esp + 0x20]
// 0051620e  52                   push edx
// 0051620f  03cf                 add ecx, edi
// 00516211  51                   push ecx
// 00516212  50                   push eax
// 00516213  8bce                 mov ecx, esi
// 00516215  e8b6feffff           call 0x5160d0
// 0051621a  017e10               add dword ptr [esi + 0x10], edi
// 0051621d  8b7610               mov esi, dword ptr [esi + 0x10]
// 00516220  8b442418             mov eax, dword ptr [esp + 0x18]
// 00516224  8d542420             lea edx, [esp + 0x20]
// 00516228  52                   push edx
// 00516229  2bf7                 sub esi, edi
// 0051622b  56                   push esi
// 0051622c  50                   push eax
// 0051622d  e8fefcffff           call 0x515f30
// 00516232  83c40c               add esp, 0xc
// 00516235  5b                   pop ebx
// 00516236  5f                   pop edi
// 00516237  5e                   pop esi
// 00516238  5d                   pop ebp
// 00516239  c21000               ret 0x10
// 0051623c  53                   push ebx
// 0051623d  8beb                 mov ebp, ebx
// 0051623f  53                   push ebx
// 00516240  2bef                 sub ebp, edi
// 00516242  55                   push ebp
// 00516243  8bce                 mov ecx, esi
// 00516245  e836fdffff           call 0x515f80
// 0051624a  53                   push ebx
// 0051624b  894610               mov dword ptr [esi + 0x10], eax
// 0051624e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00516252  55                   push ebp
// 00516253  50                   push eax
// 00516254  e8f7fcffff           call 0x515f50
// 00516259  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051625d  8d4c242c             lea ecx, [esp + 0x2c]
// 00516261  51                   push ecx
// 00516262  8d1438               lea edx, [eax + edi]
// 00516265  52                   push edx
// 00516266  50                   push eax
// 00516267  e8c4fcffff           call 0x515f30
// 0051626c  83c418               add esp, 0x18
// 0051626f  5b                   pop ebx
// 00516270  5f                   pop edi
// 00516271  5e                   pop esi
// 00516272  5d                   pop ebp
// 00516273  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?_Insert_n@?$vector@EV?$allocator@E@std@@@std@@IAEXV?$_Vector_const_iterator@EV?$allocator@E@std@@@2@IABE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
