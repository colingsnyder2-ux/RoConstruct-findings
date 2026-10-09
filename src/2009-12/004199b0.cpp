// roc 2009-12 004199b0  unit: InsertService  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004199b0
//
// 004199b0  51                   push ecx
// 004199b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004199b5  8b11                 mov edx, dword ptr [ecx]
// 004199b7  8b442408             mov eax, dword ptr [esp + 8]
// 004199bb  8910                 mov dword ptr [eax], edx
// 004199bd  8b4904               mov ecx, dword ptr [ecx + 4]
// 004199c0  c7042400000000       mov dword ptr [esp], 0
// 004199c7  894804               mov dword ptr [eax + 4], ecx
// 004199ca  85c9                 test ecx, ecx
// 004199cc  740c                 je 0x4199da
// 004199ce  83c104               add ecx, 4
// 004199d1  ba01000000           mov edx, 1
// 004199d6  f00fc111             lock xadd dword ptr [ecx], edx
// 004199da  59                   pop ecx
// 004199db  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??$shared_static_cast@VGuiItem@RBX@@VInstance@2@@boost@@YA?AV?$shared_ptr@VGuiItem@RBX@@@0@ABV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
