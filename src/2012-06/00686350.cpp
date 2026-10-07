// roc 2012-06 00686350  unit: RBX::VInstance::?$EventDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00686350
//
// 00686350  8b542404             mov edx, dword ptr [esp + 4]
// 00686354  f30f104124           movss xmm0, dword ptr [ecx + 0x24]
// 00686359  0f2e4224             ucomiss xmm0, dword ptr [edx + 0x24]
// 0068635d  9f                   lahf 
// 0068635e  f6c444               test ah, 0x44
// 00686361  7a39                 jp 0x68639c
// 00686363  f30f104128           movss xmm0, dword ptr [ecx + 0x28]
// 00686368  0f2e4228             ucomiss xmm0, dword ptr [edx + 0x28]
// 0068636c  9f                   lahf 
// 0068636d  f6c444               test ah, 0x44
// 00686370  7a2a                 jp 0x68639c
// 00686372  f30f10412c           movss xmm0, dword ptr [ecx + 0x2c]
// 00686377  0f2e422c             ucomiss xmm0, dword ptr [edx + 0x2c]
// 0068637b  9f                   lahf 
// 0068637c  f6c444               test ah, 0x44
// 0068637f  7a1b                 jp 0x68639c
// 00686381  52                   push edx
// 00686382  e8995ffaff           call 0x62c320
// 00686387  84c0                 test al, al
// 00686389  7411                 je 0x68639c
// 0068638b  b801000000           mov eax, 1
// 00686390  33c9                 xor ecx, ecx
// 00686392  84c0                 test al, al
// 00686394  0f94c1               sete cl
// 00686397  8ac1                 mov al, cl
// 00686399  c20400               ret 4
// 0068639c  33c0                 xor eax, eax
// 0068639e  33c9                 xor ecx, ecx
// 006863a0  84c0                 test al, al
// 006863a2  0f94c1               sete cl
// 006863a5  8ac1                 mov al, cl
// 006863a7  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??9CoordinateFrame@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
