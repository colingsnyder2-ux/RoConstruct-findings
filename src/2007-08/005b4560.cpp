// roc 2007-08 005b4560  unit: RBX::Block  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4560
//
// 005b4560  d9442408             fld dword ptr [esp + 8]
// 005b4564  56                   push esi
// 005b4565  8b742408             mov esi, dword ptr [esp + 8]
// 005b4569  51                   push ecx
// 005b456a  d91c24               fstp dword ptr [esp]
// 005b456d  56                   push esi
// 005b456e  e88d7e0500           call 0x60c400
// 005b4573  8bc6                 mov eax, esi
// 005b4575  5e                   pop esi
// 005b4576  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
