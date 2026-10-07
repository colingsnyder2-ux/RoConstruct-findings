// roc 2010-06 0064c6f0  unit: RBX::VWidget::?$NonFactoryProduct  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0064c6f0
//
// 0064c6f0  53                   push ebx
// 0064c6f1  56                   push esi
// 0064c6f2  8bf1                 mov esi, ecx
// 0064c6f4  33db                 xor ebx, ebx
// 0064c6f6  57                   push edi
// 0064c6f7  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0064c6fa  746c                 je 0x64c768
// 0064c6fc  8d642400             lea esp, [esp]
// 0064c700  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0064c703  3bc3                 cmp eax, ebx
// 0064c705  745c                 je 0x64c763
// 0064c707  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0064c70a  8b5614               mov edx, dword ptr [esi + 0x14]
// 0064c70d  8d4408ff             lea eax, [eax + ecx - 1]
// 0064c711  8bc8                 mov ecx, eax
// 0064c713  d1e9                 shr ecx, 1
// 0064c715  3bd1                 cmp edx, ecx
// 0064c717  7702                 ja 0x64c71b
// 0064c719  2bca                 sub ecx, edx
// 0064c71b  8b5610               mov edx, dword ptr [esi + 0x10]
// 0064c71e  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0064c721  83e001               and eax, 1
// 0064c724  8b7cc104             mov edi, dword ptr [ecx + eax*8 + 4]
// 0064c728  8d44c104             lea eax, [ecx + eax*8 + 4]
// 0064c72c  3bfb                 cmp edi, ebx
// 0064c72e  742a                 je 0x64c75a
// 0064c730  8d5704               lea edx, [edi + 4]
// 0064c733  83c8ff               or eax, 0xffffffff
// 0064c736  f00fc102             lock xadd dword ptr [edx], eax
// 0064c73a  751e                 jne 0x64c75a
// 0064c73c  8b17                 mov edx, dword ptr [edi]
// 0064c73e  8b4204               mov eax, dword ptr [edx + 4]
// 0064c741  8bcf                 mov ecx, edi
// 0064c743  ffd0                 call eax
// 0064c745  8d4f08               lea ecx, [edi + 8]
// 0064c748  83caff               or edx, 0xffffffff
// 0064c74b  f00fc111             lock xadd dword ptr [ecx], edx
// 0064c74f  7509                 jne 0x64c75a
// 0064c751  8b07                 mov eax, dword ptr [edi]
// 0064c753  8b5008               mov edx, dword ptr [eax + 8]
// 0064c756  8bcf                 mov ecx, edi
// 0064c758  ffd2                 call edx
// 0064c75a  83461cff             add dword ptr [esi + 0x1c], -1
// 0064c75e  7503                 jne 0x64c763
// 0064c760  895e18               mov dword ptr [esi + 0x18], ebx
// 0064c763  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0064c766  7598                 jne 0x64c700
// 0064c768  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0064c76b  3bfb                 cmp edi, ebx
// 0064c76d  761c                 jbe 0x64c78b
// 0064c76f  90                   nop 
// 0064c770  8b4610               mov eax, dword ptr [esi + 0x10]
// 0064c773  4f                   dec edi
// 0064c774  391cb8               cmp dword ptr [eax + edi*4], ebx
// 0064c777  8d04b8               lea eax, [eax + edi*4]
// 0064c77a  740b                 je 0x64c787
// 0064c77c  8b08                 mov ecx, dword ptr [eax]
// 0064c77e  51                   push ecx
// 0064c77f  e816b21500           call 0x7a799a
// 0064c784  83c404               add esp, 4
// 0064c787  3bfb                 cmp edi, ebx
// 0064c789  77e5                 ja 0x64c770
// 0064c78b  8b4610               mov eax, dword ptr [esi + 0x10]
// 0064c78e  3bc3                 cmp eax, ebx
// 0064c790  7409                 je 0x64c79b
// 0064c792  50                   push eax
// 0064c793  e802b21500           call 0x7a799a
// 0064c798  83c404               add esp, 4
// 0064c79b  5f                   pop edi
// 0064c79c  895e10               mov dword ptr [esi + 0x10], ebx
// 0064c79f  895e14               mov dword ptr [esi + 0x14], ebx
// 0064c7a2  5e                   pop esi
// 0064c7a3  5b                   pop ebx
// 0064c7a4  c3                   ret 
// library templates-boost-1_34_1/deque_sp.cpp (function ?_Tidy@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
