// roc 2007-03 005801f0  unit: seg_00580000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005801f0
//
// 005801f0  8b542404             mov edx, dword ptr [esp + 4]
// 005801f4  8b02                 mov eax, dword ptr [edx]
// 005801f6  56                   push esi
// 005801f7  8b7008               mov esi, dword ptr [eax + 8]
// 005801fa  8932                 mov dword ptr [edx], esi
// 005801fc  8b7008               mov esi, dword ptr [eax + 8]
// 005801ff  807e1500             cmp byte ptr [esi + 0x15], 0
// 00580203  7503                 jne 0x580208
// 00580205  895604               mov dword ptr [esi + 4], edx
// 00580208  8b7204               mov esi, dword ptr [edx + 4]
// 0058020b  897004               mov dword ptr [eax + 4], esi
// 0058020e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00580211  3b5104               cmp edx, dword ptr [ecx + 4]
// 00580214  5e                   pop esi
// 00580215  750c                 jne 0x580223
// 00580217  894104               mov dword ptr [ecx + 4], eax
// 0058021a  895008               mov dword ptr [eax + 8], edx
// 0058021d  894204               mov dword ptr [edx + 4], eax
// 00580220  c20400               ret 4
// 00580223  8b4a04               mov ecx, dword ptr [edx + 4]
// 00580226  3b5108               cmp edx, dword ptr [ecx + 8]
// 00580229  750c                 jne 0x580237
// 0058022b  894108               mov dword ptr [ecx + 8], eax
// 0058022e  895008               mov dword ptr [eax + 8], edx
// 00580231  894204               mov dword ptr [edx + 4], eax
// 00580234  c20400               ret 4
// 00580237  8901                 mov dword ptr [ecx], eax
// 00580239  895008               mov dword ptr [eax + 8], edx
// 0058023c  894204               mov dword ptr [edx + 4], eax
// 0058023f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
