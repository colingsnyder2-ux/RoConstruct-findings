// roc 2009-12 004f9090  unit: RBX::VBrickColor::?$holder  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f9090
//
// 004f9090  56                   push esi
// 004f9091  6a10                 push 0x10
// 004f9093  8bf1                 mov esi, ecx
// 004f9095  e8c6a72f00           call 0x7f3860
// 004f909a  83c404               add esp, 4
// 004f909d  85c0                 test eax, eax
// 004f909f  741d                 je 0x4f90be
// 004f90a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f90a5  d901                 fld dword ptr [ecx]
// 004f90a7  c700c4a19b00         mov dword ptr [eax], 0x9ba1c4
// 004f90ad  d95804               fstp dword ptr [eax + 4]
// 004f90b0  d94104               fld dword ptr [ecx + 4]
// 004f90b3  d95808               fstp dword ptr [eax + 8]
// 004f90b6  d94108               fld dword ptr [ecx + 8]
// 004f90b9  d9580c               fstp dword ptr [eax + 0xc]
// 004f90bc  eb02                 jmp 0x4f90c0
// 004f90be  33c0                 xor eax, eax
// 004f90c0  8d542408             lea edx, [esp + 8]
// 004f90c4  8bc8                 mov ecx, eax
// 004f90c6  3bd6                 cmp edx, esi
// 004f90c8  7404                 je 0x4f90ce
// 004f90ca  8b0e                 mov ecx, dword ptr [esi]
// 004f90cc  8906                 mov dword ptr [esi], eax
// 004f90ce  85c9                 test ecx, ecx
// 004f90d0  7408                 je 0x4f90da
// 004f90d2  8b01                 mov eax, dword ptr [ecx]
// 004f90d4  8b10                 mov edx, dword ptr [eax]
// 004f90d6  6a01                 push 1
// 004f90d8  ffd2                 call edx
// 004f90da  8bc6                 mov eax, esi
// 004f90dc  5e                   pop esi
// 004f90dd  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4VVector3@G3D@@@any@boost@@QAEAAV01@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
