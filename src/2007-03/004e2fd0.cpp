// roc 2007-03 004e2fd0  unit: seg_004e0000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e2fd0
//
// 004e2fd0  8b542404             mov edx, dword ptr [esp + 4]
// 004e2fd4  8b4208               mov eax, dword ptr [edx + 8]
// 004e2fd7  56                   push esi
// 004e2fd8  8b30                 mov esi, dword ptr [eax]
// 004e2fda  897208               mov dword ptr [edx + 8], esi
// 004e2fdd  8b30                 mov esi, dword ptr [eax]
// 004e2fdf  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 004e2fe3  7503                 jne 0x4e2fe8
// 004e2fe5  895604               mov dword ptr [esi + 4], edx
// 004e2fe8  8b7204               mov esi, dword ptr [edx + 4]
// 004e2feb  897004               mov dword ptr [eax + 4], esi
// 004e2fee  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e2ff1  3b5104               cmp edx, dword ptr [ecx + 4]
// 004e2ff4  5e                   pop esi
// 004e2ff5  750b                 jne 0x4e3002
// 004e2ff7  894104               mov dword ptr [ecx + 4], eax
// 004e2ffa  8910                 mov dword ptr [eax], edx
// 004e2ffc  894204               mov dword ptr [edx + 4], eax
// 004e2fff  c20400               ret 4
// 004e3002  8b4a04               mov ecx, dword ptr [edx + 4]
// 004e3005  3b11                 cmp edx, dword ptr [ecx]
// 004e3007  750a                 jne 0x4e3013
// 004e3009  8901                 mov dword ptr [ecx], eax
// 004e300b  8910                 mov dword ptr [eax], edx
// 004e300d  894204               mov dword ptr [edx + 4], eax
// 004e3010  c20400               ret 4
// 004e3013  894108               mov dword ptr [ecx + 8], eax
// 004e3016  8910                 mov dword ptr [eax], edx
// 004e3018  894204               mov dword ptr [edx + 4], eax
// 004e301b  c20400               ret 4
// library rbxgs/v8world\Block.cpp (function ?_Lrotate@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
