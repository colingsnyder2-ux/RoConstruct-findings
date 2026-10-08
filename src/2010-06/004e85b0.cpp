// roc 2010-06 004e85b0  unit: G3D::VRay::?$holder  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e85b0
//
// 004e85b0  56                   push esi
// 004e85b1  6a10                 push 0x10
// 004e85b3  8bf1                 mov esi, ecx
// 004e85b5  e8e6f32b00           call 0x7a79a0
// 004e85ba  83c404               add esp, 4
// 004e85bd  85c0                 test eax, eax
// 004e85bf  741d                 je 0x4e85de
// 004e85c1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e85c5  d901                 fld dword ptr [ecx]
// 004e85c7  c700b8b0a100         mov dword ptr [eax], 0xa1b0b8
// 004e85cd  d95804               fstp dword ptr [eax + 4]
// 004e85d0  d94104               fld dword ptr [ecx + 4]
// 004e85d3  d95808               fstp dword ptr [eax + 8]
// 004e85d6  d94108               fld dword ptr [ecx + 8]
// 004e85d9  d9580c               fstp dword ptr [eax + 0xc]
// 004e85dc  eb02                 jmp 0x4e85e0
// 004e85de  33c0                 xor eax, eax
// 004e85e0  8d542408             lea edx, [esp + 8]
// 004e85e4  8bc8                 mov ecx, eax
// 004e85e6  3bd6                 cmp edx, esi
// 004e85e8  7404                 je 0x4e85ee
// 004e85ea  8b0e                 mov ecx, dword ptr [esi]
// 004e85ec  8906                 mov dword ptr [esi], eax
// 004e85ee  85c9                 test ecx, ecx
// 004e85f0  7408                 je 0x4e85fa
// 004e85f2  8b01                 mov eax, dword ptr [ecx]
// 004e85f4  8b10                 mov edx, dword ptr [eax]
// 004e85f6  6a01                 push 1
// 004e85f8  ffd2                 call edx
// 004e85fa  8bc6                 mov eax, esi
// 004e85fc  5e                   pop esi
// 004e85fd  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4VVector3@G3D@@@any@boost@@QAEAAV01@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
