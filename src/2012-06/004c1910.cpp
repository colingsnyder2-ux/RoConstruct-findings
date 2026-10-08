// from server: 100% by auto
// roc 2012-06 004c1910  unit: RBX::?1??ViewRbxGfx_InitModule::ViewRbxGfxFactory  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004c1910
//
// 004c1910  8b542404             mov edx, dword ptr [esp + 4]
// 004c1914  f30f1001             movss xmm0, dword ptr [ecx]
// 004c1918  0f2e02               ucomiss xmm0, dword ptr [edx]
// 004c191b  9f                   lahf 
// 004c191c  f6c444               test ah, 0x44
// 004c191f  7a32                 jp 0x4c1953
// 004c1921  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 004c1926  0f2e4204             ucomiss xmm0, dword ptr [edx + 4]
// 004c192a  9f                   lahf 
// 004c192b  f6c444               test ah, 0x44
// 004c192e  7a23                 jp 0x4c1953
// 004c1930  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 004c1935  0f2e4208             ucomiss xmm0, dword ptr [edx + 8]
// 004c1939  9f                   lahf 
// 004c193a  f6c444               test ah, 0x44
// 004c193d  7a14                 jp 0x4c1953
// 004c193f  f30f10410c           movss xmm0, dword ptr [ecx + 0xc]
// 004c1944  0f2e420c             ucomiss xmm0, dword ptr [edx + 0xc]
// 004c1948  9f                   lahf 
// 004c1949  f6c444               test ah, 0x44
// 004c194c  7a05                 jp 0x4c1953
// 004c194e  33c0                 xor eax, eax
// 004c1950  c20400               ret 4
// 004c1953  b801000000           mov eax, 1
// 004c1958  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??9Color4@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
