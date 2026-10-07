// roc 2008-06 0049b6b0  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b6b0
//
// 0049b6b0  56                   push esi
// 0049b6b1  6a0c                 push 0xc
// 0049b6b3  8bf1                 mov esi, ecx
// 0049b6b5  e866522000           call 0x6a0920
// 0049b6ba  83c404               add esp, 4
// 0049b6bd  85c0                 test eax, eax
// 0049b6bf  7427                 je 0x49b6e8
// 0049b6c1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049b6c5  c700b8298200         mov dword ptr [eax], 0x8229b8
// 0049b6cb  8b11                 mov edx, dword ptr [ecx]
// 0049b6cd  895004               mov dword ptr [eax + 4], edx
// 0049b6d0  8b4904               mov ecx, dword ptr [ecx + 4]
// 0049b6d3  894808               mov dword ptr [eax + 8], ecx
// 0049b6d6  85c9                 test ecx, ecx
// 0049b6d8  7410                 je 0x49b6ea
// 0049b6da  83c104               add ecx, 4
// 0049b6dd  ba01000000           mov edx, 1
// 0049b6e2  f00fc111             lock xadd dword ptr [ecx], edx
// 0049b6e6  eb02                 jmp 0x49b6ea
// 0049b6e8  33c0                 xor eax, eax
// 0049b6ea  8d542408             lea edx, [esp + 8]
// 0049b6ee  8bc8                 mov ecx, eax
// 0049b6f0  3bd6                 cmp edx, esi
// 0049b6f2  7404                 je 0x49b6f8
// 0049b6f4  8b0e                 mov ecx, dword ptr [esi]
// 0049b6f6  8906                 mov dword ptr [esi], eax
// 0049b6f8  85c9                 test ecx, ecx
// 0049b6fa  7408                 je 0x49b704
// 0049b6fc  8b01                 mov eax, dword ptr [ecx]
// 0049b6fe  8b10                 mov edx, dword ptr [eax]
// 0049b700  6a01                 push 1
// 0049b702  ffd2                 call edx
// 0049b704  8bc6                 mov eax, esi
// 0049b706  5e                   pop esi
// 0049b707  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
