// from server: 100% by auto
// roc 2009-06 00525d40  unit: RBX::ViewRbxGfx  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00525d40
//
// 00525d40  8b442404             mov eax, dword ptr [esp + 4]
// 00525d44  56                   push esi
// 00525d45  8bf1                 mov esi, ecx
// 00525d47  8b08                 mov ecx, dword ptr [eax]
// 00525d49  51                   push ecx
// 00525d4a  8bce                 mov ecx, esi
// 00525d4c  e80f9bf7ff           call 0x49f860
// 00525d51  8bc6                 mov eax, esi
// 00525d53  5e                   pop esi
// 00525d54  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??4?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@QAEABV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
