// roc 2009-06 004327d0  unit: IIHAAH::?$CMap  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004327d0
//
// 004327d0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004327d4  8b442414             mov eax, dword ptr [esp + 0x14]
// 004327d8  3bc8                 cmp ecx, eax
// 004327da  7411                 je 0x4327ed
// 004327dc  8b542418             mov edx, dword ptr [esp + 0x18]
// 004327e0  8b12                 mov edx, dword ptr [edx]
// 004327e2  3911                 cmp dword ptr [ecx], edx
// 004327e4  7407                 je 0x4327ed
// 004327e6  83c108               add ecx, 8
// 004327e9  3bc8                 cmp ecx, eax
// 004327eb  75f5                 jne 0x4327e2
// 004327ed  8b442404             mov eax, dword ptr [esp + 4]
// 004327f1  8b542408             mov edx, dword ptr [esp + 8]
// 004327f5  8910                 mov dword ptr [eax], edx
// 004327f7  894804               mov dword ptr [eax + 4], ecx
// 004327fa  c3                   ret 
// library rbxgs/v8datamodel\Selection.cpp (function ??$find@V?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@YA?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@V10@0ABV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
