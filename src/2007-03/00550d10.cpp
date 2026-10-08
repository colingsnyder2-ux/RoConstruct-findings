// roc 2007-03 00550d10  unit: seg_00550000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00550d10
//
// 00550d10  8bc1                 mov eax, ecx
// 00550d12  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00550d16  8b11                 mov edx, dword ptr [ecx]
// 00550d18  8910                 mov dword ptr [eax], edx
// 00550d1a  8b4904               mov ecx, dword ptr [ecx + 4]
// 00550d1d  85c9                 test ecx, ecx
// 00550d1f  894804               mov dword ptr [eax + 4], ecx
// 00550d22  740c                 je 0x550d30
// 00550d24  83c104               add ecx, 4
// 00550d27  ba01000000           mov edx, 1
// 00550d2c  f00fc111             lock xadd dword ptr [ecx], edx
// 00550d30  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??0?$shared_ptr@VInstance@RBX@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
