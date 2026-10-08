// roc 2007-03 00418e50  unit: seg_00410000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00418e50
//
// 00418e50  51                   push ecx
// 00418e51  8b11                 mov edx, dword ptr [ecx]
// 00418e53  8b442408             mov eax, dword ptr [esp + 8]
// 00418e57  8910                 mov dword ptr [eax], edx
// 00418e59  8b4904               mov ecx, dword ptr [ecx + 4]
// 00418e5c  85c9                 test ecx, ecx
// 00418e5e  c7042400000000       mov dword ptr [esp], 0
// 00418e65  894804               mov dword ptr [eax + 4], ecx
// 00418e68  740c                 je 0x418e76
// 00418e6a  83c104               add ecx, 4
// 00418e6d  ba01000000           mov edx, 1
// 00418e72  f00fc111             lock xadd dword ptr [ecx], edx
// 00418e76  59                   pop ecx
// 00418e77  c20400               ret 4
// library rbxgs/humanoid\Humanoid.cpp (function ?read@?$CopyOnWrite@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
