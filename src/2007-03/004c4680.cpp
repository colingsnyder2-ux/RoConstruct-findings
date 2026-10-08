// roc 2007-03 004c4680  unit: seg_004c0000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4680
//
// 004c4680  8b542404             mov edx, dword ptr [esp + 4]
// 004c4684  8b02                 mov eax, dword ptr [edx]
// 004c4686  56                   push esi
// 004c4687  8b7008               mov esi, dword ptr [eax + 8]
// 004c468a  8932                 mov dword ptr [edx], esi
// 004c468c  8b7008               mov esi, dword ptr [eax + 8]
// 004c468f  807e2900             cmp byte ptr [esi + 0x29], 0
// 004c4693  7503                 jne 0x4c4698
// 004c4695  895604               mov dword ptr [esi + 4], edx
// 004c4698  8b7204               mov esi, dword ptr [edx + 4]
// 004c469b  897004               mov dword ptr [eax + 4], esi
// 004c469e  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c46a1  3b5104               cmp edx, dword ptr [ecx + 4]
// 004c46a4  5e                   pop esi
// 004c46a5  750c                 jne 0x4c46b3
// 004c46a7  894104               mov dword ptr [ecx + 4], eax
// 004c46aa  895008               mov dword ptr [eax + 8], edx
// 004c46ad  894204               mov dword ptr [edx + 4], eax
// 004c46b0  c20400               ret 4
// 004c46b3  8b4a04               mov ecx, dword ptr [edx + 4]
// 004c46b6  3b5108               cmp edx, dword ptr [ecx + 8]
// 004c46b9  750c                 jne 0x4c46c7
// 004c46bb  894108               mov dword ptr [ecx + 8], eax
// 004c46be  895008               mov dword ptr [eax + 8], edx
// 004c46c1  894204               mov dword ptr [edx + 4], eax
// 004c46c4  c20400               ret 4
// 004c46c7  8901                 mov dword ptr [ecx], eax
// 004c46c9  895008               mov dword ptr [eax + 8], edx
// 004c46cc  894204               mov dword ptr [edx + 4], eax
// 004c46cf  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Rrotate@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
