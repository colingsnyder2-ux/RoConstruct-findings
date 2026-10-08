// roc 2007-03 004fda70  unit: seg_004f0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fda70
//
// 004fda70  56                   push esi
// 004fda71  57                   push edi
// 004fda72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004fda76  d907                 fld dword ptr [edi]
// 004fda78  83ec08               sub esp, 8
// 004fda7b  dc05584f7900         fadd qword ptr [0x794f58]
// 004fda81  8bf1                 mov esi, ecx
// 004fda83  dd1c24               fstp qword ptr [esp]
// 004fda86  e83d1b1200           call 0x61f5c8
// 004fda8b  e870171200           call 0x61f200
// 004fda90  668906               mov word ptr [esi], ax
// 004fda93  d94704               fld dword ptr [edi + 4]
// 004fda96  dc05584f7900         fadd qword ptr [0x794f58]
// 004fda9c  dd1c24               fstp qword ptr [esp]
// 004fda9f  e8241b1200           call 0x61f5c8
// 004fdaa4  83c408               add esp, 8
// 004fdaa7  e854171200           call 0x61f200
// 004fdaac  66894602             mov word ptr [esi + 2], ax
// 004fdab0  5f                   pop edi
// 004fdab1  8bc6                 mov eax, esi
// 004fdab3  5e                   pop esi
// 004fdab4  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Vector2int16.cpp (function ??0Vector2int16@G3D@@QAE@ABVVector2@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Vector2int16.cpp
