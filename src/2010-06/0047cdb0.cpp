// roc 2010-06 0047cdb0  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047cdb0
//
// 0047cdb0  56                   push esi
// 0047cdb1  6a0c                 push 0xc
// 0047cdb3  8bf1                 mov esi, ecx
// 0047cdb5  e8e6ab3200           call 0x7a79a0
// 0047cdba  83c404               add esp, 4
// 0047cdbd  85c0                 test eax, eax
// 0047cdbf  7424                 je 0x47cde5
// 0047cdc1  c700042da100         mov dword ptr [eax], 0xa12d04
// 0047cdc7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047cdca  894804               mov dword ptr [eax + 4], ecx
// 0047cdcd  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047cdd0  894808               mov dword ptr [eax + 8], ecx
// 0047cdd3  85c9                 test ecx, ecx
// 0047cdd5  7410                 je 0x47cde7
// 0047cdd7  83c104               add ecx, 4
// 0047cdda  ba01000000           mov edx, 1
// 0047cddf  f00fc111             lock xadd dword ptr [ecx], edx
// 0047cde3  5e                   pop esi
// 0047cde4  c3                   ret 
// 0047cde5  33c0                 xor eax, eax
// 0047cde7  5e                   pop esi
// 0047cde8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
