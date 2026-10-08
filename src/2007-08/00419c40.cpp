// roc 2007-08 00419c40  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00419c40
//
// 00419c40  56                   push esi
// 00419c41  6a0c                 push 0xc
// 00419c43  8bf1                 mov esi, ecx
// 00419c45  e8ac622100           call 0x62fef6
// 00419c4a  83c404               add esp, 4
// 00419c4d  85c0                 test eax, eax
// 00419c4f  7424                 je 0x419c75
// 00419c51  c70040787800         mov dword ptr [eax], 0x787840
// 00419c57  8b4e04               mov ecx, dword ptr [esi + 4]
// 00419c5a  894804               mov dword ptr [eax + 4], ecx
// 00419c5d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00419c60  85c9                 test ecx, ecx
// 00419c62  894808               mov dword ptr [eax + 8], ecx
// 00419c65  7410                 je 0x419c77
// 00419c67  83c104               add ecx, 4
// 00419c6a  ba01000000           mov edx, 1
// 00419c6f  f00fc111             lock xadd dword ptr [ecx], edx
// 00419c73  5e                   pop esi
// 00419c74  c3                   ret 
// 00419c75  33c0                 xor eax, eax
// 00419c77  5e                   pop esi
// 00419c78  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
