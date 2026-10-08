// roc 2009-12 004d9b00  unit: G3D::Win32Window  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9b00
//
// 004d9b00  6aff                 push -1
// 004d9b02  68473e9300           push 0x933e47
// 004d9b07  64a100000000         mov eax, dword ptr fs:[0]
// 004d9b0d  50                   push eax
// 004d9b0e  64892500000000       mov dword ptr fs:[0], esp
// 004d9b15  81eca4010000         sub esp, 0x1a4
// 004d9b1b  53                   push ebx
// 004d9b1c  56                   push esi
// 004d9b1d  57                   push edi
// 004d9b1e  8d4c2414             lea ecx, [esp + 0x14]
// 004d9b22  ff15e8b69800         call dword ptr [0x98b6e8]
// 004d9b28  33f6                 xor esi, esi
// 004d9b2a  89742440             mov dword ptr [esp + 0x40], esi
// 004d9b2e  89742444             mov dword ptr [esp + 0x44], esi
// 004d9b32  8974243c             mov dword ptr [esp + 0x3c], esi
// 004d9b36  8bbc24c0010000       mov edi, dword ptr [esp + 0x1c0]
// 004d9b3d  8b9c24c4010000       mov ebx, dword ptr [esp + 0x1c4]
// 004d9b44  8b03                 mov eax, dword ptr [ebx]
// 004d9b46  8b08                 mov ecx, dword ptr [eax]
// 004d9b48  56                   push esi
// 004d9b49  8d542414             lea edx, [esp + 0x14]
// 004d9b4d  52                   push edx
// 004d9b4e  8d5704               lea edx, [edi + 4]
// 004d9b51  52                   push edx
// 004d9b52  50                   push eax
// 004d9b53  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004d9b56  c78424c801000001000000 mov dword ptr [esp + 0x1c8], 1
// 004d9b61  ffd0                 call eax
// 004d9b63  85c0                 test eax, eax
// 004d9b65  0f85c5000000         jne 0x4d9c30
// 004d9b6b  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d9b6f  8b5310               mov edx, dword ptr [ebx + 0x10]
// 004d9b72  8b08                 mov ecx, dword ptr [eax]
// 004d9b74  6a06                 push 6
// 004d9b76  52                   push edx
// 004d9b77  50                   push eax
// 004d9b78  8b4134               mov eax, dword ptr [ecx + 0x34]
// 004d9b7b  ffd0                 call eax
// 004d9b7d  85c0                 test eax, eax
// 004d9b7f  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d9b83  8b08                 mov ecx, dword ptr [eax]
// 004d9b85  7515                 jne 0x4d9b9c
// 004d9b87  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 004d9b8a  68a8789b00           push 0x9b78a8
// 004d9b8f  50                   push eax
// 004d9b90  ffd2                 call edx
// 004d9b92  85c0                 test eax, eax
// 004d9b94  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d9b98  740d                 je 0x4d9ba7
// 004d9b9a  8b08                 mov ecx, dword ptr [eax]
// 004d9b9c  8b5108               mov edx, dword ptr [ecx + 8]
// 004d9b9f  50                   push eax
// 004d9ba0  ffd2                 call edx
// 004d9ba2  e989000000           jmp 0x4d9c30
// 004d9ba7  8d542448             lea edx, [esp + 0x48]
// 004d9bab  c74424482c000000     mov dword ptr [esp + 0x48], 0x2c
// 004d9bb3  8b08                 mov ecx, dword ptr [eax]
// 004d9bb5  52                   push edx
// 004d9bb6  50                   push eax
// 004d9bb7  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004d9bba  ffd0                 call eax
// 004d9bbc  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004d9bc0  81c72c010000         add edi, 0x12c
// 004d9bc6  894c2438             mov dword ptr [esp + 0x38], ecx
// 004d9bca  57                   push edi
// 004d9bcb  8d4c2418             lea ecx, [esp + 0x18]
// 004d9bcf  ff1500b79800         call dword ptr [0x98b700]
// 004d9bd5  bf3c010000           mov edi, 0x13c
// 004d9bda  8d9b00000000         lea ebx, [ebx]
// 004d9be0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d9be4  6a01                 push 1
// 004d9be6  8d0cb500000000       lea ecx, [esi*4]
// 004d9bed  51                   push ecx
// 004d9bee  8d4c247c             lea ecx, [esp + 0x7c]
// 004d9bf2  897c247c             mov dword ptr [esp + 0x7c], edi
// 004d9bf6  8b10                 mov edx, dword ptr [eax]
// 004d9bf8  8b5238               mov edx, dword ptr [edx + 0x38]
// 004d9bfb  51                   push ecx
// 004d9bfc  50                   push eax
// 004d9bfd  ffd2                 call edx
// 004d9bff  85c0                 test eax, eax
// 004d9c01  7512                 jne 0x4d9c15
// 004d9c03  8d44240c             lea eax, [esp + 0xc]
// 004d9c07  50                   push eax
// 004d9c08  8d4c2440             lea ecx, [esp + 0x40]
// 004d9c0c  89742410             mov dword ptr [esp + 0x10], esi
// 004d9c10  e8cbd8ffff           call 0x4d74e0
// 004d9c15  46                   inc esi
// 004d9c16  83fe08               cmp esi, 8
// 004d9c19  7cc5                 jl 0x4d9be0
// 004d9c1b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004d9c1f  8d542410             lea edx, [esp + 0x10]
// 004d9c23  894c2434             mov dword ptr [esp + 0x34], ecx
// 004d9c27  52                   push edx
// 004d9c28  8d4b04               lea ecx, [ebx + 4]
// 004d9c2b  e8d0fdffff           call 0x4d9a00
// 004d9c30  8d4c2410             lea ecx, [esp + 0x10]
// 004d9c34  c78424b8010000ffffffff mov dword ptr [esp + 0x1b8], 0xffffffff
// 004d9c3f  e80ccbffff           call 0x4d6750
// 004d9c44  8b8c24b0010000       mov ecx, dword ptr [esp + 0x1b0]
// 004d9c4b  5f                   pop edi
// 004d9c4c  5e                   pop esi
// 004d9c4d  b801000000           mov eax, 1
// 004d9c52  5b                   pop ebx
// 004d9c53  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9c5a  81c4b0010000         add esp, 0x1b0
// 004d9c60  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?enumJoysticksCallback@_DirectInput@_internal@G3D@@CGHPBUDIDEVICEINSTANCEA@3@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
