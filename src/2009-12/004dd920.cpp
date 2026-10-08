// roc 2009-12 004dd920  unit: G3D::Shader  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dd920
//
// 004dd920  6aff                 push -1
// 004dd922  68e8409300           push 0x9340e8
// 004dd927  64a100000000         mov eax, dword ptr fs:[0]
// 004dd92d  50                   push eax
// 004dd92e  64892500000000       mov dword ptr fs:[0], esp
// 004dd935  83ec48               sub esp, 0x48
// 004dd938  0f57c0               xorps xmm0, xmm0
// 004dd93b  55                   push ebp
// 004dd93c  56                   push esi
// 004dd93d  57                   push edi
// 004dd93e  8bf9                 mov edi, ecx
// 004dd940  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 004dd946  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 004dd94c  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 004dd952  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 004dd958  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 004dd95e  f30f11442424         movss dword ptr [esp + 0x24], xmm0
// 004dd964  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 004dd96a  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 004dd970  f30f11442438         movss dword ptr [esp + 0x38], xmm0
// 004dd976  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 004dd97c  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 004dd982  f30f1144242c         movss dword ptr [esp + 0x2c], xmm0
// 004dd988  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 004dd98e  f30f11442444         movss dword ptr [esp + 0x44], xmm0
// 004dd994  f30f11442440         movss dword ptr [esp + 0x40], xmm0
// 004dd99a  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 004dd9a0  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004dd9a8  8b742468             mov esi, dword ptr [esp + 0x68]
// 004dd9ac  8b0e                 mov ecx, dword ptr [esi]
// 004dd9ae  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 004dd9b6  e8159dfeff           call 0x4c76d0
// 004dd9bb  8b36                 mov esi, dword ptr [esi]
// 004dd9bd  8b2d08b29800         mov ebp, dword ptr [0x98b208]
// 004dd9c3  89442450             mov dword ptr [esp + 0x50], eax
// 004dd9c7  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004dd9cb  3bf0                 cmp esi, eax
// 004dd9cd  7441                 je 0x4dda10
// 004dd9cf  85c0                 test eax, eax
// 004dd9d1  742b                 je 0x4dd9fe
// 004dd9d3  83c004               add eax, 4
// 004dd9d6  50                   push eax
// 004dd9d7  ffd5                 call ebp
// 004dd9d9  85c0                 test eax, eax
// 004dd9db  7519                 jne 0x4dd9f6
// 004dd9dd  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004dd9e1  e83ad6f6ff           call 0x44b020
// 004dd9e6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004dd9ea  85c9                 test ecx, ecx
// 004dd9ec  7408                 je 0x4dd9f6
// 004dd9ee  8b01                 mov eax, dword ptr [ecx]
// 004dd9f0  8b10                 mov edx, dword ptr [eax]
// 004dd9f2  6a01                 push 1
// 004dd9f4  ffd2                 call edx
// 004dd9f6  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 004dd9fe  85f6                 test esi, esi
// 004dda00  740e                 je 0x4dda10
// 004dda02  8d4604               lea eax, [esi + 4]
// 004dda05  50                   push eax
// 004dda06  89742450             mov dword ptr [esp + 0x50], esi
// 004dda0a  ff150cb29800         call dword ptr [0x98b20c]
// 004dda10  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004dda14  8d44240c             lea eax, [esp + 0xc]
// 004dda18  50                   push eax
// 004dda19  51                   push ecx
// 004dda1a  8bcf                 mov ecx, edi
// 004dda1c  e85ff9ffff           call 0x4dd380
// 004dda21  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004dda25  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 004dda2d  85c0                 test eax, eax
// 004dda2f  7423                 je 0x4dda54
// 004dda31  83c004               add eax, 4
// 004dda34  50                   push eax
// 004dda35  ffd5                 call ebp
// 004dda37  85c0                 test eax, eax
// 004dda39  7519                 jne 0x4dda54
// 004dda3b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004dda3f  e8dcd5f6ff           call 0x44b020
// 004dda44  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004dda48  85c9                 test ecx, ecx
// 004dda4a  7408                 je 0x4dda54
// 004dda4c  8b11                 mov edx, dword ptr [ecx]
// 004dda4e  8b02                 mov eax, dword ptr [edx]
// 004dda50  6a01                 push 1
// 004dda52  ffd0                 call eax
// 004dda54  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004dda58  5f                   pop edi
// 004dda59  5e                   pop esi
// 004dda5a  5d                   pop ebp
// 004dda5b  64890d00000000       mov dword ptr fs:[0], ecx
// 004dda62  83c454               add esp, 0x54
// 004dda65  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$ReferenceCountedPointer@VTexture@G3D@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
