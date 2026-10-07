// roc 2007-08 004aaf60  unit: RBX::Network::Peer  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004aaf60
//
// 004aaf60  53                   push ebx
// 004aaf61  56                   push esi
// 004aaf62  8bf1                 mov esi, ecx
// 004aaf64  33db                 xor ebx, ebx
// 004aaf66  395e10               cmp dword ptr [esi + 0x10], ebx
// 004aaf69  57                   push edi
// 004aaf6a  746c                 je 0x4aafd8
// 004aaf6c  8d642400             lea esp, [esp]
// 004aaf70  8b4610               mov eax, dword ptr [esi + 0x10]
// 004aaf73  3bc3                 cmp eax, ebx
// 004aaf75  745c                 je 0x4aafd3
// 004aaf77  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004aaf7a  8b5608               mov edx, dword ptr [esi + 8]
// 004aaf7d  8d4408ff             lea eax, [eax + ecx - 1]
// 004aaf81  8bc8                 mov ecx, eax
// 004aaf83  d1e9                 shr ecx, 1
// 004aaf85  3bd1                 cmp edx, ecx
// 004aaf87  7702                 ja 0x4aaf8b
// 004aaf89  2bca                 sub ecx, edx
// 004aaf8b  8b5604               mov edx, dword ptr [esi + 4]
// 004aaf8e  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 004aaf91  83e001               and eax, 1
// 004aaf94  8b7cc104             mov edi, dword ptr [ecx + eax*8 + 4]
// 004aaf98  3bfb                 cmp edi, ebx
// 004aaf9a  8d44c104             lea eax, [ecx + eax*8 + 4]
// 004aaf9e  742a                 je 0x4aafca
// 004aafa0  8d5704               lea edx, [edi + 4]
// 004aafa3  83c8ff               or eax, 0xffffffff
// 004aafa6  f00fc102             lock xadd dword ptr [edx], eax
// 004aafaa  751e                 jne 0x4aafca
// 004aafac  8b17                 mov edx, dword ptr [edi]
// 004aafae  8b4204               mov eax, dword ptr [edx + 4]
// 004aafb1  8bcf                 mov ecx, edi
// 004aafb3  ffd0                 call eax
// 004aafb5  8d4f08               lea ecx, [edi + 8]
// 004aafb8  83caff               or edx, 0xffffffff
// 004aafbb  f00fc111             lock xadd dword ptr [ecx], edx
// 004aafbf  7509                 jne 0x4aafca
// 004aafc1  8b07                 mov eax, dword ptr [edi]
// 004aafc3  8b5008               mov edx, dword ptr [eax + 8]
// 004aafc6  8bcf                 mov ecx, edi
// 004aafc8  ffd2                 call edx
// 004aafca  834610ff             add dword ptr [esi + 0x10], -1
// 004aafce  7503                 jne 0x4aafd3
// 004aafd0  895e0c               mov dword ptr [esi + 0xc], ebx
// 004aafd3  395e10               cmp dword ptr [esi + 0x10], ebx
// 004aafd6  7598                 jne 0x4aaf70
// 004aafd8  8b7e08               mov edi, dword ptr [esi + 8]
// 004aafdb  3bfb                 cmp edi, ebx
// 004aafdd  761e                 jbe 0x4aaffd
// 004aafdf  90                   nop 
// 004aafe0  8b4604               mov eax, dword ptr [esi + 4]
// 004aafe3  83ef01               sub edi, 1
// 004aafe6  391cb8               cmp dword ptr [eax + edi*4], ebx
// 004aafe9  8d04b8               lea eax, [eax + edi*4]
// 004aafec  740b                 je 0x4aaff9
// 004aafee  8b08                 mov ecx, dword ptr [eax]
// 004aaff0  51                   push ecx
// 004aaff1  e86c4c1800           call 0x62fc62
// 004aaff6  83c404               add esp, 4
// 004aaff9  3bfb                 cmp edi, ebx
// 004aaffb  77e3                 ja 0x4aafe0
// 004aaffd  8b4604               mov eax, dword ptr [esi + 4]
// 004ab000  3bc3                 cmp eax, ebx
// 004ab002  7409                 je 0x4ab00d
// 004ab004  50                   push eax
// 004ab005  e8584c1800           call 0x62fc62
// 004ab00a  83c404               add esp, 4
// 004ab00d  5f                   pop edi
// 004ab00e  895e04               mov dword ptr [esi + 4], ebx
// 004ab011  895e08               mov dword ptr [esi + 8], ebx
// 004ab014  5e                   pop esi
// 004ab015  5b                   pop ebx
// 004ab016  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?_Tidy@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
