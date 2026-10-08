// roc 2007-08 004963f0  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004963f0
//
// 004963f0  56                   push esi
// 004963f1  6a0c                 push 0xc
// 004963f3  8bf1                 mov esi, ecx
// 004963f5  e8fc9a1900           call 0x62fef6
// 004963fa  83c404               add esp, 4
// 004963fd  85c0                 test eax, eax
// 004963ff  7424                 je 0x496425
// 00496401  c700ecbb7900         mov dword ptr [eax], 0x79bbec
// 00496407  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049640a  894804               mov dword ptr [eax + 4], ecx
// 0049640d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00496410  85c9                 test ecx, ecx
// 00496412  894808               mov dword ptr [eax + 8], ecx
// 00496415  7410                 je 0x496427
// 00496417  83c104               add ecx, 4
// 0049641a  ba01000000           mov edx, 1
// 0049641f  f00fc111             lock xadd dword ptr [ecx], edx
// 00496423  5e                   pop esi
// 00496424  c3                   ret 
// 00496425  33c0                 xor eax, eax
// 00496427  5e                   pop esi
// 00496428  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
