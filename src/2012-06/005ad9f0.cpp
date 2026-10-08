// from server: 100% by auto
// roc 2012-06 005ad9f0  unit: RBX::Network::ErrorCompPhysicsSender  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ad9f0
//
// 005ad9f0  8b542404             mov edx, dword ptr [esp + 4]
// 005ad9f4  f30f104124           movss xmm0, dword ptr [ecx + 0x24]
// 005ad9f9  0f2e4224             ucomiss xmm0, dword ptr [edx + 0x24]
// 005ad9fd  9f                   lahf 
// 005ad9fe  f6c444               test ah, 0x44
// 005ada01  7a30                 jp 0x5ada33
// 005ada03  f30f104128           movss xmm0, dword ptr [ecx + 0x28]
// 005ada08  0f2e4228             ucomiss xmm0, dword ptr [edx + 0x28]
// 005ada0c  9f                   lahf 
// 005ada0d  f6c444               test ah, 0x44
// 005ada10  7a21                 jp 0x5ada33
// 005ada12  f30f10412c           movss xmm0, dword ptr [ecx + 0x2c]
// 005ada17  0f2e422c             ucomiss xmm0, dword ptr [edx + 0x2c]
// 005ada1b  9f                   lahf 
// 005ada1c  f6c444               test ah, 0x44
// 005ada1f  7a12                 jp 0x5ada33
// 005ada21  52                   push edx
// 005ada22  e8f9e80700           call 0x62c320
// 005ada27  84c0                 test al, al
// 005ada29  7408                 je 0x5ada33
// 005ada2b  b801000000           mov eax, 1
// 005ada30  c20400               ret 4
// 005ada33  33c0                 xor eax, eax
// 005ada35  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??8CoordinateFrame@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
