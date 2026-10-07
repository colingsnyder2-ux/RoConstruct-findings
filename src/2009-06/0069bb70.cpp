// roc 2009-06 0069bb70  unit: RBX::Flag  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069bb70
//
// 0069bb70  51                   push ecx
// 0069bb71  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069bb75  8b11                 mov edx, dword ptr [ecx]
// 0069bb77  8b442408             mov eax, dword ptr [esp + 8]
// 0069bb7b  8910                 mov dword ptr [eax], edx
// 0069bb7d  8b4904               mov ecx, dword ptr [ecx + 4]
// 0069bb80  c7042400000000       mov dword ptr [esp], 0
// 0069bb87  894804               mov dword ptr [eax + 4], ecx
// 0069bb8a  85c9                 test ecx, ecx
// 0069bb8c  740c                 je 0x69bb9a
// 0069bb8e  83c104               add ecx, 4
// 0069bb91  ba01000000           mov edx, 1
// 0069bb96  f00fc111             lock xadd dword ptr [ecx], edx
// 0069bb9a  59                   pop ecx
// 0069bb9b  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??$shared_static_cast@VGuiItem@RBX@@VInstance@2@@boost@@YA?AV?$shared_ptr@VGuiItem@RBX@@@0@ABV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
