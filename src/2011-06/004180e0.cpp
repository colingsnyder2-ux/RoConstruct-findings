// roc 2011-06 004180e0  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004180e0
//
// 004180e0  56                   push esi
// 004180e1  6a0c                 push 0xc
// 004180e3  8bf1                 mov esi, ecx
// 004180e5  e8741f3f00           call 0x80a05e
// 004180ea  83c404               add esp, 4
// 004180ed  85c0                 test eax, eax
// 004180ef  7424                 je 0x418115
// 004180f1  c700c0e9a500         mov dword ptr [eax], 0xa5e9c0
// 004180f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004180fa  894804               mov dword ptr [eax + 4], ecx
// 004180fd  8b4e08               mov ecx, dword ptr [esi + 8]
// 00418100  894808               mov dword ptr [eax + 8], ecx
// 00418103  85c9                 test ecx, ecx
// 00418105  7410                 je 0x418117
// 00418107  83c104               add ecx, 4
// 0041810a  ba01000000           mov edx, 1
// 0041810f  f00fc111             lock xadd dword ptr [ecx], edx
// 00418113  5e                   pop esi
// 00418114  c3                   ret 
// 00418115  33c0                 xor eax, eax
// 00418117  5e                   pop esi
// 00418118  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
