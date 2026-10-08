// roc 2007-03 0059d1a0  unit: seg_00590000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059d1a0
//
// 0059d1a0  51                   push ecx
// 0059d1a1  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0059d1a4  8b442408             mov eax, dword ptr [esp + 8]
// 0059d1a8  8910                 mov dword ptr [eax], edx
// 0059d1aa  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0059d1ad  85c9                 test ecx, ecx
// 0059d1af  c7042400000000       mov dword ptr [esp], 0
// 0059d1b6  894804               mov dword ptr [eax + 4], ecx
// 0059d1b9  740c                 je 0x59d1c7
// 0059d1bb  83c104               add ecx, 4
// 0059d1be  ba01000000           mov edx, 1
// 0059d1c3  f00fc111             lock xadd dword ptr [ecx], edx
// 0059d1c7  59                   pop ecx
// 0059d1c8  c20400               ret 4
// library rbxgs/v8datamodel\Hopper.cpp (function ?getMouse@ScriptMouseCommand@RBX@@QAE?AV?$shared_ptr@VMouse@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
