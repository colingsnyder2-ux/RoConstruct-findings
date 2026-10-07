// roc 2008-06 00491790  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491790
//
// 00491790  56                   push esi
// 00491791  6a0c                 push 0xc
// 00491793  8bf1                 mov esi, ecx
// 00491795  e886f12000           call 0x6a0920
// 0049179a  83c404               add esp, 4
// 0049179d  85c0                 test eax, eax
// 0049179f  7427                 je 0x4917c8
// 004917a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004917a5  c700901b8200         mov dword ptr [eax], 0x821b90
// 004917ab  8b11                 mov edx, dword ptr [ecx]
// 004917ad  895004               mov dword ptr [eax + 4], edx
// 004917b0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004917b3  894808               mov dword ptr [eax + 8], ecx
// 004917b6  85c9                 test ecx, ecx
// 004917b8  7410                 je 0x4917ca
// 004917ba  83c104               add ecx, 4
// 004917bd  ba01000000           mov edx, 1
// 004917c2  f00fc111             lock xadd dword ptr [ecx], edx
// 004917c6  eb02                 jmp 0x4917ca
// 004917c8  33c0                 xor eax, eax
// 004917ca  8d542408             lea edx, [esp + 8]
// 004917ce  8bc8                 mov ecx, eax
// 004917d0  3bd6                 cmp edx, esi
// 004917d2  7404                 je 0x4917d8
// 004917d4  8b0e                 mov ecx, dword ptr [esi]
// 004917d6  8906                 mov dword ptr [esi], eax
// 004917d8  85c9                 test ecx, ecx
// 004917da  7408                 je 0x4917e4
// 004917dc  8b01                 mov eax, dword ptr [ecx]
// 004917de  8b10                 mov edx, dword ptr [eax]
// 004917e0  6a01                 push 1
// 004917e2  ffd2                 call edx
// 004917e4  8bc6                 mov eax, esi
// 004917e6  5e                   pop esi
// 004917e7  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
