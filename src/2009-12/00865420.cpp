// roc 2009-12 00865420  unit: CXTPPropertyGridItem  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865420
//
// 00865420  55                   push ebp
// 00865421  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00865425  57                   push edi
// 00865426  8bf9                 mov edi, ecx
// 00865428  f6878c00000001       test byte ptr [edi + 0x8c], 1
// 0086542f  0f8493000000         je 0x8654c8
// 00865435  83fd1b               cmp ebp, 0x1b
// 00865438  0f848a000000         je 0x8654c8
// 0086543e  8b07                 mov eax, dword ptr [edi]
// 00865440  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 00865446  56                   push esi
// 00865447  ffd2                 call edx
// 00865449  8b07                 mov eax, dword ptr [edi]
// 0086544b  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 00865451  8bcf                 mov ecx, edi
// 00865453  ffd2                 call edx
// 00865455  8bf0                 mov esi, eax
// 00865457  85f6                 test esi, esi
// 00865459  7462                 je 0x8654bd
// 0086545b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086545e  85c0                 test eax, eax
// 00865460  745b                 je 0x8654bd
// 00865462  50                   push eax
// 00865463  ff1564ca9800         call dword ptr [0x98ca64]
// 00865469  85c0                 test eax, eax
// 0086546b  7450                 je 0x8654bd
// 0086546d  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 00865473  7548                 jne 0x8654bd
// 00865475  53                   push ebx
// 00865476  8bce                 mov ecx, esi
// 00865478  e885e7f8ff           call 0x7f3c02
// 0086547d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00865480  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 00865486  6aff                 push -1
// 00865488  6a00                 push 0
// 0086548a  68b1000000           push 0xb1
// 0086548f  50                   push eax
// 00865490  ffd3                 call ebx
// 00865492  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00865495  6a00                 push 0
// 00865497  6a00                 push 0
// 00865499  68b7000000           push 0xb7
// 0086549e  51                   push ecx
// 0086549f  ffd3                 call ebx
// 008654a1  83fd09               cmp ebp, 9
// 008654a4  7416                 je 0x8654bc
// 008654a6  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 008654ac  750e                 jne 0x8654bc
// 008654ae  8b5620               mov edx, dword ptr [esi + 0x20]
// 008654b1  6a00                 push 0
// 008654b3  55                   push ebp
// 008654b4  6802010000           push 0x102
// 008654b9  52                   push edx
// 008654ba  ffd3                 call ebx
// 008654bc  5b                   pop ebx
// 008654bd  5e                   pop esi
// 008654be  5f                   pop edi
// 008654bf  b801000000           mov eax, 1
// 008654c4  5d                   pop ebp
// 008654c5  c20400               ret 4
// 008654c8  83fd09               cmp ebp, 9
// 008654cb  7527                 jne 0x8654f4
// 008654cd  8b87d4000000         mov eax, dword ptr [edi + 0xd4]
// 008654d3  83782800             cmp dword ptr [eax + 0x28], 0
// 008654d7  7e1b                 jle 0x8654f4
// 008654d9  8b8fbc000000         mov ecx, dword ptr [edi + 0xbc]
// 008654df  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 008654e5  8b11                 mov edx, dword ptr [ecx]
// 008654e7  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 008654ed  57                   push edi
// 008654ee  6a01                 push 1
// 008654f0  6a01                 push 1
// 008654f2  ffd0                 call eax
// 008654f4  5f                   pop edi
// 008654f5  33c0                 xor eax, eax
// 008654f7  5d                   pop ebp
// 008654f8  c20400               ret 4
// copied from an identical function in another client (function ?OnChar@CXTPPropertyGridItem@@MAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp