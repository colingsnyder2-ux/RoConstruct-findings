// roc 2010-06 004a6fa0  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a6fa0
//
// 004a6fa0  56                   push esi
// 004a6fa1  6a0c                 push 0xc
// 004a6fa3  8bf1                 mov esi, ecx
// 004a6fa5  e8f6093000           call 0x7a79a0
// 004a6faa  83c404               add esp, 4
// 004a6fad  85c0                 test eax, eax
// 004a6faf  7427                 je 0x4a6fd8
// 004a6fb1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a6fb5  c700847ea100         mov dword ptr [eax], 0xa17e84
// 004a6fbb  8b11                 mov edx, dword ptr [ecx]
// 004a6fbd  895004               mov dword ptr [eax + 4], edx
// 004a6fc0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a6fc3  894808               mov dword ptr [eax + 8], ecx
// 004a6fc6  85c9                 test ecx, ecx
// 004a6fc8  7410                 je 0x4a6fda
// 004a6fca  83c104               add ecx, 4
// 004a6fcd  ba01000000           mov edx, 1
// 004a6fd2  f00fc111             lock xadd dword ptr [ecx], edx
// 004a6fd6  eb02                 jmp 0x4a6fda
// 004a6fd8  33c0                 xor eax, eax
// 004a6fda  8d542408             lea edx, [esp + 8]
// 004a6fde  8bc8                 mov ecx, eax
// 004a6fe0  3bd6                 cmp edx, esi
// 004a6fe2  7404                 je 0x4a6fe8
// 004a6fe4  8b0e                 mov ecx, dword ptr [esi]
// 004a6fe6  8906                 mov dword ptr [esi], eax
// 004a6fe8  85c9                 test ecx, ecx
// 004a6fea  7408                 je 0x4a6ff4
// 004a6fec  8b01                 mov eax, dword ptr [ecx]
// 004a6fee  8b10                 mov edx, dword ptr [eax]
// 004a6ff0  6a01                 push 1
// 004a6ff2  ffd2                 call edx
// 004a6ff4  8bc6                 mov eax, esi
// 004a6ff6  5e                   pop esi
// 004a6ff7  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
