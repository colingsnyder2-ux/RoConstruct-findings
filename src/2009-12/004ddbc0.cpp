// roc 2009-12 004ddbc0  unit: G3D::Shader  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ddbc0
//
// 004ddbc0  6aff                 push -1
// 004ddbc2  68e8409300           push 0x9340e8
// 004ddbc7  64a100000000         mov eax, dword ptr fs:[0]
// 004ddbcd  50                   push eax
// 004ddbce  64892500000000       mov dword ptr fs:[0], esp
// 004ddbd5  83ec48               sub esp, 0x48
// 004ddbd8  0f57c0               xorps xmm0, xmm0
// 004ddbdb  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 004ddbe1  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 004ddbe7  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 004ddbed  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 004ddbf3  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 004ddbf9  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 004ddbff  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 004ddc05  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 004ddc0b  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 004ddc11  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 004ddc17  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 004ddc1d  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 004ddc23  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004ddc2b  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004ddc2f  f30f1000             movss xmm0, dword ptr [eax]
// 004ddc33  8b542458             mov edx, dword ptr [esp + 0x58]
// 004ddc37  f30f110424           movss dword ptr [esp], xmm0
// 004ddc3c  f30f104004           movss xmm0, dword ptr [eax + 4]
// 004ddc41  f30f11442404         movss dword ptr [esp + 4], xmm0
// 004ddc47  f30f104008           movss xmm0, dword ptr [eax + 8]
// 004ddc4c  f30f11442408         movss dword ptr [esp + 8], xmm0
// 004ddc52  f30f10400c           movss xmm0, dword ptr [eax + 0xc]
// 004ddc57  8d0424               lea eax, [esp]
// 004ddc5a  50                   push eax
// 004ddc5b  52                   push edx
// 004ddc5c  c744245800000000     mov dword ptr [esp + 0x58], 0
// 004ddc64  c744244c528b0000     mov dword ptr [esp + 0x4c], 0x8b52
// 004ddc6c  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 004ddc72  e809f7ffff           call 0x4dd380
// 004ddc77  8b442440             mov eax, dword ptr [esp + 0x40]
// 004ddc7b  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 004ddc83  85c0                 test eax, eax
// 004ddc85  7427                 je 0x4ddcae
// 004ddc87  83c004               add eax, 4
// 004ddc8a  50                   push eax
// 004ddc8b  ff1508b29800         call dword ptr [0x98b208]
// 004ddc91  85c0                 test eax, eax
// 004ddc93  7519                 jne 0x4ddcae
// 004ddc95  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ddc99  e882d3f6ff           call 0x44b020
// 004ddc9e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004ddca2  85c9                 test ecx, ecx
// 004ddca4  7408                 je 0x4ddcae
// 004ddca6  8b01                 mov eax, dword ptr [ecx]
// 004ddca8  8b10                 mov edx, dword ptr [eax]
// 004ddcaa  6a01                 push 1
// 004ddcac  ffd2                 call edx
// 004ddcae  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004ddcb2  64890d00000000       mov dword ptr fs:[0], ecx
// 004ddcb9  83c454               add esp, 0x54
// 004ddcbc  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector4@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
