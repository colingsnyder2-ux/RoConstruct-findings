// roc 2007-08 004708f0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004708f0
//
// 004708f0  8b442404             mov eax, dword ptr [esp + 4]
// 004708f4  56                   push esi
// 004708f5  8bf1                 mov esi, ecx
// 004708f7  8b08                 mov ecx, dword ptr [eax]
// 004708f9  51                   push ecx
// 004708fa  8bce                 mov ecx, esi
// 004708fc  e86f460000           call 0x474f70
// 00470901  8bc6                 mov eax, esi
// 00470903  5e                   pop esi
// 00470904  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??4?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QAEABV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
