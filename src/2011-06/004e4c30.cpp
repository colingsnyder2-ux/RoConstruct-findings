// roc 2011-06 004e4c30  unit: std::D::DU?$char_traits::V?$basic_string::$$CBV?$map::V?$shared_ptr::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e4c30
//
// 004e4c30  56                   push esi
// 004e4c31  6a0c                 push 0xc
// 004e4c33  8bf1                 mov esi, ecx
// 004e4c35  e824543200           call 0x80a05e
// 004e4c3a  83c404               add esp, 4
// 004e4c3d  85c0                 test eax, eax
// 004e4c3f  7427                 je 0x4e4c68
// 004e4c41  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e4c45  c70068a5a700         mov dword ptr [eax], 0xa7a568
// 004e4c4b  8b11                 mov edx, dword ptr [ecx]
// 004e4c4d  895004               mov dword ptr [eax + 4], edx
// 004e4c50  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e4c53  894808               mov dword ptr [eax + 8], ecx
// 004e4c56  85c9                 test ecx, ecx
// 004e4c58  7410                 je 0x4e4c6a
// 004e4c5a  83c104               add ecx, 4
// 004e4c5d  ba01000000           mov edx, 1
// 004e4c62  f00fc111             lock xadd dword ptr [ecx], edx
// 004e4c66  eb02                 jmp 0x4e4c6a
// 004e4c68  33c0                 xor eax, eax
// 004e4c6a  8d542408             lea edx, [esp + 8]
// 004e4c6e  8bc8                 mov ecx, eax
// 004e4c70  3bd6                 cmp edx, esi
// 004e4c72  7404                 je 0x4e4c78
// 004e4c74  8b0e                 mov ecx, dword ptr [esi]
// 004e4c76  8906                 mov dword ptr [esi], eax
// 004e4c78  85c9                 test ecx, ecx
// 004e4c7a  7408                 je 0x4e4c84
// 004e4c7c  8b01                 mov eax, dword ptr [ecx]
// 004e4c7e  8b10                 mov edx, dword ptr [eax]
// 004e4c80  6a01                 push 1
// 004e4c82  ffd2                 call edx
// 004e4c84  8bc6                 mov eax, esi
// 004e4c86  5e                   pop esi
// 004e4c87  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
