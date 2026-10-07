// roc 2010-06 00560b80  unit: G3D::_internal::DialogTemplate  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560b80
//
// 00560b80  6aff                 push -1
// 00560b82  68d7179900           push 0x9917d7
// 00560b87  64a100000000         mov eax, dword ptr fs:[0]
// 00560b8d  50                   push eax
// 00560b8e  64892500000000       mov dword ptr fs:[0], esp
// 00560b95  81ecb4000000         sub esp, 0xb4
// 00560b9b  53                   push ebx
// 00560b9c  56                   push esi
// 00560b9d  8bf1                 mov esi, ecx
// 00560b9f  57                   push edi
// 00560ba0  8d4c2434             lea ecx, [esp + 0x34]
// 00560ba4  c6461c01             mov byte ptr [esi + 0x1c], 1
// 00560ba8  ff1504a49e00         call dword ptr [0x9ea404]
// 00560bae  33db                 xor ebx, ebx
// 00560bb0  8d4c246c             lea ecx, [esp + 0x6c]
// 00560bb4  899c24c8000000       mov dword ptr [esp + 0xc8], ebx
// 00560bbb  ff1504a49e00         call dword ptr [0x9ea404]
// 00560bc1  8d4c2450             lea ecx, [esp + 0x50]
// 00560bc5  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 00560bcd  ff1504a49e00         call dword ptr [0x9ea404]
// 00560bd3  8d4c2418             lea ecx, [esp + 0x18]
// 00560bd7  c68424c800000002     mov byte ptr [esp + 0xc8], 2
// 00560bdf  ff1504a49e00         call dword ptr [0x9ea404]
// 00560be5  895c2410             mov dword ptr [esp + 0x10], ebx
// 00560be9  895c2414             mov dword ptr [esp + 0x14], ebx
// 00560bed  895c240c             mov dword ptr [esp + 0xc], ebx
// 00560bf1  8d442450             lea eax, [esp + 0x50]
// 00560bf5  50                   push eax
// 00560bf6  8d4c2470             lea ecx, [esp + 0x70]
// 00560bfa  51                   push ecx
// 00560bfb  8d542414             lea edx, [esp + 0x14]
// 00560bff  52                   push edx
// 00560c00  8d442440             lea eax, [esp + 0x40]
// 00560c04  50                   push eax
// 00560c05  56                   push esi
// 00560c06  c68424dc00000004     mov byte ptr [esp + 0xdc], 4
// 00560c0e  e85d97ffff           call 0x55a370
// 00560c13  6a2f                 push 0x2f
// 00560c15  8d4c2424             lea ecx, [esp + 0x24]
// 00560c19  51                   push ecx
// 00560c1a  8d9424c0000000       lea edx, [esp + 0xc0]
// 00560c21  52                   push edx
// 00560c22  e82969ffff           call 0x557550
// 00560c27  50                   push eax
// 00560c28  8d442458             lea eax, [esp + 0x58]
// 00560c2c  50                   push eax
// 00560c2d  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00560c34  51                   push ecx
// 00560c35  c68424f400000005     mov byte ptr [esp + 0xf4], 5
// 00560c3d  ff1504a79e00         call dword ptr [0x9ea704]
// 00560c43  83c42c               add esp, 0x2c
// 00560c46  50                   push eax
// 00560c47  8d4c241c             lea ecx, [esp + 0x1c]
// 00560c4b  c68424cc00000006     mov byte ptr [esp + 0xcc], 6
// 00560c53  ff1568a49e00         call dword ptr [0x9ea468]
// 00560c59  8d8c2488000000       lea ecx, [esp + 0x88]
// 00560c60  c68424c800000005     mov byte ptr [esp + 0xc8], 5
// 00560c68  ff1500a49e00         call dword ptr [0x9ea400]
// 00560c6e  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00560c75  c68424c800000004     mov byte ptr [esp + 0xc8], 4
// 00560c7d  ff1500a49e00         call dword ptr [0x9ea400]
// 00560c83  8d542418             lea edx, [esp + 0x18]
// 00560c87  52                   push edx
// 00560c88  e86395ffff           call 0x55a1f0
// 00560c8d  83c404               add esp, 4
// 00560c90  84c0                 test al, al
// 00560c92  750d                 jne 0x560ca1
// 00560c94  8d442418             lea eax, [esp + 0x18]
// 00560c98  50                   push eax
// 00560c99  e8329cffff           call 0x55a8d0
// 00560c9e  83c404               add esp, 4
// 00560ca1  b9600da200           mov ecx, 0xa20d60
// 00560ca6  395e44               cmp dword ptr [esi + 0x44], ebx
// 00560ca9  7705                 ja 0x560cb0
// 00560cab  b9bcc8a100           mov ecx, 0xa1c8bc
// 00560cb0  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 00560cb4  7205                 jb 0x560cbb
// 00560cb6  8b4604               mov eax, dword ptr [esi + 4]
// 00560cb9  eb03                 jmp 0x560cbe
// 00560cbb  8d4604               lea eax, [esi + 4]
// 00560cbe  51                   push ecx
// 00560cbf  50                   push eax
// 00560cc0  ff1520a79e00         call dword ptr [0x9ea720]
// 00560cc6  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00560cc9  8bf8                 mov edi, eax
// 00560ccb  8b4634               mov eax, dword ptr [esi + 0x34]
// 00560cce  014644               add dword ptr [esi + 0x44], eax
// 00560cd1  57                   push edi
// 00560cd2  6a01                 push 1
// 00560cd4  50                   push eax
// 00560cd5  51                   push ecx
// 00560cd6  ff1588a79e00         call dword ptr [0x9ea788]
// 00560cdc  83c418               add esp, 0x18
// 00560cdf  389c24d0000000       cmp byte ptr [esp + 0xd0], bl
// 00560ce6  740a                 je 0x560cf2
// 00560ce8  57                   push edi
// 00560ce9  ff1558a89e00         call dword ptr [0x9ea858]
// 00560cef  83c404               add esp, 4
// 00560cf2  57                   push edi
// 00560cf3  ff1580a79e00         call dword ptr [0x9ea780]
// 00560cf9  83c404               add esp, 4
// 00560cfc  8d4c240c             lea ecx, [esp + 0xc]
// 00560d00  c68424c800000003     mov byte ptr [esp + 0xc8], 3
// 00560d08  e893d4feff           call 0x54e1a0
// 00560d0d  8d4c2418             lea ecx, [esp + 0x18]
// 00560d11  c68424c800000002     mov byte ptr [esp + 0xc8], 2
// 00560d19  ff1500a49e00         call dword ptr [0x9ea400]
// 00560d1f  8d4c2450             lea ecx, [esp + 0x50]
// 00560d23  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 00560d2b  ff1500a49e00         call dword ptr [0x9ea400]
// 00560d31  8d4c246c             lea ecx, [esp + 0x6c]
// 00560d35  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 00560d3c  ff1500a49e00         call dword ptr [0x9ea400]
// 00560d42  8d4c2434             lea ecx, [esp + 0x34]
// 00560d46  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 00560d51  ff1500a49e00         call dword ptr [0x9ea400]
// 00560d57  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 00560d5e  5f                   pop edi
// 00560d5f  5e                   pop esi
// 00560d60  5b                   pop ebx
// 00560d61  64890d00000000       mov dword ptr fs:[0], ecx
// 00560d68  81c4c0000000         add esp, 0xc0
// 00560d6e  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?commit@BinaryOutput@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
