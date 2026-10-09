// roc 2009-12 00631040  unit: RBX::Reflection::$$CBUTuple::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00631040
//
// 00631040  56                   push esi
// 00631041  6a0c                 push 0xc
// 00631043  8bf1                 mov esi, ecx
// 00631045  e816281c00           call 0x7f3860
// 0063104a  83c404               add esp, 4
// 0063104d  85c0                 test eax, eax
// 0063104f  7424                 je 0x631075
// 00631051  c700d8b59c00         mov dword ptr [eax], 0x9cb5d8
// 00631057  8b4e04               mov ecx, dword ptr [esi + 4]
// 0063105a  894804               mov dword ptr [eax + 4], ecx
// 0063105d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00631060  894808               mov dword ptr [eax + 8], ecx
// 00631063  85c9                 test ecx, ecx
// 00631065  7410                 je 0x631077
// 00631067  83c104               add ecx, 4
// 0063106a  ba01000000           mov edx, 1
// 0063106f  f00fc111             lock xadd dword ptr [ecx], edx
// 00631073  5e                   pop esi
// 00631074  c3                   ret 
// 00631075  33c0                 xor eax, eax
// 00631077  5e                   pop esi
// 00631078  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
