// roc 2011-06 004d5080  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004d5080
//
// 004d5080  56                   push esi
// 004d5081  6a0c                 push 0xc
// 004d5083  8bf1                 mov esi, ecx
// 004d5085  e8d44f3300           call 0x80a05e
// 004d508a  83c404               add esp, 4
// 004d508d  85c0                 test eax, eax
// 004d508f  7427                 je 0x4d50b8
// 004d5091  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d5095  c700a48fa700         mov dword ptr [eax], 0xa78fa4
// 004d509b  8b11                 mov edx, dword ptr [ecx]
// 004d509d  895004               mov dword ptr [eax + 4], edx
// 004d50a0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004d50a3  894808               mov dword ptr [eax + 8], ecx
// 004d50a6  85c9                 test ecx, ecx
// 004d50a8  7410                 je 0x4d50ba
// 004d50aa  83c104               add ecx, 4
// 004d50ad  ba01000000           mov edx, 1
// 004d50b2  f00fc111             lock xadd dword ptr [ecx], edx
// 004d50b6  eb02                 jmp 0x4d50ba
// 004d50b8  33c0                 xor eax, eax
// 004d50ba  8d542408             lea edx, [esp + 8]
// 004d50be  8bc8                 mov ecx, eax
// 004d50c0  3bd6                 cmp edx, esi
// 004d50c2  7404                 je 0x4d50c8
// 004d50c4  8b0e                 mov ecx, dword ptr [esi]
// 004d50c6  8906                 mov dword ptr [esi], eax
// 004d50c8  85c9                 test ecx, ecx
// 004d50ca  7408                 je 0x4d50d4
// 004d50cc  8b01                 mov eax, dword ptr [ecx]
// 004d50ce  8b10                 mov edx, dword ptr [eax]
// 004d50d0  6a01                 push 1
// 004d50d2  ffd2                 call edx
// 004d50d4  8bc6                 mov eax, esi
// 004d50d6  5e                   pop esi
// 004d50d7  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
