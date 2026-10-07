// roc 2007-08 005095d0  unit: G3D::GCamera  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005095d0
//
// 005095d0  56                   push esi
// 005095d1  8b742408             mov esi, dword ptr [esp + 8]
// 005095d5  57                   push edi
// 005095d6  8bc1                 mov eax, ecx
// 005095d8  b909000000           mov ecx, 9
// 005095dd  8bf8                 mov edi, eax
// 005095df  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005095e1  5f                   pop edi
// 005095e2  5e                   pop esi
// 005095e3  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??4Matrix3@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
