// roc 2007-08 005b45b0  unit: RBX::Ball  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b45b0
//
// 005b45b0  d9442408             fld dword ptr [esp + 8]
// 005b45b4  56                   push esi
// 005b45b5  8b742408             mov esi, dword ptr [esp + 8]
// 005b45b9  51                   push ecx
// 005b45ba  d91c24               fstp dword ptr [esp]
// 005b45bd  56                   push esi
// 005b45be  e83d950500           call 0x60db00
// 005b45c3  8bc6                 mov eax, esi
// 005b45c5  5e                   pop esi
// 005b45c6  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
