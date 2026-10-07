// roc 2010-06 00592e80  unit: RBX::Reflection::$$CBUTuple::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00592e80
//
// 00592e80  56                   push esi
// 00592e81  6a0c                 push 0xc
// 00592e83  8bf1                 mov esi, ecx
// 00592e85  e8164b2100           call 0x7a79a0
// 00592e8a  83c404               add esp, 4
// 00592e8d  85c0                 test eax, eax
// 00592e8f  7424                 je 0x592eb5
// 00592e91  c7009093a200         mov dword ptr [eax], 0xa29390
// 00592e97  8b4e04               mov ecx, dword ptr [esi + 4]
// 00592e9a  894804               mov dword ptr [eax + 4], ecx
// 00592e9d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00592ea0  894808               mov dword ptr [eax + 8], ecx
// 00592ea3  85c9                 test ecx, ecx
// 00592ea5  7410                 je 0x592eb7
// 00592ea7  83c104               add ecx, 4
// 00592eaa  ba01000000           mov edx, 1
// 00592eaf  f00fc111             lock xadd dword ptr [ecx], edx
// 00592eb3  5e                   pop esi
// 00592eb4  c3                   ret 
// 00592eb5  33c0                 xor eax, eax
// 00592eb7  5e                   pop esi
// 00592eb8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
