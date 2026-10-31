// roc 2009-06 0042d130  unit: CObjectBrowser  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042d130
//
// 0042d130  8b442404             mov eax, dword ptr [esp + 4]
// 0042d134  83ec14               sub esp, 0x14
// 0042d137  57                   push edi
// 0042d138  50                   push eax
// 0042d139  8bf9                 mov edi, ecx
// 0042d13b  e80ec42e00           call 0x71954e
// 0042d140  83f8ff               cmp eax, -1
// 0042d143  7509                 jne 0x42d14e
// 0042d145  0bc0                 or eax, eax
// 0042d147  5f                   pop edi
// 0042d148  83c414               add esp, 0x14
// 0042d14b  c20400               ret 4
// 0042d14e  8b5758               mov edx, dword ptr [edi + 0x58]
// 0042d151  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0042d157  56                   push esi
// 0042d158  6800e90000           push 0xe900
// 0042d15d  6800000050           push 0x50000000
// 0042d162  6a02                 push 2
// 0042d164  8d7758               lea esi, [edi + 0x58]
// 0042d167  6a01                 push 1
// 0042d169  57                   push edi
// 0042d16a  8bce                 mov ecx, esi
// 0042d16c  ffd0                 call eax
// 0042d16e  85c0                 test eax, eax
// 0042d170  750b                 jne 0x42d17d
// 0042d172  5e                   pop esi
// 0042d173  83c8ff               or eax, 0xffffffff
// 0042d176  5f                   pop edi
// 0042d177  83c414               add esp, 0x14
// 0042d17a  c20400               ret 4
// 0042d17d  8b16                 mov edx, dword ptr [esi]
// 0042d17f  8b82d0010000         mov eax, dword ptr [edx + 0x1d0]
// 0042d185  53                   push ebx
// 0042d186  6a04                 push 4
// 0042d188  8bce                 mov ecx, esi
// 0042d18a  ffd0                 call eax
// 0042d18c  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 0042d18f  8b16                 mov edx, dword ptr [esi]
// 0042d191  33c0                 xor eax, eax
// 0042d193  89442410             mov dword ptr [esp + 0x10], eax
// 0042d197  894c2410             mov dword ptr [esp + 0x10], ecx
// 0042d19b  8d5c240c             lea ebx, [esp + 0xc]
// 0042d19f  53                   push ebx
// 0042d1a0  89442410             mov dword ptr [esp + 0x10], eax
// 0042d1a4  89442418             mov dword ptr [esp + 0x18], eax
// 0042d1a8  8944241c             mov dword ptr [esp + 0x1c], eax
// 0042d1ac  89442420             mov dword ptr [esp + 0x20], eax
// 0042d1b0  b958020000           mov ecx, 0x258
// 0042d1b5  51                   push ecx
// 0042d1b6  b8c8000000           mov eax, 0xc8
// 0042d1bb  50                   push eax
// 0042d1bc  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0042d1c2  688c2a8b00           push 0x8b2a8c
// 0042d1c7  6a00                 push 0
// 0042d1c9  6a00                 push 0
// 0042d1cb  8bce                 mov ecx, esi
// 0042d1cd  ffd0                 call eax
// 0042d1cf  85c0                 test eax, eax
// 0042d1d1  0f8480000000         je 0x42d257
// 0042d1d7  8b9f70010000         mov ebx, dword ptr [edi + 0x170]
// 0042d1dd  6a01                 push 1
// 0042d1df  81c770010000         add edi, 0x170
// 0042d1e5  6a00                 push 0
// 0042d1e7  8bce                 mov ecx, esi
// 0042d1e9  e8d0c22e00           call 0x7194be
// 0042d1ee  8b9348010000         mov edx, dword ptr [ebx + 0x148]
// 0042d1f4  50                   push eax
// 0042d1f5  6800008050           push 0x50800000
// 0042d1fa  6a01                 push 1
// 0042d1fc  6a02                 push 2
// 0042d1fe  56                   push esi
// 0042d1ff  8bcf                 mov ecx, edi
// 0042d201  ffd2                 call edx
// 0042d203  85c0                 test eax, eax
// 0042d205  7450                 je 0x42d257
// 0042d207  8b17                 mov edx, dword ptr [edi]
// 0042d209  8d5c240c             lea ebx, [esp + 0xc]
// 0042d20d  53                   push ebx
// 0042d20e  b9c8000000           mov ecx, 0xc8
// 0042d213  51                   push ecx
// 0042d214  b82c010000           mov eax, 0x12c
// 0042d219  50                   push eax
// 0042d21a  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0042d220  68c42a8b00           push 0x8b2ac4
// 0042d225  6a00                 push 0
// 0042d227  6a00                 push 0
// 0042d229  8bcf                 mov ecx, edi
// 0042d22b  ffd0                 call eax
// 0042d22d  85c0                 test eax, eax
// 0042d22f  7426                 je 0x42d257
// 0042d231  8b17                 mov edx, dword ptr [edi]
// 0042d233  53                   push ebx
// 0042d234  b9be000000           mov ecx, 0xbe
// 0042d239  51                   push ecx
// 0042d23a  b864000000           mov eax, 0x64
// 0042d23f  50                   push eax
// 0042d240  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0042d246  68702a8b00           push 0x8b2a70
// 0042d24b  6a00                 push 0
// 0042d24d  6a01                 push 1
// 0042d24f  8bcf                 mov ecx, edi
// 0042d251  ffd0                 call eax
// 0042d253  85c0                 test eax, eax
// 0042d255  750c                 jne 0x42d263
// 0042d257  5b                   pop ebx
// 0042d258  5e                   pop esi
// 0042d259  83c8ff               or eax, 0xffffffff
// 0042d25c  5f                   pop edi
// 0042d25d  83c414               add esp, 0x14
// 0042d260  c20400               ret 4
// 0042d263  6a00                 push 0
// 0042d265  6a00                 push 0
// 0042d267  8bce                 mov ecx, esi
// 0042d269  e8ecc22e00           call 0x71955a
// 0042d26e  6a00                 push 0
// 0042d270  6a00                 push 0
// 0042d272  8bcf                 mov ecx, edi
// 0042d274  8bf0                 mov esi, eax
// 0042d276  e8dfc22e00           call 0x71955a
// 0042d27b  6a00                 push 0
// 0042d27d  6a01                 push 1
// 0042d27f  8bcf                 mov ecx, edi
// 0042d281  8bd8                 mov ebx, eax
// 0042d283  e8d2c22e00           call 0x71955a
// 0042d288  899ea8000000         mov dword ptr [esi + 0xa8], ebx
// 0042d28e  8986ac000000         mov dword ptr [esi + 0xac], eax
// 0042d294  8983b0000000         mov dword ptr [ebx + 0xb0], eax
// 0042d29a  5b                   pop ebx
// 0042d29b  5e                   pop esi
// 0042d29c  33c0                 xor eax, eax
// 0042d29e  5f                   pop edi
// 0042d29f  83c414               add esp, 0x14
// 0042d2a2  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CObjectBrowser@@QAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_7576742091a0fd5e.cpp