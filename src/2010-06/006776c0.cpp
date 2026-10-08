// roc 2010-06 006776c0  unit: RBX::Geometry  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006776c0
//
// 006776c0  56                   push esi
// 006776c1  e8eafbedff           call 0x5572b0
// 006776c6  8b742408             mov esi, dword ptr [esp + 8]
// 006776ca  50                   push eax
// 006776cb  8bce                 mov ecx, esi
// 006776cd  e89ee9edff           call 0x556070
// 006776d2  8bc6                 mov eax, esi
// 006776d4  5e                   pop esi
// 006776d5  c20800               ret 8
// library rbxgs/v8world\Primitive.cpp (function ?getMoment@Geometry@RBX@@UBE?AVMatrix3@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Primitive.cpp
