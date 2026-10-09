// roc 2009-12 004fffd0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fffd0
//
// 004fffd0  56                   push esi
// 004fffd1  6a0c                 push 0xc
// 004fffd3  8bf1                 mov esi, ecx
// 004fffd5  e886382f00           call 0x7f3860
// 004fffda  83c404               add esp, 4
// 004fffdd  85c0                 test eax, eax
// 004fffdf  7427                 je 0x500008
// 004fffe1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fffe5  c7002ca39b00         mov dword ptr [eax], 0x9ba32c
// 004fffeb  8b11                 mov edx, dword ptr [ecx]
// 004fffed  895004               mov dword ptr [eax + 4], edx
// 004ffff0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004ffff3  894808               mov dword ptr [eax + 8], ecx
// 004ffff6  85c9                 test ecx, ecx
// 004ffff8  7410                 je 0x50000a
// 004ffffa  83c104               add ecx, 4
// 004ffffd  ba01000000           mov edx, 1
// 00500002  f00fc111             lock xadd dword ptr [ecx], edx
// 00500006  eb02                 jmp 0x50000a
// 00500008  33c0                 xor eax, eax
// 0050000a  8d542408             lea edx, [esp + 8]
// 0050000e  8bc8                 mov ecx, eax
// 00500010  3bd6                 cmp edx, esi
// 00500012  7404                 je 0x500018
// 00500014  8b0e                 mov ecx, dword ptr [esi]
// 00500016  8906                 mov dword ptr [esi], eax
// 00500018  85c9                 test ecx, ecx
// 0050001a  7408                 je 0x500024
// 0050001c  8b01                 mov eax, dword ptr [ecx]
// 0050001e  8b10                 mov edx, dword ptr [eax]
// 00500020  6a01                 push 1
// 00500022  ffd2                 call edx
// 00500024  8bc6                 mov eax, esi
// 00500026  5e                   pop esi
// 00500027  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
