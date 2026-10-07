// roc 2011-06 004e4bd0  unit: std::D::DU?$char_traits::V?$basic_string::$$CBV?$map::V?$shared_ptr::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e4bd0
//
// 004e4bd0  56                   push esi
// 004e4bd1  6a0c                 push 0xc
// 004e4bd3  8bf1                 mov esi, ecx
// 004e4bd5  e884543200           call 0x80a05e
// 004e4bda  83c404               add esp, 4
// 004e4bdd  85c0                 test eax, eax
// 004e4bdf  7427                 je 0x4e4c08
// 004e4be1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e4be5  c70058a5a700         mov dword ptr [eax], 0xa7a558
// 004e4beb  8b11                 mov edx, dword ptr [ecx]
// 004e4bed  895004               mov dword ptr [eax + 4], edx
// 004e4bf0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e4bf3  894808               mov dword ptr [eax + 8], ecx
// 004e4bf6  85c9                 test ecx, ecx
// 004e4bf8  7410                 je 0x4e4c0a
// 004e4bfa  83c104               add ecx, 4
// 004e4bfd  ba01000000           mov edx, 1
// 004e4c02  f00fc111             lock xadd dword ptr [ecx], edx
// 004e4c06  eb02                 jmp 0x4e4c0a
// 004e4c08  33c0                 xor eax, eax
// 004e4c0a  8d542408             lea edx, [esp + 8]
// 004e4c0e  8bc8                 mov ecx, eax
// 004e4c10  3bd6                 cmp edx, esi
// 004e4c12  7404                 je 0x4e4c18
// 004e4c14  8b0e                 mov ecx, dword ptr [esi]
// 004e4c16  8906                 mov dword ptr [esi], eax
// 004e4c18  85c9                 test ecx, ecx
// 004e4c1a  7408                 je 0x4e4c24
// 004e4c1c  8b01                 mov eax, dword ptr [ecx]
// 004e4c1e  8b10                 mov edx, dword ptr [eax]
// 004e4c20  6a01                 push 1
// 004e4c22  ffd2                 call edx
// 004e4c24  8bc6                 mov eax, esi
// 004e4c26  5e                   pop esi
// 004e4c27  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
