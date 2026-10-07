// roc 2010-06 004ad4b0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ad4b0
//
// 004ad4b0  56                   push esi
// 004ad4b1  6a0c                 push 0xc
// 004ad4b3  8bf1                 mov esi, ecx
// 004ad4b5  e8e6a42f00           call 0x7a79a0
// 004ad4ba  83c404               add esp, 4
// 004ad4bd  85c0                 test eax, eax
// 004ad4bf  7427                 je 0x4ad4e8
// 004ad4c1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ad4c5  c700dc7fa100         mov dword ptr [eax], 0xa17fdc
// 004ad4cb  8b11                 mov edx, dword ptr [ecx]
// 004ad4cd  895004               mov dword ptr [eax + 4], edx
// 004ad4d0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004ad4d3  894808               mov dword ptr [eax + 8], ecx
// 004ad4d6  85c9                 test ecx, ecx
// 004ad4d8  7410                 je 0x4ad4ea
// 004ad4da  83c104               add ecx, 4
// 004ad4dd  ba01000000           mov edx, 1
// 004ad4e2  f00fc111             lock xadd dword ptr [ecx], edx
// 004ad4e6  eb02                 jmp 0x4ad4ea
// 004ad4e8  33c0                 xor eax, eax
// 004ad4ea  8d542408             lea edx, [esp + 8]
// 004ad4ee  8bc8                 mov ecx, eax
// 004ad4f0  3bd6                 cmp edx, esi
// 004ad4f2  7404                 je 0x4ad4f8
// 004ad4f4  8b0e                 mov ecx, dword ptr [esi]
// 004ad4f6  8906                 mov dword ptr [esi], eax
// 004ad4f8  85c9                 test ecx, ecx
// 004ad4fa  7408                 je 0x4ad504
// 004ad4fc  8b01                 mov eax, dword ptr [ecx]
// 004ad4fe  8b10                 mov edx, dword ptr [eax]
// 004ad500  6a01                 push 1
// 004ad502  ffd2                 call edx
// 004ad504  8bc6                 mov eax, esi
// 004ad506  5e                   pop esi
// 004ad507  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
