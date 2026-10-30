// roc 2010-06 007f4e20  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f4e20
//
// 007f4e20  6aff                 push -1
// 007f4e22  68022c9b00           push 0x9b2c02
// 007f4e27  64a100000000         mov eax, dword ptr fs:[0]
// 007f4e2d  50                   push eax
// 007f4e2e  51                   push ecx
// 007f4e2f  53                   push ebx
// 007f4e30  56                   push esi
// 007f4e31  57                   push edi
// 007f4e32  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007f4e37  33c4                 xor eax, esp
// 007f4e39  50                   push eax
// 007f4e3a  8d442414             lea eax, [esp + 0x14]
// 007f4e3e  64a300000000         mov dword ptr fs:[0], eax
// 007f4e44  8bf1                 mov esi, ecx
// 007f4e46  89742410             mov dword ptr [esp + 0x10], esi
// 007f4e4a  c7066cdea500         mov dword ptr [esi], 0xa5de6c
// 007f4e50  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 007f4e56  33ff                 xor edi, edi
// 007f4e58  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 007f4e60  85c0                 test eax, eax
// 007f4e62  7e39                 jle 0x7f4e9d
// 007f4e64  85ff                 test edi, edi
// 007f4e66  0f8c83000000         jl 0x7f4eef
// 007f4e6c  3bbe44010000         cmp edi, dword ptr [esi + 0x144]
// 007f4e72  7d7b                 jge 0x7f4eef
// 007f4e74  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 007f4e7a  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 007f4e7d  8d04b8               lea eax, [eax + edi*4]
// 007f4e80  85db                 test ebx, ebx
// 007f4e82  7410                 je 0x7f4e94
// 007f4e84  8bcb                 mov ecx, ebx
// 007f4e86  e845f9ffff           call 0x7f47d0
// 007f4e8b  53                   push ebx
// 007f4e8c  e8092bfbff           call 0x7a799a
// 007f4e91  83c404               add esp, 4
// 007f4e94  47                   inc edi
// 007f4e95  3bbe44010000         cmp edi, dword ptr [esi + 0x144]
// 007f4e9b  7cc7                 jl 0x7f4e64
// 007f4e9d  8d8e3c010000         lea ecx, [esi + 0x13c]
// 007f4ea3  c644241c02           mov byte ptr [esp + 0x1c], 2
// 007f4ea8  e843fdffff           call 0x7f4bf0
// 007f4ead  8d8ee4000000         lea ecx, [esi + 0xe4]
// 007f4eb3  c644241c01           mov byte ptr [esp + 0x1c], 1
// 007f4eb8  e883831800           call 0x97d240
// 007f4ebd  8d8e88000000         lea ecx, [esi + 0x88]
// 007f4ec3  c644241c00           mov byte ptr [esp + 0x1c], 0
// 007f4ec8  e873831800           call 0x97d240
// 007f4ecd  8bce                 mov ecx, esi
// 007f4ecf  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007f4ed7  e8bc821800           call 0x97d198
// 007f4edc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f4ee0  64890d00000000       mov dword ptr fs:[0], ecx
// 007f4ee7  59                   pop ecx
// 007f4ee8  5f                   pop edi
// 007f4ee9  5e                   pop esi
// 007f4eea  5b                   pop ebx
// 007f4eeb  83c410               add esp, 0x10
// 007f4eee  c3                   ret 
// 007f4eef  e8582dfbff           call 0x7a7c4c
// copied from an identical function in another client (function ??1CXTPCustomizeCommandsPage@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeCommandsPage.cpp