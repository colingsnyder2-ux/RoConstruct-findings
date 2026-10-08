// roc 2009-12 004bd460  unit: Ogre::ManualObject  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004bd460
//
// 004bd460  8b542404             mov edx, dword ptr [esp + 4]
// 004bd464  f30f1001             movss xmm0, dword ptr [ecx]
// 004bd468  0f2e02               ucomiss xmm0, dword ptr [edx]
// 004bd46b  9f                   lahf 
// 004bd46c  f6c444               test ah, 0x44
// 004bd46f  7a23                 jp 0x4bd494
// 004bd471  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 004bd476  0f2e4204             ucomiss xmm0, dword ptr [edx + 4]
// 004bd47a  9f                   lahf 
// 004bd47b  f6c444               test ah, 0x44
// 004bd47e  7a14                 jp 0x4bd494
// 004bd480  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 004bd485  0f2e4208             ucomiss xmm0, dword ptr [edx + 8]
// 004bd489  9f                   lahf 
// 004bd48a  f6c444               test ah, 0x44
// 004bd48d  7a05                 jp 0x4bd494
// 004bd48f  33c0                 xor eax, eax
// 004bd491  c20400               ret 4
// 004bd494  b801000000           mov eax, 1
// 004bd499  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??9Color3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
