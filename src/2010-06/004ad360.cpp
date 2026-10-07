// roc 2010-06 004ad360  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ad360
//
// 004ad360  56                   push esi
// 004ad361  6a0c                 push 0xc
// 004ad363  8bf1                 mov esi, ecx
// 004ad365  e836a62f00           call 0x7a79a0
// 004ad36a  83c404               add esp, 4
// 004ad36d  85c0                 test eax, eax
// 004ad36f  7424                 je 0x4ad395
// 004ad371  c700dc7fa100         mov dword ptr [eax], 0xa17fdc
// 004ad377  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ad37a  894804               mov dword ptr [eax + 4], ecx
// 004ad37d  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ad380  894808               mov dword ptr [eax + 8], ecx
// 004ad383  85c9                 test ecx, ecx
// 004ad385  7410                 je 0x4ad397
// 004ad387  83c104               add ecx, 4
// 004ad38a  ba01000000           mov edx, 1
// 004ad38f  f00fc111             lock xadd dword ptr [ecx], edx
// 004ad393  5e                   pop esi
// 004ad394  c3                   ret 
// 004ad395  33c0                 xor eax, eax
// 004ad397  5e                   pop esi
// 004ad398  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
