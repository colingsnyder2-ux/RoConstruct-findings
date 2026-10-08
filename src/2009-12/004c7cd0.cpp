// roc 2009-12 004c7cd0  unit: G3D::GImage::Error  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c7cd0
//
// 004c7cd0  8b442404             mov eax, dword ptr [esp + 4]
// 004c7cd4  56                   push esi
// 004c7cd5  8bf1                 mov esi, ecx
// 004c7cd7  8b08                 mov ecx, dword ptr [eax]
// 004c7cd9  51                   push ecx
// 004c7cda  8bce                 mov ecx, esi
// 004c7cdc  e88f3ef8ff           call 0x44bb70
// 004c7ce1  8bc6                 mov eax, esi
// 004c7ce3  5e                   pop esi
// 004c7ce4  c20400               ret 4
// library rbxgs-appdraw/Fonts.cpp (function ??4?$ReferenceCountedPointer@VGFont@G3D@@@G3D@@QAEABV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
