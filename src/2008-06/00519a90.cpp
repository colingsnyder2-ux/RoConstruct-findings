// from server: 100% by auto
// roc 2008-06 00519a90  unit: G3D::_internal::DialogTemplate  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519a90
//
// 00519a90  6aff                 push -1
// 00519a92  68c7c87c00           push 0x7cc8c7
// 00519a97  64a100000000         mov eax, dword ptr fs:[0]
// 00519a9d  50                   push eax
// 00519a9e  64892500000000       mov dword ptr fs:[0], esp
// 00519aa5  81ecb4000000         sub esp, 0xb4
// 00519aab  53                   push ebx
// 00519aac  56                   push esi
// 00519aad  8bf1                 mov esi, ecx
// 00519aaf  57                   push edi
// 00519ab0  8d4c2434             lea ecx, [esp + 0x34]
// 00519ab4  c6461c01             mov byte ptr [esi + 0x1c], 1
// 00519ab8  ff1560248000         call dword ptr [0x802460]
// 00519abe  33db                 xor ebx, ebx
// 00519ac0  8d4c246c             lea ecx, [esp + 0x6c]
// 00519ac4  899c24c8000000       mov dword ptr [esp + 0xc8], ebx
// 00519acb  ff1560248000         call dword ptr [0x802460]
// 00519ad1  8d4c2450             lea ecx, [esp + 0x50]
// 00519ad5  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 00519add  ff1560248000         call dword ptr [0x802460]
// 00519ae3  8d4c2418             lea ecx, [esp + 0x18]
// 00519ae7  c68424c800000002     mov byte ptr [esp + 0xc8], 2
// 00519aef  ff1560248000         call dword ptr [0x802460]
// 00519af5  895c2410             mov dword ptr [esp + 0x10], ebx
// 00519af9  895c2414             mov dword ptr [esp + 0x14], ebx
// 00519afd  895c240c             mov dword ptr [esp + 0xc], ebx
// 00519b01  8d442450             lea eax, [esp + 0x50]
// 00519b05  50                   push eax
// 00519b06  8d4c2470             lea ecx, [esp + 0x70]
// 00519b0a  51                   push ecx
// 00519b0b  8d542414             lea edx, [esp + 0x14]
// 00519b0f  52                   push edx
// 00519b10  8d442440             lea eax, [esp + 0x40]
// 00519b14  50                   push eax
// 00519b15  56                   push esi
// 00519b16  c68424dc00000004     mov byte ptr [esp + 0xdc], 4
// 00519b1e  e8edb3ffff           call 0x514f10
// 00519b23  6a2f                 push 0x2f
// 00519b25  8d4c2424             lea ecx, [esp + 0x24]
// 00519b29  51                   push ecx
// 00519b2a  8d9424c0000000       lea edx, [esp + 0xc0]
// 00519b31  52                   push edx
// 00519b32  e8e985ffff           call 0x512120
// 00519b37  50                   push eax
// 00519b38  8d442458             lea eax, [esp + 0x58]
// 00519b3c  50                   push eax
// 00519b3d  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00519b44  51                   push ecx
// 00519b45  c68424f400000005     mov byte ptr [esp + 0xf4], 5
// 00519b4d  ff15a8248000         call dword ptr [0x8024a8]
// 00519b53  83c42c               add esp, 0x2c
// 00519b56  50                   push eax
// 00519b57  8d4c241c             lea ecx, [esp + 0x1c]
// 00519b5b  c68424cc00000006     mov byte ptr [esp + 0xcc], 6
// 00519b63  ff150c248000         call dword ptr [0x80240c]
// 00519b69  8d8c2488000000       lea ecx, [esp + 0x88]
// 00519b70  c68424c800000005     mov byte ptr [esp + 0xc8], 5
// 00519b78  ff1568248000         call dword ptr [0x802468]
// 00519b7e  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00519b85  c68424c800000004     mov byte ptr [esp + 0xc8], 4
// 00519b8d  ff1568248000         call dword ptr [0x802468]
// 00519b93  8d542418             lea edx, [esp + 0x18]
// 00519b97  52                   push edx
// 00519b98  e8f3b1ffff           call 0x514d90
// 00519b9d  83c404               add esp, 4
// 00519ba0  84c0                 test al, al
// 00519ba2  750d                 jne 0x519bb1
// 00519ba4  8d442418             lea eax, [esp + 0x18]
// 00519ba8  50                   push eax
// 00519ba9  e8c2b8ffff           call 0x515470
// 00519bae  83c404               add esp, 4
// 00519bb1  b9808c8200           mov ecx, 0x828c80
// 00519bb6  395e44               cmp dword ptr [esi + 0x44], ebx
// 00519bb9  7705                 ja 0x519bc0
// 00519bbb  b9b43e8200           mov ecx, 0x823eb4
// 00519bc0  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 00519bc4  7205                 jb 0x519bcb
// 00519bc6  8b4604               mov eax, dword ptr [esi + 4]
// 00519bc9  eb03                 jmp 0x519bce
// 00519bcb  8d4604               lea eax, [esi + 4]
// 00519bce  51                   push ecx
// 00519bcf  50                   push eax
// 00519bd0  ff1514288000         call dword ptr [0x802814]
// 00519bd6  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00519bd9  8bf8                 mov edi, eax
// 00519bdb  8b4634               mov eax, dword ptr [esi + 0x34]
// 00519bde  014644               add dword ptr [esi + 0x44], eax
// 00519be1  57                   push edi
// 00519be2  6a01                 push 1
// 00519be4  50                   push eax
// 00519be5  51                   push ecx
// 00519be6  ff15d0278000         call dword ptr [0x8027d0]
// 00519bec  83c418               add esp, 0x18
// 00519bef  389c24d0000000       cmp byte ptr [esp + 0xd0], bl
// 00519bf6  740a                 je 0x519c02
// 00519bf8  57                   push edi
// 00519bf9  ff1518288000         call dword ptr [0x802818]
// 00519bff  83c404               add esp, 4
// 00519c02  57                   push edi
// 00519c03  ff15d4278000         call dword ptr [0x8027d4]
// 00519c09  83c404               add esp, 4
// 00519c0c  8d4c240c             lea ecx, [esp + 0xc]
// 00519c10  c68424c800000003     mov byte ptr [esp + 0xc8], 3
// 00519c18  e8b3eafeff           call 0x5086d0
// 00519c1d  8d4c2418             lea ecx, [esp + 0x18]
// 00519c21  c68424c800000002     mov byte ptr [esp + 0xc8], 2
// 00519c29  ff1568248000         call dword ptr [0x802468]
// 00519c2f  8d4c2450             lea ecx, [esp + 0x50]
// 00519c33  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 00519c3b  ff1568248000         call dword ptr [0x802468]
// 00519c41  8d4c246c             lea ecx, [esp + 0x6c]
// 00519c45  889c24c8000000       mov byte ptr [esp + 0xc8], bl
// 00519c4c  ff1568248000         call dword ptr [0x802468]
// 00519c52  8d4c2434             lea ecx, [esp + 0x34]
// 00519c56  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 00519c61  ff1568248000         call dword ptr [0x802468]
// 00519c67  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 00519c6e  5f                   pop edi
// 00519c6f  5e                   pop esi
// 00519c70  5b                   pop ebx
// 00519c71  64890d00000000       mov dword ptr fs:[0], ecx
// 00519c78  81c4c0000000         add esp, 0xc0
// 00519c7e  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ?commit@BinaryOutput@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
