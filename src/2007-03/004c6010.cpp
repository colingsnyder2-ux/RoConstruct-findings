// roc 2007-03 004c6010  unit: seg_004c0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c6010
//
// 004c6010  6a2c                 push 0x2c
// 004c6012  e8f1801500           call 0x61e108
// 004c6017  83c404               add esp, 4
// 004c601a  85c0                 test eax, eax
// 004c601c  7406                 je 0x4c6024
// 004c601e  c70000000000         mov dword ptr [eax], 0
// 004c6024  8d4804               lea ecx, [eax + 4]
// 004c6027  85c9                 test ecx, ecx
// 004c6029  7406                 je 0x4c6031
// 004c602b  c70100000000         mov dword ptr [ecx], 0
// 004c6031  8d4808               lea ecx, [eax + 8]
// 004c6034  85c9                 test ecx, ecx
// 004c6036  7406                 je 0x4c603e
// 004c6038  c70100000000         mov dword ptr [ecx], 0
// 004c603e  c6402801             mov byte ptr [eax + 0x28], 1
// 004c6042  c6402900             mov byte ptr [eax + 0x29], 0
// 004c6046  c3                   ret 
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Buynode@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
