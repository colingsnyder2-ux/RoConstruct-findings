// from server: 100% by auto
// roc 2011-06 007f8e90  unit: PasteVerb  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f8e90
//
// 007f8e90  8b442404             mov eax, dword ptr [esp + 4]
// 007f8e94  56                   push esi
// 007f8e95  8bf1                 mov esi, ecx
// 007f8e97  8b08                 mov ecx, dword ptr [eax]
// 007f8e99  51                   push ecx
// 007f8e9a  8bce                 mov ecx, esi
// 007f8e9c  e88ffdffff           call 0x7f8c30
// 007f8ea1  8bc6                 mov eax, esi
// 007f8ea3  5e                   pop esi
// 007f8ea4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??4?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QAEABV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
