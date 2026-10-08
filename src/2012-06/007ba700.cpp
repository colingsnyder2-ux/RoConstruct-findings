// roc 2012-06 007ba700  unit: RBX::Block  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ba700
//
// 007ba700  d9442408             fld dword ptr [esp + 8]
// 007ba704  56                   push esi
// 007ba705  8b742408             mov esi, dword ptr [esp + 8]
// 007ba709  51                   push ecx
// 007ba70a  d91c24               fstp dword ptr [esp]
// 007ba70d  56                   push esi
// 007ba70e  e87d461500           call 0x90ed90
// 007ba713  8bc6                 mov eax, esi
// 007ba715  5e                   pop esi
// 007ba716  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
