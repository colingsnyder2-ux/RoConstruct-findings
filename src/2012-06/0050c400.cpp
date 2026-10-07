// roc 2012-06 0050c400  unit: Ogre::RbxImage  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0050c400
//
// 0050c400  8b542404             mov edx, dword ptr [esp + 4]
// 0050c404  f30f1001             movss xmm0, dword ptr [ecx]
// 0050c408  0f2e02               ucomiss xmm0, dword ptr [edx]
// 0050c40b  9f                   lahf 
// 0050c40c  f6c444               test ah, 0x44
// 0050c40f  7a23                 jp 0x50c434
// 0050c411  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 0050c416  0f2e4204             ucomiss xmm0, dword ptr [edx + 4]
// 0050c41a  9f                   lahf 
// 0050c41b  f6c444               test ah, 0x44
// 0050c41e  7a14                 jp 0x50c434
// 0050c420  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 0050c425  0f2e4208             ucomiss xmm0, dword ptr [edx + 8]
// 0050c429  9f                   lahf 
// 0050c42a  f6c444               test ah, 0x44
// 0050c42d  7a05                 jp 0x50c434
// 0050c42f  33c0                 xor eax, eax
// 0050c431  c20400               ret 4
// 0050c434  b801000000           mov eax, 1
// 0050c439  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??9Color3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
