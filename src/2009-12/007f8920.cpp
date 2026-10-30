// roc 2009-12 007f8920  unit: CXTPControlAction  size: 478 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f8920
//
// 007f8920  6aff                 push -1
// 007f8922  68068a9500           push 0x958a06
// 007f8927  64a100000000         mov eax, dword ptr fs:[0]
// 007f892d  50                   push eax
// 007f892e  51                   push ecx
// 007f892f  53                   push ebx
// 007f8930  56                   push esi
// 007f8931  57                   push edi
// 007f8932  a10052b600           mov eax, dword ptr [0xb65200]
// 007f8937  33c4                 xor eax, esp
// 007f8939  50                   push eax
// 007f893a  8d442414             lea eax, [esp + 0x14]
// 007f893e  64a300000000         mov dword ptr fs:[0], eax
// 007f8944  8bf1                 mov esi, ecx
// 007f8946  89742410             mov dword ptr [esp + 0x10], esi
// 007f894a  e8f3da1200           call 0x926442
// 007f894f  8d5e20               lea ebx, [esi + 0x20]
// 007f8952  33ff                 xor edi, edi
// 007f8954  8bcb                 mov ecx, ebx
// 007f8956  897c241c             mov dword ptr [esp + 0x1c], edi
// 007f895a  e8813e0400           call 0x83c7e0
// 007f895f  8d8ed8000000         lea ecx, [esi + 0xd8]
// 007f8965  c7064c199f00         mov dword ptr [esi], 0x9f194c
// 007f896b  c703ec189f00         mov dword ptr [ebx], 0x9f18ec
// 007f8971  ff1574de9800         call dword ptr [0x98de74]
// 007f8977  8d8edc000000         lea ecx, [esi + 0xdc]
// 007f897d  ff1574de9800         call dword ptr [0x98de74]
// 007f8983  8d8ee0000000         lea ecx, [esi + 0xe0]
// 007f8989  ff1574de9800         call dword ptr [0x98de74]
// 007f898f  8d8ee4000000         lea ecx, [esi + 0xe4]
// 007f8995  ff1574de9800         call dword ptr [0x98de74]
// 007f899b  8d8ee8000000         lea ecx, [esi + 0xe8]
// 007f89a1  ff1574de9800         call dword ptr [0x98de74]
// 007f89a7  8d8eec000000         lea ecx, [esi + 0xec]
// 007f89ad  ff1574de9800         call dword ptr [0x98de74]
// 007f89b3  8d8ef0000000         lea ecx, [esi + 0xf0]
// 007f89b9  ff1574de9800         call dword ptr [0x98de74]
// 007f89bf  8d8ef4000000         lea ecx, [esi + 0xf4]
// 007f89c5  ff1574de9800         call dword ptr [0x98de74]
// 007f89cb  8d8e08010000         lea ecx, [esi + 0x108]
// 007f89d1  ff1574de9800         call dword ptr [0x98de74]
// 007f89d7  8d9e10010000         lea ebx, [esi + 0x110]
// 007f89dd  6a0a                 push 0xa
// 007f89df  8bcb                 mov ecx, ebx
// 007f89e1  e81aefffff           call 0x7f7900
// 007f89e6  c703d0189f00         mov dword ptr [ebx], 0x9f18d0
// 007f89ec  8d9e2c010000         lea ebx, [esi + 0x12c]
// 007f89f2  6a0a                 push 0xa
// 007f89f4  8bcb                 mov ecx, ebx
// 007f89f6  e805efffff           call 0x7f7900
// 007f89fb  c703d0189f00         mov dword ptr [ebx], 0x9f18d0
// 007f8a01  8bce                 mov ecx, esi
// 007f8a03  c644241c0c           mov byte ptr [esp + 0x1c], 0xc
// 007f8a08  e83bda1200           call 0x926448
// 007f8a0d  8b1d9cca9800         mov ebx, dword ptr [0x98ca9c]
// 007f8a13  8d86c0000000         lea eax, [esi + 0xc0]
// 007f8a19  50                   push eax
// 007f8a1a  89be84000000         mov dword ptr [esi + 0x84], edi
// 007f8a20  89be88000000         mov dword ptr [esi + 0x88], edi
// 007f8a26  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 007f8a2c  89be90000000         mov dword ptr [esi + 0x90], edi
// 007f8a32  897e7c               mov dword ptr [esi + 0x7c], edi
// 007f8a35  89be80000000         mov dword ptr [esi + 0x80], edi
// 007f8a3b  89bed4000000         mov dword ptr [esi + 0xd4], edi
// 007f8a41  ffd3                 call ebx
// 007f8a43  8d8eb0000000         lea ecx, [esi + 0xb0]
// 007f8a49  51                   push ecx
// 007f8a4a  ffd3                 call ebx
// 007f8a4c  b801000000           mov eax, 1
// 007f8a51  89be00010000         mov dword ptr [esi + 0x100], edi
// 007f8a57  89bef8000000         mov dword ptr [esi + 0xf8], edi
// 007f8a5d  89be04010000         mov dword ptr [esi + 0x104], edi
// 007f8a63  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 007f8a69  89be98000000         mov dword ptr [esi + 0x98], edi
// 007f8a6f  89869c000000         mov dword ptr [esi + 0x9c], eax
// 007f8a75  89beac000000         mov dword ptr [esi + 0xac], edi
// 007f8a7b  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 007f8a81  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 007f8a87  89be94000000         mov dword ptr [esi + 0x94], edi
// 007f8a8d  89bed0000000         mov dword ptr [esi + 0xd0], edi
// 007f8a93  89befc000000         mov dword ptr [esi + 0xfc], edi
// 007f8a99  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 007f8a9f  89be48010000         mov dword ptr [esi + 0x148], edi
// 007f8aa5  898654010000         mov dword ptr [esi + 0x154], eax
// 007f8aab  33c0                 xor eax, eax
// 007f8aad  33c9                 xor ecx, ecx
// 007f8aaf  89866c010000         mov dword ptr [esi + 0x16c], eax
// 007f8ab5  c7864c010000ffffffff mov dword ptr [esi + 0x14c], 0xffffffff
// 007f8abf  89be50010000         mov dword ptr [esi + 0x150], edi
// 007f8ac5  89be58010000         mov dword ptr [esi + 0x158], edi
// 007f8acb  89be5c010000         mov dword ptr [esi + 0x15c], edi
// 007f8ad1  89be60010000         mov dword ptr [esi + 0x160], edi
// 007f8ad7  89be64010000         mov dword ptr [esi + 0x164], edi
// 007f8add  898e70010000         mov dword ptr [esi + 0x170], ecx
// 007f8ae3  89be68010000         mov dword ptr [esi + 0x168], edi
// 007f8ae9  8bc6                 mov eax, esi
// 007f8aeb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f8aef  64890d00000000       mov dword ptr fs:[0], ecx
// 007f8af6  59                   pop ecx
// 007f8af7  5f                   pop edi
// 007f8af8  5e                   pop esi
// 007f8af9  5b                   pop ebx
// 007f8afa  83c410               add esp, 0x10
// 007f8afd  c3                   ret 
// copied from an identical function in another client (function ??0CXTPControl@@IAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp