// from server: 100% by auto
// roc 2010-06 00632f80  unit: RBX::Network::VPlayer::?$BoundPropGetSet  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00632f80
//
// 00632f80  8b542404             mov edx, dword ptr [esp + 4]
// 00632f84  f30f1001             movss xmm0, dword ptr [ecx]
// 00632f88  0f2e02               ucomiss xmm0, dword ptr [edx]
// 00632f8b  9f                   lahf 
// 00632f8c  f6c444               test ah, 0x44
// 00632f8f  7a23                 jp 0x632fb4
// 00632f91  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 00632f96  0f2e4204             ucomiss xmm0, dword ptr [edx + 4]
// 00632f9a  9f                   lahf 
// 00632f9b  f6c444               test ah, 0x44
// 00632f9e  7a14                 jp 0x632fb4
// 00632fa0  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 00632fa5  0f2e4208             ucomiss xmm0, dword ptr [edx + 8]
// 00632fa9  9f                   lahf 
// 00632faa  f6c444               test ah, 0x44
// 00632fad  7a05                 jp 0x632fb4
// 00632faf  33c0                 xor eax, eax
// 00632fb1  c20400               ret 4
// 00632fb4  b801000000           mov eax, 1
// 00632fb9  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??9Color3@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
