// roc 2007-03 004cd660  unit: seg_004c0000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cd660
//
// 004cd660  8b542404             mov edx, dword ptr [esp + 4]
// 004cd664  8b02                 mov eax, dword ptr [edx]
// 004cd666  56                   push esi
// 004cd667  8b7008               mov esi, dword ptr [eax + 8]
// 004cd66a  8932                 mov dword ptr [edx], esi
// 004cd66c  8b7008               mov esi, dword ptr [eax + 8]
// 004cd66f  807e3500             cmp byte ptr [esi + 0x35], 0
// 004cd673  7503                 jne 0x4cd678
// 004cd675  895604               mov dword ptr [esi + 4], edx
// 004cd678  8b7204               mov esi, dword ptr [edx + 4]
// 004cd67b  897004               mov dword ptr [eax + 4], esi
// 004cd67e  8b4904               mov ecx, dword ptr [ecx + 4]
// 004cd681  3b5104               cmp edx, dword ptr [ecx + 4]
// 004cd684  5e                   pop esi
// 004cd685  750c                 jne 0x4cd693
// 004cd687  894104               mov dword ptr [ecx + 4], eax
// 004cd68a  895008               mov dword ptr [eax + 8], edx
// 004cd68d  894204               mov dword ptr [edx + 4], eax
// 004cd690  c20400               ret 4
// 004cd693  8b4a04               mov ecx, dword ptr [edx + 4]
// 004cd696  3b5108               cmp edx, dword ptr [ecx + 8]
// 004cd699  750c                 jne 0x4cd6a7
// 004cd69b  894108               mov dword ptr [ecx + 8], eax
// 004cd69e  895008               mov dword ptr [eax + 8], edx
// 004cd6a1  894204               mov dword ptr [edx + 4], eax
// 004cd6a4  c20400               ret 4
// 004cd6a7  8901                 mov dword ptr [ecx], eax
// 004cd6a9  895008               mov dword ptr [eax + 8], edx
// 004cd6ac  894204               mov dword ptr [edx + 4], eax
// 004cd6af  c20400               ret 4
// library rbxgs-view/BrickMesh.cpp (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
