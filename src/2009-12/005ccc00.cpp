// roc 2009-12 005ccc00  unit: RBX::PartChunk  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ccc00
//
// 005ccc00  8b442404             mov eax, dword ptr [esp + 4]
// 005ccc04  56                   push esi
// 005ccc05  8bf1                 mov esi, ecx
// 005ccc07  8b08                 mov ecx, dword ptr [eax]
// 005ccc09  51                   push ecx
// 005ccc0a  8bce                 mov ecx, esi
// 005ccc0c  e8df93f1ff           call 0x4e5ff0
// 005ccc11  8bc6                 mov eax, esi
// 005ccc13  5e                   pop esi
// 005ccc14  c20400               ret 4
// library rbxgs-appdraw/Fonts.cpp (function ??4?$ReferenceCountedPointer@VGFont@G3D@@@G3D@@QAEABV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
