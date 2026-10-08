// roc 2009-12 004dd220  unit: G3D::Shader  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dd220
//
// 004dd220  6aff                 push -1
// 004dd222  685c409300           push 0x93405c
// 004dd227  64a100000000         mov eax, dword ptr fs:[0]
// 004dd22d  50                   push eax
// 004dd22e  64892500000000       mov dword ptr fs:[0], esp
// 004dd235  51                   push ecx
// 004dd236  56                   push esi
// 004dd237  57                   push edi
// 004dd238  8bf9                 mov edi, ecx
// 004dd23a  897c2408             mov dword ptr [esp + 8], edi
// 004dd23e  8d7704               lea esi, [edi + 4]
// 004dd241  8bce                 mov ecx, esi
// 004dd243  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004dd24b  ff15e8b69800         call dword ptr [0x98b6e8]
// 004dd251  0f57c0               xorps xmm0, xmm0
// 004dd254  f30f114628           movss dword ptr [esi + 0x28], xmm0
// 004dd259  f30f114624           movss dword ptr [esi + 0x24], xmm0
// 004dd25e  f30f114620           movss dword ptr [esi + 0x20], xmm0
// 004dd263  f30f11461c           movss dword ptr [esi + 0x1c], xmm0
// 004dd268  f30f114638           movss dword ptr [esi + 0x38], xmm0
// 004dd26d  f30f114634           movss dword ptr [esi + 0x34], xmm0
// 004dd272  f30f114630           movss dword ptr [esi + 0x30], xmm0
// 004dd277  f30f11462c           movss dword ptr [esi + 0x2c], xmm0
// 004dd27c  f30f114648           movss dword ptr [esi + 0x48], xmm0
// 004dd281  f30f114644           movss dword ptr [esi + 0x44], xmm0
// 004dd286  f30f114640           movss dword ptr [esi + 0x40], xmm0
// 004dd28b  f30f11463c           movss dword ptr [esi + 0x3c], xmm0
// 004dd290  f30f114658           movss dword ptr [esi + 0x58], xmm0
// 004dd295  f30f114654           movss dword ptr [esi + 0x54], xmm0
// 004dd29a  f30f114650           movss dword ptr [esi + 0x50], xmm0
// 004dd29f  f30f11464c           movss dword ptr [esi + 0x4c], xmm0
// 004dd2a4  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 004dd2ab  8d44241c             lea eax, [esp + 0x1c]
// 004dd2af  50                   push eax
// 004dd2b0  8bce                 mov ecx, esi
// 004dd2b2  c644241802           mov byte ptr [esp + 0x18], 2
// 004dd2b7  ff159cb69800         call dword ptr [0x98b69c]
// 004dd2bd  8d4c2438             lea ecx, [esp + 0x38]
// 004dd2c1  51                   push ecx
// 004dd2c2  8d4f20               lea ecx, [edi + 0x20]
// 004dd2c5  e8e6f1ffff           call 0x4dc4b0
// 004dd2ca  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 004dd2d1  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 004dd2d8  8d4c241c             lea ecx, [esp + 0x1c]
// 004dd2dc  8917                 mov dword ptr [edi], edx
// 004dd2de  894768               mov dword ptr [edi + 0x68], eax
// 004dd2e1  c644241400           mov byte ptr [esp + 0x14], 0
// 004dd2e6  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dd2ec  8b442478             mov eax, dword ptr [esp + 0x78]
// 004dd2f0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004dd2f8  85c0                 test eax, eax
// 004dd2fa  7427                 je 0x4dd323
// 004dd2fc  83c004               add eax, 4
// 004dd2ff  50                   push eax
// 004dd300  ff1508b29800         call dword ptr [0x98b208]
// 004dd306  85c0                 test eax, eax
// 004dd308  7519                 jne 0x4dd323
// 004dd30a  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 004dd30e  e80dddf6ff           call 0x44b020
// 004dd313  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 004dd317  85c9                 test ecx, ecx
// 004dd319  7408                 je 0x4dd323
// 004dd31b  8b11                 mov edx, dword ptr [ecx]
// 004dd31d  8b02                 mov eax, dword ptr [edx]
// 004dd31f  6a01                 push 1
// 004dd321  ffd0                 call eax
// 004dd323  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004dd327  8bc7                 mov eax, edi
// 004dd329  5f                   pop edi
// 004dd32a  5e                   pop esi
// 004dd32b  64890d00000000       mov dword ptr fs:[0], ecx
// 004dd332  83c410               add esp, 0x10
// 004dd335  c26c00               ret 0x6c
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??0Node@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
