// roc 2011-06 00540050  unit: G3D::MemoryManager  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00540050
//
// 00540050  56                   push esi
// 00540051  8b742408             mov esi, dword ptr [esp + 8]
// 00540055  57                   push edi
// 00540056  8bc1                 mov eax, ecx
// 00540058  b909000000           mov ecx, 9
// 0054005d  8bf8                 mov edi, eax
// 0054005f  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00540061  5f                   pop edi
// 00540062  5e                   pop esi
// 00540063  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??4Matrix3@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
