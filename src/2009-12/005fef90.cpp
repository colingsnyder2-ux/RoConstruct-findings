// roc 2009-12 005fef90  unit: G3D::_internal::DialogTemplate  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fef90
//
// 005fef90  56                   push esi
// 005fef91  8bf1                 mov esi, ecx
// 005fef93  e878befeff           call 0x5eae10
// 005fef98  39442408             cmp dword ptr [esp + 8], eax
// 005fef9c  0f95c0               setne al
// 005fef9f  88462c               mov byte ptr [esi + 0x2c], al
// 005fefa2  5e                   pop esi
// 005fefa3  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?setEndian@BinaryOutput@G3D@@QAEXW4G3DEndian@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
