// roc 2009-06 004baf20  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004baf20
//
// 004baf20  56                   push esi
// 004baf21  6a0c                 push 0xc
// 004baf23  8bf1                 mov esi, ecx
// 004baf25  e80edb2500           call 0x718a38
// 004baf2a  83c404               add esp, 4
// 004baf2d  85c0                 test eax, eax
// 004baf2f  7427                 je 0x4baf58
// 004baf31  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004baf35  c70034468c00         mov dword ptr [eax], 0x8c4634
// 004baf3b  8b11                 mov edx, dword ptr [ecx]
// 004baf3d  895004               mov dword ptr [eax + 4], edx
// 004baf40  8b4904               mov ecx, dword ptr [ecx + 4]
// 004baf43  894808               mov dword ptr [eax + 8], ecx
// 004baf46  85c9                 test ecx, ecx
// 004baf48  7410                 je 0x4baf5a
// 004baf4a  83c104               add ecx, 4
// 004baf4d  ba01000000           mov edx, 1
// 004baf52  f00fc111             lock xadd dword ptr [ecx], edx
// 004baf56  eb02                 jmp 0x4baf5a
// 004baf58  33c0                 xor eax, eax
// 004baf5a  8d542408             lea edx, [esp + 8]
// 004baf5e  8bc8                 mov ecx, eax
// 004baf60  3bd6                 cmp edx, esi
// 004baf62  7404                 je 0x4baf68
// 004baf64  8b0e                 mov ecx, dword ptr [esi]
// 004baf66  8906                 mov dword ptr [esi], eax
// 004baf68  85c9                 test ecx, ecx
// 004baf6a  7408                 je 0x4baf74
// 004baf6c  8b01                 mov eax, dword ptr [ecx]
// 004baf6e  8b10                 mov edx, dword ptr [eax]
// 004baf70  6a01                 push 1
// 004baf72  ffd2                 call edx
// 004baf74  8bc6                 mov eax, esi
// 004baf76  5e                   pop esi
// 004baf77  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
