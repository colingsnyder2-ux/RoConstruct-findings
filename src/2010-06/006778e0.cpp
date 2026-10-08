// roc 2010-06 006778e0  unit: RBX::Ball  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006778e0
//
// 006778e0  d9442408             fld dword ptr [esp + 8]
// 006778e4  56                   push esi
// 006778e5  8b742408             mov esi, dword ptr [esp + 8]
// 006778e9  51                   push ecx
// 006778ea  d91c24               fstp dword ptr [esp]
// 006778ed  56                   push esi
// 006778ee  e83dbe0d00           call 0x753730
// 006778f3  8bc6                 mov eax, esi
// 006778f5  5e                   pop esi
// 006778f6  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
