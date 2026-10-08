// roc 2008-06 005e7390  unit: RBX::Block  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7390
//
// 005e7390  d9442408             fld dword ptr [esp + 8]
// 005e7394  56                   push esi
// 005e7395  8b742408             mov esi, dword ptr [esp + 8]
// 005e7399  51                   push ecx
// 005e739a  d91c24               fstp dword ptr [esp]
// 005e739d  56                   push esi
// 005e739e  e80d040600           call 0x6477b0
// 005e73a3  8bc6                 mov eax, esi
// 005e73a5  5e                   pop esi
// 005e73a6  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
