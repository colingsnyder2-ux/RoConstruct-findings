// roc 2008-06 004a2070  unit: RBX::Network::P8Players::?$GetImpl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a2070
//
// 004a2070  51                   push ecx
// 004a2071  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a2075  8b11                 mov edx, dword ptr [ecx]
// 004a2077  8b442408             mov eax, dword ptr [esp + 8]
// 004a207b  8910                 mov dword ptr [eax], edx
// 004a207d  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a2080  c7042400000000       mov dword ptr [esp], 0
// 004a2087  894804               mov dword ptr [eax + 4], ecx
// 004a208a  85c9                 test ecx, ecx
// 004a208c  740c                 je 0x4a209a
// 004a208e  83c104               add ecx, 4
// 004a2091  ba01000000           mov edx, 1
// 004a2096  f00fc111             lock xadd dword ptr [ecx], edx
// 004a209a  59                   pop ecx
// 004a209b  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??$shared_static_cast@VGuiItem@RBX@@VInstance@2@@boost@@YA?AV?$shared_ptr@VGuiItem@RBX@@@0@ABV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
