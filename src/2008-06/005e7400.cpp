// roc 2008-06 005e7400  unit: RBX::Ball  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7400
//
// 005e7400  d9442408             fld dword ptr [esp + 8]
// 005e7404  56                   push esi
// 005e7405  8b742408             mov esi, dword ptr [esp + 8]
// 005e7409  51                   push ecx
// 005e740a  d91c24               fstp dword ptr [esp]
// 005e740d  56                   push esi
// 005e740e  e81d1d0600           call 0x649130
// 005e7413  8bc6                 mov eax, esi
// 005e7415  5e                   pop esi
// 005e7416  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
