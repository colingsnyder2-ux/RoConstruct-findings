// roc 2009-12 006ec050  unit: RBX::Geometry  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ec050
//
// 006ec050  56                   push esi
// 006ec051  e8ea88f0ff           call 0x5f4940
// 006ec056  8b742408             mov esi, dword ptr [esp + 8]
// 006ec05a  50                   push eax
// 006ec05b  8bce                 mov ecx, esi
// 006ec05d  e89e78f0ff           call 0x5f3900
// 006ec062  8bc6                 mov eax, esi
// 006ec064  5e                   pop esi
// 006ec065  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getMoment@Geometry@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
