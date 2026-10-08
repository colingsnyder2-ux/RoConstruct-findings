// roc 2007-03 005ae6e0  unit: seg_005a0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae6e0
//
// 005ae6e0  d9442408             fld dword ptr [esp + 8]
// 005ae6e4  56                   push esi
// 005ae6e5  8b742408             mov esi, dword ptr [esp + 8]
// 005ae6e9  51                   push ecx
// 005ae6ea  d91c24               fstp dword ptr [esp]
// 005ae6ed  56                   push esi
// 005ae6ee  e8cd810400           call 0x5f68c0
// 005ae6f3  8bc6                 mov eax, esi
// 005ae6f5  5e                   pop esi
// 005ae6f6  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
