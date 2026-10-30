// roc 2010-06 007f23a0  unit: CXTPCustomizeSheet  size: 809 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f23a0
//
// 007f23a0  6aff                 push -1
// 007f23a2  68b9269b00           push 0x9b26b9
// 007f23a7  64a100000000         mov eax, dword ptr fs:[0]
// 007f23ad  50                   push eax
// 007f23ae  83ec48               sub esp, 0x48
// 007f23b1  53                   push ebx
// 007f23b2  55                   push ebp
// 007f23b3  56                   push esi
// 007f23b4  57                   push edi
// 007f23b5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007f23ba  33c4                 xor eax, esp
// 007f23bc  50                   push eax
// 007f23bd  8d44245c             lea eax, [esp + 0x5c]
// 007f23c1  64a300000000         mov dword ptr fs:[0], eax
// 007f23c7  8bf1                 mov esi, ecx
// 007f23c9  bb3c3da000           mov ebx, 0xa03d3c
// 007f23ce  33ff                 xor edi, edi
// 007f23d0  895c2428             mov dword ptr [esp + 0x28], ebx
// 007f23d4  897c242c             mov dword ptr [esp + 0x2c], edi
// 007f23d8  897c2464             mov dword ptr [esp + 0x64], edi
// 007f23dc  e8cf040300           call 0x8228b0
// 007f23e1  8b10                 mov edx, dword ptr [eax]
// 007f23e3  8b520c               mov edx, dword ptr [edx + 0xc]
// 007f23e6  68a1230000           push 0x23a1
// 007f23eb  8d4c242c             lea ecx, [esp + 0x2c]
// 007f23ef  51                   push ecx
// 007f23f0  8bc8                 mov ecx, eax
// 007f23f2  ffd2                 call edx
// 007f23f4  85c0                 test eax, eax
// 007f23f6  7509                 jne 0x7f2401
// 007f23f8  895c2428             mov dword ptr [esp + 0x28], ebx
// 007f23fc  e9a3020000           jmp 0x7f26a4
// 007f2401  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007f2405  57                   push edi
// 007f2406  50                   push eax
// 007f2407  ff1564bc9e00         call dword ptr [0x9ebc64]
// 007f240d  50                   push eax
// 007f240e  e8175cfbff           call 0x7a802a
// 007f2413  8be8                 mov ebp, eax
// 007f2415  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007f2419  3bef                 cmp ebp, edi
// 007f241b  74db                 je 0x7f23f8
// 007f241d  57                   push edi
// 007f241e  e80d360000           call 0x7f5a30
// 007f2423  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 007f2429  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 007f242f  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 007f2435  8988e4000000         mov dword ptr [eax + 0xe4], ecx
// 007f243b  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 007f2441  89b208010000         mov dword ptr [edx + 0x108], esi
// 007f2447  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 007f244d  83c404               add esp, 4
// 007f2450  e86b63fdff           call 0x7c87c0
// 007f2455  8b1d80a39e00         mov ebx, dword ptr [0x9ea380]
// 007f245b  8bf8                 mov edi, eax
// 007f245d  8d4704               lea eax, [edi + 4]
// 007f2460  50                   push eax
// 007f2461  ffd3                 call ebx
// 007f2463  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 007f2469  57                   push edi
// 007f246a  e8f161fcff           call 0x7b8660
// 007f246f  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 007f2475  83c004               add eax, 4
// 007f2478  50                   push eax
// 007f2479  ffd3                 call ebx
// 007f247b  8b8eb8000000         mov ecx, dword ptr [esi + 0xb8]
// 007f2481  e8fa5ffdff           call 0x7c8480
// 007f2486  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 007f248c  894178               mov dword ptr [ecx + 0x78], eax
// 007f248f  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 007f2495  51                   push ecx
// 007f2496  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 007f249c  e83f62fcff           call 0x7b86e0
// 007f24a1  8b5504               mov edx, dword ptr [ebp + 4]
// 007f24a4  33db                 xor ebx, ebx
// 007f24a6  52                   push edx
// 007f24a7  895c2418             mov dword ptr [esp + 0x18], ebx
// 007f24ab  ff156cbc9e00         call dword ptr [0x9ebc6c]
// 007f24b1  85c0                 test eax, eax
// 007f24b3  0f8ee3010000         jle 0x7f269c
// 007f24b9  8da42400000000       lea esp, [esp]
// 007f24c0  8b4d04               mov ecx, dword ptr [ebp + 4]
// 007f24c3  33c0                 xor eax, eax
// 007f24c5  89442438             mov dword ptr [esp + 0x38], eax
// 007f24c9  8944243c             mov dword ptr [esp + 0x3c], eax
// 007f24cd  89442440             mov dword ptr [esp + 0x40], eax
// 007f24d1  89442444             mov dword ptr [esp + 0x44], eax
// 007f24d5  89442448             mov dword ptr [esp + 0x48], eax
// 007f24d9  8944244c             mov dword ptr [esp + 0x4c], eax
// 007f24dd  89442450             mov dword ptr [esp + 0x50], eax
// 007f24e1  89442454             mov dword ptr [esp + 0x54], eax
// 007f24e5  89442458             mov dword ptr [esp + 0x58], eax
// 007f24e9  8d442430             lea eax, [esp + 0x30]
// 007f24ed  50                   push eax
// 007f24ee  6a01                 push 1
// 007f24f0  53                   push ebx
// 007f24f1  51                   push ecx
// 007f24f2  c74424402c000000     mov dword ptr [esp + 0x40], 0x2c
// 007f24fa  c744244411000000     mov dword ptr [esp + 0x44], 0x11
// 007f2502  ff15ccba9e00         call dword ptr [0x9ebacc]
// 007f2508  8b5504               mov edx, dword ptr [ebp + 4]
// 007f250b  53                   push ebx
// 007f250c  52                   push edx
// 007f250d  ff1568bc9e00         call dword ptr [0x9ebc68]
// 007f2513  8bf8                 mov edi, eax
// 007f2515  8d4c2418             lea ecx, [esp + 0x18]
// 007f2519  897c2420             mov dword ptr [esp + 0x20], edi
// 007f251d  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007f2523  6800040000           push 0x400
// 007f2528  8d44241c             lea eax, [esp + 0x1c]
// 007f252c  50                   push eax
// 007f252d  53                   push ebx
// 007f252e  55                   push ebp
// 007f252f  c644247401           mov byte ptr [esp + 0x74], 1
// 007f2534  e877030300           call 0x8228b0
// 007f2539  8bc8                 mov ecx, eax
// 007f253b  e8b0fe0200           call 0x8223f0
// 007f2540  f744243800080000     test dword ptr [esp + 0x38], 0x800
// 007f2548  0f8529010000         jne 0x7f2677
// 007f254e  85ff                 test edi, edi
// 007f2550  0f8421010000         je 0x7f2677
// 007f2556  81ffaa230000         cmp edi, 0x23aa
// 007f255c  7577                 jne 0x7f25d5
// 007f255e  6884010000           push 0x184
// 007f2563  e83854fbff           call 0x7a79a0
// 007f2568  83c404               add esp, 4
// 007f256b  89442424             mov dword ptr [esp + 0x24], eax
// 007f256f  c644246402           mov byte ptr [esp + 0x64], 2
// 007f2574  85c0                 test eax, eax
// 007f2576  740b                 je 0x7f2583
// 007f2578  8bc8                 mov ecx, eax
// 007f257a  e8a1c6ffff           call 0x7eec20
// 007f257f  8bf8                 mov edi, eax
// 007f2581  eb02                 jmp 0x7f2585
// 007f2583  33ff                 xor edi, edi
// 007f2585  685c020000           push 0x25c
// 007f258a  c644246801           mov byte ptr [esp + 0x68], 1
// 007f258f  e80c54fbff           call 0x7a79a0
// 007f2594  83c404               add esp, 4
// 007f2597  89442424             mov dword ptr [esp + 0x24], eax
// 007f259b  c644246403           mov byte ptr [esp + 0x64], 3
// 007f25a0  85c0                 test eax, eax
// 007f25a2  740b                 je 0x7f25af
// 007f25a4  8bc8                 mov ecx, eax
// 007f25a6  e8156a0000           call 0x7f8fc0
// 007f25ab  8be8                 mov ebp, eax
// 007f25ad  eb02                 jmp 0x7f25b1
// 007f25af  33ed                 xor ebp, ebp
// 007f25b1  55                   push ebp
// 007f25b2  8bcf                 mov ecx, edi
// 007f25b4  c644246801           mov byte ptr [esp + 0x68], 1
// 007f25b9  c785d8000000aa230000 mov dword ptr [ebp + 0xd8], 0x23aa
// 007f25c3  e8d8d1ffff           call 0x7ef7a0
// 007f25c8  8bcd                 mov ecx, ebp
// 007f25ca  e84d59fbff           call 0x7a7f1c
// 007f25cf  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007f25d3  eb57                 jmp 0x7f262c
// 007f25d5  81ffa5230000         cmp edi, 0x23a5
// 007f25db  7523                 jne 0x7f2600
// 007f25dd  68b0010000           push 0x1b0
// 007f25e2  e8b953fbff           call 0x7a79a0
// 007f25e7  83c404               add esp, 4
// 007f25ea  89442424             mov dword ptr [esp + 0x24], eax
// 007f25ee  c644246404           mov byte ptr [esp + 0x64], 4
// 007f25f3  85c0                 test eax, eax
// 007f25f5  742c                 je 0x7f2623
// 007f25f7  8bc8                 mov ecx, eax
// 007f25f9  e852f4ffff           call 0x7f1a50
// 007f25fe  eb25                 jmp 0x7f2625
// 007f2600  6874010000           push 0x174
// 007f2605  e89653fbff           call 0x7a79a0
// 007f260a  83c404               add esp, 4
// 007f260d  89442424             mov dword ptr [esp + 0x24], eax
// 007f2611  c644246405           mov byte ptr [esp + 0x64], 5
// 007f2616  85c0                 test eax, eax
// 007f2618  7409                 je 0x7f2623
// 007f261a  8bc8                 mov ecx, eax
// 007f261c  e86ff4ffff           call 0x7f1a90
// 007f2621  eb02                 jmp 0x7f2625
// 007f2623  33c0                 xor eax, eax
// 007f2625  8bf8                 mov edi, eax
// 007f2627  c644246401           mov byte ptr [esp + 0x64], 1
// 007f262c  8d4c2418             lea ecx, [esp + 0x18]
// 007f2630  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007f2636  50                   push eax
// 007f2637  8bcf                 mov ecx, edi
// 007f2639  e8d281fbff           call 0x7aa810
// 007f263e  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f2642  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 007f2648  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 007f264e  6a00                 push 0
// 007f2650  6aff                 push -1
// 007f2652  6a00                 push 0
// 007f2654  52                   push edx
// 007f2655  57                   push edi
// 007f2656  e8559a0000           call 0x7fc0b0
// 007f265b  837c241400           cmp dword ptr [esp + 0x14], 0
// 007f2660  741d                 je 0x7f267f
// 007f2662  8b07                 mov eax, dword ptr [edi]
// 007f2664  8b5064               mov edx, dword ptr [eax + 0x64]
// 007f2667  6a01                 push 1
// 007f2669  8bcf                 mov ecx, edi
// 007f266b  ffd2                 call edx
// 007f266d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007f2675  eb08                 jmp 0x7f267f
// 007f2677  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007f267f  8d4c2418             lea ecx, [esp + 0x18]
// 007f2683  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007f2689  8b4504               mov eax, dword ptr [ebp + 4]
// 007f268c  50                   push eax
// 007f268d  43                   inc ebx
// 007f268e  ff156cbc9e00         call dword ptr [0x9ebc6c]
// 007f2694  3bd8                 cmp ebx, eax
// 007f2696  0f8c24feffff         jl 0x7f24c0
// 007f269c  c74424283c3da000     mov dword ptr [esp + 0x28], 0xa03d3c
// 007f26a4  8d4c2428             lea ecx, [esp + 0x28]
// 007f26a8  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 007f26b0  e85d5cfbff           call 0x7a8312
// 007f26b5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007f26b9  64890d00000000       mov dword ptr fs:[0], ecx
// 007f26c0  59                   pop ecx
// 007f26c1  5f                   pop edi
// 007f26c2  5e                   pop esi
// 007f26c3  5d                   pop ebp
// 007f26c4  5b                   pop ebx
// 007f26c5  83c454               add esp, 0x54
// 007f26c8  c3                   ret 
// copied from an identical function in another client (function ?CreateContextMenu@CXTPCustomizeSheet@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeSheet.cpp