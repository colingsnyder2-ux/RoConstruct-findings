// roc 2007-03 00618780  unit: seg_00610000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00618780
//
// 00618780  8b542404             mov edx, dword ptr [esp + 4]
// 00618784  8b4208               mov eax, dword ptr [edx + 8]
// 00618787  56                   push esi
// 00618788  8b30                 mov esi, dword ptr [eax]
// 0061878a  897208               mov dword ptr [edx + 8], esi
// 0061878d  8b30                 mov esi, dword ptr [eax]
// 0061878f  807e0e00             cmp byte ptr [esi + 0xe], 0
// 00618793  7503                 jne 0x618798
// 00618795  895604               mov dword ptr [esi + 4], edx
// 00618798  8b7204               mov esi, dword ptr [edx + 4]
// 0061879b  897004               mov dword ptr [eax + 4], esi
// 0061879e  8b4904               mov ecx, dword ptr [ecx + 4]
// 006187a1  3b5104               cmp edx, dword ptr [ecx + 4]
// 006187a4  5e                   pop esi
// 006187a5  750b                 jne 0x6187b2
// 006187a7  894104               mov dword ptr [ecx + 4], eax
// 006187aa  8910                 mov dword ptr [eax], edx
// 006187ac  894204               mov dword ptr [edx + 4], eax
// 006187af  c20400               ret 4
// 006187b2  8b4a04               mov ecx, dword ptr [edx + 4]
// 006187b5  3b11                 cmp edx, dword ptr [ecx]
// 006187b7  750a                 jne 0x6187c3
// 006187b9  8901                 mov dword ptr [ecx], eax
// 006187bb  8910                 mov dword ptr [eax], edx
// 006187bd  894204               mov dword ptr [edx + 4], eax
// 006187c0  c20400               ret 4
// 006187c3  894108               mov dword ptr [ecx + 8], eax
// 006187c6  8910                 mov dword ptr [eax], edx
// 006187c8  894204               mov dword ptr [edx + 4], eax
// 006187cb  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?_Lrotate@?$_Tree@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@DU?$less@D@std@@V?$allocator@D@2@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
