// roc 2009-06 00697350  unit: RBX::VDebrisService::?$FactoryProduct  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00697350
//
// 00697350  53                   push ebx
// 00697351  56                   push esi
// 00697352  8bf1                 mov esi, ecx
// 00697354  33db                 xor ebx, ebx
// 00697356  57                   push edi
// 00697357  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0069735a  7451                 je 0x6973ad
// 0069735c  83cfff               or edi, 0xffffffff
// 0069735f  90                   nop 
// 00697360  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00697363  3bc3                 cmp eax, ebx
// 00697365  7441                 je 0x6973a8
// 00697367  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0069736a  8b5614               mov edx, dword ptr [esi + 0x14]
// 0069736d  8d4408ff             lea eax, [eax + ecx - 1]
// 00697371  8bc8                 mov ecx, eax
// 00697373  d1e9                 shr ecx, 1
// 00697375  3bd1                 cmp edx, ecx
// 00697377  7702                 ja 0x69737b
// 00697379  2bca                 sub ecx, edx
// 0069737b  8b5610               mov edx, dword ptr [esi + 0x10]
// 0069737e  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 00697381  83e001               and eax, 1
// 00697384  8d44c104             lea eax, [ecx + eax*8 + 4]
// 00697388  8b08                 mov ecx, dword ptr [eax]
// 0069738a  3bcb                 cmp ecx, ebx
// 0069738c  7412                 je 0x6973a0
// 0069738e  8d5108               lea edx, [ecx + 8]
// 00697391  8bc7                 mov eax, edi
// 00697393  f00fc102             lock xadd dword ptr [edx], eax
// 00697397  7507                 jne 0x6973a0
// 00697399  8b11                 mov edx, dword ptr [ecx]
// 0069739b  8b4208               mov eax, dword ptr [edx + 8]
// 0069739e  ffd0                 call eax
// 006973a0  017e1c               add dword ptr [esi + 0x1c], edi
// 006973a3  7503                 jne 0x6973a8
// 006973a5  895e18               mov dword ptr [esi + 0x18], ebx
// 006973a8  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 006973ab  75b3                 jne 0x697360
// 006973ad  8b7e14               mov edi, dword ptr [esi + 0x14]
// 006973b0  3bfb                 cmp edi, ebx
// 006973b2  761b                 jbe 0x6973cf
// 006973b4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006973b7  4f                   dec edi
// 006973b8  391cb9               cmp dword ptr [ecx + edi*4], ebx
// 006973bb  8d04b9               lea eax, [ecx + edi*4]
// 006973be  740b                 je 0x6973cb
// 006973c0  8b10                 mov edx, dword ptr [eax]
// 006973c2  52                   push edx
// 006973c3  e86a160800           call 0x718a32
// 006973c8  83c404               add esp, 4
// 006973cb  3bfb                 cmp edi, ebx
// 006973cd  77e5                 ja 0x6973b4
// 006973cf  8b4610               mov eax, dword ptr [esi + 0x10]
// 006973d2  3bc3                 cmp eax, ebx
// 006973d4  7409                 je 0x6973df
// 006973d6  50                   push eax
// 006973d7  e856160800           call 0x718a32
// 006973dc  83c404               add esp, 4
// 006973df  5f                   pop edi
// 006973e0  895e10               mov dword ptr [esi + 0x10], ebx
// 006973e3  895e14               mov dword ptr [esi + 0x14], ebx
// 006973e6  5e                   pop esi
// 006973e7  5b                   pop ebx
// 006973e8  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ?_Tidy@?$deque@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
