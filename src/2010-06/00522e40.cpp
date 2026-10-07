// roc 2010-06 00522e40  unit: RBX::MeshGen  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00522e40
//
// 00522e40  8b442404             mov eax, dword ptr [esp + 4]
// 00522e44  56                   push esi
// 00522e45  8bf1                 mov esi, ecx
// 00522e47  c70600000000         mov dword ptr [esi], 0
// 00522e4d  8b08                 mov ecx, dword ptr [eax]
// 00522e4f  51                   push ecx
// 00522e50  8bce                 mov ecx, esi
// 00522e52  e8c93ef6ff           call 0x486d20
// 00522e57  8bc6                 mov eax, esi
// 00522e59  5e                   pop esi
// 00522e5a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
