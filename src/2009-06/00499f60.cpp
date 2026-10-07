// roc 2009-06 00499f60  unit: Ogre::RbxManualResourceLoaderChain  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00499f60
//
// 00499f60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00499f64  8b442408             mov eax, dword ptr [esp + 8]
// 00499f68  3bc8                 cmp ecx, eax
// 00499f6a  7e0a                 jle 0x499f76
// 00499f6c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00499f70  3bc8                 cmp ecx, eax
// 00499f72  7d02                 jge 0x499f76
// 00499f74  8bc1                 mov eax, ecx
// 00499f76  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?iClamp@G3D@@YAHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
