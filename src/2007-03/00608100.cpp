// roc 2007-03 00608100  unit: seg_00600000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00608100
//
// 00608100  8b542404             mov edx, dword ptr [esp + 4]
// 00608104  8b4208               mov eax, dword ptr [edx + 8]
// 00608107  56                   push esi
// 00608108  8b30                 mov esi, dword ptr [eax]
// 0060810a  897208               mov dword ptr [edx + 8], esi
// 0060810d  8b30                 mov esi, dword ptr [eax]
// 0060810f  807e3500             cmp byte ptr [esi + 0x35], 0
// 00608113  7503                 jne 0x608118
// 00608115  895604               mov dword ptr [esi + 4], edx
// 00608118  8b7204               mov esi, dword ptr [edx + 4]
// 0060811b  897004               mov dword ptr [eax + 4], esi
// 0060811e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00608121  3b5104               cmp edx, dword ptr [ecx + 4]
// 00608124  5e                   pop esi
// 00608125  750b                 jne 0x608132
// 00608127  894104               mov dword ptr [ecx + 4], eax
// 0060812a  8910                 mov dword ptr [eax], edx
// 0060812c  894204               mov dword ptr [edx + 4], eax
// 0060812f  c20400               ret 4
// 00608132  8b4a04               mov ecx, dword ptr [edx + 4]
// 00608135  3b11                 cmp edx, dword ptr [ecx]
// 00608137  750a                 jne 0x608143
// 00608139  8901                 mov dword ptr [ecx], eax
// 0060813b  8910                 mov dword ptr [eax], edx
// 0060813d  894204               mov dword ptr [edx + 4], eax
// 00608140  c20400               ret 4
// 00608143  894108               mov dword ptr [ecx + 8], eax
// 00608146  8910                 mov dword ptr [eax], edx
// 00608148  894204               mov dword ptr [edx + 4], eax
// 0060814b  c20400               ret 4
// library rbxgs-view/BrickMesh.cpp (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
