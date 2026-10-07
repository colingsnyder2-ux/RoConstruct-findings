// roc 2009-06 004cbaa0  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cbaa0
//
// 004cbaa0  56                   push esi
// 004cbaa1  6a0c                 push 0xc
// 004cbaa3  8bf1                 mov esi, ecx
// 004cbaa5  e88ecf2400           call 0x718a38
// 004cbaaa  83c404               add esp, 4
// 004cbaad  85c0                 test eax, eax
// 004cbaaf  7427                 je 0x4cbad8
// 004cbab1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cbab5  c70078518c00         mov dword ptr [eax], 0x8c5178
// 004cbabb  8b11                 mov edx, dword ptr [ecx]
// 004cbabd  895004               mov dword ptr [eax + 4], edx
// 004cbac0  8b4904               mov ecx, dword ptr [ecx + 4]
// 004cbac3  894808               mov dword ptr [eax + 8], ecx
// 004cbac6  85c9                 test ecx, ecx
// 004cbac8  7410                 je 0x4cbada
// 004cbaca  83c104               add ecx, 4
// 004cbacd  ba01000000           mov edx, 1
// 004cbad2  f00fc111             lock xadd dword ptr [ecx], edx
// 004cbad6  eb02                 jmp 0x4cbada
// 004cbad8  33c0                 xor eax, eax
// 004cbada  8d542408             lea edx, [esp + 8]
// 004cbade  8bc8                 mov ecx, eax
// 004cbae0  3bd6                 cmp edx, esi
// 004cbae2  7404                 je 0x4cbae8
// 004cbae4  8b0e                 mov ecx, dword ptr [esi]
// 004cbae6  8906                 mov dword ptr [esi], eax
// 004cbae8  85c9                 test ecx, ecx
// 004cbaea  7408                 je 0x4cbaf4
// 004cbaec  8b01                 mov eax, dword ptr [ecx]
// 004cbaee  8b10                 mov edx, dword ptr [eax]
// 004cbaf0  6a01                 push 1
// 004cbaf2  ffd2                 call edx
// 004cbaf4  8bc6                 mov eax, esi
// 004cbaf6  5e                   pop esi
// 004cbaf7  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
