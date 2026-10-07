// roc 2010-06 00592ec0  unit: RBX::Reflection::$$CBUTuple::V?$shared_ptr::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00592ec0
//
// 00592ec0  56                   push esi
// 00592ec1  6a0c                 push 0xc
// 00592ec3  8bf1                 mov esi, ecx
// 00592ec5  e8d64a2100           call 0x7a79a0
// 00592eca  83c404               add esp, 4
// 00592ecd  85c0                 test eax, eax
// 00592ecf  7427                 je 0x592ef8
// 00592ed1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00592ed5  c7009093a200         mov dword ptr [eax], 0xa29390
// 00592edb  8b11                 mov edx, dword ptr [ecx]
// 00592edd  895004               mov dword ptr [eax + 4], edx
// 00592ee0  8b4904               mov ecx, dword ptr [ecx + 4]
// 00592ee3  894808               mov dword ptr [eax + 8], ecx
// 00592ee6  85c9                 test ecx, ecx
// 00592ee8  7410                 je 0x592efa
// 00592eea  83c104               add ecx, 4
// 00592eed  ba01000000           mov edx, 1
// 00592ef2  f00fc111             lock xadd dword ptr [ecx], edx
// 00592ef6  eb02                 jmp 0x592efa
// 00592ef8  33c0                 xor eax, eax
// 00592efa  8d542408             lea edx, [esp + 8]
// 00592efe  8bc8                 mov ecx, eax
// 00592f00  3bd6                 cmp edx, esi
// 00592f02  7404                 je 0x592f08
// 00592f04  8b0e                 mov ecx, dword ptr [esi]
// 00592f06  8906                 mov dword ptr [esi], eax
// 00592f08  85c9                 test ecx, ecx
// 00592f0a  7408                 je 0x592f14
// 00592f0c  8b01                 mov eax, dword ptr [ecx]
// 00592f0e  8b10                 mov edx, dword ptr [eax]
// 00592f10  6a01                 push 1
// 00592f12  ffd2                 call edx
// 00592f14  8bc6                 mov eax, esi
// 00592f16  5e                   pop esi
// 00592f17  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
