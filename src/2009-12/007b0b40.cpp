// roc 2009-12 007b0b40  unit: RBX::Block  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b0b40
//
// 007b0b40  83ec08               sub esp, 8
// 007b0b43  53                   push ebx
// 007b0b44  55                   push ebp
// 007b0b45  56                   push esi
// 007b0b46  57                   push edi
// 007b0b47  8bf9                 mov edi, ecx
// 007b0b49  8b4718               mov eax, dword ptr [edi + 0x18]
// 007b0b4c  8b28                 mov ebp, dword ptr [eax]
// 007b0b4e  8b37                 mov esi, dword ptr [edi]
// 007b0b50  896c2414             mov dword ptr [esp + 0x14], ebp
// 007b0b54  89742410             mov dword ptr [esp + 0x10], esi
// 007b0b58  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 007b0b5b  8b07                 mov eax, dword ptr [edi]
// 007b0b5d  85f6                 test esi, esi
// 007b0b5f  7404                 je 0x7b0b65
// 007b0b61  3bf0                 cmp esi, eax
// 007b0b63  7406                 je 0x7b0b6b
// 007b0b65  ff1560b79800         call dword ptr [0x98b760]
// 007b0b6b  3beb                 cmp ebp, ebx
// 007b0b6d  7438                 je 0x7b0ba7
// 007b0b6f  85f6                 test esi, esi
// 007b0b71  7530                 jne 0x7b0ba3
// 007b0b73  ff1560b79800         call dword ptr [0x98b760]
// 007b0b79  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 007b0b7c  7506                 jne 0x7b0b84
// 007b0b7e  ff1560b79800         call dword ptr [0x98b760]
// 007b0b84  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 007b0b87  51                   push ecx
// 007b0b88  e8cd2c0400           call 0x7f385a
// 007b0b8d  83c404               add esp, 4
// 007b0b90  8d4c2410             lea ecx, [esp + 0x10]
// 007b0b94  e8d7edffff           call 0x7af970
// 007b0b99  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007b0b9d  8b742410             mov esi, dword ptr [esp + 0x10]
// 007b0ba1  ebb5                 jmp 0x7b0b58
// 007b0ba3  8b36                 mov esi, dword ptr [esi]
// 007b0ba5  ebd2                 jmp 0x7b0b79
// 007b0ba7  8bcf                 mov ecx, edi
// 007b0ba9  5f                   pop edi
// 007b0baa  5e                   pop esi
// 007b0bab  5d                   pop ebp
// 007b0bac  5b                   pop ebx
// 007b0bad  83c408               add esp, 8
// 007b0bb0  e99bfdffff           jmp 0x7b0950
// library openrbx-client/App\v8world\Block.cpp (function ??1BlockTemplates@BlockTemplate@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
