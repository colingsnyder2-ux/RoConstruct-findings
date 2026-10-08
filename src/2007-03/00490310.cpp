// roc 2007-03 00490310  unit: seg_00490000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00490310
//
// 00490310  56                   push esi
// 00490311  6a0c                 push 0xc
// 00490313  8bf1                 mov esi, ecx
// 00490315  e8eedd1800           call 0x61e108
// 0049031a  83c404               add esp, 4
// 0049031d  85c0                 test eax, eax
// 0049031f  7424                 je 0x490345
// 00490321  c700f8ac7900         mov dword ptr [eax], 0x79acf8
// 00490327  8b4e04               mov ecx, dword ptr [esi + 4]
// 0049032a  894804               mov dword ptr [eax + 4], ecx
// 0049032d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00490330  85c9                 test ecx, ecx
// 00490332  894808               mov dword ptr [eax + 8], ecx
// 00490335  7410                 je 0x490347
// 00490337  83c104               add ecx, 4
// 0049033a  ba01000000           mov edx, 1
// 0049033f  f00fc111             lock xadd dword ptr [ecx], edx
// 00490343  5e                   pop esi
// 00490344  c3                   ret 
// 00490345  33c0                 xor eax, eax
// 00490347  5e                   pop esi
// 00490348  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?clone@?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
