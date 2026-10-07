// roc 2011-06 0065ed60  unit: RBX::VExplosion::?$FactoryProduct  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065ed60
//
// 0065ed60  8b542404             mov edx, dword ptr [esp + 4]
// 0065ed64  f30f1001             movss xmm0, dword ptr [ecx]
// 0065ed68  0f2e02               ucomiss xmm0, dword ptr [edx]
// 0065ed6b  9f                   lahf 
// 0065ed6c  f6c444               test ah, 0x44
// 0065ed6f  7a23                 jp 0x65ed94
// 0065ed71  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 0065ed76  0f2e4204             ucomiss xmm0, dword ptr [edx + 4]
// 0065ed7a  9f                   lahf 
// 0065ed7b  f6c444               test ah, 0x44
// 0065ed7e  7a14                 jp 0x65ed94
// 0065ed80  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 0065ed85  0f2e4208             ucomiss xmm0, dword ptr [edx + 8]
// 0065ed89  9f                   lahf 
// 0065ed8a  f6c444               test ah, 0x44
// 0065ed8d  7a05                 jp 0x65ed94
// 0065ed8f  33c0                 xor eax, eax
// 0065ed91  c20400               ret 4
// 0065ed94  b801000000           mov eax, 1
// 0065ed99  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??9Color3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
