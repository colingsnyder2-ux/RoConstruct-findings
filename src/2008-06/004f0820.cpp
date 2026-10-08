// from server: 100% by auto
// roc 2008-06 004f0820  unit: RBX::ViewNew::Texture  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f0820
//
// 004f0820  8b442404             mov eax, dword ptr [esp + 4]
// 004f0824  56                   push esi
// 004f0825  8bf1                 mov esi, ecx
// 004f0827  c70600000000         mov dword ptr [esi], 0
// 004f082d  8b08                 mov ecx, dword ptr [eax]
// 004f082f  51                   push ecx
// 004f0830  8bce                 mov ecx, esi
// 004f0832  e869870a00           call 0x598fa0
// 004f0837  8bc6                 mov eax, esi
// 004f0839  5e                   pop esi
// 004f083a  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
