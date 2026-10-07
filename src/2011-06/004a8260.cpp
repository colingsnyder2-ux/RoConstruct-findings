// roc 2011-06 004a8260  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a8260
//
// 004a8260  56                   push esi
// 004a8261  6a0c                 push 0xc
// 004a8263  8bf1                 mov esi, ecx
// 004a8265  e8f41d3600           call 0x80a05e
// 004a826a  83c404               add esp, 4
// 004a826d  85c0                 test eax, eax
// 004a826f  7427                 je 0x4a8298
// 004a8271  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a8275  c700686ea700         mov dword ptr [eax], 0xa76e68
// 004a827b  8b11                 mov edx, dword ptr [ecx]
// 004a827d  895004               mov dword ptr [eax + 4], edx
// 004a8280  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a8283  894808               mov dword ptr [eax + 8], ecx
// 004a8286  85c9                 test ecx, ecx
// 004a8288  7410                 je 0x4a829a
// 004a828a  83c104               add ecx, 4
// 004a828d  ba01000000           mov edx, 1
// 004a8292  f00fc111             lock xadd dword ptr [ecx], edx
// 004a8296  eb02                 jmp 0x4a829a
// 004a8298  33c0                 xor eax, eax
// 004a829a  8d542408             lea edx, [esp + 8]
// 004a829e  8bc8                 mov ecx, eax
// 004a82a0  3bd6                 cmp edx, esi
// 004a82a2  7404                 je 0x4a82a8
// 004a82a4  8b0e                 mov ecx, dword ptr [esi]
// 004a82a6  8906                 mov dword ptr [esi], eax
// 004a82a8  85c9                 test ecx, ecx
// 004a82aa  7408                 je 0x4a82b4
// 004a82ac  8b01                 mov eax, dword ptr [ecx]
// 004a82ae  8b10                 mov edx, dword ptr [eax]
// 004a82b0  6a01                 push 1
// 004a82b2  ffd2                 call edx
// 004a82b4  8bc6                 mov eax, esi
// 004a82b6  5e                   pop esi
// 004a82b7  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@any@boost@@QAEAAV01@ABV?$shared_ptr@VDescribedBase@Reflection@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
