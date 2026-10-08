// roc 2007-03 00486240  unit: seg_00480000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00486240
//
// 00486240  51                   push ecx
// 00486241  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00486245  8b11                 mov edx, dword ptr [ecx]
// 00486247  8b442408             mov eax, dword ptr [esp + 8]
// 0048624b  8910                 mov dword ptr [eax], edx
// 0048624d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00486250  85c9                 test ecx, ecx
// 00486252  c7042400000000       mov dword ptr [esp], 0
// 00486259  894804               mov dword ptr [eax + 4], ecx
// 0048625c  740c                 je 0x48626a
// 0048625e  83c104               add ecx, 4
// 00486261  ba01000000           mov edx, 1
// 00486266  f00fc111             lock xadd dword ptr [ecx], edx
// 0048626a  59                   pop ecx
// 0048626b  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??$shared_static_cast@VGuiItem@RBX@@VInstance@2@@boost@@YA?AV?$shared_ptr@VGuiItem@RBX@@@0@ABV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
