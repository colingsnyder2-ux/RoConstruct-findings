// roc 2009-06 004bdc70  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bdc70
//
// 004bdc70  56                   push esi
// 004bdc71  6a0c                 push 0xc
// 004bdc73  8bf1                 mov esi, ecx
// 004bdc75  e8bead2500           call 0x718a38
// 004bdc7a  83c404               add esp, 4
// 004bdc7d  85c0                 test eax, eax
// 004bdc7f  7427                 je 0x4bdca8
// 004bdc81  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004bdc85  c7006c498c00         mov dword ptr [eax], 0x8c496c
// 004bdc8b  8b11                 mov edx, dword ptr [ecx]
// 004bdc8d  895004               mov dword ptr [eax + 4], edx
// 004bdc90  8b4904               mov ecx, dword ptr [ecx + 4]
// 004bdc93  894808               mov dword ptr [eax + 8], ecx
// 004bdc96  85c9                 test ecx, ecx
// 004bdc98  7410                 je 0x4bdcaa
// 004bdc9a  83c104               add ecx, 4
// 004bdc9d  ba01000000           mov edx, 1
// 004bdca2  f00fc111             lock xadd dword ptr [ecx], edx
// 004bdca6  eb02                 jmp 0x4bdcaa
// 004bdca8  33c0                 xor eax, eax
// 004bdcaa  8d542408             lea edx, [esp + 8]
// 004bdcae  8bc8                 mov ecx, eax
// 004bdcb0  3bd6                 cmp edx, esi
// 004bdcb2  7404                 je 0x4bdcb8
// 004bdcb4  8b0e                 mov ecx, dword ptr [esi]
// 004bdcb6  8906                 mov dword ptr [esi], eax
// 004bdcb8  85c9                 test ecx, ecx
// 004bdcba  7408                 je 0x4bdcc4
// 004bdcbc  8b01                 mov eax, dword ptr [ecx]
// 004bdcbe  8b10                 mov edx, dword ptr [eax]
// 004bdcc0  6a01                 push 1
// 004bdcc2  ffd2                 call edx
// 004bdcc4  8bc6                 mov eax, esi
// 004bdcc6  5e                   pop esi
// 004bdcc7  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
