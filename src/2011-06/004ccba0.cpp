// from server: 100% by auto
// roc 2011-06 004ccba0  unit: RBX::VInstance::?$NonFactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ccba0
//
// 004ccba0  55                   push ebp
// 004ccba1  8bec                 mov ebp, esp
// 004ccba3  6aff                 push -1
// 004ccba5  68709c9d00           push 0x9d9c70
// 004ccbaa  64a100000000         mov eax, dword ptr fs:[0]
// 004ccbb0  50                   push eax
// 004ccbb1  64892500000000       mov dword ptr fs:[0], esp
// 004ccbb8  83ec0c               sub esp, 0xc
// 004ccbbb  53                   push ebx
// 004ccbbc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004ccbbf  807b2900             cmp byte ptr [ebx + 0x29], 0
// 004ccbc3  56                   push esi
// 004ccbc4  8bf1                 mov esi, ecx
// 004ccbc6  8b4604               mov eax, dword ptr [esi + 4]
// 004ccbc9  57                   push edi
// 004ccbca  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ccbcd  8975e8               mov dword ptr [ebp - 0x18], esi
// 004ccbd0  8945ec               mov dword ptr [ebp - 0x14], eax
// 004ccbd3  7547                 jne 0x4ccc1c
// 004ccbd5  0fb64b28             movzx ecx, byte ptr [ebx + 0x28]
// 004ccbd9  51                   push ecx
// 004ccbda  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004ccbdd  8d530c               lea edx, [ebx + 0xc]
// 004ccbe0  52                   push edx
// 004ccbe1  50                   push eax
// 004ccbe2  51                   push ecx
// 004ccbe3  50                   push eax
// 004ccbe4  8bce                 mov ecx, esi
// 004ccbe6  e835c5ffff           call 0x4c9120
// 004ccbeb  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004ccbee  807a2900             cmp byte ptr [edx + 0x29], 0
// 004ccbf2  8bf8                 mov edi, eax
// 004ccbf4  7403                 je 0x4ccbf9
// 004ccbf6  897dec               mov dword ptr [ebp - 0x14], edi
// 004ccbf9  8b03                 mov eax, dword ptr [ebx]
// 004ccbfb  57                   push edi
// 004ccbfc  50                   push eax
// 004ccbfd  8bce                 mov ecx, esi
// 004ccbff  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ccc06  e895ffffff           call 0x4ccba0
// 004ccc0b  8907                 mov dword ptr [edi], eax
// 004ccc0d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004ccc10  57                   push edi
// 004ccc11  51                   push ecx
// 004ccc12  8bce                 mov ecx, esi
// 004ccc14  e887ffffff           call 0x4ccba0
// 004ccc19  894708               mov dword ptr [edi + 8], eax
// 004ccc1c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ccc1f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004ccc22  5f                   pop edi
// 004ccc23  5e                   pop esi
// 004ccc24  64890d00000000       mov dword ptr fs:[0], ecx
// 004ccc2b  5b                   pop ebx
// 004ccc2c  8be5                 mov esp, ebp
// 004ccc2e  5d                   pop ebp
// 004ccc2f  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
