// roc 2009-12 00631080  unit: RBX::Reflection::$$CBUTuple::V?$shared_ptr::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00631080
//
// 00631080  56                   push esi
// 00631081  6a0c                 push 0xc
// 00631083  8bf1                 mov esi, ecx
// 00631085  e8d6271c00           call 0x7f3860
// 0063108a  83c404               add esp, 4
// 0063108d  85c0                 test eax, eax
// 0063108f  7427                 je 0x6310b8
// 00631091  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00631095  c700d8b59c00         mov dword ptr [eax], 0x9cb5d8
// 0063109b  8b11                 mov edx, dword ptr [ecx]
// 0063109d  895004               mov dword ptr [eax + 4], edx
// 006310a0  8b4904               mov ecx, dword ptr [ecx + 4]
// 006310a3  894808               mov dword ptr [eax + 8], ecx
// 006310a6  85c9                 test ecx, ecx
// 006310a8  7410                 je 0x6310ba
// 006310aa  83c104               add ecx, 4
// 006310ad  ba01000000           mov edx, 1
// 006310b2  f00fc111             lock xadd dword ptr [ecx], edx
// 006310b6  eb02                 jmp 0x6310ba
// 006310b8  33c0                 xor eax, eax
// 006310ba  8d542408             lea edx, [esp + 8]
// 006310be  8bc8                 mov ecx, eax
// 006310c0  3bd6                 cmp edx, esi
// 006310c2  7404                 je 0x6310c8
// 006310c4  8b0e                 mov ecx, dword ptr [esi]
// 006310c6  8906                 mov dword ptr [esi], eax
// 006310c8  85c9                 test ecx, ecx
// 006310ca  7408                 je 0x6310d4
// 006310cc  8b01                 mov eax, dword ptr [ecx]
// 006310ce  8b10                 mov edx, dword ptr [eax]
// 006310d0  6a01                 push 1
// 006310d2  ffd2                 call edx
// 006310d4  8bc6                 mov eax, esi
// 006310d6  5e                   pop esi
// 006310d7  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
