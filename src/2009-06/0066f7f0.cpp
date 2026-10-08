// roc 2009-06 0066f7f0  unit: RBX::Block  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f7f0
//
// 0066f7f0  d9442408             fld dword ptr [esp + 8]
// 0066f7f4  56                   push esi
// 0066f7f5  8b742408             mov esi, dword ptr [esp + 8]
// 0066f7f9  51                   push ecx
// 0066f7fa  d91c24               fstp dword ptr [esp]
// 0066f7fd  56                   push esi
// 0066f7fe  e8cd2d0600           call 0x6d25d0
// 0066f803  8bc6                 mov eax, esi
// 0066f805  5e                   pop esi
// 0066f806  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
