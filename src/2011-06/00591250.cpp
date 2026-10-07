// roc 2011-06 00591250  unit: RBX::Reflection::$$CBUTuple::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00591250
//
// 00591250  56                   push esi
// 00591251  6a0c                 push 0xc
// 00591253  8bf1                 mov esi, ecx
// 00591255  e8048e2700           call 0x80a05e
// 0059125a  83c404               add esp, 4
// 0059125d  85c0                 test eax, eax
// 0059125f  7424                 je 0x591285
// 00591261  c7007094a800         mov dword ptr [eax], 0xa89470
// 00591267  8b4e04               mov ecx, dword ptr [esi + 4]
// 0059126a  894804               mov dword ptr [eax + 4], ecx
// 0059126d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00591270  894808               mov dword ptr [eax + 8], ecx
// 00591273  85c9                 test ecx, ecx
// 00591275  7410                 je 0x591287
// 00591277  83c104               add ecx, 4
// 0059127a  ba01000000           mov edx, 1
// 0059127f  f00fc111             lock xadd dword ptr [ecx], edx
// 00591283  5e                   pop esi
// 00591284  c3                   ret 
// 00591285  33c0                 xor eax, eax
// 00591287  5e                   pop esi
// 00591288  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
