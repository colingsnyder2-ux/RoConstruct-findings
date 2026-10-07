// roc 2012-06 0051e9b0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0051e9b0
//
// 0051e9b0  51                   push ecx
// 0051e9b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051e9b5  8b11                 mov edx, dword ptr [ecx]
// 0051e9b7  8b442408             mov eax, dword ptr [esp + 8]
// 0051e9bb  8910                 mov dword ptr [eax], edx
// 0051e9bd  8b4904               mov ecx, dword ptr [ecx + 4]
// 0051e9c0  c7042400000000       mov dword ptr [esp], 0
// 0051e9c7  894804               mov dword ptr [eax + 4], ecx
// 0051e9ca  85c9                 test ecx, ecx
// 0051e9cc  740c                 je 0x51e9da
// 0051e9ce  83c104               add ecx, 4
// 0051e9d1  ba01000000           mov edx, 1
// 0051e9d6  f00fc111             lock xadd dword ptr [ecx], edx
// 0051e9da  59                   pop ecx
// 0051e9db  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??$shared_static_cast@VGuiItem@RBX@@VInstance@2@@boost@@YA?AV?$shared_ptr@VGuiItem@RBX@@@0@ABV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
