// roc 2007-03 004f5aa0  unit: seg_004f0000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f5aa0
//
// 004f5aa0  6aff                 push -1
// 004f5aa2  68e5ff7400           push 0x74ffe5
// 004f5aa7  64a100000000         mov eax, dword ptr fs:[0]
// 004f5aad  50                   push eax
// 004f5aae  83ec24               sub esp, 0x24
// 004f5ab1  53                   push ebx
// 004f5ab2  56                   push esi
// 004f5ab3  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f5ab8  33c4                 xor eax, esp
// 004f5aba  50                   push eax
// 004f5abb  8d442430             lea eax, [esp + 0x30]
// 004f5abf  64a300000000         mov dword ptr fs:[0], eax
// 004f5ac5  33db                 xor ebx, ebx
// 004f5ac7  895c240c             mov dword ptr [esp + 0xc], ebx
// 004f5acb  a13cae8b00           mov eax, dword ptr [0x8bae3c]
// 004f5ad0  85c0                 test eax, eax
// 004f5ad2  7568                 jne 0x4f5b3c
// 004f5ad4  6a28                 push 0x28
// 004f5ad6  e82d861200           call 0x61e108
// 004f5adb  8bf0                 mov esi, eax
// 004f5add  83c404               add esp, 4
// 004f5ae0  89742410             mov dword ptr [esp + 0x10], esi
// 004f5ae4  85f6                 test esi, esi
// 004f5ae6  895c2438             mov dword ptr [esp + 0x38], ebx
// 004f5aea  742d                 je 0x4f5b19
// 004f5aec  6854f57900           push 0x79f554
// 004f5af1  8d4c2418             lea ecx, [esp + 0x18]
// 004f5af5  ff1578e77700         call dword ptr [0x77e778]
// 004f5afb  6a00                 push 0
// 004f5afd  8d442418             lea eax, [esp + 0x18]
// 004f5b01  bb01000000           mov ebx, 1
// 004f5b06  50                   push eax
// 004f5b07  8bce                 mov ecx, esi
// 004f5b09  c644244001           mov byte ptr [esp + 0x40], 1
// 004f5b0e  895c2414             mov dword ptr [esp + 0x14], ebx
// 004f5b12  e819fbffff           call 0x4f5630
// 004f5b17  eb02                 jmp 0x4f5b1b
// 004f5b19  33c0                 xor eax, eax
// 004f5b1b  f6c301               test bl, 1
// 004f5b1e  a33cae8b00           mov dword ptr [0x8bae3c], eax
// 004f5b23  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 004f5b2b  740f                 je 0x4f5b3c
// 004f5b2d  8d4c2414             lea ecx, [esp + 0x14]
// 004f5b31  ff158ce77700         call dword ptr [0x77e78c]
// 004f5b37  a13cae8b00           mov eax, dword ptr [0x8bae3c]
// 004f5b3c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004f5b40  64890d00000000       mov dword ptr fs:[0], ecx
// 004f5b47  59                   pop ecx
// 004f5b48  5e                   pop esi
// 004f5b49  5b                   pop ebx
// 004f5b4a  83c430               add esp, 0x30
// 004f5b4d  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?common@Log@G3D@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
