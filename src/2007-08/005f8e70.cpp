// roc 2007-08 005f8e70  unit: RBX::VDebrisService::?$FactoryProduct  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8e70
//
// 005f8e70  53                   push ebx
// 005f8e71  56                   push esi
// 005f8e72  8bf1                 mov esi, ecx
// 005f8e74  33db                 xor ebx, ebx
// 005f8e76  395e10               cmp dword ptr [esi + 0x10], ebx
// 005f8e79  57                   push edi
// 005f8e7a  7451                 je 0x5f8ecd
// 005f8e7c  83cfff               or edi, 0xffffffff
// 005f8e7f  90                   nop 
// 005f8e80  8b4610               mov eax, dword ptr [esi + 0x10]
// 005f8e83  3bc3                 cmp eax, ebx
// 005f8e85  7441                 je 0x5f8ec8
// 005f8e87  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005f8e8a  8b5608               mov edx, dword ptr [esi + 8]
// 005f8e8d  8d4408ff             lea eax, [eax + ecx - 1]
// 005f8e91  8bc8                 mov ecx, eax
// 005f8e93  d1e9                 shr ecx, 1
// 005f8e95  3bd1                 cmp edx, ecx
// 005f8e97  7702                 ja 0x5f8e9b
// 005f8e99  2bca                 sub ecx, edx
// 005f8e9b  8b5604               mov edx, dword ptr [esi + 4]
// 005f8e9e  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 005f8ea1  83e001               and eax, 1
// 005f8ea4  8d44c104             lea eax, [ecx + eax*8 + 4]
// 005f8ea8  8b08                 mov ecx, dword ptr [eax]
// 005f8eaa  3bcb                 cmp ecx, ebx
// 005f8eac  7412                 je 0x5f8ec0
// 005f8eae  8d5108               lea edx, [ecx + 8]
// 005f8eb1  8bc7                 mov eax, edi
// 005f8eb3  f00fc102             lock xadd dword ptr [edx], eax
// 005f8eb7  7507                 jne 0x5f8ec0
// 005f8eb9  8b11                 mov edx, dword ptr [ecx]
// 005f8ebb  8b4208               mov eax, dword ptr [edx + 8]
// 005f8ebe  ffd0                 call eax
// 005f8ec0  017e10               add dword ptr [esi + 0x10], edi
// 005f8ec3  7503                 jne 0x5f8ec8
// 005f8ec5  895e0c               mov dword ptr [esi + 0xc], ebx
// 005f8ec8  395e10               cmp dword ptr [esi + 0x10], ebx
// 005f8ecb  75b3                 jne 0x5f8e80
// 005f8ecd  8b7e08               mov edi, dword ptr [esi + 8]
// 005f8ed0  3bfb                 cmp edi, ebx
// 005f8ed2  761d                 jbe 0x5f8ef1
// 005f8ed4  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f8ed7  83ef01               sub edi, 1
// 005f8eda  391cb9               cmp dword ptr [ecx + edi*4], ebx
// 005f8edd  8d04b9               lea eax, [ecx + edi*4]
// 005f8ee0  740b                 je 0x5f8eed
// 005f8ee2  8b10                 mov edx, dword ptr [eax]
// 005f8ee4  52                   push edx
// 005f8ee5  e8786d0300           call 0x62fc62
// 005f8eea  83c404               add esp, 4
// 005f8eed  3bfb                 cmp edi, ebx
// 005f8eef  77e3                 ja 0x5f8ed4
// 005f8ef1  8b4604               mov eax, dword ptr [esi + 4]
// 005f8ef4  3bc3                 cmp eax, ebx
// 005f8ef6  7409                 je 0x5f8f01
// 005f8ef8  50                   push eax
// 005f8ef9  e8646d0300           call 0x62fc62
// 005f8efe  83c404               add esp, 4
// 005f8f01  5f                   pop edi
// 005f8f02  895e04               mov dword ptr [esi + 4], ebx
// 005f8f05  895e08               mov dword ptr [esi + 8], ebx
// 005f8f08  5e                   pop esi
// 005f8f09  5b                   pop ebx
// 005f8f0a  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ?_Tidy@?$deque@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
