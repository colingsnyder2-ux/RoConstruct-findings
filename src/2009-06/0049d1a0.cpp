// roc 2009-06 0049d1a0  unit: G3D::Texture  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049d1a0
//
// 0049d1a0  8b442404             mov eax, dword ptr [esp + 4]
// 0049d1a4  56                   push esi
// 0049d1a5  8bf1                 mov esi, ecx
// 0049d1a7  c70600000000         mov dword ptr [esi], 0
// 0049d1ad  8b08                 mov ecx, dword ptr [eax]
// 0049d1af  51                   push ecx
// 0049d1b0  8bce                 mov ecx, esi
// 0049d1b2  e8a9260000           call 0x49f860
// 0049d1b7  8bc6                 mov eax, esi
// 0049d1b9  5e                   pop esi
// 0049d1ba  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
