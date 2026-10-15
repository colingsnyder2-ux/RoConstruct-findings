// roc 2008-06 00494390  unit: RBX::Network::Player  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494390
//
// 00494390  6aff                 push -1
// 00494392  6878677c00           push 0x7c6778
// 00494397  64a100000000         mov eax, dword ptr fs:[0]
// 0049439d  50                   push eax
// 0049439e  64892500000000       mov dword ptr fs:[0], esp
// 004943a5  83ec08               sub esp, 8
// 004943a8  56                   push esi
// 004943a9  8bf1                 mov esi, ecx
// 004943ab  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004943af  50                   push eax
// 004943b0  83ec50               sub esp, 0x50
// 004943b3  8d9424c8000000       lea edx, [esp + 0xc8]
// 004943ba  89642458             mov dword ptr [esp + 0x58], esp
// 004943be  8bcc                 mov ecx, esp
// 004943c0  52                   push edx
// 004943c1  c744246c01000000     mov dword ptr [esp + 0x6c], 1
// 004943c9  e86284ffff           call 0x48c830
// 004943ce  83ec50               sub esp, 0x50
// 004943d1  8d8424c8000000       lea eax, [esp + 0xc8]
// 004943d8  89a424ac000000       mov dword ptr [esp + 0xac], esp
// 004943df  8bcc                 mov ecx, esp
// 004943e1  50                   push eax
// 004943e2  c68424bc00000002     mov byte ptr [esp + 0xbc], 2
// 004943ea  e84184ffff           call 0x48c830
// 004943ef  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 004943f6  8b9424c0000000       mov edx, dword ptr [esp + 0xc0]
// 004943fd  51                   push ecx
// 004943fe  52                   push edx
// 004943ff  8bce                 mov ecx, esi
// 00494401  c68424c000000001     mov byte ptr [esp + 0xc0], 1
// 00494409  e8e2f7ffff           call 0x493bf0
// 0049440e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00494412  c644241400           mov byte ptr [esp + 0x14], 0
// 00494417  85c0                 test eax, eax
// 00494419  741d                 je 0x494438
// 0049441b  8b00                 mov eax, dword ptr [eax]
// 0049441d  85c0                 test eax, eax
// 0049441f  740f                 je 0x494430
// 00494421  8d4c242c             lea ecx, [esp + 0x2c]
// 00494425  6a01                 push 1
// 00494427  51                   push ecx
// 00494428  8bd1                 mov edx, ecx
// 0049442a  52                   push edx
// 0049442b  ffd0                 call eax
// 0049442d  83c40c               add esp, 0xc
// 00494430  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00494438  8b442474             mov eax, dword ptr [esp + 0x74]
// 0049443c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00494444  85c0                 test eax, eax
// 00494446  7415                 je 0x49445d
// 00494448  8b00                 mov eax, dword ptr [eax]
// 0049444a  85c0                 test eax, eax
// 0049444c  740f                 je 0x49445d
// 0049444e  8d4c247c             lea ecx, [esp + 0x7c]
// 00494452  6a01                 push 1
// 00494454  51                   push ecx
// 00494455  8bd1                 mov edx, ecx
// 00494457  52                   push edx
// 00494458  ffd0                 call eax
// 0049445a  83c40c               add esp, 0xc
// 0049445d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00494461  64890d00000000       mov dword ptr fs:[0], ecx
// 00494468  5e                   pop esi
// 00494469  83c414               add esp, 0x14
// 0049446c  c2a800               ret 0xa8
// library rbxgs/roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp (function ??$insert@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAEXV?$_Vector_const_iterator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@1@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp
