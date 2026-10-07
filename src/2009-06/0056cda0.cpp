// roc 2009-06 0056cda0  unit: G3D::Shader  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056cda0
//
// 0056cda0  6aff                 push -1
// 0056cda2  6825008600           push 0x860025
// 0056cda7  64a100000000         mov eax, dword ptr fs:[0]
// 0056cdad  50                   push eax
// 0056cdae  64892500000000       mov dword ptr fs:[0], esp
// 0056cdb5  83ec24               sub esp, 0x24
// 0056cdb8  53                   push ebx
// 0056cdb9  33db                 xor ebx, ebx
// 0056cdbb  895c2404             mov dword ptr [esp + 4], ebx
// 0056cdbf  a1e429a400           mov eax, dword ptr [0xa429e4]
// 0056cdc4  85c0                 test eax, eax
// 0056cdc6  756a                 jne 0x56ce32
// 0056cdc8  56                   push esi
// 0056cdc9  6a28                 push 0x28
// 0056cdcb  e868bc1a00           call 0x718a38
// 0056cdd0  8bf0                 mov esi, eax
// 0056cdd2  83c404               add esp, 4
// 0056cdd5  8974240c             mov dword ptr [esp + 0xc], esi
// 0056cdd9  895c2434             mov dword ptr [esp + 0x34], ebx
// 0056cddd  85f6                 test esi, esi
// 0056cddf  742d                 je 0x56ce0e
// 0056cde1  68f4af8c00           push 0x8caff4
// 0056cde6  8d4c2414             lea ecx, [esp + 0x14]
// 0056cdea  ff15b4e48900         call dword ptr [0x89e4b4]
// 0056cdf0  6a00                 push 0
// 0056cdf2  8d442414             lea eax, [esp + 0x14]
// 0056cdf6  bb01000000           mov ebx, 1
// 0056cdfb  50                   push eax
// 0056cdfc  8bce                 mov ecx, esi
// 0056cdfe  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0056ce03  895c2410             mov dword ptr [esp + 0x10], ebx
// 0056ce07  e8a4feffff           call 0x56ccb0
// 0056ce0c  eb02                 jmp 0x56ce10
// 0056ce0e  33c0                 xor eax, eax
// 0056ce10  a3e429a400           mov dword ptr [0xa429e4], eax
// 0056ce15  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0056ce1d  5e                   pop esi
// 0056ce1e  f6c301               test bl, 1
// 0056ce21  740f                 je 0x56ce32
// 0056ce23  8d4c240c             lea ecx, [esp + 0xc]
// 0056ce27  ff15c4e48900         call dword ptr [0x89e4c4]
// 0056ce2d  a1e429a400           mov eax, dword ptr [0xa429e4]
// 0056ce32  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056ce36  5b                   pop ebx
// 0056ce37  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ce3e  83c430               add esp, 0x30
// 0056ce41  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?common@Log@G3D@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
