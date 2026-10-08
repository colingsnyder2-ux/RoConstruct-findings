// roc 2008-06 0056d1d0  unit: G3D::VColor3::?$holder  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d1d0
//
// 0056d1d0  56                   push esi
// 0056d1d1  6a10                 push 0x10
// 0056d1d3  8bf1                 mov esi, ecx
// 0056d1d5  e846371300           call 0x6a0920
// 0056d1da  83c404               add esp, 4
// 0056d1dd  85c0                 test eax, eax
// 0056d1df  741d                 je 0x56d1fe
// 0056d1e1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056d1e5  d901                 fld dword ptr [ecx]
// 0056d1e7  c70074f68200         mov dword ptr [eax], 0x82f674
// 0056d1ed  d95804               fstp dword ptr [eax + 4]
// 0056d1f0  d94104               fld dword ptr [ecx + 4]
// 0056d1f3  d95808               fstp dword ptr [eax + 8]
// 0056d1f6  d94108               fld dword ptr [ecx + 8]
// 0056d1f9  d9580c               fstp dword ptr [eax + 0xc]
// 0056d1fc  eb02                 jmp 0x56d200
// 0056d1fe  33c0                 xor eax, eax
// 0056d200  8d542408             lea edx, [esp + 8]
// 0056d204  8bc8                 mov ecx, eax
// 0056d206  3bd6                 cmp edx, esi
// 0056d208  7404                 je 0x56d20e
// 0056d20a  8b0e                 mov ecx, dword ptr [esi]
// 0056d20c  8906                 mov dword ptr [esi], eax
// 0056d20e  85c9                 test ecx, ecx
// 0056d210  7408                 je 0x56d21a
// 0056d212  8b01                 mov eax, dword ptr [ecx]
// 0056d214  8b10                 mov edx, dword ptr [eax]
// 0056d216  6a01                 push 1
// 0056d218  ffd2                 call edx
// 0056d21a  8bc6                 mov eax, esi
// 0056d21c  5e                   pop esi
// 0056d21d  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4VVector3@G3D@@@any@boost@@QAEAAV01@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
