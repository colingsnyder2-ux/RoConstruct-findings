// roc 2010-06 00499e60  unit: G3D::Shader  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00499e60
//
// 00499e60  6aff                 push -1
// 00499e62  68486f9800           push 0x986f48
// 00499e67  64a100000000         mov eax, dword ptr fs:[0]
// 00499e6d  50                   push eax
// 00499e6e  64892500000000       mov dword ptr fs:[0], esp
// 00499e75  83ec58               sub esp, 0x58
// 00499e78  0f57c0               xorps xmm0, xmm0
// 00499e7b  53                   push ebx
// 00499e7c  55                   push ebp
// 00499e7d  56                   push esi
// 00499e7e  57                   push edi
// 00499e7f  33ff                 xor edi, edi
// 00499e81  8be9                 mov ebp, ecx
// 00499e83  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 00499e89  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 00499e8f  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 00499e95  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 00499e9b  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 00499ea1  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 00499ea7  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 00499ead  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 00499eb3  f30f1144244c         movss dword ptr [esp + 0x4c], xmm0
// 00499eb9  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 00499ebf  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 00499ec5  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 00499ecb  f30f1144245c         movss dword ptr [esp + 0x5c], xmm0
// 00499ed1  f30f11442458         movss dword ptr [esp + 0x58], xmm0
// 00499ed7  f30f11442454         movss dword ptr [esp + 0x54], xmm0
// 00499edd  f30f11442450         movss dword ptr [esp + 0x50], xmm0
// 00499ee3  897c2460             mov dword ptr [esp + 0x60], edi
// 00499ee7  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 00499eeb  897c2470             mov dword ptr [esp + 0x70], edi
// 00499eef  c74424645c8b0000     mov dword ptr [esp + 0x64], 0x8b5c
// 00499ef7  8d742428             lea esi, [esp + 0x28]
// 00499efb  eb03                 jmp 0x499f00
// 00499efd  8d4900               lea ecx, [ecx]
// 00499f00  57                   push edi
// 00499f01  8d442414             lea eax, [esp + 0x14]
// 00499f05  50                   push eax
// 00499f06  8bcb                 mov ecx, ebx
// 00499f08  e8f3e50b00           call 0x558500
// 00499f0d  d900                 fld dword ptr [eax]
// 00499f0f  d95ef8               fstp dword ptr [esi - 8]
// 00499f12  47                   inc edi
// 00499f13  d94004               fld dword ptr [eax + 4]
// 00499f16  83c610               add esi, 0x10
// 00499f19  83ff04               cmp edi, 4
// 00499f1c  d95eec               fstp dword ptr [esi - 0x14]
// 00499f1f  d94008               fld dword ptr [eax + 8]
// 00499f22  d95ef0               fstp dword ptr [esi - 0x10]
// 00499f25  d9400c               fld dword ptr [eax + 0xc]
// 00499f28  d95ef4               fstp dword ptr [esi - 0xc]
// 00499f2b  7cd3                 jl 0x499f00
// 00499f2d  8b542478             mov edx, dword ptr [esp + 0x78]
// 00499f31  8d4c2420             lea ecx, [esp + 0x20]
// 00499f35  51                   push ecx
// 00499f36  52                   push edx
// 00499f37  8bcd                 mov ecx, ebp
// 00499f39  e8b2f8ffff           call 0x4997f0
// 00499f3e  8b442460             mov eax, dword ptr [esp + 0x60]
// 00499f42  c7442470ffffffff     mov dword ptr [esp + 0x70], 0xffffffff
// 00499f4a  85c0                 test eax, eax
// 00499f4c  7444                 je 0x499f92
// 00499f4e  83c004               add eax, 4
// 00499f51  50                   push eax
// 00499f52  ff157ca39e00         call dword ptr [0x9ea37c]
// 00499f58  85c0                 test eax, eax
// 00499f5a  7536                 jne 0x499f92
// 00499f5c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00499f60  8b7108               mov esi, dword ptr [ecx + 8]
// 00499f63  85f6                 test esi, esi
// 00499f65  741f                 je 0x499f86
// 00499f67  8b0e                 mov ecx, dword ptr [esi]
// 00499f69  8b01                 mov eax, dword ptr [ecx]
// 00499f6b  8b5004               mov edx, dword ptr [eax + 4]
// 00499f6e  ffd2                 call edx
// 00499f70  8bc6                 mov eax, esi
// 00499f72  8b7604               mov esi, dword ptr [esi + 4]
// 00499f75  50                   push eax
// 00499f76  e81fda3000           call 0x7a799a
// 00499f7b  83c404               add esp, 4
// 00499f7e  85f6                 test esi, esi
// 00499f80  75e5                 jne 0x499f67
// 00499f82  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00499f86  85c9                 test ecx, ecx
// 00499f88  7408                 je 0x499f92
// 00499f8a  8b01                 mov eax, dword ptr [ecx]
// 00499f8c  8b10                 mov edx, dword ptr [eax]
// 00499f8e  6a01                 push 1
// 00499f90  ffd2                 call edx
// 00499f92  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00499f96  5f                   pop edi
// 00499f97  5e                   pop esi
// 00499f98  5d                   pop ebp
// 00499f99  5b                   pop ebx
// 00499f9a  64890d00000000       mov dword ptr fs:[0], ecx
// 00499fa1  83c464               add esp, 0x64
// 00499fa4  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVMatrix4@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
