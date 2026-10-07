// roc 2008-06 004459a0  unit: G3D::VVector2int16::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004459a0
//
// 004459a0  56                   push esi
// 004459a1  6a08                 push 8
// 004459a3  8bf1                 mov esi, ecx
// 004459a5  e876af2500           call 0x6a0920
// 004459aa  83c404               add esp, 4
// 004459ad  85c0                 test eax, eax
// 004459af  7411                 je 0x4459c2
// 004459b1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004459b5  c700bc068100         mov dword ptr [eax], 0x8106bc
// 004459bb  d901                 fld dword ptr [ecx]
// 004459bd  d95804               fstp dword ptr [eax + 4]
// 004459c0  eb02                 jmp 0x4459c4
// 004459c2  33c0                 xor eax, eax
// 004459c4  8d542408             lea edx, [esp + 8]
// 004459c8  8bc8                 mov ecx, eax
// 004459ca  3bd6                 cmp edx, esi
// 004459cc  7404                 je 0x4459d2
// 004459ce  8b0e                 mov ecx, dword ptr [esi]
// 004459d0  8906                 mov dword ptr [esi], eax
// 004459d2  85c9                 test ecx, ecx
// 004459d4  7408                 je 0x4459de
// 004459d6  8b01                 mov eax, dword ptr [ecx]
// 004459d8  8b10                 mov edx, dword ptr [eax]
// 004459da  6a01                 push 1
// 004459dc  ffd2                 call edx
// 004459de  8bc6                 mov eax, esi
// 004459e0  5e                   pop esi
// 004459e1  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4M@any@boost@@QAEAAV01@ABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
