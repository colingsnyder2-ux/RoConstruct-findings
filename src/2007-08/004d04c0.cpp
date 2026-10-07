// roc 2007-08 004d04c0  unit: RBX::View::PartChunk  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d04c0
//
// 004d04c0  8b442404             mov eax, dword ptr [esp + 4]
// 004d04c4  56                   push esi
// 004d04c5  8bf1                 mov esi, ecx
// 004d04c7  c70600000000         mov dword ptr [esi], 0
// 004d04cd  8b08                 mov ecx, dword ptr [eax]
// 004d04cf  51                   push ecx
// 004d04d0  8bce                 mov ecx, esi
// 004d04d2  e8994afaff           call 0x474f70
// 004d04d7  8bc6                 mov eax, esi
// 004d04d9  5e                   pop esi
// 004d04da  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
