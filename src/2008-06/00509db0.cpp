// roc 2008-06 00509db0  unit: G3D::Shader  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00509db0
//
// 00509db0  6aff                 push -1
// 00509db2  6805f07b00           push 0x7bf005
// 00509db7  64a100000000         mov eax, dword ptr fs:[0]
// 00509dbd  50                   push eax
// 00509dbe  64892500000000       mov dword ptr fs:[0], esp
// 00509dc5  83ec24               sub esp, 0x24
// 00509dc8  53                   push ebx
// 00509dc9  33db                 xor ebx, ebx
// 00509dcb  895c2404             mov dword ptr [esp + 4], ebx
// 00509dcf  a1d4359700           mov eax, dword ptr [0x9735d4]
// 00509dd4  85c0                 test eax, eax
// 00509dd6  756a                 jne 0x509e42
// 00509dd8  56                   push esi
// 00509dd9  6a28                 push 0x28
// 00509ddb  e8406b1900           call 0x6a0920
// 00509de0  8bf0                 mov esi, eax
// 00509de2  83c404               add esp, 4
// 00509de5  8974240c             mov dword ptr [esp + 0xc], esi
// 00509de9  895c2434             mov dword ptr [esp + 0x34], ebx
// 00509ded  85f6                 test esi, esi
// 00509def  742d                 je 0x509e1e
// 00509df1  685c7a8200           push 0x827a5c
// 00509df6  8d4c2414             lea ecx, [esp + 0x14]
// 00509dfa  ff1558248000         call dword ptr [0x802458]
// 00509e00  6a00                 push 0
// 00509e02  8d442414             lea eax, [esp + 0x14]
// 00509e06  bb01000000           mov ebx, 1
// 00509e0b  50                   push eax
// 00509e0c  8bce                 mov ecx, esi
// 00509e0e  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00509e13  895c2410             mov dword ptr [esp + 0x10], ebx
// 00509e17  e8a4feffff           call 0x509cc0
// 00509e1c  eb02                 jmp 0x509e20
// 00509e1e  33c0                 xor eax, eax
// 00509e20  a3d4359700           mov dword ptr [0x9735d4], eax
// 00509e25  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00509e2d  5e                   pop esi
// 00509e2e  f6c301               test bl, 1
// 00509e31  740f                 je 0x509e42
// 00509e33  8d4c240c             lea ecx, [esp + 0xc]
// 00509e37  ff1568248000         call dword ptr [0x802468]
// 00509e3d  a1d4359700           mov eax, dword ptr [0x9735d4]
// 00509e42  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00509e46  5b                   pop ebx
// 00509e47  64890d00000000       mov dword ptr fs:[0], ecx
// 00509e4e  83c430               add esp, 0x30
// 00509e51  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?common@Log@G3D@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
