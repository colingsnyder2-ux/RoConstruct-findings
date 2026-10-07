// roc 2011-06 0053b560  unit: seg_00530000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053b560
//
// 0053b560  6aff                 push -1
// 0053b562  68f5e79d00           push 0x9de7f5
// 0053b567  64a100000000         mov eax, dword ptr fs:[0]
// 0053b56d  50                   push eax
// 0053b56e  64892500000000       mov dword ptr fs:[0], esp
// 0053b575  83ec24               sub esp, 0x24
// 0053b578  53                   push ebx
// 0053b579  33db                 xor ebx, ebx
// 0053b57b  895c2404             mov dword ptr [esp + 4], ebx
// 0053b57f  a188a0cb00           mov eax, dword ptr [0xcba088]
// 0053b584  85c0                 test eax, eax
// 0053b586  756a                 jne 0x53b5f2
// 0053b588  56                   push esi
// 0053b589  6a28                 push 0x28
// 0053b58b  e8ceea2c00           call 0x80a05e
// 0053b590  8bf0                 mov esi, eax
// 0053b592  83c404               add esp, 4
// 0053b595  8974240c             mov dword ptr [esp + 0xc], esi
// 0053b599  895c2434             mov dword ptr [esp + 0x34], ebx
// 0053b59d  85f6                 test esi, esi
// 0053b59f  742d                 je 0x53b5ce
// 0053b5a1  68dcf5a700           push 0xa7f5dc
// 0053b5a6  8d4c2414             lea ecx, [esp + 0x14]
// 0053b5aa  ff15c404a400         call dword ptr [0xa404c4]
// 0053b5b0  6a00                 push 0
// 0053b5b2  8d442414             lea eax, [esp + 0x14]
// 0053b5b6  bb01000000           mov ebx, 1
// 0053b5bb  50                   push eax
// 0053b5bc  8bce                 mov ecx, esi
// 0053b5be  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0053b5c3  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053b5c7  e8a4feffff           call 0x53b470
// 0053b5cc  eb02                 jmp 0x53b5d0
// 0053b5ce  33c0                 xor eax, eax
// 0053b5d0  a388a0cb00           mov dword ptr [0xcba088], eax
// 0053b5d5  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0053b5dd  5e                   pop esi
// 0053b5de  f6c301               test bl, 1
// 0053b5e1  740f                 je 0x53b5f2
// 0053b5e3  8d4c240c             lea ecx, [esp + 0xc]
// 0053b5e7  ff15d004a400         call dword ptr [0xa404d0]
// 0053b5ed  a188a0cb00           mov eax, dword ptr [0xcba088]
// 0053b5f2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053b5f6  5b                   pop ebx
// 0053b5f7  64890d00000000       mov dword ptr fs:[0], ecx
// 0053b5fe  83c430               add esp, 0x30
// 0053b601  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?common@Log@G3D@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
