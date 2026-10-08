// roc 2009-12 004d4510  unit: G3D::TextureManager::TextureArgs  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d4510
//
// 004d4510  53                   push ebx
// 004d4511  55                   push ebp
// 004d4512  8bd9                 mov ebx, ecx
// 004d4514  33ed                 xor ebp, ebp
// 004d4516  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d4519  7e38                 jle 0x4d4553
// 004d451b  56                   push esi
// 004d451c  57                   push edi
// 004d451d  8d4900               lea ecx, [ecx]
// 004d4520  8b4308               mov eax, dword ptr [ebx + 8]
// 004d4523  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004d4526  85f6                 test esi, esi
// 004d4528  7421                 je 0x4d454b
// 004d452a  8d9b00000000         lea ebx, [ebx]
// 004d4530  8b7e24               mov edi, dword ptr [esi + 0x24]
// 004d4533  8d4e04               lea ecx, [esi + 4]
// 004d4536  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d453c  56                   push esi
// 004d453d  e85e7c0800           call 0x55c1a0
// 004d4542  83c404               add esp, 4
// 004d4545  8bf7                 mov esi, edi
// 004d4547  85ff                 test edi, edi
// 004d4549  75e5                 jne 0x4d4530
// 004d454b  45                   inc ebp
// 004d454c  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004d454f  7ccf                 jl 0x4d4520
// 004d4551  5f                   pop edi
// 004d4552  5e                   pop esi
// 004d4553  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004d4556  51                   push ecx
// 004d4557  e8845e1100           call 0x5ea3e0
// 004d455c  83c404               add esp, 4
// 004d455f  33c0                 xor eax, eax
// 004d4561  5d                   pop ebp
// 004d4562  894308               mov dword ptr [ebx + 8], eax
// 004d4565  89430c               mov dword ptr [ebx + 0xc], eax
// 004d4568  894304               mov dword ptr [ebx + 4], eax
// 004d456b  5b                   pop ebx
// 004d456c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?freeMemory@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
