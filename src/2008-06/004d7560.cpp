// roc 2008-06 004d7560  unit: Ogre::VDataStream::?$SharedPtr  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7560
//
// 004d7560  8b442404             mov eax, dword ptr [esp + 4]
// 004d7564  56                   push esi
// 004d7565  8bf1                 mov esi, ecx
// 004d7567  8b08                 mov ecx, dword ptr [eax]
// 004d7569  51                   push ecx
// 004d756a  8bce                 mov ecx, esi
// 004d756c  e82f1a0c00           call 0x598fa0
// 004d7571  8bc6                 mov eax, esi
// 004d7573  5e                   pop esi
// 004d7574  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??4?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QAEABV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
