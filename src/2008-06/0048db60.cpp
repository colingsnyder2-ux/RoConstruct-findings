// roc 2008-06 0048db60  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048db60
//
// 0048db60  56                   push esi
// 0048db61  6a0c                 push 0xc
// 0048db63  8bf1                 mov esi, ecx
// 0048db65  e8b62d2100           call 0x6a0920
// 0048db6a  83c404               add esp, 4
// 0048db6d  85c0                 test eax, eax
// 0048db6f  7424                 je 0x48db95
// 0048db71  c70018178200         mov dword ptr [eax], 0x821718
// 0048db77  8b4e04               mov ecx, dword ptr [esi + 4]
// 0048db7a  894804               mov dword ptr [eax + 4], ecx
// 0048db7d  8b4e08               mov ecx, dword ptr [esi + 8]
// 0048db80  894808               mov dword ptr [eax + 8], ecx
// 0048db83  85c9                 test ecx, ecx
// 0048db85  7410                 je 0x48db97
// 0048db87  83c104               add ecx, 4
// 0048db8a  ba01000000           mov edx, 1
// 0048db8f  f00fc111             lock xadd dword ptr [ecx], edx
// 0048db93  5e                   pop esi
// 0048db94  c3                   ret 
// 0048db95  33c0                 xor eax, eax
// 0048db97  5e                   pop esi
// 0048db98  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
