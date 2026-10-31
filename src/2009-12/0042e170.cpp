// roc 2009-12 0042e170  unit: CObjectBrowser  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042e170
//
// 0042e170  8b442404             mov eax, dword ptr [esp + 4]
// 0042e174  83ec14               sub esp, 0x14
// 0042e177  57                   push edi
// 0042e178  50                   push eax
// 0042e179  8bf9                 mov edi, ecx
// 0042e17b  e8fc613c00           call 0x7f437c
// 0042e180  83f8ff               cmp eax, -1
// 0042e183  7509                 jne 0x42e18e
// 0042e185  0bc0                 or eax, eax
// 0042e187  5f                   pop edi
// 0042e188  83c414               add esp, 0x14
// 0042e18b  c20400               ret 4
// 0042e18e  8b5758               mov edx, dword ptr [edi + 0x58]
// 0042e191  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0042e197  56                   push esi
// 0042e198  6800e90000           push 0xe900
// 0042e19d  6800000050           push 0x50000000
// 0042e1a2  6a02                 push 2
// 0042e1a4  8d7758               lea esi, [edi + 0x58]
// 0042e1a7  6a01                 push 1
// 0042e1a9  57                   push edi
// 0042e1aa  8bce                 mov ecx, esi
// 0042e1ac  ffd0                 call eax
// 0042e1ae  85c0                 test eax, eax
// 0042e1b0  750b                 jne 0x42e1bd
// 0042e1b2  5e                   pop esi
// 0042e1b3  83c8ff               or eax, 0xffffffff
// 0042e1b6  5f                   pop edi
// 0042e1b7  83c414               add esp, 0x14
// 0042e1ba  c20400               ret 4
// 0042e1bd  8b16                 mov edx, dword ptr [esi]
// 0042e1bf  8b82d0010000         mov eax, dword ptr [edx + 0x1d0]
// 0042e1c5  53                   push ebx
// 0042e1c6  6a04                 push 4
// 0042e1c8  8bce                 mov ecx, esi
// 0042e1ca  ffd0                 call eax
// 0042e1cc  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 0042e1cf  8b16                 mov edx, dword ptr [esi]
// 0042e1d1  33c0                 xor eax, eax
// 0042e1d3  89442410             mov dword ptr [esp + 0x10], eax
// 0042e1d7  894c2410             mov dword ptr [esp + 0x10], ecx
// 0042e1db  8d5c240c             lea ebx, [esp + 0xc]
// 0042e1df  53                   push ebx
// 0042e1e0  89442410             mov dword ptr [esp + 0x10], eax
// 0042e1e4  89442418             mov dword ptr [esp + 0x18], eax
// 0042e1e8  8944241c             mov dword ptr [esp + 0x1c], eax
// 0042e1ec  89442420             mov dword ptr [esp + 0x20], eax
// 0042e1f0  b958020000           mov ecx, 0x258
// 0042e1f5  51                   push ecx
// 0042e1f6  b8c8000000           mov eax, 0xc8
// 0042e1fb  50                   push eax
// 0042e1fc  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0042e202  68ec579a00           push 0x9a57ec
// 0042e207  6a00                 push 0
// 0042e209  6a00                 push 0
// 0042e20b  8bce                 mov ecx, esi
// 0042e20d  ffd0                 call eax
// 0042e20f  85c0                 test eax, eax
// 0042e211  0f8480000000         je 0x42e297
// 0042e217  8b9f70010000         mov ebx, dword ptr [edi + 0x170]
// 0042e21d  6a01                 push 1
// 0042e21f  81c770010000         add edi, 0x170
// 0042e225  6a00                 push 0
// 0042e227  8bce                 mov ecx, esi
// 0042e229  e8be603c00           call 0x7f42ec
// 0042e22e  8b9348010000         mov edx, dword ptr [ebx + 0x148]
// 0042e234  50                   push eax
// 0042e235  6800008050           push 0x50800000
// 0042e23a  6a01                 push 1
// 0042e23c  6a02                 push 2
// 0042e23e  56                   push esi
// 0042e23f  8bcf                 mov ecx, edi
// 0042e241  ffd2                 call edx
// 0042e243  85c0                 test eax, eax
// 0042e245  7450                 je 0x42e297
// 0042e247  8b17                 mov edx, dword ptr [edi]
// 0042e249  8d5c240c             lea ebx, [esp + 0xc]
// 0042e24d  53                   push ebx
// 0042e24e  b9c8000000           mov ecx, 0xc8
// 0042e253  51                   push ecx
// 0042e254  b82c010000           mov eax, 0x12c
// 0042e259  50                   push eax
// 0042e25a  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0042e260  6824589a00           push 0x9a5824
// 0042e265  6a00                 push 0
// 0042e267  6a00                 push 0
// 0042e269  8bcf                 mov ecx, edi
// 0042e26b  ffd0                 call eax
// 0042e26d  85c0                 test eax, eax
// 0042e26f  7426                 je 0x42e297
// 0042e271  8b17                 mov edx, dword ptr [edi]
// 0042e273  53                   push ebx
// 0042e274  b9be000000           mov ecx, 0xbe
// 0042e279  51                   push ecx
// 0042e27a  b864000000           mov eax, 0x64
// 0042e27f  50                   push eax
// 0042e280  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0042e286  68d0579a00           push 0x9a57d0
// 0042e28b  6a00                 push 0
// 0042e28d  6a01                 push 1
// 0042e28f  8bcf                 mov ecx, edi
// 0042e291  ffd0                 call eax
// 0042e293  85c0                 test eax, eax
// 0042e295  750c                 jne 0x42e2a3
// 0042e297  5b                   pop ebx
// 0042e298  5e                   pop esi
// 0042e299  83c8ff               or eax, 0xffffffff
// 0042e29c  5f                   pop edi
// 0042e29d  83c414               add esp, 0x14
// 0042e2a0  c20400               ret 4
// 0042e2a3  6a00                 push 0
// 0042e2a5  6a00                 push 0
// 0042e2a7  8bce                 mov ecx, esi
// 0042e2a9  e8da603c00           call 0x7f4388
// 0042e2ae  6a00                 push 0
// 0042e2b0  6a00                 push 0
// 0042e2b2  8bcf                 mov ecx, edi
// 0042e2b4  8bf0                 mov esi, eax
// 0042e2b6  e8cd603c00           call 0x7f4388
// 0042e2bb  6a00                 push 0
// 0042e2bd  6a01                 push 1
// 0042e2bf  8bcf                 mov ecx, edi
// 0042e2c1  8bd8                 mov ebx, eax
// 0042e2c3  e8c0603c00           call 0x7f4388
// 0042e2c8  899ea8000000         mov dword ptr [esi + 0xa8], ebx
// 0042e2ce  8986ac000000         mov dword ptr [esi + 0xac], eax
// 0042e2d4  8983b0000000         mov dword ptr [ebx + 0xb0], eax
// 0042e2da  5b                   pop ebx
// 0042e2db  5e                   pop esi
// 0042e2dc  33c0                 xor eax, eax
// 0042e2de  5f                   pop edi
// 0042e2df  83c414               add esp, 0x14
// 0042e2e2  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CObjectBrowser@@QAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_7576742091a0fd5e.cpp