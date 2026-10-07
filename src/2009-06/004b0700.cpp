// roc 2009-06 004b0700  unit: G3D::Shader  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b0700
//
// 004b0700  6aff                 push -1
// 004b0702  685c818500           push 0x85815c
// 004b0707  64a100000000         mov eax, dword ptr fs:[0]
// 004b070d  50                   push eax
// 004b070e  64892500000000       mov dword ptr fs:[0], esp
// 004b0715  51                   push ecx
// 004b0716  56                   push esi
// 004b0717  57                   push edi
// 004b0718  8bf9                 mov edi, ecx
// 004b071a  897c2408             mov dword ptr [esp + 8], edi
// 004b071e  8d7704               lea esi, [edi + 4]
// 004b0721  8bce                 mov ecx, esi
// 004b0723  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004b072b  ff15c0e48900         call dword ptr [0x89e4c0]
// 004b0731  d9ee                 fldz 
// 004b0733  d95628               fst dword ptr [esi + 0x28]
// 004b0736  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 004b073d  d95624               fst dword ptr [esi + 0x24]
// 004b0740  d95620               fst dword ptr [esi + 0x20]
// 004b0743  d9561c               fst dword ptr [esi + 0x1c]
// 004b0746  d95638               fst dword ptr [esi + 0x38]
// 004b0749  d95634               fst dword ptr [esi + 0x34]
// 004b074c  d95630               fst dword ptr [esi + 0x30]
// 004b074f  d9562c               fst dword ptr [esi + 0x2c]
// 004b0752  d95648               fst dword ptr [esi + 0x48]
// 004b0755  d95644               fst dword ptr [esi + 0x44]
// 004b0758  d95640               fst dword ptr [esi + 0x40]
// 004b075b  d9563c               fst dword ptr [esi + 0x3c]
// 004b075e  d95658               fst dword ptr [esi + 0x58]
// 004b0761  d95654               fst dword ptr [esi + 0x54]
// 004b0764  d95650               fst dword ptr [esi + 0x50]
// 004b0767  d95e4c               fstp dword ptr [esi + 0x4c]
// 004b076a  8d44241c             lea eax, [esp + 0x1c]
// 004b076e  50                   push eax
// 004b076f  8bce                 mov ecx, esi
// 004b0771  c644241802           mov byte ptr [esp + 0x18], 2
// 004b0776  ff1564e48900         call dword ptr [0x89e464]
// 004b077c  8d4c2438             lea ecx, [esp + 0x38]
// 004b0780  51                   push ecx
// 004b0781  8d4f20               lea ecx, [edi + 0x20]
// 004b0784  e8e7f1ffff           call 0x4af970
// 004b0789  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 004b0790  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 004b0797  8d4c241c             lea ecx, [esp + 0x1c]
// 004b079b  8917                 mov dword ptr [edi], edx
// 004b079d  894768               mov dword ptr [edi + 0x68], eax
// 004b07a0  c644241400           mov byte ptr [esp + 0x14], 0
// 004b07a5  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b07ab  8b442478             mov eax, dword ptr [esp + 0x78]
// 004b07af  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004b07b7  85c0                 test eax, eax
// 004b07b9  7427                 je 0x4b07e2
// 004b07bb  83c004               add eax, 4
// 004b07be  50                   push eax
// 004b07bf  ff15a4e18900         call dword ptr [0x89e1a4]
// 004b07c5  85c0                 test eax, eax
// 004b07c7  7519                 jne 0x4b07e2
// 004b07c9  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 004b07cd  e8ae45f9ff           call 0x444d80
// 004b07d2  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 004b07d6  85c9                 test ecx, ecx
// 004b07d8  7408                 je 0x4b07e2
// 004b07da  8b11                 mov edx, dword ptr [ecx]
// 004b07dc  8b02                 mov eax, dword ptr [edx]
// 004b07de  6a01                 push 1
// 004b07e0  ffd0                 call eax
// 004b07e2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b07e6  8bc7                 mov eax, edi
// 004b07e8  5f                   pop edi
// 004b07e9  5e                   pop esi
// 004b07ea  64890d00000000       mov dword ptr fs:[0], ecx
// 004b07f1  83c410               add esp, 0x10
// 004b07f4  c26c00               ret 0x6c
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ??0Node@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@2@IPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
