// roc 2007-03 004e2c70  unit: seg_004e0000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e2c70
//
// 004e2c70  8b542404             mov edx, dword ptr [esp + 4]
// 004e2c74  8b02                 mov eax, dword ptr [edx]
// 004e2c76  56                   push esi
// 004e2c77  8b7008               mov esi, dword ptr [eax + 8]
// 004e2c7a  8932                 mov dword ptr [edx], esi
// 004e2c7c  8b7008               mov esi, dword ptr [eax + 8]
// 004e2c7f  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 004e2c83  7503                 jne 0x4e2c88
// 004e2c85  895604               mov dword ptr [esi + 4], edx
// 004e2c88  8b7204               mov esi, dword ptr [edx + 4]
// 004e2c8b  897004               mov dword ptr [eax + 4], esi
// 004e2c8e  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e2c91  3b5104               cmp edx, dword ptr [ecx + 4]
// 004e2c94  5e                   pop esi
// 004e2c95  750c                 jne 0x4e2ca3
// 004e2c97  894104               mov dword ptr [ecx + 4], eax
// 004e2c9a  895008               mov dword ptr [eax + 8], edx
// 004e2c9d  894204               mov dword ptr [edx + 4], eax
// 004e2ca0  c20400               ret 4
// 004e2ca3  8b4a04               mov ecx, dword ptr [edx + 4]
// 004e2ca6  3b5108               cmp edx, dword ptr [ecx + 8]
// 004e2ca9  750c                 jne 0x4e2cb7
// 004e2cab  894108               mov dword ptr [ecx + 8], eax
// 004e2cae  895008               mov dword ptr [eax + 8], edx
// 004e2cb1  894204               mov dword ptr [edx + 4], eax
// 004e2cb4  c20400               ret 4
// 004e2cb7  8901                 mov dword ptr [ecx], eax
// 004e2cb9  895008               mov dword ptr [eax + 8], edx
// 004e2cbc  894204               mov dword ptr [edx + 4], eax
// 004e2cbf  c20400               ret 4
// library rbxgs/v8world\Block.cpp (function ?_Rrotate@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
