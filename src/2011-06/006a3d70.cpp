// roc 2011-06 006a3d70  unit: RBX::Block  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a3d70
//
// 006a3d70  d9442408             fld dword ptr [esp + 8]
// 006a3d74  56                   push esi
// 006a3d75  8b742408             mov esi, dword ptr [esp + 8]
// 006a3d79  51                   push ecx
// 006a3d7a  d91c24               fstp dword ptr [esp]
// 006a3d7d  56                   push esi
// 006a3d7e  e81d611000           call 0x7a9ea0
// 006a3d83  8bc6                 mov eax, esi
// 006a3d85  5e                   pop esi
// 006a3d86  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
