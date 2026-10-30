// roc 2010-06 007f52d0  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f52d0
//
// 007f52d0  6aff                 push -1
// 007f52d2  68d42c9b00           push 0x9b2cd4
// 007f52d7  64a100000000         mov eax, dword ptr fs:[0]
// 007f52dd  50                   push eax
// 007f52de  83ec08               sub esp, 8
// 007f52e1  53                   push ebx
// 007f52e2  55                   push ebp
// 007f52e3  56                   push esi
// 007f52e4  57                   push edi
// 007f52e5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007f52ea  33c4                 xor eax, esp
// 007f52ec  50                   push eax
// 007f52ed  8d44241c             lea eax, [esp + 0x1c]
// 007f52f1  64a300000000         mov dword ptr fs:[0], eax
// 007f52f7  8bf9                 mov edi, ecx
// 007f52f9  897c2414             mov dword ptr [esp + 0x14], edi
// 007f52fd  8d4c2418             lea ecx, [esp + 0x18]
// 007f5301  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007f5307  33db                 xor ebx, ebx
// 007f5309  895c2424             mov dword ptr [esp + 0x24], ebx
// 007f530d  e89ed50200           call 0x8228b0
// 007f5312  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f5316  8b10                 mov edx, dword ptr [eax]
// 007f5318  8b5208               mov edx, dword ptr [edx + 8]
// 007f531b  51                   push ecx
// 007f531c  8d4c241c             lea ecx, [esp + 0x1c]
// 007f5320  51                   push ecx
// 007f5321  8bc8                 mov ecx, eax
// 007f5323  ffd2                 call edx
// 007f5325  6a08                 push 8
// 007f5327  e87426fbff           call 0x7a79a0
// 007f532c  8bf0                 mov esi, eax
// 007f532e  83c404               add esp, 4
// 007f5331  8974242c             mov dword ptr [esp + 0x2c], esi
// 007f5335  c644242401           mov byte ptr [esp + 0x24], 1
// 007f533a  3bf3                 cmp esi, ebx
// 007f533c  7423                 je 0x7f5361
// 007f533e  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 007f5344  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 007f534a  50                   push eax
// 007f534b  8d4c241c             lea ecx, [esp + 0x1c]
// 007f534f  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007f5355  50                   push eax
// 007f5356  8bce                 mov ecx, esi
// 007f5358  e853f5ffff           call 0x7f48b0
// 007f535d  8be8                 mov ebp, eax
// 007f535f  eb02                 jmp 0x7f5363
// 007f5361  33ed                 xor ebp, ebp
// 007f5363  83bf4401000000       cmp dword ptr [edi + 0x144], 0
// 007f536a  c644242400           mov byte ptr [esp + 0x24], 0
// 007f536f  7e64                 jle 0x7f53d5
// 007f5371  85db                 test ebx, ebx
// 007f5373  0f8c9a000000         jl 0x7f5413
// 007f5379  3b9f44010000         cmp ebx, dword ptr [edi + 0x144]
// 007f537f  0f8d8e000000         jge 0x7f5413
// 007f5385  8b8f40010000         mov ecx, dword ptr [edi + 0x140]
// 007f538b  8b1499               mov edx, dword ptr [ecx + ebx*4]
// 007f538e  8b7a04               mov edi, dword ptr [edx + 4]
// 007f5391  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007f5394  33f6                 xor esi, esi
// 007f5396  85c0                 test eax, eax
// 007f5398  7e2c                 jle 0x7f53c6
// 007f539a  85f6                 test esi, esi
// 007f539c  7c11                 jl 0x7f53af
// 007f539e  3bf0                 cmp esi, eax
// 007f53a0  7d0d                 jge 0x7f53af
// 007f53a2  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 007f53a5  7d6c                 jge 0x7f5413
// 007f53a7  8b4728               mov eax, dword ptr [edi + 0x28]
// 007f53aa  8b04b0               mov eax, dword ptr [eax + esi*4]
// 007f53ad  eb02                 jmp 0x7f53b1
// 007f53af  33c0                 xor eax, eax
// 007f53b1  8b4d04               mov ecx, dword ptr [ebp + 4]
// 007f53b4  6a00                 push 0
// 007f53b6  6aff                 push -1
// 007f53b8  50                   push eax
// 007f53b9  e8925f0000           call 0x7fb350
// 007f53be  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007f53c1  46                   inc esi
// 007f53c2  3bf0                 cmp esi, eax
// 007f53c4  7cd4                 jl 0x7f539a
// 007f53c6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f53ca  43                   inc ebx
// 007f53cb  3b9944010000         cmp ebx, dword ptr [ecx + 0x144]
// 007f53d1  8bf9                 mov edi, ecx
// 007f53d3  7c9c                 jl 0x7f5371
// 007f53d5  8b442430             mov eax, dword ptr [esp + 0x30]
// 007f53d9  83f8ff               cmp eax, -1
// 007f53dc  7506                 jne 0x7f53e4
// 007f53de  8b8744010000         mov eax, dword ptr [edi + 0x144]
// 007f53e4  6a01                 push 1
// 007f53e6  55                   push ebp
// 007f53e7  50                   push eax
// 007f53e8  8d8f3c010000         lea ecx, [edi + 0x13c]
// 007f53ee  e8cd65fbff           call 0x7ab9c0
// 007f53f3  8d4c2418             lea ecx, [esp + 0x18]
// 007f53f7  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007f53fd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f5401  64890d00000000       mov dword ptr fs:[0], ecx
// 007f5408  59                   pop ecx
// 007f5409  5f                   pop edi
// 007f540a  5e                   pop esi
// 007f540b  5d                   pop ebp
// 007f540c  5b                   pop ebx
// 007f540d  83c414               add esp, 0x14
// 007f5410  c20800               ret 8
// 007f5413  e83428fbff           call 0x7a7c4c
// copied from an identical function in another client (function ?InsertAllCommandsCategory@CXTPCustomizeCommandsPage@@QAEXIH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp