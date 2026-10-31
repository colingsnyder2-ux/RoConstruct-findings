// roc 2011-06 0043e0d0  unit: CObjectBrowser  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043e0d0
//
// 0043e0d0  8b442404             mov eax, dword ptr [esp + 4]
// 0043e0d4  83ec14               sub esp, 0x14
// 0043e0d7  57                   push edi
// 0043e0d8  50                   push eax
// 0043e0d9  8bf9                 mov edi, ecx
// 0043e0db  e8a0ca3c00           call 0x80ab80
// 0043e0e0  83f8ff               cmp eax, -1
// 0043e0e3  7509                 jne 0x43e0ee
// 0043e0e5  0bc0                 or eax, eax
// 0043e0e7  5f                   pop edi
// 0043e0e8  83c414               add esp, 0x14
// 0043e0eb  c20400               ret 4
// 0043e0ee  8b5758               mov edx, dword ptr [edi + 0x58]
// 0043e0f1  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0043e0f7  56                   push esi
// 0043e0f8  6800e90000           push 0xe900
// 0043e0fd  6800000050           push 0x50000000
// 0043e102  6a02                 push 2
// 0043e104  8d7758               lea esi, [edi + 0x58]
// 0043e107  6a01                 push 1
// 0043e109  57                   push edi
// 0043e10a  8bce                 mov ecx, esi
// 0043e10c  ffd0                 call eax
// 0043e10e  85c0                 test eax, eax
// 0043e110  750b                 jne 0x43e11d
// 0043e112  5e                   pop esi
// 0043e113  83c8ff               or eax, 0xffffffff
// 0043e116  5f                   pop edi
// 0043e117  83c414               add esp, 0x14
// 0043e11a  c20400               ret 4
// 0043e11d  8b16                 mov edx, dword ptr [esi]
// 0043e11f  8b82d0010000         mov eax, dword ptr [edx + 0x1d0]
// 0043e125  53                   push ebx
// 0043e126  6a04                 push 4
// 0043e128  8bce                 mov ecx, esi
// 0043e12a  ffd0                 call eax
// 0043e12c  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 0043e12f  8b16                 mov edx, dword ptr [esi]
// 0043e131  33c0                 xor eax, eax
// 0043e133  89442410             mov dword ptr [esp + 0x10], eax
// 0043e137  894c2410             mov dword ptr [esp + 0x10], ecx
// 0043e13b  8d5c240c             lea ebx, [esp + 0xc]
// 0043e13f  53                   push ebx
// 0043e140  89442410             mov dword ptr [esp + 0x10], eax
// 0043e144  89442418             mov dword ptr [esp + 0x18], eax
// 0043e148  8944241c             mov dword ptr [esp + 0x1c], eax
// 0043e14c  89442420             mov dword ptr [esp + 0x20], eax
// 0043e150  b958020000           mov ecx, 0x258
// 0043e155  51                   push ecx
// 0043e156  b8c8000000           mov eax, 0xc8
// 0043e15b  50                   push eax
// 0043e15c  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0043e162  68687fa600           push 0xa67f68
// 0043e167  6a00                 push 0
// 0043e169  6a00                 push 0
// 0043e16b  8bce                 mov ecx, esi
// 0043e16d  ffd0                 call eax
// 0043e16f  85c0                 test eax, eax
// 0043e171  0f8480000000         je 0x43e1f7
// 0043e177  8b9f70010000         mov ebx, dword ptr [edi + 0x170]
// 0043e17d  6a01                 push 1
// 0043e17f  81c770010000         add edi, 0x170
// 0043e185  6a00                 push 0
// 0043e187  8bce                 mov ecx, esi
// 0043e189  e862c93c00           call 0x80aaf0
// 0043e18e  8b9348010000         mov edx, dword ptr [ebx + 0x148]
// 0043e194  50                   push eax
// 0043e195  6800008050           push 0x50800000
// 0043e19a  6a01                 push 1
// 0043e19c  6a02                 push 2
// 0043e19e  56                   push esi
// 0043e19f  8bcf                 mov ecx, edi
// 0043e1a1  ffd2                 call edx
// 0043e1a3  85c0                 test eax, eax
// 0043e1a5  7450                 je 0x43e1f7
// 0043e1a7  8b17                 mov edx, dword ptr [edi]
// 0043e1a9  8d5c240c             lea ebx, [esp + 0xc]
// 0043e1ad  53                   push ebx
// 0043e1ae  b9c8000000           mov ecx, 0xc8
// 0043e1b3  51                   push ecx
// 0043e1b4  b82c010000           mov eax, 0x12c
// 0043e1b9  50                   push eax
// 0043e1ba  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0043e1c0  68a07fa600           push 0xa67fa0
// 0043e1c5  6a00                 push 0
// 0043e1c7  6a00                 push 0
// 0043e1c9  8bcf                 mov ecx, edi
// 0043e1cb  ffd0                 call eax
// 0043e1cd  85c0                 test eax, eax
// 0043e1cf  7426                 je 0x43e1f7
// 0043e1d1  8b17                 mov edx, dword ptr [edi]
// 0043e1d3  53                   push ebx
// 0043e1d4  b9be000000           mov ecx, 0xbe
// 0043e1d9  51                   push ecx
// 0043e1da  b864000000           mov eax, 0x64
// 0043e1df  50                   push eax
// 0043e1e0  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0043e1e6  684c7fa600           push 0xa67f4c
// 0043e1eb  6a00                 push 0
// 0043e1ed  6a01                 push 1
// 0043e1ef  8bcf                 mov ecx, edi
// 0043e1f1  ffd0                 call eax
// 0043e1f3  85c0                 test eax, eax
// 0043e1f5  750c                 jne 0x43e203
// 0043e1f7  5b                   pop ebx
// 0043e1f8  5e                   pop esi
// 0043e1f9  83c8ff               or eax, 0xffffffff
// 0043e1fc  5f                   pop edi
// 0043e1fd  83c414               add esp, 0x14
// 0043e200  c20400               ret 4
// 0043e203  6a00                 push 0
// 0043e205  6a00                 push 0
// 0043e207  8bce                 mov ecx, esi
// 0043e209  e87ec93c00           call 0x80ab8c
// 0043e20e  6a00                 push 0
// 0043e210  6a00                 push 0
// 0043e212  8bcf                 mov ecx, edi
// 0043e214  8bf0                 mov esi, eax
// 0043e216  e871c93c00           call 0x80ab8c
// 0043e21b  6a00                 push 0
// 0043e21d  6a01                 push 1
// 0043e21f  8bcf                 mov ecx, edi
// 0043e221  8bd8                 mov ebx, eax
// 0043e223  e864c93c00           call 0x80ab8c
// 0043e228  899ea8000000         mov dword ptr [esi + 0xa8], ebx
// 0043e22e  8986ac000000         mov dword ptr [esi + 0xac], eax
// 0043e234  8983b0000000         mov dword ptr [ebx + 0xb0], eax
// 0043e23a  5b                   pop ebx
// 0043e23b  5e                   pop esi
// 0043e23c  33c0                 xor eax, eax
// 0043e23e  5f                   pop edi
// 0043e23f  83c414               add esp, 0x14
// 0043e242  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CObjectBrowser@@QAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_7576742091a0fd5e.cpp