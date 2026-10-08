// roc 2010-06 00678780  unit: RBX::Block  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00678780
//
// 00678780  d9442408             fld dword ptr [esp + 8]
// 00678784  56                   push esi
// 00678785  8b742408             mov esi, dword ptr [esp + 8]
// 00678789  51                   push ecx
// 0067878a  d91c24               fstp dword ptr [esp]
// 0067878d  56                   push esi
// 0067878e  e8bd200e00           call 0x75a850
// 00678793  8bc6                 mov eax, esi
// 00678795  5e                   pop esi
// 00678796  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
