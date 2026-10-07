// roc 2012-06 0062c250  unit: G3D::Sphere  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062c250
//
// 0062c250  56                   push esi
// 0062c251  8b742408             mov esi, dword ptr [esp + 8]
// 0062c255  57                   push edi
// 0062c256  8bc1                 mov eax, ecx
// 0062c258  b909000000           mov ecx, 9
// 0062c25d  8bf8                 mov edi, eax
// 0062c25f  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0062c261  5f                   pop edi
// 0062c262  5e                   pop esi
// 0062c263  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??4Matrix3@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
