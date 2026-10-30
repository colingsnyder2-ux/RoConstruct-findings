// roc 2009-12 0083f3e0  unit: CXTPCustomizeSheet  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083f3e0
//
// 0083f3e0  81ec28010000         sub esp, 0x128
// 0083f3e6  a10052b600           mov eax, dword ptr [0xb65200]
// 0083f3eb  33c4                 xor eax, esp
// 0083f3ed  89842424010000       mov dword ptr [esp + 0x124], eax
// 0083f3f4  8b84242c010000       mov eax, dword ptr [esp + 0x12c]
// 0083f3fb  81780404010000       cmp dword ptr [eax + 4], 0x104
// 0083f402  55                   push ebp
// 0083f403  56                   push esi
// 0083f404  57                   push edi
// 0083f405  894c240c             mov dword ptr [esp + 0xc], ecx
// 0083f409  89442410             mov dword ptr [esp + 0x10], eax
// 0083f40d  0f85b1000000         jne 0x83f4c4
// 0083f413  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0083f416  8b2dc4cb9800         mov ebp, dword ptr [0x98cbc4]
// 0083f41c  6a00                 push 0
// 0083f41e  6a00                 push 0
// 0083f420  6874040000           push 0x474
// 0083f425  50                   push eax
// 0083f426  ffd5                 call ebp
// 0083f428  50                   push eax
// 0083f429  e8fc46fbff           call 0x7f3b2a
// 0083f42e  8bf8                 mov edi, eax
// 0083f430  85ff                 test edi, edi
// 0083f432  0f848c000000         je 0x83f4c4
// 0083f438  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0083f43b  33f6                 xor esi, esi
// 0083f43d  56                   push esi
// 0083f43e  56                   push esi
// 0083f43f  6804130000           push 0x1304
// 0083f444  51                   push ecx
// 0083f445  ffd5                 call ebp
// 0083f447  85c0                 test eax, eax
// 0083f449  7e79                 jle 0x83f4c4
// 0083f44b  eb03                 jmp 0x83f450
// 0083f44d  8d4900               lea ecx, [ecx]
// 0083f450  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0083f453  8d442414             lea eax, [esp + 0x14]
// 0083f457  50                   push eax
// 0083f458  56                   push esi
// 0083f459  6805130000           push 0x1305
// 0083f45e  8d54243c             lea edx, [esp + 0x3c]
// 0083f462  51                   push ecx
// 0083f463  c644244000           mov byte ptr [esp + 0x40], 0
// 0083f468  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0083f470  89542430             mov dword ptr [esp + 0x30], edx
// 0083f474  c744243400010000     mov dword ptr [esp + 0x34], 0x100
// 0083f47c  ffd5                 call ebp
// 0083f47e  85c0                 test eax, eax
// 0083f480  742e                 je 0x83f4b0
// 0083f482  8d542430             lea edx, [esp + 0x30]
// 0083f486  6a26                 push 0x26
// 0083f488  52                   push edx
// 0083f489  ff1514b79800         call dword ptr [0x98b714]
// 0083f48f  83c408               add esp, 8
// 0083f492  85c0                 test eax, eax
// 0083f494  741a                 je 0x83f4b0
// 0083f496  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083f49a  0fbe5108             movsx edx, byte ptr [ecx + 8]
// 0083f49e  0fb64001             movzx eax, byte ptr [eax + 1]
// 0083f4a2  52                   push edx
// 0083f4a3  50                   push eax
// 0083f4a4  e8b7f80400           call 0x88ed60
// 0083f4a9  83c408               add esp, 8
// 0083f4ac  85c0                 test eax, eax
// 0083f4ae  753c                 jne 0x83f4ec
// 0083f4b0  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0083f4b3  6a00                 push 0
// 0083f4b5  6a00                 push 0
// 0083f4b7  6804130000           push 0x1304
// 0083f4bc  51                   push ecx
// 0083f4bd  46                   inc esi
// 0083f4be  ffd5                 call ebp
// 0083f4c0  3bf0                 cmp esi, eax
// 0083f4c2  7c8c                 jl 0x83f450
// 0083f4c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0083f4c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083f4cc  52                   push edx
// 0083f4cd  e854730e00           call 0x926826
// 0083f4d2  8b8c2430010000       mov ecx, dword ptr [esp + 0x130]
// 0083f4d9  5f                   pop edi
// 0083f4da  5e                   pop esi
// 0083f4db  5d                   pop ebp
// 0083f4dc  33cc                 xor ecx, esp
// 0083f4de  e8b75efbff           call 0x7f539a
// 0083f4e3  81c428010000         add esp, 0x128
// 0083f4e9  c20400               ret 4
// 0083f4ec  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083f4f0  56                   push esi
// 0083f4f1  e82a730e00           call 0x926820
// 0083f4f6  b801000000           mov eax, 1
// 0083f4fb  ebd5                 jmp 0x83f4d2
// copied from an identical function in another client (function ?PreTranslateMessage@CXTPCustomizeSheet@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp