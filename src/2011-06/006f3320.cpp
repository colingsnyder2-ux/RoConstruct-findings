// roc 2011-06 006f3320  unit: RBX::VDebrisService::?$FactoryProduct  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f3320
//
// 006f3320  53                   push ebx
// 006f3321  56                   push esi
// 006f3322  8bf1                 mov esi, ecx
// 006f3324  33db                 xor ebx, ebx
// 006f3326  57                   push edi
// 006f3327  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 006f332a  7451                 je 0x6f337d
// 006f332c  83cfff               or edi, 0xffffffff
// 006f332f  90                   nop 
// 006f3330  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006f3333  3bc3                 cmp eax, ebx
// 006f3335  7441                 je 0x6f3378
// 006f3337  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006f333a  8b5614               mov edx, dword ptr [esi + 0x14]
// 006f333d  8d4408ff             lea eax, [eax + ecx - 1]
// 006f3341  8bc8                 mov ecx, eax
// 006f3343  d1e9                 shr ecx, 1
// 006f3345  3bd1                 cmp edx, ecx
// 006f3347  7702                 ja 0x6f334b
// 006f3349  2bca                 sub ecx, edx
// 006f334b  8b5610               mov edx, dword ptr [esi + 0x10]
// 006f334e  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 006f3351  83e001               and eax, 1
// 006f3354  8d44c104             lea eax, [ecx + eax*8 + 4]
// 006f3358  8b08                 mov ecx, dword ptr [eax]
// 006f335a  3bcb                 cmp ecx, ebx
// 006f335c  7412                 je 0x6f3370
// 006f335e  8d5108               lea edx, [ecx + 8]
// 006f3361  8bc7                 mov eax, edi
// 006f3363  f00fc102             lock xadd dword ptr [edx], eax
// 006f3367  7507                 jne 0x6f3370
// 006f3369  8b11                 mov edx, dword ptr [ecx]
// 006f336b  8b4208               mov eax, dword ptr [edx + 8]
// 006f336e  ffd0                 call eax
// 006f3370  017e1c               add dword ptr [esi + 0x1c], edi
// 006f3373  7503                 jne 0x6f3378
// 006f3375  895e18               mov dword ptr [esi + 0x18], ebx
// 006f3378  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 006f337b  75b3                 jne 0x6f3330
// 006f337d  8b7e14               mov edi, dword ptr [esi + 0x14]
// 006f3380  3bfb                 cmp edi, ebx
// 006f3382  761b                 jbe 0x6f339f
// 006f3384  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006f3387  4f                   dec edi
// 006f3388  391cb9               cmp dword ptr [ecx + edi*4], ebx
// 006f338b  8d04b9               lea eax, [ecx + edi*4]
// 006f338e  740b                 je 0x6f339b
// 006f3390  8b10                 mov edx, dword ptr [eax]
// 006f3392  52                   push edx
// 006f3393  e8c06c1100           call 0x80a058
// 006f3398  83c404               add esp, 4
// 006f339b  3bfb                 cmp edi, ebx
// 006f339d  77e5                 ja 0x6f3384
// 006f339f  8b4610               mov eax, dword ptr [esi + 0x10]
// 006f33a2  3bc3                 cmp eax, ebx
// 006f33a4  7409                 je 0x6f33af
// 006f33a6  50                   push eax
// 006f33a7  e8ac6c1100           call 0x80a058
// 006f33ac  83c404               add esp, 4
// 006f33af  5f                   pop edi
// 006f33b0  895e10               mov dword ptr [esi + 0x10], ebx
// 006f33b3  895e14               mov dword ptr [esi + 0x14], ebx
// 006f33b6  5e                   pop esi
// 006f33b7  5b                   pop ebx
// 006f33b8  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ?_Tidy@?$deque@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
