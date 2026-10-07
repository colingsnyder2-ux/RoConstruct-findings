// roc 2010-06 005d6c50  unit: RBX::VDataModel::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005d6c50
//
// 005d6c50  56                   push esi
// 005d6c51  6a0c                 push 0xc
// 005d6c53  8bf1                 mov esi, ecx
// 005d6c55  e8460d1d00           call 0x7a79a0
// 005d6c5a  83c404               add esp, 4
// 005d6c5d  85c0                 test eax, eax
// 005d6c5f  7427                 je 0x5d6c88
// 005d6c61  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d6c65  c700042da100         mov dword ptr [eax], 0xa12d04
// 005d6c6b  8b11                 mov edx, dword ptr [ecx]
// 005d6c6d  895004               mov dword ptr [eax + 4], edx
// 005d6c70  8b4904               mov ecx, dword ptr [ecx + 4]
// 005d6c73  894808               mov dword ptr [eax + 8], ecx
// 005d6c76  85c9                 test ecx, ecx
// 005d6c78  7410                 je 0x5d6c8a
// 005d6c7a  83c104               add ecx, 4
// 005d6c7d  ba01000000           mov edx, 1
// 005d6c82  f00fc111             lock xadd dword ptr [ecx], edx
// 005d6c86  eb02                 jmp 0x5d6c8a
// 005d6c88  33c0                 xor eax, eax
// 005d6c8a  8d542408             lea edx, [esp + 8]
// 005d6c8e  8bc8                 mov ecx, eax
// 005d6c90  3bd6                 cmp edx, esi
// 005d6c92  7404                 je 0x5d6c98
// 005d6c94  8b0e                 mov ecx, dword ptr [esi]
// 005d6c96  8906                 mov dword ptr [esi], eax
// 005d6c98  85c9                 test ecx, ecx
// 005d6c9a  7408                 je 0x5d6ca4
// 005d6c9c  8b01                 mov eax, dword ptr [ecx]
// 005d6c9e  8b10                 mov edx, dword ptr [eax]
// 005d6ca0  6a01                 push 1
// 005d6ca2  ffd2                 call edx
// 005d6ca4  8bc6                 mov eax, esi
// 005d6ca6  5e                   pop esi
// 005d6ca7  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
