// from server: 100% by auto
// roc 2009-06 00499f80  unit: Ogre::RbxManualResourceLoaderChain  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00499f80
//
// 00499f80  56                   push esi
// 00499f81  8b742408             mov esi, dword ptr [esp + 8]
// 00499f85  57                   push edi
// 00499f86  8bc1                 mov eax, ecx
// 00499f88  b909000000           mov ecx, 9
// 00499f8d  8bf8                 mov edi, eax
// 00499f8f  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00499f91  5f                   pop edi
// 00499f92  5e                   pop esi
// 00499f93  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??4Matrix3@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
