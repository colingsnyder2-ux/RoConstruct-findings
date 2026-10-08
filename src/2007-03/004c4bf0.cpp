// roc 2007-03 004c4bf0  unit: seg_004c0000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4bf0
//
// 004c4bf0  8b542404             mov edx, dword ptr [esp + 4]
// 004c4bf4  8b4208               mov eax, dword ptr [edx + 8]
// 004c4bf7  56                   push esi
// 004c4bf8  8b30                 mov esi, dword ptr [eax]
// 004c4bfa  897208               mov dword ptr [edx + 8], esi
// 004c4bfd  8b30                 mov esi, dword ptr [eax]
// 004c4bff  807e2900             cmp byte ptr [esi + 0x29], 0
// 004c4c03  7503                 jne 0x4c4c08
// 004c4c05  895604               mov dword ptr [esi + 4], edx
// 004c4c08  8b7204               mov esi, dword ptr [edx + 4]
// 004c4c0b  897004               mov dword ptr [eax + 4], esi
// 004c4c0e  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c4c11  3b5104               cmp edx, dword ptr [ecx + 4]
// 004c4c14  5e                   pop esi
// 004c4c15  750b                 jne 0x4c4c22
// 004c4c17  894104               mov dword ptr [ecx + 4], eax
// 004c4c1a  8910                 mov dword ptr [eax], edx
// 004c4c1c  894204               mov dword ptr [edx + 4], eax
// 004c4c1f  c20400               ret 4
// 004c4c22  8b4a04               mov ecx, dword ptr [edx + 4]
// 004c4c25  3b11                 cmp edx, dword ptr [ecx]
// 004c4c27  750a                 jne 0x4c4c33
// 004c4c29  8901                 mov dword ptr [ecx], eax
// 004c4c2b  8910                 mov dword ptr [eax], edx
// 004c4c2d  894204               mov dword ptr [edx + 4], eax
// 004c4c30  c20400               ret 4
// 004c4c33  894108               mov dword ptr [ecx + 8], eax
// 004c4c36  8910                 mov dword ptr [eax], edx
// 004c4c38  894204               mov dword ptr [edx + 4], eax
// 004c4c3b  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Lrotate@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
