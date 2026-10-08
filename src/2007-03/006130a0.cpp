// roc 2007-03 006130a0  unit: seg_00610000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006130a0
//
// 006130a0  8b542404             mov edx, dword ptr [esp + 4]
// 006130a4  8b4208               mov eax, dword ptr [edx + 8]
// 006130a7  56                   push esi
// 006130a8  8b30                 mov esi, dword ptr [eax]
// 006130aa  897208               mov dword ptr [edx + 8], esi
// 006130ad  8b30                 mov esi, dword ptr [eax]
// 006130af  807e1100             cmp byte ptr [esi + 0x11], 0
// 006130b3  7503                 jne 0x6130b8
// 006130b5  895604               mov dword ptr [esi + 4], edx
// 006130b8  8b7204               mov esi, dword ptr [edx + 4]
// 006130bb  897004               mov dword ptr [eax + 4], esi
// 006130be  8b4904               mov ecx, dword ptr [ecx + 4]
// 006130c1  3b5104               cmp edx, dword ptr [ecx + 4]
// 006130c4  5e                   pop esi
// 006130c5  750b                 jne 0x6130d2
// 006130c7  894104               mov dword ptr [ecx + 4], eax
// 006130ca  8910                 mov dword ptr [eax], edx
// 006130cc  894204               mov dword ptr [edx + 4], eax
// 006130cf  c20400               ret 4
// 006130d2  8b4a04               mov ecx, dword ptr [edx + 4]
// 006130d5  3b11                 cmp edx, dword ptr [ecx]
// 006130d7  750a                 jne 0x6130e3
// 006130d9  8901                 mov dword ptr [ecx], eax
// 006130db  8910                 mov dword ptr [eax], edx
// 006130dd  894204               mov dword ptr [edx + 4], eax
// 006130e0  c20400               ret 4
// 006130e3  894108               mov dword ptr [ecx + 8], eax
// 006130e6  8910                 mov dword ptr [eax], edx
// 006130e8  894204               mov dword ptr [edx + 4], eax
// 006130eb  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ?_Lrotate@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
