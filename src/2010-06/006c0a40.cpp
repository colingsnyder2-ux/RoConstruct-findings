// from server: 100% by auto
// roc 2010-06 006c0a40  unit: RBX::VDebrisService::?$FactoryProduct  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c0a40
//
// 006c0a40  53                   push ebx
// 006c0a41  56                   push esi
// 006c0a42  8bf1                 mov esi, ecx
// 006c0a44  33db                 xor ebx, ebx
// 006c0a46  57                   push edi
// 006c0a47  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 006c0a4a  7451                 je 0x6c0a9d
// 006c0a4c  83cfff               or edi, 0xffffffff
// 006c0a4f  90                   nop 
// 006c0a50  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006c0a53  3bc3                 cmp eax, ebx
// 006c0a55  7441                 je 0x6c0a98
// 006c0a57  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006c0a5a  8b5614               mov edx, dword ptr [esi + 0x14]
// 006c0a5d  8d4408ff             lea eax, [eax + ecx - 1]
// 006c0a61  8bc8                 mov ecx, eax
// 006c0a63  d1e9                 shr ecx, 1
// 006c0a65  3bd1                 cmp edx, ecx
// 006c0a67  7702                 ja 0x6c0a6b
// 006c0a69  2bca                 sub ecx, edx
// 006c0a6b  8b5610               mov edx, dword ptr [esi + 0x10]
// 006c0a6e  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 006c0a71  83e001               and eax, 1
// 006c0a74  8d44c104             lea eax, [ecx + eax*8 + 4]
// 006c0a78  8b08                 mov ecx, dword ptr [eax]
// 006c0a7a  3bcb                 cmp ecx, ebx
// 006c0a7c  7412                 je 0x6c0a90
// 006c0a7e  8d5108               lea edx, [ecx + 8]
// 006c0a81  8bc7                 mov eax, edi
// 006c0a83  f00fc102             lock xadd dword ptr [edx], eax
// 006c0a87  7507                 jne 0x6c0a90
// 006c0a89  8b11                 mov edx, dword ptr [ecx]
// 006c0a8b  8b4208               mov eax, dword ptr [edx + 8]
// 006c0a8e  ffd0                 call eax
// 006c0a90  017e1c               add dword ptr [esi + 0x1c], edi
// 006c0a93  7503                 jne 0x6c0a98
// 006c0a95  895e18               mov dword ptr [esi + 0x18], ebx
// 006c0a98  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 006c0a9b  75b3                 jne 0x6c0a50
// 006c0a9d  8b7e14               mov edi, dword ptr [esi + 0x14]
// 006c0aa0  3bfb                 cmp edi, ebx
// 006c0aa2  761b                 jbe 0x6c0abf
// 006c0aa4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006c0aa7  4f                   dec edi
// 006c0aa8  391cb9               cmp dword ptr [ecx + edi*4], ebx
// 006c0aab  8d04b9               lea eax, [ecx + edi*4]
// 006c0aae  740b                 je 0x6c0abb
// 006c0ab0  8b10                 mov edx, dword ptr [eax]
// 006c0ab2  52                   push edx
// 006c0ab3  e8e26e0e00           call 0x7a799a
// 006c0ab8  83c404               add esp, 4
// 006c0abb  3bfb                 cmp edi, ebx
// 006c0abd  77e5                 ja 0x6c0aa4
// 006c0abf  8b4610               mov eax, dword ptr [esi + 0x10]
// 006c0ac2  3bc3                 cmp eax, ebx
// 006c0ac4  7409                 je 0x6c0acf
// 006c0ac6  50                   push eax
// 006c0ac7  e8ce6e0e00           call 0x7a799a
// 006c0acc  83c404               add esp, 4
// 006c0acf  5f                   pop edi
// 006c0ad0  895e10               mov dword ptr [esi + 0x10], ebx
// 006c0ad3  895e14               mov dword ptr [esi + 0x14], ebx
// 006c0ad6  5e                   pop esi
// 006c0ad7  5b                   pop ebx
// 006c0ad8  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ?_Tidy@?$deque@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
