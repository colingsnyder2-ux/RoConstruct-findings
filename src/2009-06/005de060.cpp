// from server: 100% by auto
// roc 2009-06 005de060  unit: RBX::VInstance::?$NonFactoryProduct  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005de060
//
// 005de060  55                   push ebp
// 005de061  8bec                 mov ebp, esp
// 005de063  6aff                 push -1
// 005de065  6870388600           push 0x863870
// 005de06a  64a100000000         mov eax, dword ptr fs:[0]
// 005de070  50                   push eax
// 005de071  64892500000000       mov dword ptr fs:[0], esp
// 005de078  83ec54               sub esp, 0x54
// 005de07b  53                   push ebx
// 005de07c  56                   push esi
// 005de07d  8bf1                 mov esi, ecx
// 005de07f  8b560c               mov edx, dword ptr [esi + 0xc]
// 005de082  57                   push edi
// 005de083  8965f0               mov dword ptr [ebp - 0x10], esp
// 005de086  8975e0               mov dword ptr [ebp - 0x20], esi
// 005de089  85d2                 test edx, edx
// 005de08b  7504                 jne 0x5de091
// 005de08d  33db                 xor ebx, ebx
// 005de08f  eb08                 jmp 0x5de099
// 005de091  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 005de094  2bda                 sub ebx, edx
// 005de096  c1fb05               sar ebx, 5
// 005de099  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 005de09c  85ff                 test edi, edi
// 005de09e  0f847a020000         je 0x5de31e
// 005de0a4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005de0a7  8bc1                 mov eax, ecx
// 005de0a9  2bc2                 sub eax, edx
// 005de0ab  c1f805               sar eax, 5
// 005de0ae  baffffff07           mov edx, 0x7ffffff
// 005de0b3  2bd0                 sub edx, eax
// 005de0b5  3bd7                 cmp edx, edi
// 005de0b7  7305                 jae 0x5de0be
// 005de0b9  e8a222ebff           call 0x490360
// 005de0be  8d1438               lea edx, [eax + edi]
// 005de0c1  3bda                 cmp ebx, edx
// 005de0c3  0f835b010000         jae 0x5de224
// 005de0c9  8bc3                 mov eax, ebx
// 005de0cb  d1e8                 shr eax, 1
// 005de0cd  b9ffffff07           mov ecx, 0x7ffffff
// 005de0d2  2bc8                 sub ecx, eax
// 005de0d4  3bcb                 cmp ecx, ebx
// 005de0d6  7304                 jae 0x5de0dc
// 005de0d8  33db                 xor ebx, ebx
// 005de0da  eb02                 jmp 0x5de0de
// 005de0dc  03d8                 add ebx, eax
// 005de0de  3bda                 cmp ebx, edx
// 005de0e0  7302                 jae 0x5de0e4
// 005de0e2  8bda                 mov ebx, edx
// 005de0e4  6a00                 push 0
// 005de0e6  53                   push ebx
// 005de0e7  e8c4b1ffff           call 0x5d92b0
// 005de0ec  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005de0ef  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 005de0f2  33d2                 xor edx, edx
// 005de0f4  c1f905               sar ecx, 5
// 005de0f7  83c408               add esp, 8
// 005de0fa  894de4               mov dword ptr [ebp - 0x1c], ecx
// 005de0fd  8955e8               mov dword ptr [ebp - 0x18], edx
// 005de100  8955fc               mov dword ptr [ebp - 4], edx
// 005de103  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005de106  52                   push edx
// 005de107  c1e105               shl ecx, 5
// 005de10a  03c8                 add ecx, eax
// 005de10c  57                   push edi
// 005de10d  51                   push ecx
// 005de10e  8bce                 mov ecx, esi
// 005de110  8945ec               mov dword ptr [ebp - 0x14], eax
// 005de113  e858faffff           call 0x5ddb70
// 005de118  8b460c               mov eax, dword ptr [esi + 0xc]
// 005de11b  c6451400             mov byte ptr [ebp + 0x14], 0
// 005de11f  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005de122  52                   push edx
// 005de123  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005de126  52                   push edx
// 005de127  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005de12a  8d4e08               lea ecx, [esi + 8]
// 005de12d  51                   push ecx
// 005de12e  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005de131  51                   push ecx
// 005de132  52                   push edx
// 005de133  50                   push eax
// 005de134  c745e801000000       mov dword ptr [ebp - 0x18], 1
// 005de13b  e850dcffff           call 0x5dbd90
// 005de140  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 005de143  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005de146  83c418               add esp, 0x18
// 005de149  c6451400             mov byte ptr [ebp + 0x14], 0
// 005de14d  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005de150  52                   push edx
// 005de151  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005de154  03c7                 add eax, edi
// 005de156  52                   push edx
// 005de157  c1e005               shl eax, 5
// 005de15a  0345ec               add eax, dword ptr [ebp - 0x14]
// 005de15d  8d5608               lea edx, [esi + 8]
// 005de160  52                   push edx
// 005de161  50                   push eax
// 005de162  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005de165  51                   push ecx
// 005de166  50                   push eax
// 005de167  c745e802000000       mov dword ptr [ebp - 0x18], 2
// 005de16e  e81ddcffff           call 0x5dbd90
// 005de173  8b460c               mov eax, dword ptr [esi + 0xc]
// 005de176  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005de179  2bc8                 sub ecx, eax
// 005de17b  c1f905               sar ecx, 5
// 005de17e  83c418               add esp, 0x18
// 005de181  03f9                 add edi, ecx
// 005de183  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 005de18a  85c0                 test eax, eax
// 005de18c  741e                 je 0x5de1ac
// 005de18e  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005de191  52                   push edx
// 005de192  8d4e08               lea ecx, [esi + 8]
// 005de195  51                   push ecx
// 005de196  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005de199  51                   push ecx
// 005de19a  50                   push eax
// 005de19b  e880e5ffff           call 0x5dc720
// 005de1a0  8b560c               mov edx, dword ptr [esi + 0xc]
// 005de1a3  52                   push edx
// 005de1a4  e889a81300           call 0x718a32
// 005de1a9  83c414               add esp, 0x14
// 005de1ac  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 005de1af  c1e305               shl ebx, 5
// 005de1b2  03d8                 add ebx, eax
// 005de1b4  c1e705               shl edi, 5
// 005de1b7  03f8                 add edi, eax
// 005de1b9  895e14               mov dword ptr [esi + 0x14], ebx
// 005de1bc  897e10               mov dword ptr [esi + 0x10], edi
// 005de1bf  89460c               mov dword ptr [esi + 0xc], eax
// 005de1c2  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005de1c5  64890d00000000       mov dword ptr fs:[0], ecx
// 005de1cc  5f                   pop edi
// 005de1cd  5e                   pop esi
// 005de1ce  5b                   pop ebx
// 005de1cf  8be5                 mov esp, ebp
// 005de1d1  5d                   pop ebp
// 005de1d2  c21000               ret 0x10
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Insert_n@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXV?$_Vector_const_iterator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@2@IABV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
