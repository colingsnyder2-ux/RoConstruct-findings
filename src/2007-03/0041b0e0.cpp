// roc 2007-03 0041b0e0  unit: seg_00410000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0041b0e0
//
// 0041b0e0  56                   push esi
// 0041b0e1  6a0c                 push 0xc
// 0041b0e3  8bf1                 mov esi, ecx
// 0041b0e5  e81e302000           call 0x61e108
// 0041b0ea  83c404               add esp, 4
// 0041b0ed  85c0                 test eax, eax
// 0041b0ef  7424                 je 0x41b115
// 0041b0f1  c7000c697800         mov dword ptr [eax], 0x78690c
// 0041b0f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0041b0fa  894804               mov dword ptr [eax + 4], ecx
// 0041b0fd  8b4e08               mov ecx, dword ptr [esi + 8]
// 0041b100  85c9                 test ecx, ecx
// 0041b102  894808               mov dword ptr [eax + 8], ecx
// 0041b105  7410                 je 0x41b117
// 0041b107  83c104               add ecx, 4
// 0041b10a  ba01000000           mov edx, 1
// 0041b10f  f00fc111             lock xadd dword ptr [ecx], edx
// 0041b113  5e                   pop esi
// 0041b114  c3                   ret 
// 0041b115  33c0                 xor eax, eax
// 0041b117  5e                   pop esi
// 0041b118  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
