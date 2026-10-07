// roc 2010-06 004c50c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c50c0
//
// 004c50c0  55                   push ebp
// 004c50c1  8bec                 mov ebp, esp
// 004c50c3  6aff                 push -1
// 004c50c5  6890a19800           push 0x98a190
// 004c50ca  64a100000000         mov eax, dword ptr fs:[0]
// 004c50d0  50                   push eax
// 004c50d1  64892500000000       mov dword ptr fs:[0], esp
// 004c50d8  83ec0c               sub esp, 0xc
// 004c50db  53                   push ebx
// 004c50dc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004c50df  807b2900             cmp byte ptr [ebx + 0x29], 0
// 004c50e3  56                   push esi
// 004c50e4  8bf1                 mov esi, ecx
// 004c50e6  8b4618               mov eax, dword ptr [esi + 0x18]
// 004c50e9  57                   push edi
// 004c50ea  8965f0               mov dword ptr [ebp - 0x10], esp
// 004c50ed  8975e8               mov dword ptr [ebp - 0x18], esi
// 004c50f0  8945ec               mov dword ptr [ebp - 0x14], eax
// 004c50f3  7547                 jne 0x4c513c
// 004c50f5  0fb64b28             movzx ecx, byte ptr [ebx + 0x28]
// 004c50f9  51                   push ecx
// 004c50fa  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004c50fd  8d530c               lea edx, [ebx + 0xc]
// 004c5100  52                   push edx
// 004c5101  50                   push eax
// 004c5102  51                   push ecx
// 004c5103  50                   push eax
// 004c5104  8bce                 mov ecx, esi
// 004c5106  e8a5c5ffff           call 0x4c16b0
// 004c510b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004c510e  807a2900             cmp byte ptr [edx + 0x29], 0
// 004c5112  8bf8                 mov edi, eax
// 004c5114  7403                 je 0x4c5119
// 004c5116  897dec               mov dword ptr [ebp - 0x14], edi
// 004c5119  8b03                 mov eax, dword ptr [ebx]
// 004c511b  57                   push edi
// 004c511c  50                   push eax
// 004c511d  8bce                 mov ecx, esi
// 004c511f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004c5126  e895ffffff           call 0x4c50c0
// 004c512b  8907                 mov dword ptr [edi], eax
// 004c512d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004c5130  57                   push edi
// 004c5131  51                   push ecx
// 004c5132  8bce                 mov ecx, esi
// 004c5134  e887ffffff           call 0x4c50c0
// 004c5139  894708               mov dword ptr [edi + 8], eax
// 004c513c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004c513f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004c5142  5f                   pop edi
// 004c5143  5e                   pop esi
// 004c5144  64890d00000000       mov dword ptr fs:[0], ecx
// 004c514b  5b                   pop ebx
// 004c514c  8be5                 mov esp, ebp
// 004c514e  5d                   pop ebp
// 004c514f  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
