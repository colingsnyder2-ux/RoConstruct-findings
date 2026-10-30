// from server: 100% by auto
// roc 2012-06 0086e720  unit: RBX::VInstance::?$NonFactoryProduct  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086e720
//
// 0086e720  53                   push ebx
// 0086e721  56                   push esi
// 0086e722  8bf1                 mov esi, ecx
// 0086e724  33db                 xor ebx, ebx
// 0086e726  57                   push edi
// 0086e727  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0086e72a  7451                 je 0x86e77d
// 0086e72c  83cfff               or edi, 0xffffffff
// 0086e72f  90                   nop 
// 0086e730  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0086e733  3bc3                 cmp eax, ebx
// 0086e735  7441                 je 0x86e778
// 0086e737  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0086e73a  8b5614               mov edx, dword ptr [esi + 0x14]
// 0086e73d  8d4408ff             lea eax, [eax + ecx - 1]
// 0086e741  8bc8                 mov ecx, eax
// 0086e743  d1e9                 shr ecx, 1
// 0086e745  3bd1                 cmp edx, ecx
// 0086e747  7702                 ja 0x86e74b
// 0086e749  2bca                 sub ecx, edx
// 0086e74b  8b5610               mov edx, dword ptr [esi + 0x10]
// 0086e74e  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0086e751  83e001               and eax, 1
// 0086e754  8d44c104             lea eax, [ecx + eax*8 + 4]
// 0086e758  8b08                 mov ecx, dword ptr [eax]
// 0086e75a  3bcb                 cmp ecx, ebx
// 0086e75c  7412                 je 0x86e770
// 0086e75e  8d5108               lea edx, [ecx + 8]
// 0086e761  8bc7                 mov eax, edi
// 0086e763  f00fc102             lock xadd dword ptr [edx], eax
// 0086e767  7507                 jne 0x86e770
// 0086e769  8b11                 mov edx, dword ptr [ecx]
// 0086e76b  8b4208               mov eax, dword ptr [edx + 8]
// 0086e76e  ffd0                 call eax
// 0086e770  017e1c               add dword ptr [esi + 0x1c], edi
// 0086e773  7503                 jne 0x86e778
// 0086e775  895e18               mov dword ptr [esi + 0x18], ebx
// 0086e778  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0086e77b  75b3                 jne 0x86e730
// 0086e77d  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0086e780  3bfb                 cmp edi, ebx
// 0086e782  761b                 jbe 0x86e79f
// 0086e784  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0086e787  4f                   dec edi
// 0086e788  391cb9               cmp dword ptr [ecx + edi*4], ebx
// 0086e78b  8d04b9               lea eax, [ecx + edi*4]
// 0086e78e  740b                 je 0x86e79b
// 0086e790  8b10                 mov edx, dword ptr [eax]
// 0086e792  52                   push edx
// 0086e793  e87c391100           call 0x982114
// 0086e798  83c404               add esp, 4
// 0086e79b  3bfb                 cmp edi, ebx
// 0086e79d  77e5                 ja 0x86e784
// 0086e79f  8b4610               mov eax, dword ptr [esi + 0x10]
// 0086e7a2  3bc3                 cmp eax, ebx
// 0086e7a4  7409                 je 0x86e7af
// 0086e7a6  50                   push eax
// 0086e7a7  e868391100           call 0x982114
// 0086e7ac  83c404               add esp, 4
// 0086e7af  5f                   pop edi
// 0086e7b0  895e10               mov dword ptr [esi + 0x10], ebx
// 0086e7b3  895e14               mov dword ptr [esi + 0x14], ebx
// 0086e7b6  5e                   pop esi
// 0086e7b7  5b                   pop ebx
// 0086e7b8  c3                   ret 
// library templates-boost-1_34_1/deque_wp.cpp (function ?_Tidy@?$deque@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
