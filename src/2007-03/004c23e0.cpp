// roc 2007-03 004c23e0  unit: seg_004c0000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c23e0
//
// 004c23e0  8b542404             mov edx, dword ptr [esp + 4]
// 004c23e4  8b4208               mov eax, dword ptr [edx + 8]
// 004c23e7  56                   push esi
// 004c23e8  8b30                 mov esi, dword ptr [eax]
// 004c23ea  897208               mov dword ptr [edx + 8], esi
// 004c23ed  8b30                 mov esi, dword ptr [eax]
// 004c23ef  807e2100             cmp byte ptr [esi + 0x21], 0
// 004c23f3  7503                 jne 0x4c23f8
// 004c23f5  895604               mov dword ptr [esi + 4], edx
// 004c23f8  8b7204               mov esi, dword ptr [edx + 4]
// 004c23fb  897004               mov dword ptr [eax + 4], esi
// 004c23fe  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c2401  3b5104               cmp edx, dword ptr [ecx + 4]
// 004c2404  5e                   pop esi
// 004c2405  750b                 jne 0x4c2412
// 004c2407  894104               mov dword ptr [ecx + 4], eax
// 004c240a  8910                 mov dword ptr [eax], edx
// 004c240c  894204               mov dword ptr [edx + 4], eax
// 004c240f  c20400               ret 4
// 004c2412  8b4a04               mov ecx, dword ptr [edx + 4]
// 004c2415  3b11                 cmp edx, dword ptr [ecx]
// 004c2417  750a                 jne 0x4c2423
// 004c2419  8901                 mov dword ptr [ecx], eax
// 004c241b  8910                 mov dword ptr [eax], edx
// 004c241d  894204               mov dword ptr [edx + 4], eax
// 004c2420  c20400               ret 4
// 004c2423  894108               mov dword ptr [ecx + 8], eax
// 004c2426  8910                 mov dword ptr [eax], edx
// 004c2428  894204               mov dword ptr [edx + 4], eax
// 004c242b  c20400               ret 4
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@W4Number@BrickColor@RBX@@VColor4@G3D@@U?$less@W4Number@BrickColor@RBX@@@std@@V?$allocator@U?$pair@$$CBW4Number@BrickColor@RBX@@VColor4@G3D@@@std@@@7@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
