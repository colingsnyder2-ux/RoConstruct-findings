// from server: 100% by auto
// roc 2010-06 00499d10  unit: G3D::Shader  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00499d10
//
// 00499d10  6aff                 push -1
// 00499d12  68486f9800           push 0x986f48
// 00499d17  64a100000000         mov eax, dword ptr fs:[0]
// 00499d1d  50                   push eax
// 00499d1e  64892500000000       mov dword ptr fs:[0], esp
// 00499d25  83ec48               sub esp, 0x48
// 00499d28  0f57c0               xorps xmm0, xmm0
// 00499d2b  55                   push ebp
// 00499d2c  56                   push esi
// 00499d2d  57                   push edi
// 00499d2e  8bf9                 mov edi, ecx
// 00499d30  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 00499d36  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 00499d3c  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 00499d42  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 00499d48  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 00499d4e  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 00499d54  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 00499d5a  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 00499d60  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 00499d66  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 00499d6c  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 00499d72  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 00499d78  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 00499d7e  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 00499d84  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 00499d8a  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 00499d90  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00499d98  8b742468             mov esi, dword ptr [esp + 0x68]
// 00499d9c  8b0e                 mov ecx, dword ptr [esi]
// 00499d9e  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00499da6  e815abfeff           call 0x4848c0
// 00499dab  8b36                 mov esi, dword ptr [esi]
// 00499dad  8b2d7ca39e00         mov ebp, dword ptr [0x9ea37c]
// 00499db3  89442450             mov dword ptr [esp + 0x50], eax
// 00499db7  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00499dbb  3bf0                 cmp esi, eax
// 00499dbd  7441                 je 0x499e00
// 00499dbf  85c0                 test eax, eax
// 00499dc1  742b                 je 0x499dee
// 00499dc3  83c004               add eax, 4
// 00499dc6  50                   push eax
// 00499dc7  ffd5                 call ebp
// 00499dc9  85c0                 test eax, eax
// 00499dcb  7519                 jne 0x499de6
// 00499dcd  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00499dd1  e84a9dfeff           call 0x483b20
// 00499dd6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00499dda  85c9                 test ecx, ecx
// 00499ddc  7408                 je 0x499de6
// 00499dde  8b01                 mov eax, dword ptr [ecx]
// 00499de0  8b10                 mov edx, dword ptr [eax]
// 00499de2  6a01                 push 1
// 00499de4  ffd2                 call edx
// 00499de6  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00499dee  85f6                 test esi, esi
// 00499df0  740e                 je 0x499e00
// 00499df2  8d4604               lea eax, [esi + 4]
// 00499df5  50                   push eax
// 00499df6  89742450             mov dword ptr [esp + 0x50], esi
// 00499dfa  ff1580a39e00         call dword ptr [0x9ea380]
// 00499e00  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00499e04  8d44240c             lea eax, [esp + 0xc]
// 00499e08  50                   push eax
// 00499e09  51                   push ecx
// 00499e0a  8bcf                 mov ecx, edi
// 00499e0c  e8dff9ffff           call 0x4997f0
// 00499e11  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00499e15  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 00499e1d  85c0                 test eax, eax
// 00499e1f  7423                 je 0x499e44
// 00499e21  83c004               add eax, 4
// 00499e24  50                   push eax
// 00499e25  ffd5                 call ebp
// 00499e27  85c0                 test eax, eax
// 00499e29  7519                 jne 0x499e44
// 00499e2b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00499e2f  e8ec9cfeff           call 0x483b20
// 00499e34  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00499e38  85c9                 test ecx, ecx
// 00499e3a  7408                 je 0x499e44
// 00499e3c  8b11                 mov edx, dword ptr [ecx]
// 00499e3e  8b02                 mov eax, dword ptr [edx]
// 00499e40  6a01                 push 1
// 00499e42  ffd0                 call eax
// 00499e44  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00499e48  5f                   pop edi
// 00499e49  5e                   pop esi
// 00499e4a  5d                   pop ebp
// 00499e4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00499e52  83c454               add esp, 0x54
// 00499e55  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$ReferenceCountedPointer@VTexture@G3D@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
