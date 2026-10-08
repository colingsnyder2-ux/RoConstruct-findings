// roc 2009-12 004ddcc0  unit: G3D::Shader  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ddcc0
//
// 004ddcc0  6aff                 push -1
// 004ddcc2  68e8409300           push 0x9340e8
// 004ddcc7  64a100000000         mov eax, dword ptr fs:[0]
// 004ddccd  50                   push eax
// 004ddcce  64892500000000       mov dword ptr fs:[0], esp
// 004ddcd5  83ec48               sub esp, 0x48
// 004ddcd8  0f57c0               xorps xmm0, xmm0
// 004ddcdb  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 004ddce1  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 004ddce7  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 004ddced  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 004ddcf3  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 004ddcf9  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 004ddcff  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 004ddd05  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 004ddd0b  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 004ddd11  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 004ddd17  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 004ddd1d  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 004ddd23  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004ddd2b  8b542458             mov edx, dword ptr [esp + 0x58]
// 004ddd2f  f30f104c245c         movss xmm1, dword ptr [esp + 0x5c]
// 004ddd35  8d0424               lea eax, [esp]
// 004ddd38  50                   push eax
// 004ddd39  52                   push edx
// 004ddd3a  c744245800000000     mov dword ptr [esp + 0x58], 0
// 004ddd42  c744244c06140000     mov dword ptr [esp + 0x4c], 0x1406
// 004ddd4a  f30f114c2408         movss dword ptr [esp + 8], xmm1
// 004ddd50  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 004ddd56  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 004ddd5c  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 004ddd62  e819f6ffff           call 0x4dd380
// 004ddd67  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ddd6b  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 004ddd73  85c0                 test eax, eax
// 004ddd75  7427                 je 0x4ddd9e
// 004ddd77  83c004               add eax, 4
// 004ddd7a  50                   push eax
// 004ddd7b  ff1508b29800         call dword ptr [0x98b208]
// 004ddd81  85c0                 test eax, eax
// 004ddd83  7519                 jne 0x4ddd9e
// 004ddd85  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ddd89  e892d2f6ff           call 0x44b020
// 004ddd8e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ddd92  85c9                 test ecx, ecx
// 004ddd94  7408                 je 0x4ddd9e
// 004ddd96  8b01                 mov eax, dword ptr [ecx]
// 004ddd98  8b10                 mov edx, dword ptr [eax]
// 004ddd9a  6a01                 push 1
// 004ddd9c  ffd2                 call edx
// 004ddd9e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004ddda2  64890d00000000       mov dword ptr fs:[0], ecx
// 004ddda9  83c454               add esp, 0x54
// 004dddac  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
