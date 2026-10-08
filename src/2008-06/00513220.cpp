// from server: 100% by auto
// roc 2008-06 00513220  unit: G3D::GCamera  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513220
//
// 00513220  56                   push esi
// 00513221  8b742408             mov esi, dword ptr [esp + 8]
// 00513225  57                   push edi
// 00513226  8bc1                 mov eax, ecx
// 00513228  b909000000           mov ecx, 9
// 0051322d  8bf8                 mov edi, eax
// 0051322f  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00513231  5f                   pop edi
// 00513232  5e                   pop esi
// 00513233  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??4Matrix3@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
