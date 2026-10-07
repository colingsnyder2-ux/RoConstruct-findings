// roc 2008-06 00411790  unit: CBrush  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411790
//
// 00411790  8bc1                 mov eax, ecx
// 00411792  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00411796  d901                 fld dword ptr [ecx]
// 00411798  d918                 fstp dword ptr [eax]
// 0041179a  d94104               fld dword ptr [ecx + 4]
// 0041179d  d95804               fstp dword ptr [eax + 4]
// 004117a0  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0Vector2@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
