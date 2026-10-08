// roc 2009-12 005ccbe0  unit: RBX::PartChunk  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ccbe0
//
// 005ccbe0  8b442404             mov eax, dword ptr [esp + 4]
// 005ccbe4  56                   push esi
// 005ccbe5  8bf1                 mov esi, ecx
// 005ccbe7  c70600000000         mov dword ptr [esi], 0
// 005ccbed  8b08                 mov ecx, dword ptr [eax]
// 005ccbef  51                   push ecx
// 005ccbf0  8bce                 mov ecx, esi
// 005ccbf2  e8f993f1ff           call 0x4e5ff0
// 005ccbf7  8bc6                 mov eax, esi
// 005ccbf9  5e                   pop esi
// 005ccbfa  c20400               ret 4
// library rbxgs-appdraw/Fonts.cpp (function ??0?$ReferenceCountedPointer@VGFont@G3D@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
