// from server: 100% by auto
// roc 2011-06 008559a0  unit: CXTPPopupBar  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008559a0
//
// 008559a0  55                   push ebp
// 008559a1  8be9                 mov ebp, ecx
// 008559a3  e8864cfbff           call 0x80a62e
// 008559a8  85c0                 test eax, eax
// 008559aa  7504                 jne 0x8559b0
// 008559ac  5d                   pop ebp
// 008559ad  c20400               ret 4
// 008559b0  57                   push edi
// 008559b1  8bcd                 mov ecx, ebp
// 008559b3  e8606c1700           call 0x9cc618
// 008559b8  a900010000           test eax, 0x100
// 008559bd  747a                 je 0x855a39
// 008559bf  8bcd                 mov ecx, ebp
// 008559c1  e84656fbff           call 0x80b00c
// 008559c6  8bf8                 mov edi, eax
// 008559c8  85ff                 test edi, edi
// 008559ca  7505                 jne 0x8559d1
// 008559cc  5f                   pop edi
// 008559cd  5d                   pop ebp
// 008559ce  c20400               ret 4
// 008559d1  53                   push ebx
// 008559d2  56                   push esi
// 008559d3  ff15cc19a400         call dword ptr [0xa419cc]
// 008559d9  50                   push eax
// 008559da  e84949fbff           call 0x80a328
// 008559df  8b1dc019a400         mov ebx, dword ptr [0xa419c0]
// 008559e5  8bf0                 mov esi, eax
// 008559e7  3bfe                 cmp edi, esi
// 008559e9  742b                 je 0x855a16
// 008559eb  8b4720               mov eax, dword ptr [edi + 0x20]
// 008559ee  50                   push eax
// 008559ef  ff15b81aa400         call dword ptr [0xa41ab8]
// 008559f5  50                   push eax
// 008559f6  e82d49fbff           call 0x80a328
// 008559fb  3bc6                 cmp eax, esi
// 008559fd  7513                 jne 0x855a12
// 008559ff  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00855a02  6a00                 push 0
// 00855a04  6a40                 push 0x40
// 00855a06  686d030000           push 0x36d
// 00855a0b  51                   push ecx
// 00855a0c  ffd3                 call ebx
// 00855a0e  85c0                 test eax, eax
// 00855a10  7504                 jne 0x855a16
// 00855a12  33c0                 xor eax, eax
// 00855a14  eb05                 jmp 0x855a1b
// 00855a16  b801000000           mov eax, 1
// 00855a1b  33d2                 xor edx, edx
// 00855a1d  85c0                 test eax, eax
// 00855a1f  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00855a22  0f94c2               sete dl
// 00855a25  6a00                 push 0
// 00855a27  8d149504000000       lea edx, [edx*4 + 4]
// 00855a2e  52                   push edx
// 00855a2f  686d030000           push 0x36d
// 00855a34  50                   push eax
// 00855a35  ffd3                 call ebx
// 00855a37  5e                   pop esi
// 00855a38  5b                   pop ebx
// 00855a39  5f                   pop edi
// 00855a3a  b801000000           mov eax, 1
// 00855a3f  5d                   pop ebp
// 00855a40  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?OnNcCreate@CXTPPopupBar@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
