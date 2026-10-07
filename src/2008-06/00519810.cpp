// roc 2008-06 00519810  unit: G3D::_internal::DialogTemplate  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519810
//
// 00519810  56                   push esi
// 00519811  8bf1                 mov esi, ecx
// 00519813  e868f0feff           call 0x508880
// 00519818  39442408             cmp dword ptr [esp + 8], eax
// 0051981c  0f95c0               setne al
// 0051981f  88462c               mov byte ptr [esi + 0x2c], al
// 00519822  5e                   pop esi
// 00519823  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?setEndian@BinaryOutput@G3D@@QAEXW4G3DEndian@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
