// roc 2011-06 006a3040  unit: RBX::Ball  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a3040
//
// 006a3040  d9442408             fld dword ptr [esp + 8]
// 006a3044  56                   push esi
// 006a3045  8b742408             mov esi, dword ptr [esp + 8]
// 006a3049  51                   push ecx
// 006a304a  d91c24               fstp dword ptr [esp]
// 006a304d  56                   push esi
// 006a304e  e8dd1a1000           call 0x7a4b30
// 006a3053  8bc6                 mov eax, esi
// 006a3055  5e                   pop esi
// 006a3056  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
