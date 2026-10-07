// roc 2010-06 004588f0  unit: VCWorkspace::?$CComObject  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004588f0
//
// 004588f0  51                   push ecx
// 004588f1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004588f5  8b11                 mov edx, dword ptr [ecx]
// 004588f7  8b442408             mov eax, dword ptr [esp + 8]
// 004588fb  8910                 mov dword ptr [eax], edx
// 004588fd  8b4904               mov ecx, dword ptr [ecx + 4]
// 00458900  c7042400000000       mov dword ptr [esp], 0
// 00458907  894804               mov dword ptr [eax + 4], ecx
// 0045890a  85c9                 test ecx, ecx
// 0045890c  740c                 je 0x45891a
// 0045890e  83c104               add ecx, 4
// 00458911  ba01000000           mov edx, 1
// 00458916  f00fc111             lock xadd dword ptr [ecx], edx
// 0045891a  59                   pop ecx
// 0045891b  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??$shared_static_cast@VGuiItem@RBX@@VInstance@2@@boost@@YA?AV?$shared_ptr@VGuiItem@RBX@@@0@ABV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
