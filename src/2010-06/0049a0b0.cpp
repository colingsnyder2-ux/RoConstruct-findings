// roc 2010-06 0049a0b0  unit: G3D::Shader  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049a0b0
//
// 0049a0b0  6aff                 push -1
// 0049a0b2  68486f9800           push 0x986f48
// 0049a0b7  64a100000000         mov eax, dword ptr fs:[0]
// 0049a0bd  50                   push eax
// 0049a0be  64892500000000       mov dword ptr fs:[0], esp
// 0049a0c5  83ec48               sub esp, 0x48
// 0049a0c8  0f57c0               xorps xmm0, xmm0
// 0049a0cb  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 0049a0d1  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 0049a0d7  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 0049a0dd  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 0049a0e3  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 0049a0e9  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 0049a0ef  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 0049a0f5  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 0049a0fb  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 0049a101  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 0049a107  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 0049a10d  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 0049a113  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0049a11b  8b542458             mov edx, dword ptr [esp + 0x58]
// 0049a11f  f30f104c245c         movss xmm1, dword ptr [esp + 0x5c]
// 0049a125  8d0424               lea eax, [esp]
// 0049a128  50                   push eax
// 0049a129  52                   push edx
// 0049a12a  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0049a132  c744244c06140000     mov dword ptr [esp + 0x4c], 0x1406
// 0049a13a  f30f114c2408         movss dword ptr [esp + 8], xmm1
// 0049a140  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 0049a146  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 0049a14c  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 0049a152  e899f6ffff           call 0x4997f0
// 0049a157  8b442440             mov eax, dword ptr [esp + 0x40]
// 0049a15b  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0049a163  85c0                 test eax, eax
// 0049a165  7427                 je 0x49a18e
// 0049a167  83c004               add eax, 4
// 0049a16a  50                   push eax
// 0049a16b  ff157ca39e00         call dword ptr [0x9ea37c]
// 0049a171  85c0                 test eax, eax
// 0049a173  7519                 jne 0x49a18e
// 0049a175  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0049a179  e8a299feff           call 0x483b20
// 0049a17e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0049a182  85c9                 test ecx, ecx
// 0049a184  7408                 je 0x49a18e
// 0049a186  8b01                 mov eax, dword ptr [ecx]
// 0049a188  8b10                 mov edx, dword ptr [eax]
// 0049a18a  6a01                 push 1
// 0049a18c  ffd2                 call edx
// 0049a18e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0049a192  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a199  83c454               add esp, 0x54
// 0049a19c  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
