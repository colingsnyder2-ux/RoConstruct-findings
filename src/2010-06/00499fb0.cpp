// roc 2010-06 00499fb0  unit: G3D::Shader  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00499fb0
//
// 00499fb0  6aff                 push -1
// 00499fb2  68486f9800           push 0x986f48
// 00499fb7  64a100000000         mov eax, dword ptr fs:[0]
// 00499fbd  50                   push eax
// 00499fbe  64892500000000       mov dword ptr fs:[0], esp
// 00499fc5  83ec48               sub esp, 0x48
// 00499fc8  0f57c0               xorps xmm0, xmm0
// 00499fcb  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 00499fd1  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 00499fd7  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 00499fdd  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 00499fe3  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 00499fe9  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 00499fef  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 00499ff5  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 00499ffb  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 0049a001  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 0049a007  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 0049a00d  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 0049a013  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0049a01b  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0049a01f  f30f1000             movss xmm0, dword ptr [eax]
// 0049a023  8b542458             mov edx, dword ptr [esp + 0x58]
// 0049a027  f30f110424           movss dword ptr [esp], xmm0
// 0049a02c  f30f104004           movss xmm0, dword ptr [eax + 4]
// 0049a031  f30f11442404         movss dword ptr [esp + 4], xmm0
// 0049a037  f30f104008           movss xmm0, dword ptr [eax + 8]
// 0049a03c  f30f11442408         movss dword ptr [esp + 8], xmm0
// 0049a042  f30f10400c           movss xmm0, dword ptr [eax + 0xc]
// 0049a047  8d0424               lea eax, [esp]
// 0049a04a  50                   push eax
// 0049a04b  52                   push edx
// 0049a04c  c744245800000000     mov dword ptr [esp + 0x58], 0
// 0049a054  c744244c528b0000     mov dword ptr [esp + 0x4c], 0x8b52
// 0049a05c  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 0049a062  e889f7ffff           call 0x4997f0
// 0049a067  8b442440             mov eax, dword ptr [esp + 0x40]
// 0049a06b  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0049a073  85c0                 test eax, eax
// 0049a075  7427                 je 0x49a09e
// 0049a077  83c004               add eax, 4
// 0049a07a  50                   push eax
// 0049a07b  ff157ca39e00         call dword ptr [0x9ea37c]
// 0049a081  85c0                 test eax, eax
// 0049a083  7519                 jne 0x49a09e
// 0049a085  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0049a089  e8929afeff           call 0x483b20
// 0049a08e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0049a092  85c9                 test ecx, ecx
// 0049a094  7408                 je 0x49a09e
// 0049a096  8b01                 mov eax, dword ptr [ecx]
// 0049a098  8b10                 mov edx, dword ptr [eax]
// 0049a09a  6a01                 push 1
// 0049a09c  ffd2                 call edx
// 0049a09e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0049a0a2  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a0a9  83c454               add esp, 0x54
// 0049a0ac  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector4@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
