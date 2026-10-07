// roc 2011-06 00675280  unit: RBX::VVisit::?$BoundFuncDesc  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00675280
//
// 00675280  51                   push ecx
// 00675281  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00675285  8b11                 mov edx, dword ptr [ecx]
// 00675287  8b442408             mov eax, dword ptr [esp + 8]
// 0067528b  8910                 mov dword ptr [eax], edx
// 0067528d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00675290  c7042400000000       mov dword ptr [esp], 0
// 00675297  894804               mov dword ptr [eax + 4], ecx
// 0067529a  85c9                 test ecx, ecx
// 0067529c  740c                 je 0x6752aa
// 0067529e  83c104               add ecx, 4
// 006752a1  ba01000000           mov edx, 1
// 006752a6  f00fc111             lock xadd dword ptr [ecx], edx
// 006752aa  59                   pop ecx
// 006752ab  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??$shared_static_cast@VGuiItem@RBX@@VInstance@2@@boost@@YA?AV?$shared_ptr@VGuiItem@RBX@@@0@ABV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
