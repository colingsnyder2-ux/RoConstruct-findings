// roc 2010-06 0052cad0  unit: RBX::PartChunk  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052cad0
//
// 0052cad0  8b442404             mov eax, dword ptr [esp + 4]
// 0052cad4  56                   push esi
// 0052cad5  8bf1                 mov esi, ecx
// 0052cad7  8b08                 mov ecx, dword ptr [eax]
// 0052cad9  51                   push ecx
// 0052cada  8bce                 mov ecx, esi
// 0052cadc  e83fa2f5ff           call 0x486d20
// 0052cae1  8bc6                 mov eax, esi
// 0052cae3  5e                   pop esi
// 0052cae4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??4?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QAEABV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
