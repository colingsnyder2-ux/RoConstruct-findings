// from server: 100% by auto
// roc 2008-06 0063b6d0  unit: RBX::VDebrisService::?$FactoryProduct  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b6d0
//
// 0063b6d0  53                   push ebx
// 0063b6d1  56                   push esi
// 0063b6d2  8bf1                 mov esi, ecx
// 0063b6d4  33db                 xor ebx, ebx
// 0063b6d6  57                   push edi
// 0063b6d7  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0063b6da  7451                 je 0x63b72d
// 0063b6dc  83cfff               or edi, 0xffffffff
// 0063b6df  90                   nop 
// 0063b6e0  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0063b6e3  3bc3                 cmp eax, ebx
// 0063b6e5  7441                 je 0x63b728
// 0063b6e7  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0063b6ea  8b5614               mov edx, dword ptr [esi + 0x14]
// 0063b6ed  8d4408ff             lea eax, [eax + ecx - 1]
// 0063b6f1  8bc8                 mov ecx, eax
// 0063b6f3  d1e9                 shr ecx, 1
// 0063b6f5  3bd1                 cmp edx, ecx
// 0063b6f7  7702                 ja 0x63b6fb
// 0063b6f9  2bca                 sub ecx, edx
// 0063b6fb  8b5610               mov edx, dword ptr [esi + 0x10]
// 0063b6fe  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0063b701  83e001               and eax, 1
// 0063b704  8d44c104             lea eax, [ecx + eax*8 + 4]
// 0063b708  8b08                 mov ecx, dword ptr [eax]
// 0063b70a  3bcb                 cmp ecx, ebx
// 0063b70c  7412                 je 0x63b720
// 0063b70e  8d5108               lea edx, [ecx + 8]
// 0063b711  8bc7                 mov eax, edi
// 0063b713  f00fc102             lock xadd dword ptr [edx], eax
// 0063b717  7507                 jne 0x63b720
// 0063b719  8b11                 mov edx, dword ptr [ecx]
// 0063b71b  8b4208               mov eax, dword ptr [edx + 8]
// 0063b71e  ffd0                 call eax
// 0063b720  017e1c               add dword ptr [esi + 0x1c], edi
// 0063b723  7503                 jne 0x63b728
// 0063b725  895e18               mov dword ptr [esi + 0x18], ebx
// 0063b728  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0063b72b  75b3                 jne 0x63b6e0
// 0063b72d  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0063b730  3bfb                 cmp edi, ebx
// 0063b732  761b                 jbe 0x63b74f
// 0063b734  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0063b737  4f                   dec edi
// 0063b738  391cb9               cmp dword ptr [ecx + edi*4], ebx
// 0063b73b  8d04b9               lea eax, [ecx + edi*4]
// 0063b73e  740b                 je 0x63b74b
// 0063b740  8b10                 mov edx, dword ptr [eax]
// 0063b742  52                   push edx
// 0063b743  e8324f0600           call 0x6a067a
// 0063b748  83c404               add esp, 4
// 0063b74b  3bfb                 cmp edi, ebx
// 0063b74d  77e5                 ja 0x63b734
// 0063b74f  8b4610               mov eax, dword ptr [esi + 0x10]
// 0063b752  3bc3                 cmp eax, ebx
// 0063b754  7409                 je 0x63b75f
// 0063b756  50                   push eax
// 0063b757  e81e4f0600           call 0x6a067a
// 0063b75c  83c404               add esp, 4
// 0063b75f  5f                   pop edi
// 0063b760  895e10               mov dword ptr [esi + 0x10], ebx
// 0063b763  895e14               mov dword ptr [esi + 0x14], ebx
// 0063b766  5e                   pop esi
// 0063b767  5b                   pop ebx
// 0063b768  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ?_Tidy@?$deque@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
