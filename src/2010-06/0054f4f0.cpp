// from server: 100% by auto
// roc 2010-06 0054f4f0  unit: G3D::Shader  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f4f0
//
// 0054f4f0  6aff                 push -1
// 0054f4f2  68051a9800           push 0x981a05
// 0054f4f7  64a100000000         mov eax, dword ptr fs:[0]
// 0054f4fd  50                   push eax
// 0054f4fe  64892500000000       mov dword ptr fs:[0], esp
// 0054f505  83ec24               sub esp, 0x24
// 0054f508  53                   push ebx
// 0054f509  33db                 xor ebx, ebx
// 0054f50b  895c2404             mov dword ptr [esp + 4], ebx
// 0054f50f  a11c9fc000           mov eax, dword ptr [0xc09f1c]
// 0054f514  85c0                 test eax, eax
// 0054f516  756a                 jne 0x54f582
// 0054f518  56                   push esi
// 0054f519  6a28                 push 0x28
// 0054f51b  e880842500           call 0x7a79a0
// 0054f520  8bf0                 mov esi, eax
// 0054f522  83c404               add esp, 4
// 0054f525  8974240c             mov dword ptr [esp + 0xc], esi
// 0054f529  895c2434             mov dword ptr [esp + 0x34], ebx
// 0054f52d  85f6                 test esi, esi
// 0054f52f  742d                 je 0x54f55e
// 0054f531  68d4fba100           push 0xa1fbd4
// 0054f536  8d4c2414             lea ecx, [esp + 0x14]
// 0054f53a  ff1510a49e00         call dword ptr [0x9ea410]
// 0054f540  6a00                 push 0
// 0054f542  8d442414             lea eax, [esp + 0x14]
// 0054f546  bb01000000           mov ebx, 1
// 0054f54b  50                   push eax
// 0054f54c  8bce                 mov ecx, esi
// 0054f54e  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0054f553  895c2410             mov dword ptr [esp + 0x10], ebx
// 0054f557  e8a4feffff           call 0x54f400
// 0054f55c  eb02                 jmp 0x54f560
// 0054f55e  33c0                 xor eax, eax
// 0054f560  a31c9fc000           mov dword ptr [0xc09f1c], eax
// 0054f565  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0054f56d  5e                   pop esi
// 0054f56e  f6c301               test bl, 1
// 0054f571  740f                 je 0x54f582
// 0054f573  8d4c240c             lea ecx, [esp + 0xc]
// 0054f577  ff1500a49e00         call dword ptr [0x9ea400]
// 0054f57d  a11c9fc000           mov eax, dword ptr [0xc09f1c]
// 0054f582  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0054f586  5b                   pop ebx
// 0054f587  64890d00000000       mov dword ptr fs:[0], ecx
// 0054f58e  83c430               add esp, 0x30
// 0054f591  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?common@Log@G3D@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
