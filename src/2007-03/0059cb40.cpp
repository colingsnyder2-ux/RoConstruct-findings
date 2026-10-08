// roc 2007-03 0059cb40  unit: seg_00590000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059cb40
//
// 0059cb40  8b542404             mov edx, dword ptr [esp + 4]
// 0059cb44  8b4208               mov eax, dword ptr [edx + 8]
// 0059cb47  56                   push esi
// 0059cb48  8b30                 mov esi, dword ptr [eax]
// 0059cb4a  897208               mov dword ptr [edx + 8], esi
// 0059cb4d  8b30                 mov esi, dword ptr [eax]
// 0059cb4f  807e1500             cmp byte ptr [esi + 0x15], 0
// 0059cb53  7503                 jne 0x59cb58
// 0059cb55  895604               mov dword ptr [esi + 4], edx
// 0059cb58  8b7204               mov esi, dword ptr [edx + 4]
// 0059cb5b  897004               mov dword ptr [eax + 4], esi
// 0059cb5e  8b4904               mov ecx, dword ptr [ecx + 4]
// 0059cb61  3b5104               cmp edx, dword ptr [ecx + 4]
// 0059cb64  5e                   pop esi
// 0059cb65  750b                 jne 0x59cb72
// 0059cb67  894104               mov dword ptr [ecx + 4], eax
// 0059cb6a  8910                 mov dword ptr [eax], edx
// 0059cb6c  894204               mov dword ptr [edx + 4], eax
// 0059cb6f  c20400               ret 4
// 0059cb72  8b4a04               mov ecx, dword ptr [edx + 4]
// 0059cb75  3b11                 cmp edx, dword ptr [ecx]
// 0059cb77  750a                 jne 0x59cb83
// 0059cb79  8901                 mov dword ptr [ecx], eax
// 0059cb7b  8910                 mov dword ptr [eax], edx
// 0059cb7d  894204               mov dword ptr [edx + 4], eax
// 0059cb80  c20400               ret 4
// 0059cb83  894108               mov dword ptr [ecx + 8], eax
// 0059cb86  8910                 mov dword ptr [eax], edx
// 0059cb88  894204               mov dword ptr [edx + 4], eax
// 0059cb8b  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
