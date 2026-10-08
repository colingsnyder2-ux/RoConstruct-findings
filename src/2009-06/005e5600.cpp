// roc 2009-06 005e5600  unit: RBX::Reflection::Descriptor  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e5600
//
// 005e5600  56                   push esi
// 005e5601  6a10                 push 0x10
// 005e5603  8bf1                 mov esi, ecx
// 005e5605  e82e341300           call 0x718a38
// 005e560a  83c404               add esp, 4
// 005e560d  85c0                 test eax, eax
// 005e560f  741d                 je 0x5e562e
// 005e5611  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e5615  d901                 fld dword ptr [ecx]
// 005e5617  c7007c5c8d00         mov dword ptr [eax], 0x8d5c7c
// 005e561d  d95804               fstp dword ptr [eax + 4]
// 005e5620  d94104               fld dword ptr [ecx + 4]
// 005e5623  d95808               fstp dword ptr [eax + 8]
// 005e5626  d94108               fld dword ptr [ecx + 8]
// 005e5629  d9580c               fstp dword ptr [eax + 0xc]
// 005e562c  eb02                 jmp 0x5e5630
// 005e562e  33c0                 xor eax, eax
// 005e5630  8d542408             lea edx, [esp + 8]
// 005e5634  8bc8                 mov ecx, eax
// 005e5636  3bd6                 cmp edx, esi
// 005e5638  7404                 je 0x5e563e
// 005e563a  8b0e                 mov ecx, dword ptr [esi]
// 005e563c  8906                 mov dword ptr [esi], eax
// 005e563e  85c9                 test ecx, ecx
// 005e5640  7408                 je 0x5e564a
// 005e5642  8b01                 mov eax, dword ptr [ecx]
// 005e5644  8b10                 mov edx, dword ptr [eax]
// 005e5646  6a01                 push 1
// 005e5648  ffd2                 call edx
// 005e564a  8bc6                 mov eax, esi
// 005e564c  5e                   pop esi
// 005e564d  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4VVector3@G3D@@@any@boost@@QAEAAV01@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
