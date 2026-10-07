// roc 2008-06 00518b80  unit: G3D::TextInput::WrongSymbol  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518b80
//
// 00518b80  8b442404             mov eax, dword ptr [esp + 4]
// 00518b84  8b09                 mov ecx, dword ptr [ecx]
// 00518b86  8d0440               lea eax, [eax + eax*2]
// 00518b89  8d0481               lea eax, [ecx + eax*4]
// 00518b8c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??A?$Array@V?$Array@PBX@G3D@@@G3D@@QAEAAV?$Array@PBX@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
