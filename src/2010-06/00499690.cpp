// roc 2010-06 00499690  unit: G3D::Shader  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00499690
//
// 00499690  6aff                 push -1
// 00499692  68bc6e9800           push 0x986ebc
// 00499697  64a100000000         mov eax, dword ptr fs:[0]
// 0049969d  50                   push eax
// 0049969e  64892500000000       mov dword ptr fs:[0], esp
// 004996a5  51                   push ecx
// 004996a6  56                   push esi
// 004996a7  57                   push edi
// 004996a8  8bf9                 mov edi, ecx
// 004996aa  897c2408             mov dword ptr [esp + 8], edi
// 004996ae  8d7704               lea esi, [edi + 4]
// 004996b1  8bce                 mov ecx, esi
// 004996b3  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004996bb  ff1504a49e00         call dword ptr [0x9ea404]
// 004996c1  0f57c0               xorps xmm0, xmm0
// 004996c4  f30f114628           movss dword ptr [esi + 0x28], xmm0
// 004996c9  f30f114624           movss dword ptr [esi + 0x24], xmm0
// 004996ce  f30f114620           movss dword ptr [esi + 0x20], xmm0
// 004996d3  f30f11461c           movss dword ptr [esi + 0x1c], xmm0
// 004996d8  f30f114638           movss dword ptr [esi + 0x38], xmm0
// 004996dd  f30f114634           movss dword ptr [esi + 0x34], xmm0
// 004996e2  f30f114630           movss dword ptr [esi + 0x30], xmm0
// 004996e7  f30f11462c           movss dword ptr [esi + 0x2c], xmm0
// 004996ec  f30f114648           movss dword ptr [esi + 0x48], xmm0
// 004996f1  f30f114644           movss dword ptr [esi + 0x44], xmm0
// 004996f6  f30f114640           movss dword ptr [esi + 0x40], xmm0
// 004996fb  f30f11463c           movss dword ptr [esi + 0x3c], xmm0
// 00499700  f30f114658           movss dword ptr [esi + 0x58], xmm0
// 00499705  f30f114654           movss dword ptr [esi + 0x54], xmm0
// 0049970a  f30f114650           movss dword ptr [esi + 0x50], xmm0
// 0049970f  f30f11464c           movss dword ptr [esi + 0x4c], xmm0
// 00499714  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 0049971b  8d44241c             lea eax, [esp + 0x1c]
// 0049971f  50                   push eax
// 00499720  8bce                 mov ecx, esi
// 00499722  c644241802           mov byte ptr [esp + 0x18], 2
// 00499727  ff1568a49e00         call dword ptr [0x9ea468]
// 0049972d  8d4c2438             lea ecx, [esp + 0x38]
// 00499731  51                   push ecx
// 00499732  8d4f20               lea ecx, [edi + 0x20]
// 00499735  e8a6f1ffff           call 0x4988e0
// 0049973a  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00499741  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00499748  8d4c241c             lea ecx, [esp + 0x1c]
// 0049974c  8917                 mov dword ptr [edi], edx
// 0049974e  894768               mov dword ptr [edi + 0x68], eax
// 00499751  c644241400           mov byte ptr [esp + 0x14], 0
// 00499756  ff1500a49e00         call dword ptr [0x9ea400]
// 0049975c  8b442478             mov eax, dword ptr [esp + 0x78]
// 00499760  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00499768  85c0                 test eax, eax
// 0049976a  7427                 je 0x499793
// 0049976c  83c004               add eax, 4
// 0049976f  50                   push eax
// 00499770  ff157ca39e00         call dword ptr [0x9ea37c]
// 00499776  85c0                 test eax, eax
// 00499778  7519                 jne 0x499793
// 0049977a  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0049977e  e89da3feff           call 0x483b20
// 00499783  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00499787  85c9                 test ecx, ecx
// 00499789  7408                 je 0x499793
// 0049978b  8b11                 mov edx, dword ptr [ecx]
// 0049978d  8b02                 mov eax, dword ptr [edx]
// 0049978f  6a01                 push 1
// 00499791  ffd0                 call eax
// 00499793  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00499797  8bc7                 mov eax, edi
// 00499799  5f                   pop edi
// 0049979a  5e                   pop esi
// 0049979b  64890d00000000       mov dword ptr fs:[0], ecx
// 004997a2  83c410               add esp, 0x10
// 004997a5  c26c00               ret 0x6c
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??0Node@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
