// roc 2007-08 004621e0  unit: CSelectionCaption  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004621e0
//
// 004621e0  51                   push ecx
// 004621e1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004621e5  8b11                 mov edx, dword ptr [ecx]
// 004621e7  8b442408             mov eax, dword ptr [esp + 8]
// 004621eb  8910                 mov dword ptr [eax], edx
// 004621ed  8b4904               mov ecx, dword ptr [ecx + 4]
// 004621f0  85c9                 test ecx, ecx
// 004621f2  c7042400000000       mov dword ptr [esp], 0
// 004621f9  894804               mov dword ptr [eax + 4], ecx
// 004621fc  740c                 je 0x46220a
// 004621fe  83c104               add ecx, 4
// 00462201  ba01000000           mov edx, 1
// 00462206  f00fc111             lock xadd dword ptr [ecx], edx
// 0046220a  59                   pop ecx
// 0046220b  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??$shared_static_cast@VGuiItem@RBX@@VInstance@2@@boost@@YA?AV?$shared_ptr@VGuiItem@RBX@@@0@ABV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
