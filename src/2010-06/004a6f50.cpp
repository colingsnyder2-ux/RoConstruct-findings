// roc 2010-06 004a6f50  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a6f50
//
// 004a6f50  56                   push esi
// 004a6f51  6a10                 push 0x10
// 004a6f53  8bf1                 mov esi, ecx
// 004a6f55  e8460a3000           call 0x7a79a0
// 004a6f5a  83c404               add esp, 4
// 004a6f5d  85c0                 test eax, eax
// 004a6f5f  741d                 je 0x4a6f7e
// 004a6f61  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a6f65  d901                 fld dword ptr [ecx]
// 004a6f67  c700747ea100         mov dword ptr [eax], 0xa17e74
// 004a6f6d  d95804               fstp dword ptr [eax + 4]
// 004a6f70  d94104               fld dword ptr [ecx + 4]
// 004a6f73  d95808               fstp dword ptr [eax + 8]
// 004a6f76  d94108               fld dword ptr [ecx + 8]
// 004a6f79  d9580c               fstp dword ptr [eax + 0xc]
// 004a6f7c  eb02                 jmp 0x4a6f80
// 004a6f7e  33c0                 xor eax, eax
// 004a6f80  8d542408             lea edx, [esp + 8]
// 004a6f84  8bc8                 mov ecx, eax
// 004a6f86  3bd6                 cmp edx, esi
// 004a6f88  7404                 je 0x4a6f8e
// 004a6f8a  8b0e                 mov ecx, dword ptr [esi]
// 004a6f8c  8906                 mov dword ptr [esi], eax
// 004a6f8e  85c9                 test ecx, ecx
// 004a6f90  7408                 je 0x4a6f9a
// 004a6f92  8b01                 mov eax, dword ptr [ecx]
// 004a6f94  8b10                 mov edx, dword ptr [eax]
// 004a6f96  6a01                 push 1
// 004a6f98  ffd2                 call edx
// 004a6f9a  8bc6                 mov eax, esi
// 004a6f9c  5e                   pop esi
// 004a6f9d  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4VVector3@G3D@@@any@boost@@QAEAAV01@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
