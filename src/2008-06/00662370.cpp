// roc 2008-06 00662370  unit: RBX::FilterStairs  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00662370
//
// 00662370  83ec24               sub esp, 0x24
// 00662373  55                   push ebp
// 00662374  56                   push esi
// 00662375  8bf0                 mov esi, eax
// 00662377  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 0066237a  57                   push edi
// 0066237b  56                   push esi
// 0066237c  e87f320000           call 0x665600
// 00662381  55                   push ebp
// 00662382  e849870000           call 0x66aad0
// 00662387  8bf8                 mov edi, eax
// 00662389  6a00                 push 0
// 0066238b  8d442424             lea eax, [esp + 0x24]
// 0066238f  50                   push eax
// 00662390  56                   push esi
// 00662391  e85afcffff           call 0x661ff0
// 00662396  83c414               add esp, 0x14
// 00662399  837c241801           cmp dword ptr [esp + 0x18], 1
// 0066239e  7508                 jne 0x6623a8
// 006623a0  c744241803000000     mov dword ptr [esp + 0x18], 3
// 006623a8  8b5630               mov edx, dword ptr [esi + 0x30]
// 006623ab  8d4c2418             lea ecx, [esp + 0x18]
// 006623af  51                   push ecx
// 006623b0  52                   push edx
// 006623b1  e89a980000           call 0x66bc50
// 006623b6  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 006623be  c644241e01           mov byte ptr [esp + 0x1e], 1
// 006623c3  8a4532               mov al, byte ptr [ebp + 0x32]
// 006623c6  8844241c             mov byte ptr [esp + 0x1c], al
// 006623ca  c644241d00           mov byte ptr [esp + 0x1d], 0
// 006623cf  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 006623d2  8d542414             lea edx, [esp + 0x14]
// 006623d6  894c2414             mov dword ptr [esp + 0x14], ecx
// 006623da  83c408               add esp, 8
// 006623dd  895514               mov dword ptr [ebp + 0x14], edx
// 006623e0  817e1003010000       cmp dword ptr [esi + 0x10], 0x103
// 006623e7  7424                 je 0x66240d
// 006623e9  6803010000           push 0x103
// 006623ee  56                   push esi
// 006623ef  e81c1d0000           call 0x664110
// 006623f4  50                   push eax
// 006623f5  8b4634               mov eax, dword ptr [esi + 0x34]
// 006623f8  68c0c48400           push 0x84c4c0
// 006623fd  50                   push eax
// 006623fe  e8bd06fcff           call 0x622ac0
// 00662403  50                   push eax
// 00662404  56                   push esi
// 00662405  e8061e0000           call 0x664210
// 0066240a  83c41c               add esp, 0x1c
// 0066240d  56                   push esi
// 0066240e  e8ed310000           call 0x665600
// 00662413  83c404               add esp, 4
// 00662416  8bc6                 mov eax, esi
// 00662418  e8e3fcffff           call 0x662100
// 0066241d  57                   push edi
// 0066241e  55                   push ebp
// 0066241f  e88c8f0000           call 0x66b3b0
// 00662424  83c404               add esp, 4
// 00662427  50                   push eax
// 00662428  55                   push ebp
// 00662429  e8c29e0000           call 0x66c2f0
// 0066242e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00662432  6815010000           push 0x115
// 00662437  bf06010000           mov edi, 0x106
// 0066243c  e8dfe3ffff           call 0x660820
// 00662441  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00662444  8b0e                 mov ecx, dword ptr [esi]
// 00662446  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00662449  894d14               mov dword ptr [ebp + 0x14], ecx
// 0066244c  0fb65608             movzx edx, byte ptr [esi + 8]
// 00662450  83c410               add esp, 0x10
// 00662453  e898e5ffff           call 0x6609f0
// 00662458  807e0900             cmp byte ptr [esi + 9], 0
// 0066245c  7414                 je 0x662472
// 0066245e  0fb65608             movzx edx, byte ptr [esi + 8]
// 00662462  6a00                 push 0
// 00662464  6a00                 push 0
// 00662466  52                   push edx
// 00662467  6a23                 push 0x23
// 00662469  55                   push ebp
// 0066246a  e8c18d0000           call 0x66b230
// 0066246f  83c414               add esp, 0x14
// 00662472  0fb64532             movzx eax, byte ptr [ebp + 0x32]
// 00662476  894524               mov dword ptr [ebp + 0x24], eax
// 00662479  8b4e04               mov ecx, dword ptr [esi + 4]
// 0066247c  51                   push ecx
// 0066247d  55                   push ebp
// 0066247e  e8fd8f0000           call 0x66b480
// 00662483  8b542434             mov edx, dword ptr [esp + 0x34]
// 00662487  52                   push edx
// 00662488  55                   push ebp
// 00662489  e8f28f0000           call 0x66b480
// 0066248e  83c410               add esp, 0x10
// 00662491  5f                   pop edi
// 00662492  5e                   pop esi
// 00662493  5d                   pop ebp
// 00662494  83c424               add esp, 0x24
// 00662497  c3                   ret 
// library lua-5.1.4/lparser.c (function _whilestat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
