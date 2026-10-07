// roc 2009-06 0049a010  unit: Ogre::RbxManualResourceLoaderChain  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049a010
//
// 0049a010  8bc1                 mov eax, ecx
// 0049a012  33c9                 xor ecx, ecx
// 0049a014  c700a0fc8b00         mov dword ptr [eax], 0x8bfca0
// 0049a01a  894810               mov dword ptr [eax + 0x10], ecx
// 0049a01d  89480c               mov dword ptr [eax + 0xc], ecx
// 0049a020  894808               mov dword ptr [eax + 8], ecx
// 0049a023  894804               mov dword ptr [eax + 4], ecx
// 0049a026  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0GImage@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
