// roc 2007-03 005abf00  unit: seg_005a0000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abf00
//
// 005abf00  8b542404             mov edx, dword ptr [esp + 4]
// 005abf04  8b02                 mov eax, dword ptr [edx]
// 005abf06  56                   push esi
// 005abf07  8b7008               mov esi, dword ptr [eax + 8]
// 005abf0a  8932                 mov dword ptr [edx], esi
// 005abf0c  8b7008               mov esi, dword ptr [eax + 8]
// 005abf0f  807e1100             cmp byte ptr [esi + 0x11], 0
// 005abf13  7503                 jne 0x5abf18
// 005abf15  895604               mov dword ptr [esi + 4], edx
// 005abf18  8b7204               mov esi, dword ptr [edx + 4]
// 005abf1b  897004               mov dword ptr [eax + 4], esi
// 005abf1e  8b4904               mov ecx, dword ptr [ecx + 4]
// 005abf21  3b5104               cmp edx, dword ptr [ecx + 4]
// 005abf24  5e                   pop esi
// 005abf25  750c                 jne 0x5abf33
// 005abf27  894104               mov dword ptr [ecx + 4], eax
// 005abf2a  895008               mov dword ptr [eax + 8], edx
// 005abf2d  894204               mov dword ptr [edx + 4], eax
// 005abf30  c20400               ret 4
// 005abf33  8b4a04               mov ecx, dword ptr [edx + 4]
// 005abf36  3b5108               cmp edx, dword ptr [ecx + 8]
// 005abf39  750c                 jne 0x5abf47
// 005abf3b  894108               mov dword ptr [ecx + 8], eax
// 005abf3e  895008               mov dword ptr [eax + 8], edx
// 005abf41  894204               mov dword ptr [edx + 4], eax
// 005abf44  c20400               ret 4
// 005abf47  8901                 mov dword ptr [ecx], eax
// 005abf49  895008               mov dword ptr [eax + 8], edx
// 005abf4c  894204               mov dword ptr [edx + 4], eax
// 005abf4f  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ?_Rrotate@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
