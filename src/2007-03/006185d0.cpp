// roc 2007-03 006185d0  unit: seg_00610000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006185d0
//
// 006185d0  8b542404             mov edx, dword ptr [esp + 4]
// 006185d4  8b02                 mov eax, dword ptr [edx]
// 006185d6  56                   push esi
// 006185d7  8b7008               mov esi, dword ptr [eax + 8]
// 006185da  8932                 mov dword ptr [edx], esi
// 006185dc  8b7008               mov esi, dword ptr [eax + 8]
// 006185df  807e0e00             cmp byte ptr [esi + 0xe], 0
// 006185e3  7503                 jne 0x6185e8
// 006185e5  895604               mov dword ptr [esi + 4], edx
// 006185e8  8b7204               mov esi, dword ptr [edx + 4]
// 006185eb  897004               mov dword ptr [eax + 4], esi
// 006185ee  8b4904               mov ecx, dword ptr [ecx + 4]
// 006185f1  3b5104               cmp edx, dword ptr [ecx + 4]
// 006185f4  5e                   pop esi
// 006185f5  750c                 jne 0x618603
// 006185f7  894104               mov dword ptr [ecx + 4], eax
// 006185fa  895008               mov dword ptr [eax + 8], edx
// 006185fd  894204               mov dword ptr [edx + 4], eax
// 00618600  c20400               ret 4
// 00618603  8b4a04               mov ecx, dword ptr [edx + 4]
// 00618606  3b5108               cmp edx, dword ptr [ecx + 8]
// 00618609  750c                 jne 0x618617
// 0061860b  894108               mov dword ptr [ecx + 8], eax
// 0061860e  895008               mov dword ptr [eax + 8], edx
// 00618611  894204               mov dword ptr [edx + 4], eax
// 00618614  c20400               ret 4
// 00618617  8901                 mov dword ptr [ecx], eax
// 00618619  895008               mov dword ptr [eax + 8], edx
// 0061861c  894204               mov dword ptr [edx + 4], eax
// 0061861f  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?_Rrotate@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
