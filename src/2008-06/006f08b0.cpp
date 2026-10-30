// from server: 100% by auto
// roc 2008-06 006f08b0  unit: CXTPPopupBar  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f08b0
//
// 006f08b0  55                   push ebp
// 006f08b1  8be9                 mov ebp, ecx
// 006f08b3  e8b003fbff           call 0x6a0c68
// 006f08b8  85c0                 test eax, eax
// 006f08ba  7504                 jne 0x6f08c0
// 006f08bc  5d                   pop ebp
// 006f08bd  c20400               ret 4
// 006f08c0  57                   push edi
// 006f08c1  8bcd                 mov ecx, ebp
// 006f08c3  e842b70c00           call 0x7bc00a
// 006f08c8  a900010000           test eax, 0x100
// 006f08cd  747a                 je 0x6f0949
// 006f08cf  8bcd                 mov ecx, ebp
// 006f08d1  e896b80c00           call 0x7bc16c
// 006f08d6  8bf8                 mov edi, eax
// 006f08d8  85ff                 test edi, edi
// 006f08da  7505                 jne 0x6f08e1
// 006f08dc  5f                   pop edi
// 006f08dd  5d                   pop ebp
// 006f08de  c20400               ret 4
// 006f08e1  53                   push ebx
// 006f08e2  56                   push esi
// 006f08e3  ff15202e8000         call dword ptr [0x802e20]
// 006f08e9  50                   push eax
// 006f08ea  e8ef02fbff           call 0x6a0bde
// 006f08ef  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 006f08f5  8bf0                 mov esi, eax
// 006f08f7  3bfe                 cmp edi, esi
// 006f08f9  742b                 je 0x6f0926
// 006f08fb  8b4720               mov eax, dword ptr [edi + 0x20]
// 006f08fe  50                   push eax
// 006f08ff  ff159c2b8000         call dword ptr [0x802b9c]
// 006f0905  50                   push eax
// 006f0906  e8d302fbff           call 0x6a0bde
// 006f090b  3bc6                 cmp eax, esi
// 006f090d  7513                 jne 0x6f0922
// 006f090f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f0912  6a00                 push 0
// 006f0914  6a40                 push 0x40
// 006f0916  686d030000           push 0x36d
// 006f091b  51                   push ecx
// 006f091c  ffd3                 call ebx
// 006f091e  85c0                 test eax, eax
// 006f0920  7504                 jne 0x6f0926
// 006f0922  33c0                 xor eax, eax
// 006f0924  eb05                 jmp 0x6f092b
// 006f0926  b801000000           mov eax, 1
// 006f092b  33d2                 xor edx, edx
// 006f092d  85c0                 test eax, eax
// 006f092f  8b4520               mov eax, dword ptr [ebp + 0x20]
// 006f0932  0f94c2               sete dl
// 006f0935  6a00                 push 0
// 006f0937  8d149504000000       lea edx, [edx*4 + 4]
// 006f093e  52                   push edx
// 006f093f  686d030000           push 0x36d
// 006f0944  50                   push eax
// 006f0945  ffd3                 call ebx
// 006f0947  5e                   pop esi
// 006f0948  5b                   pop ebx
// 006f0949  5f                   pop edi
// 006f094a  b801000000           mov eax, 1
// 006f094f  5d                   pop ebp
// 006f0950  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnNcCreate@CXTPPopupBar@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
