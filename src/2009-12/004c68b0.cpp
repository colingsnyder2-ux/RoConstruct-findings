// roc 2009-12 004c68b0  unit: Ogre::istreamDataStream  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c68b0
//
// 004c68b0  8bc1                 mov eax, ecx
// 004c68b2  33c9                 xor ecx, ecx
// 004c68b4  c70098559b00         mov dword ptr [eax], 0x9b5598
// 004c68ba  894810               mov dword ptr [eax + 0x10], ecx
// 004c68bd  89480c               mov dword ptr [eax + 0xc], ecx
// 004c68c0  894808               mov dword ptr [eax + 8], ecx
// 004c68c3  894804               mov dword ptr [eax + 4], ecx
// 004c68c6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??0GImage@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
