// roc 2007-03 005ae690  unit: seg_005a0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae690
//
// 005ae690  d9442408             fld dword ptr [esp + 8]
// 005ae694  56                   push esi
// 005ae695  8b742408             mov esi, dword ptr [esp + 8]
// 005ae699  51                   push ecx
// 005ae69a  d91c24               fstp dword ptr [esp]
// 005ae69d  56                   push esi
// 005ae69e  e88d6b0400           call 0x5f5230
// 005ae6a3  8bc6                 mov eax, esi
// 005ae6a5  5e                   pop esi
// 005ae6a6  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
