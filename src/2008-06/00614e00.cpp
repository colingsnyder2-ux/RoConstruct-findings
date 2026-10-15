// roc 2008-06 00614e00  unit: RBX::RevoluteLink  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614e00
//
// 00614e00  6aff                 push -1
// 00614e02  68c98e7d00           push 0x7d8ec9
// 00614e07  64a100000000         mov eax, dword ptr fs:[0]
// 00614e0d  50                   push eax
// 00614e0e  64892500000000       mov dword ptr fs:[0], esp
// 00614e15  83ec1c               sub esp, 0x1c
// 00614e18  53                   push ebx
// 00614e19  56                   push esi
// 00614e1a  57                   push edi
// 00614e1b  68a4a89500           push 0x95a8a4
// 00614e20  8bf1                 mov esi, ecx
// 00614e22  68d8388400           push 0x8438d8
// 00614e27  8974242c             mov dword ptr [esp + 0x2c], esi
// 00614e2b  e86077f5ff           call 0x56c590
// 00614e30  8d442423             lea eax, [esp + 0x23]
// 00614e34  50                   push eax
// 00614e35  8d542427             lea edx, [esp + 0x27]
// 00614e39  33ff                 xor edi, edi
// 00614e3b  8d4e30               lea ecx, [esi + 0x30]
// 00614e3e  52                   push edx
// 00614e3f  897c2438             mov dword ptr [esp + 0x38], edi
// 00614e43  c706c42d8300         mov dword ptr [esi], 0x832dc4
// 00614e49  e8c212e3ff           call 0x446110
// 00614e4e  8d442423             lea eax, [esp + 0x23]
// 00614e52  50                   push eax
// 00614e53  8d542427             lea edx, [esp + 0x27]
// 00614e57  8d4e50               lea ecx, [esi + 0x50]
// 00614e5a  52                   push edx
// 00614e5b  c644243801           mov byte ptr [esp + 0x38], 1
// 00614e60  e8ab12e3ff           call 0x446110
// 00614e65  6a04                 push 4
// 00614e67  c644243402           mov byte ptr [esp + 0x34], 2
// 00614e6c  8d5e70               lea ebx, [esi + 0x70]
// 00614e6f  e8acba0800           call 0x6a0920
// 00614e74  83c404               add esp, 4
// 00614e77  3bc7                 cmp eax, edi
// 00614e79  7404                 je 0x614e7f
// 00614e7b  8918                 mov dword ptr [eax], ebx
// 00614e7d  eb02                 jmp 0x614e81
// 00614e7f  33c0                 xor eax, eax
// 00614e81  8903                 mov dword ptr [ebx], eax
// 00614e83  897b0c               mov dword ptr [ebx + 0xc], edi
// 00614e86  897b10               mov dword ptr [ebx + 0x10], edi
// 00614e89  897b14               mov dword ptr [ebx + 0x14], edi
// 00614e8c  6a04                 push 4
// 00614e8e  c644243404           mov byte ptr [esp + 0x34], 4
// 00614e93  8d9e88000000         lea ebx, [esi + 0x88]
// 00614e99  e882ba0800           call 0x6a0920
// 00614e9e  83c404               add esp, 4
// 00614ea1  3bc7                 cmp eax, edi
// 00614ea3  7404                 je 0x614ea9
// 00614ea5  8918                 mov dword ptr [eax], ebx
// 00614ea7  eb02                 jmp 0x614eab
// 00614ea9  33c0                 xor eax, eax
// 00614eab  8903                 mov dword ptr [ebx], eax
// 00614ead  897b0c               mov dword ptr [ebx + 0xc], edi
// 00614eb0  897b10               mov dword ptr [ebx + 0x10], edi
// 00614eb3  897b14               mov dword ptr [ebx + 0x14], edi
// 00614eb6  6a04                 push 4
// 00614eb8  c644243406           mov byte ptr [esp + 0x34], 6
// 00614ebd  8d9ea0000000         lea ebx, [esi + 0xa0]
// 00614ec3  e858ba0800           call 0x6a0920
// 00614ec8  83c404               add esp, 4
// 00614ecb  3bc7                 cmp eax, edi
// 00614ecd  7404                 je 0x614ed3
// 00614ecf  8918                 mov dword ptr [eax], ebx
// 00614ed1  eb02                 jmp 0x614ed5
// 00614ed3  33c0                 xor eax, eax
// 00614ed5  8903                 mov dword ptr [ebx], eax
// 00614ed7  897b0c               mov dword ptr [ebx + 0xc], edi
// 00614eda  897b10               mov dword ptr [ebx + 0x10], edi
// 00614edd  897b14               mov dword ptr [ebx + 0x14], edi
// 00614ee0  6a04                 push 4
// 00614ee2  c644243408           mov byte ptr [esp + 0x34], 8
// 00614ee7  8d9eb8000000         lea ebx, [esi + 0xb8]
// 00614eed  e82eba0800           call 0x6a0920
// 00614ef2  83c404               add esp, 4
// 00614ef5  3bc7                 cmp eax, edi
// 00614ef7  7404                 je 0x614efd
// 00614ef9  8918                 mov dword ptr [eax], ebx
// 00614efb  eb02                 jmp 0x614eff
// 00614efd  33c0                 xor eax, eax
// 00614eff  8903                 mov dword ptr [ebx], eax
// 00614f01  897b0c               mov dword ptr [ebx + 0xc], edi
// 00614f04  897b10               mov dword ptr [ebx + 0x10], edi
// 00614f07  897b14               mov dword ptr [ebx + 0x14], edi
// 00614f0a  6a04                 push 4
// 00614f0c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 00614f11  8d9ed0000000         lea ebx, [esi + 0xd0]
// 00614f17  e804ba0800           call 0x6a0920
// 00614f1c  83c404               add esp, 4
// 00614f1f  3bc7                 cmp eax, edi
// 00614f21  7404                 je 0x614f27
// 00614f23  8918                 mov dword ptr [eax], ebx
// 00614f25  eb02                 jmp 0x614f29
// 00614f27  33c0                 xor eax, eax
// 00614f29  8903                 mov dword ptr [ebx], eax
// 00614f2b  897b0c               mov dword ptr [ebx + 0xc], edi
// 00614f2e  897b10               mov dword ptr [ebx + 0x10], edi
// 00614f31  897b14               mov dword ptr [ebx + 0x14], edi
// 00614f34  68d0388400           push 0x8438d0
// 00614f39  57                   push edi
// 00614f3a  8bce                 mov ecx, esi
// 00614f3c  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 00614f41  e8ea850300           call 0x64d530
// 00614f46  68cc2d8300           push 0x832dcc
// 00614f4b  6a01                 push 1
// 00614f4d  8bce                 mov ecx, esi
// 00614f4f  e8dc850300           call 0x64d530
// 00614f54  6870338300           push 0x833370
// 00614f59  6a02                 push 2
// 00614f5b  8bce                 mov ecx, esi
// 00614f5d  e8ce850300           call 0x64d530
// 00614f62  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00614f66  5f                   pop edi
// 00614f67  8bc6                 mov eax, esi
// 00614f69  5e                   pop esi
// 00614f6a  5b                   pop ebx
// 00614f6b  64890d00000000       mov dword ptr fs:[0], ecx
// 00614f72  83c428               add esp, 0x28
// 00614f75  c3                   ret 
// library rbxgs/roc_unit_1819d05611c25ca5.cpp (function ??0?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1819d05611c25ca5.cpp
