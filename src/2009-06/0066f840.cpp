// roc 2009-06 0066f840  unit: RBX::Ball  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f840
//
// 0066f840  d9442408             fld dword ptr [esp + 8]
// 0066f844  56                   push esi
// 0066f845  8b742408             mov esi, dword ptr [esp + 8]
// 0066f849  51                   push ecx
// 0066f84a  d91c24               fstp dword ptr [esp]
// 0066f84d  56                   push esi
// 0066f84e  e8ed470600           call 0x6d4040
// 0066f853  8bc6                 mov eax, esi
// 0066f855  5e                   pop esi
// 0066f856  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
