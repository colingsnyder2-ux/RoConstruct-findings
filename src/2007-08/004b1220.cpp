// roc 2007-08 004b1220  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b1220
//
// 004b1220  56                   push esi
// 004b1221  6a0c                 push 0xc
// 004b1223  8bf1                 mov esi, ecx
// 004b1225  e8ccec1700           call 0x62fef6
// 004b122a  83c404               add esp, 4
// 004b122d  85c0                 test eax, eax
// 004b122f  7424                 je 0x4b1255
// 004b1231  c70090db7900         mov dword ptr [eax], 0x79db90
// 004b1237  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b123a  894804               mov dword ptr [eax + 4], ecx
// 004b123d  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b1240  85c9                 test ecx, ecx
// 004b1242  894808               mov dword ptr [eax + 8], ecx
// 004b1245  7410                 je 0x4b1257
// 004b1247  83c104               add ecx, 4
// 004b124a  ba01000000           mov edx, 1
// 004b124f  f00fc111             lock xadd dword ptr [ecx], edx
// 004b1253  5e                   pop esi
// 004b1254  c3                   ret 
// 004b1255  33c0                 xor eax, eax
// 004b1257  5e                   pop esi
// 004b1258  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
