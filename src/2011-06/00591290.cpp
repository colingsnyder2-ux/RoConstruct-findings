// roc 2011-06 00591290  unit: RBX::Reflection::$$CBUTuple::V?$shared_ptr::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00591290
//
// 00591290  56                   push esi
// 00591291  6a0c                 push 0xc
// 00591293  8bf1                 mov esi, ecx
// 00591295  e8c48d2700           call 0x80a05e
// 0059129a  83c404               add esp, 4
// 0059129d  85c0                 test eax, eax
// 0059129f  7427                 je 0x5912c8
// 005912a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005912a5  c7007094a800         mov dword ptr [eax], 0xa89470
// 005912ab  8b11                 mov edx, dword ptr [ecx]
// 005912ad  895004               mov dword ptr [eax + 4], edx
// 005912b0  8b4904               mov ecx, dword ptr [ecx + 4]
// 005912b3  894808               mov dword ptr [eax + 8], ecx
// 005912b6  85c9                 test ecx, ecx
// 005912b8  7410                 je 0x5912ca
// 005912ba  83c104               add ecx, 4
// 005912bd  ba01000000           mov edx, 1
// 005912c2  f00fc111             lock xadd dword ptr [ecx], edx
// 005912c6  eb02                 jmp 0x5912ca
// 005912c8  33c0                 xor eax, eax
// 005912ca  8d542408             lea edx, [esp + 8]
// 005912ce  8bc8                 mov ecx, eax
// 005912d0  3bd6                 cmp edx, esi
// 005912d2  7404                 je 0x5912d8
// 005912d4  8b0e                 mov ecx, dword ptr [esi]
// 005912d6  8906                 mov dword ptr [esi], eax
// 005912d8  85c9                 test ecx, ecx
// 005912da  7408                 je 0x5912e4
// 005912dc  8b01                 mov eax, dword ptr [ecx]
// 005912de  8b10                 mov edx, dword ptr [eax]
// 005912e0  6a01                 push 1
// 005912e2  ffd2                 call edx
// 005912e4  8bc6                 mov eax, esi
// 005912e6  5e                   pop esi
// 005912e7  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
