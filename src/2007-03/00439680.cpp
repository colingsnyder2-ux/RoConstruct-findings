// roc 2007-03 00439680  unit: seg_00430000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00439680
//
// 00439680  8b542404             mov edx, dword ptr [esp + 4]
// 00439684  8b02                 mov eax, dword ptr [edx]
// 00439686  56                   push esi
// 00439687  8b7008               mov esi, dword ptr [eax + 8]
// 0043968a  8932                 mov dword ptr [edx], esi
// 0043968c  8b7008               mov esi, dword ptr [eax + 8]
// 0043968f  807e2100             cmp byte ptr [esi + 0x21], 0
// 00439693  7503                 jne 0x439698
// 00439695  895604               mov dword ptr [esi + 4], edx
// 00439698  8b7204               mov esi, dword ptr [edx + 4]
// 0043969b  897004               mov dword ptr [eax + 4], esi
// 0043969e  8b4904               mov ecx, dword ptr [ecx + 4]
// 004396a1  3b5104               cmp edx, dword ptr [ecx + 4]
// 004396a4  5e                   pop esi
// 004396a5  750c                 jne 0x4396b3
// 004396a7  894104               mov dword ptr [ecx + 4], eax
// 004396aa  895008               mov dword ptr [eax + 8], edx
// 004396ad  894204               mov dword ptr [edx + 4], eax
// 004396b0  c20400               ret 4
// 004396b3  8b4a04               mov ecx, dword ptr [edx + 4]
// 004396b6  3b5108               cmp edx, dword ptr [ecx + 8]
// 004396b9  750c                 jne 0x4396c7
// 004396bb  894108               mov dword ptr [ecx + 8], eax
// 004396be  895008               mov dword ptr [eax + 8], edx
// 004396c1  894204               mov dword ptr [edx + 4], eax
// 004396c4  c20400               ret 4
// 004396c7  8901                 mov dword ptr [ecx], eax
// 004396c9  895008               mov dword ptr [eax + 8], edx
// 004396cc  894204               mov dword ptr [edx + 4], eax
// 004396cf  c20400               ret 4
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
