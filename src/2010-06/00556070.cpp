// roc 2010-06 00556070  unit: seg_00550000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00556070
//
// 00556070  56                   push esi
// 00556071  8b742408             mov esi, dword ptr [esp + 8]
// 00556075  57                   push edi
// 00556076  8bc1                 mov eax, ecx
// 00556078  b909000000           mov ecx, 9
// 0055607d  8bf8                 mov edi, eax
// 0055607f  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00556081  5f                   pop edi
// 00556082  5e                   pop esi
// 00556083  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??4Matrix3@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
