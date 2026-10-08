// roc 2012-06 007b9100  unit: RBX::Ball  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b9100
//
// 007b9100  d9442408             fld dword ptr [esp + 8]
// 007b9104  56                   push esi
// 007b9105  8b742408             mov esi, dword ptr [esp + 8]
// 007b9109  51                   push ecx
// 007b910a  d91c24               fstp dword ptr [esp]
// 007b910d  56                   push esi
// 007b910e  e83df11400           call 0x908250
// 007b9113  8bc6                 mov eax, esi
// 007b9115  5e                   pop esi
// 007b9116  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?getMoment@Block@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
