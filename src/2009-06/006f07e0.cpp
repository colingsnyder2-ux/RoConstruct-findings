// from server: 100% by auto
// roc 2009-06 006f07e0  unit: seg_006f0000  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f07e0
//
// 006f07e0  56                   push esi
// 006f07e1  57                   push edi
// 006f07e2  8bf0                 mov esi, eax
// 006f07e4  e8d7feffff           call 0x6f06c0
// 006f07e9  8bf8                 mov edi, eax
// 006f07eb  8d4701               lea eax, [edi + 1]
// 006f07ee  3dffffff3f           cmp eax, 0x3fffffff
// 006f07f3  7719                 ja 0x6f080e
// 006f07f5  8b16                 mov edx, dword ptr [esi]
// 006f07f7  8d0cbd00000000       lea ecx, [edi*4]
// 006f07fe  51                   push ecx
// 006f07ff  6a00                 push 0
// 006f0801  6a00                 push 0
// 006f0803  52                   push edx
// 006f0804  e857cfffff           call 0x6ed760
// 006f0809  83c410               add esp, 0x10
// 006f080c  eb0b                 jmp 0x6f0819
// 006f080e  8b06                 mov eax, dword ptr [esi]
// 006f0810  50                   push eax
// 006f0811  e82acfffff           call 0x6ed740
// 006f0816  83c404               add esp, 4
// 006f0819  8d0cbd00000000       lea ecx, [edi*4]
// 006f0820  51                   push ecx
// 006f0821  89430c               mov dword ptr [ebx + 0xc], eax
// 006f0824  897b2c               mov dword ptr [ebx + 0x2c], edi
// 006f0827  8b5604               mov edx, dword ptr [esi + 4]
// 006f082a  50                   push eax
// 006f082b  52                   push edx
// 006f082c  e81fc9ffff           call 0x6ed150
// 006f0831  83c40c               add esp, 0xc
// 006f0834  85c0                 test eax, eax
// 006f0836  7423                 je 0x6f085b
// 006f0838  8b460c               mov eax, dword ptr [esi + 0xc]
// 006f083b  8b0e                 mov ecx, dword ptr [esi]
// 006f083d  6840e08e00           push 0x8ee040
// 006f0842  50                   push eax
// 006f0843  6824e08e00           push 0x8ee024
// 006f0848  51                   push ecx
// 006f0849  e85288fdff           call 0x6c90a0
// 006f084e  8b16                 mov edx, dword ptr [esi]
// 006f0850  6a03                 push 3
// 006f0852  52                   push edx
// 006f0853  e8882afdff           call 0x6c32e0
// 006f0858  83c418               add esp, 0x18
// 006f085b  5f                   pop edi
// 006f085c  5e                   pop esi
// 006f085d  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadCode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
