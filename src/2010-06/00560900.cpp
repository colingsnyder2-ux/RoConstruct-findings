// from server: 100% by auto
// roc 2010-06 00560900  unit: G3D::_internal::DialogTemplate  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560900
//
// 00560900  56                   push esi
// 00560901  8bf1                 mov esi, ecx
// 00560903  e8e8dafeff           call 0x54e3f0
// 00560908  39442408             cmp dword ptr [esp + 8], eax
// 0056090c  0f95c0               setne al
// 0056090f  88462c               mov byte ptr [esi + 0x2c], al
// 00560912  5e                   pop esi
// 00560913  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?setEndian@BinaryOutput@G3D@@QAEXW4G3DEndian@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
