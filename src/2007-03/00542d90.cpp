// roc 2007-03 00542d90  unit: seg_00540000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00542d90
//
// 00542d90  8b542404             mov edx, dword ptr [esp + 4]
// 00542d94  8b4208               mov eax, dword ptr [edx + 8]
// 00542d97  56                   push esi
// 00542d98  8b30                 mov esi, dword ptr [eax]
// 00542d9a  897208               mov dword ptr [edx + 8], esi
// 00542d9d  8b30                 mov esi, dword ptr [eax]
// 00542d9f  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00542da3  7503                 jne 0x542da8
// 00542da5  895604               mov dword ptr [esi + 4], edx
// 00542da8  8b7204               mov esi, dword ptr [edx + 4]
// 00542dab  897004               mov dword ptr [eax + 4], esi
// 00542dae  8b4904               mov ecx, dword ptr [ecx + 4]
// 00542db1  3b5104               cmp edx, dword ptr [ecx + 4]
// 00542db4  5e                   pop esi
// 00542db5  750b                 jne 0x542dc2
// 00542db7  894104               mov dword ptr [ecx + 4], eax
// 00542dba  8910                 mov dword ptr [eax], edx
// 00542dbc  894204               mov dword ptr [edx + 4], eax
// 00542dbf  c20400               ret 4
// 00542dc2  8b4a04               mov ecx, dword ptr [edx + 4]
// 00542dc5  3b11                 cmp edx, dword ptr [ecx]
// 00542dc7  750a                 jne 0x542dd3
// 00542dc9  8901                 mov dword ptr [ecx], eax
// 00542dcb  8910                 mov dword ptr [eax], edx
// 00542dcd  894204               mov dword ptr [edx + 4], eax
// 00542dd0  c20400               ret 4
// 00542dd3  894108               mov dword ptr [ecx + 8], eax
// 00542dd6  8910                 mov dword ptr [eax], edx
// 00542dd8  894204               mov dword ptr [edx + 4], eax
// 00542ddb  c20400               ret 4
// library rbxgs/util\Name.cpp (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
