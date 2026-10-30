// roc 2009-12 00806470  unit: CXTPCommandBar  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00806470
//
// 00806470  53                   push ebx
// 00806471  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00806475  56                   push esi
// 00806476  8bf1                 mov esi, ecx
// 00806478  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0080647e  3bc3                 cmp eax, ebx
// 00806480  7507                 jne 0x806489
// 00806482  5e                   pop esi
// 00806483  33c0                 xor eax, eax
// 00806485  5b                   pop ebx
// 00806486  c20800               ret 8
// 00806489  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0080648c  55                   push ebp
// 0080648d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00806491  89ae30010000         mov dword ptr [esi + 0x130], ebp
// 00806497  85c9                 test ecx, ecx
// 00806499  7508                 jne 0x8064a3
// 0080649b  5d                   pop ebp
// 0080649c  5e                   pop esi
// 0080649d  33c0                 xor eax, eax
// 0080649f  5b                   pop ebx
// 008064a0  c20800               ret 8
// 008064a3  57                   push edi
// 008064a4  83f8ff               cmp eax, -1
// 008064a7  742f                 je 0x8064d8
// 008064a9  50                   push eax
// 008064aa  8bce                 mov ecx, esi
// 008064ac  e8afedffff           call 0x805260
// 008064b1  8bf8                 mov edi, eax
// 008064b3  85ff                 test edi, edi
// 008064b5  7421                 je 0x8064d8
// 008064b7  8b17                 mov edx, dword ptr [edi]
// 008064b9  83c8ff               or eax, 0xffffffff
// 008064bc  0bc8                 or ecx, eax
// 008064be  51                   push ecx
// 008064bf  50                   push eax
// 008064c0  8b82fc000000         mov eax, dword ptr [edx + 0xfc]
// 008064c6  8bcf                 mov ecx, edi
// 008064c8  ffd0                 call eax
// 008064ca  8b17                 mov edx, dword ptr [edi]
// 008064cc  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 008064d2  6a00                 push 0
// 008064d4  8bcf                 mov ecx, edi
// 008064d6  ffd0                 call eax
// 008064d8  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 008064de  83fbff               cmp ebx, -1
// 008064e1  0f849e000000         je 0x806585
// 008064e7  53                   push ebx
// 008064e8  8bce                 mov ecx, esi
// 008064ea  e871edffff           call 0x805260
// 008064ef  8bf8                 mov edi, eax
// 008064f1  85ff                 test edi, edi
// 008064f3  7507                 jne 0x8064fc
// 008064f5  5f                   pop edi
// 008064f6  5d                   pop ebp
// 008064f7  5e                   pop esi
// 008064f8  5b                   pop ebx
// 008064f9  c20800               ret 8
// 008064fc  85ed                 test ebp, ebp
// 008064fe  741b                 je 0x80651b
// 00806500  8b16                 mov edx, dword ptr [esi]
// 00806502  8b82b4010000         mov eax, dword ptr [edx + 0x1b4]
// 00806508  57                   push edi
// 00806509  ffd0                 call eax
// 0080650b  83fd02               cmp ebp, 2
// 0080650e  7d07                 jge 0x806517
// 00806510  b802000000           mov eax, 2
// 00806515  eb09                 jmp 0x806520
// 00806517  8bc5                 mov eax, ebp
// 00806519  eb05                 jmp 0x806520
// 0080651b  b801000000           mov eax, 1
// 00806520  8b17                 mov edx, dword ptr [edi]
// 00806522  50                   push eax
// 00806523  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 00806529  8bcf                 mov ecx, edi
// 0080652b  ffd0                 call eax
// 0080652d  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 00806534  741b                 je 0x806551
// 00806536  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0080653c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0080653f  41                   inc ecx
// 00806540  51                   push ecx
// 00806541  6afd                 push -3
// 00806543  52                   push edx
// 00806544  6805800000           push 0x8005
// 00806549  8d4e5c               lea ecx, [esi + 0x5c]
// 0080654c  e83f540300           call 0x83b990
// 00806551  e84a14ffff           call 0x7f79a0
// 00806556  897020               mov dword ptr [eax + 0x20], esi
// 00806559  85ed                 test ebp, ebp
// 0080655b  7537                 jne 0x806594
// 0080655d  39aec0000000         cmp dword ptr [esi + 0xc0], ebp
// 00806563  742f                 je 0x806594
// 00806565  a12055b600           mov eax, dword ptr [0xb65520]
// 0080656a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0080656d  55                   push ebp
// 0080656e  50                   push eax
// 0080656f  685fb60100           push 0x1b65f
// 00806574  51                   push ecx
// 00806575  ff1558cc9800         call dword ptr [0x98cc58]
// 0080657b  5f                   pop edi
// 0080657c  8d4501               lea eax, [ebp + 1]
// 0080657f  5d                   pop ebp
// 00806580  5e                   pop esi
// 00806581  5b                   pop ebx
// 00806582  c20800               ret 8
// 00806585  8b5620               mov edx, dword ptr [esi + 0x20]
// 00806588  685fb60100           push 0x1b65f
// 0080658d  52                   push edx
// 0080658e  ff15d0cb9800         call dword ptr [0x98cbd0]
// 00806594  5f                   pop edi
// 00806595  5d                   pop ebp
// 00806596  5e                   pop esi
// 00806597  b801000000           mov eax, 1
// 0080659c  5b                   pop ebx
// 0080659d  c20800               ret 8
// copied from an identical function in another client (function ?SetSelected@CXTPCommandBar@@UAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp