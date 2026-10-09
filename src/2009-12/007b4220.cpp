// roc 2009-12 007b4220  unit: RBX::MotorJoint  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b4220
//
// 007b4220  56                   push esi
// 007b4221  6a0c                 push 0xc
// 007b4223  8bf1                 mov esi, ecx
// 007b4225  e836f60300           call 0x7f3860
// 007b422a  83c404               add esp, 4
// 007b422d  85c0                 test eax, eax
// 007b422f  7427                 je 0x7b4258
// 007b4231  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007b4235  c7002ce09d00         mov dword ptr [eax], 0x9de02c
// 007b423b  8b11                 mov edx, dword ptr [ecx]
// 007b423d  895004               mov dword ptr [eax + 4], edx
// 007b4240  8b4904               mov ecx, dword ptr [ecx + 4]
// 007b4243  894808               mov dword ptr [eax + 8], ecx
// 007b4246  85c9                 test ecx, ecx
// 007b4248  7410                 je 0x7b425a
// 007b424a  83c104               add ecx, 4
// 007b424d  ba01000000           mov edx, 1
// 007b4252  f00fc111             lock xadd dword ptr [ecx], edx
// 007b4256  eb02                 jmp 0x7b425a
// 007b4258  33c0                 xor eax, eax
// 007b425a  8d542408             lea edx, [esp + 8]
// 007b425e  8bc8                 mov ecx, eax
// 007b4260  3bd6                 cmp edx, esi
// 007b4262  7404                 je 0x7b4268
// 007b4264  8b0e                 mov ecx, dword ptr [esi]
// 007b4266  8906                 mov dword ptr [esi], eax
// 007b4268  85c9                 test ecx, ecx
// 007b426a  7408                 je 0x7b4274
// 007b426c  8b01                 mov eax, dword ptr [ecx]
// 007b426e  8b10                 mov edx, dword ptr [eax]
// 007b4270  6a01                 push 1
// 007b4272  ffd2                 call edx
// 007b4274  8bc6                 mov eax, esi
// 007b4276  5e                   pop esi
// 007b4277  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
