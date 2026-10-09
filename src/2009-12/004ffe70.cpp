// roc 2009-12 004ffe70  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ffe70
//
// 004ffe70  56                   push esi
// 004ffe71  6a0c                 push 0xc
// 004ffe73  8bf1                 mov esi, ecx
// 004ffe75  e8e6392f00           call 0x7f3860
// 004ffe7a  83c404               add esp, 4
// 004ffe7d  85c0                 test eax, eax
// 004ffe7f  7424                 je 0x4ffea5
// 004ffe81  c7002ca39b00         mov dword ptr [eax], 0x9ba32c
// 004ffe87  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ffe8a  894804               mov dword ptr [eax + 4], ecx
// 004ffe8d  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ffe90  894808               mov dword ptr [eax + 8], ecx
// 004ffe93  85c9                 test ecx, ecx
// 004ffe95  7410                 je 0x4ffea7
// 004ffe97  83c104               add ecx, 4
// 004ffe9a  ba01000000           mov edx, 1
// 004ffe9f  f00fc111             lock xadd dword ptr [ecx], edx
// 004ffea3  5e                   pop esi
// 004ffea4  c3                   ret 
// 004ffea5  33c0                 xor eax, eax
// 004ffea7  5e                   pop esi
// 004ffea8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
