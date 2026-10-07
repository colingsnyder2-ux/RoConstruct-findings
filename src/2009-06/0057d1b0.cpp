// roc 2009-06 0057d1b0  unit: G3D::_internal::DialogTemplate  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057d1b0
//
// 0057d1b0  56                   push esi
// 0057d1b1  8bf1                 mov esi, ecx
// 0057d1b3  e828ebfeff           call 0x56bce0
// 0057d1b8  39442408             cmp dword ptr [esp + 8], eax
// 0057d1bc  0f95c0               setne al
// 0057d1bf  88462c               mov byte ptr [esi + 0x2c], al
// 0057d1c2  5e                   pop esi
// 0057d1c3  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?setEndian@BinaryOutput@G3D@@QAEXW4G3DEndian@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
