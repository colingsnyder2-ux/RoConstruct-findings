// roc 2011-06 004adcb0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004adcb0
//
// 004adcb0  56                   push esi
// 004adcb1  6a0c                 push 0xc
// 004adcb3  8bf1                 mov esi, ecx
// 004adcb5  e8a4c33500           call 0x80a05e
// 004adcba  83c404               add esp, 4
// 004adcbd  85c0                 test eax, eax
// 004adcbf  7427                 je 0x4adce8
// 004adcc1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004adcc5  c700c0e9a500         mov dword ptr [eax], 0xa5e9c0
// 004adccb  8b11                 mov edx, dword ptr [ecx]
// 004adccd  895004               mov dword ptr [eax + 4], edx
// 004adcd0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004adcd3  894808               mov dword ptr [eax + 8], ecx
// 004adcd6  85c9                 test ecx, ecx
// 004adcd8  7410                 je 0x4adcea
// 004adcda  83c104               add ecx, 4
// 004adcdd  ba01000000           mov edx, 1
// 004adce2  f00fc111             lock xadd dword ptr [ecx], edx
// 004adce6  eb02                 jmp 0x4adcea
// 004adce8  33c0                 xor eax, eax
// 004adcea  8d542408             lea edx, [esp + 8]
// 004adcee  8bc8                 mov ecx, eax
// 004adcf0  3bd6                 cmp edx, esi
// 004adcf2  7404                 je 0x4adcf8
// 004adcf4  8b0e                 mov ecx, dword ptr [esi]
// 004adcf6  8906                 mov dword ptr [esi], eax
// 004adcf8  85c9                 test ecx, ecx
// 004adcfa  7408                 je 0x4add04
// 004adcfc  8b01                 mov eax, dword ptr [ecx]
// 004adcfe  8b10                 mov edx, dword ptr [eax]
// 004add00  6a01                 push 1
// 004add02  ffd2                 call edx
// 004add04  8bc6                 mov eax, esi
// 004add06  5e                   pop esi
// 004add07  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
