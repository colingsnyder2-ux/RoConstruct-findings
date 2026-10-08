// roc 2009-12 005ebeb0  unit: G3D::Shader  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ebeb0
//
// 005ebeb0  6aff                 push -1
// 005ebeb2  6835ef9300           push 0x93ef35
// 005ebeb7  64a100000000         mov eax, dword ptr fs:[0]
// 005ebebd  50                   push eax
// 005ebebe  64892500000000       mov dword ptr fs:[0], esp
// 005ebec5  83ec24               sub esp, 0x24
// 005ebec8  53                   push ebx
// 005ebec9  33db                 xor ebx, ebx
// 005ebecb  895c2404             mov dword ptr [esp + 4], ebx
// 005ebecf  a1543eb800           mov eax, dword ptr [0xb83e54]
// 005ebed4  85c0                 test eax, eax
// 005ebed6  756a                 jne 0x5ebf42
// 005ebed8  56                   push esi
// 005ebed9  6a28                 push 0x28
// 005ebedb  e880792000           call 0x7f3860
// 005ebee0  8bf0                 mov esi, eax
// 005ebee2  83c404               add esp, 4
// 005ebee5  8974240c             mov dword ptr [esp + 0xc], esi
// 005ebee9  895c2434             mov dword ptr [esp + 0x34], ebx
// 005ebeed  85f6                 test esi, esi
// 005ebeef  742d                 je 0x5ebf1e
// 005ebef1  687c1e9c00           push 0x9c1e7c
// 005ebef6  8d4c2414             lea ecx, [esp + 0x14]
// 005ebefa  ff15f4b69800         call dword ptr [0x98b6f4]
// 005ebf00  6a00                 push 0
// 005ebf02  8d442414             lea eax, [esp + 0x14]
// 005ebf06  bb01000000           mov ebx, 1
// 005ebf0b  50                   push eax
// 005ebf0c  8bce                 mov ecx, esi
// 005ebf0e  c644243c01           mov byte ptr [esp + 0x3c], 1
// 005ebf13  895c2410             mov dword ptr [esp + 0x10], ebx
// 005ebf17  e8a4feffff           call 0x5ebdc0
// 005ebf1c  eb02                 jmp 0x5ebf20
// 005ebf1e  33c0                 xor eax, eax
// 005ebf20  a3543eb800           mov dword ptr [0xb83e54], eax
// 005ebf25  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 005ebf2d  5e                   pop esi
// 005ebf2e  f6c301               test bl, 1
// 005ebf31  740f                 je 0x5ebf42
// 005ebf33  8d4c240c             lea ecx, [esp + 0xc]
// 005ebf37  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ebf3d  a1543eb800           mov eax, dword ptr [0xb83e54]
// 005ebf42  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ebf46  5b                   pop ebx
// 005ebf47  64890d00000000       mov dword ptr fs:[0], ecx
// 005ebf4e  83c430               add esp, 0x30
// 005ebf51  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?common@Log@G3D@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
