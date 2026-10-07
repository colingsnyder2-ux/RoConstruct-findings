// roc 2010-06 00561430  unit: G3D::_internal::DialogTemplate  size: 758 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00561430
//
// 00561430  81ec28010000         sub esp, 0x128
// 00561436  53                   push ebx
// 00561437  55                   push ebp
// 00561438  8bac2434010000       mov ebp, dword ptr [esp + 0x134]
// 0056143f  56                   push esi
// 00561440  57                   push edi
// 00561441  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 00561444  8b7704               mov esi, dword ptr [edi + 4]
// 00561447  8b1f                 mov ebx, dword ptr [edi]
// 00561449  897c2430             mov dword ptr [esp + 0x30], edi
// 0056144d  85f6                 test esi, esi
// 0056144f  7521                 jne 0x561472
// 00561451  8b470c               mov eax, dword ptr [edi + 0xc]
// 00561454  55                   push ebp
// 00561455  ffd0                 call eax
// 00561457  83c404               add esp, 4
// 0056145a  84c0                 test al, al
// 0056145c  750d                 jne 0x56146b
// 0056145e  5f                   pop edi
// 0056145f  5e                   pop esi
// 00561460  5d                   pop ebp
// 00561461  32c0                 xor al, al
// 00561463  5b                   pop ebx
// 00561464  81c428010000         add esp, 0x128
// 0056146a  c3                   ret 
// 0056146b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0056146e  8b1f                 mov ebx, dword ptr [edi]
// 00561470  8bf1                 mov esi, ecx
// 00561472  0fb603               movzx eax, byte ptr [ebx]
// 00561475  4e                   dec esi
// 00561476  c1e008               shl eax, 8
// 00561479  43                   inc ebx
// 0056147a  89442414             mov dword ptr [esp + 0x14], eax
// 0056147e  85f6                 test esi, esi
// 00561480  7518                 jne 0x56149a
// 00561482  8b570c               mov edx, dword ptr [edi + 0xc]
// 00561485  55                   push ebp
// 00561486  ffd2                 call edx
// 00561488  83c404               add esp, 4
// 0056148b  84c0                 test al, al
// 0056148d  74cf                 je 0x56145e
// 0056148f  8b4704               mov eax, dword ptr [edi + 4]
// 00561492  8b1f                 mov ebx, dword ptr [edi]
// 00561494  8bf0                 mov esi, eax
// 00561496  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056149a  0fb60b               movzx ecx, byte ptr [ebx]
// 0056149d  03c1                 add eax, ecx
// 0056149f  83e802               sub eax, 2
// 005614a2  4e                   dec esi
// 005614a3  43                   inc ebx
// 005614a4  83f810               cmp eax, 0x10
// 005614a7  89442414             mov dword ptr [esp + 0x14], eax
// 005614ab  0f8e4a020000         jle 0x5616fb
// 005614b1  85f6                 test esi, esi
// 005614b3  7518                 jne 0x5614cd
// 005614b5  8b570c               mov edx, dword ptr [edi + 0xc]
// 005614b8  55                   push ebp
// 005614b9  ffd2                 call edx
// 005614bb  83c404               add esp, 4
// 005614be  84c0                 test al, al
// 005614c0  749c                 je 0x56145e
// 005614c2  8b4704               mov eax, dword ptr [edi + 4]
// 005614c5  8b1f                 mov ebx, dword ptr [edi]
// 005614c7  89442410             mov dword ptr [esp + 0x10], eax
// 005614cb  8bf0                 mov esi, eax
// 005614cd  0fb603               movzx eax, byte ptr [ebx]
// 005614d0  8b4d00               mov ecx, dword ptr [ebp]
// 005614d3  c7411450000000       mov dword ptr [ecx + 0x14], 0x50
// 005614da  8b5500               mov edx, dword ptr [ebp]
// 005614dd  894218               mov dword ptr [edx + 0x18], eax
// 005614e0  89442434             mov dword ptr [esp + 0x34], eax
// 005614e4  8b4500               mov eax, dword ptr [ebp]
// 005614e7  8b4804               mov ecx, dword ptr [eax + 4]
// 005614ea  6a01                 push 1
// 005614ec  55                   push ebp
// 005614ed  4e                   dec esi
// 005614ee  43                   inc ebx
// 005614ef  ffd1                 call ecx
// 005614f1  83c408               add esp, 8
// 005614f4  c644241c00           mov byte ptr [esp + 0x1c], 0
// 005614f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00561501  bf01000000           mov edi, 1
// 00561506  85f6                 test esi, esi
// 00561508  751c                 jne 0x561526
// 0056150a  8b742430             mov esi, dword ptr [esp + 0x30]
// 0056150e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00561511  55                   push ebp
// 00561512  ffd2                 call edx
// 00561514  83c404               add esp, 4
// 00561517  84c0                 test al, al
// 00561519  0f843fffffff         je 0x56145e
// 0056151f  8b4604               mov eax, dword ptr [esi + 4]
// 00561522  8b1e                 mov ebx, dword ptr [esi]
// 00561524  8bf0                 mov esi, eax
// 00561526  8a0b                 mov cl, byte ptr [ebx]
// 00561528  0fb6d1               movzx edx, cl
// 0056152b  01542418             add dword ptr [esp + 0x18], edx
// 0056152f  884c3c1c             mov byte ptr [esp + edi + 0x1c], cl
// 00561533  4e                   dec esi
// 00561534  47                   inc edi
// 00561535  43                   inc ebx
// 00561536  83ff10               cmp edi, 0x10
// 00561539  89742410             mov dword ptr [esp + 0x10], esi
// 0056153d  7ec7                 jle 0x561506
// 0056153f  8b4500               mov eax, dword ptr [ebp]
// 00561542  0fb64c241d           movzx ecx, byte ptr [esp + 0x1d]
// 00561547  0fb654241e           movzx edx, byte ptr [esp + 0x1e]
// 0056154c  83c018               add eax, 0x18
// 0056154f  836c241411           sub dword ptr [esp + 0x14], 0x11
// 00561554  8908                 mov dword ptr [eax], ecx
// 00561556  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 0056155b  895004               mov dword ptr [eax + 4], edx
// 0056155e  0fb6542420           movzx edx, byte ptr [esp + 0x20]
// 00561563  894808               mov dword ptr [eax + 8], ecx
// 00561566  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 0056156b  89500c               mov dword ptr [eax + 0xc], edx
// 0056156e  0fb6542422           movzx edx, byte ptr [esp + 0x22]
// 00561573  894810               mov dword ptr [eax + 0x10], ecx
// 00561576  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 0056157b  895014               mov dword ptr [eax + 0x14], edx
// 0056157e  0fb6542424           movzx edx, byte ptr [esp + 0x24]
// 00561583  894818               mov dword ptr [eax + 0x18], ecx
// 00561586  89501c               mov dword ptr [eax + 0x1c], edx
// 00561589  8b4500               mov eax, dword ptr [ebp]
// 0056158c  bf56000000           mov edi, 0x56
// 00561591  897814               mov dword ptr [eax + 0x14], edi
// 00561594  8b4d00               mov ecx, dword ptr [ebp]
// 00561597  8b5104               mov edx, dword ptr [ecx + 4]
// 0056159a  6a02                 push 2
// 0056159c  55                   push ebp
// 0056159d  ffd2                 call edx
// 0056159f  8b4500               mov eax, dword ptr [ebp]
// 005615a2  0fb64c242d           movzx ecx, byte ptr [esp + 0x2d]
// 005615a7  0fb654242e           movzx edx, byte ptr [esp + 0x2e]
// 005615ac  83c018               add eax, 0x18
// 005615af  8908                 mov dword ptr [eax], ecx
// 005615b1  0fb64c242f           movzx ecx, byte ptr [esp + 0x2f]
// 005615b6  895004               mov dword ptr [eax + 4], edx
// 005615b9  0fb6542430           movzx edx, byte ptr [esp + 0x30]
// 005615be  894808               mov dword ptr [eax + 8], ecx
// 005615c1  0fb64c2431           movzx ecx, byte ptr [esp + 0x31]
// 005615c6  89500c               mov dword ptr [eax + 0xc], edx
// 005615c9  0fb6542432           movzx edx, byte ptr [esp + 0x32]
// 005615ce  894810               mov dword ptr [eax + 0x10], ecx
// 005615d1  0fb64c2433           movzx ecx, byte ptr [esp + 0x33]
// 005615d6  895014               mov dword ptr [eax + 0x14], edx
// 005615d9  0fb6542434           movzx edx, byte ptr [esp + 0x34]
// 005615de  894818               mov dword ptr [eax + 0x18], ecx
// 005615e1  89501c               mov dword ptr [eax + 0x1c], edx
// 005615e4  8b4500               mov eax, dword ptr [ebp]
// 005615e7  897814               mov dword ptr [eax + 0x14], edi
// 005615ea  8b4d00               mov ecx, dword ptr [ebp]
// 005615ed  8b5104               mov edx, dword ptr [ecx + 4]
// 005615f0  6a02                 push 2
// 005615f2  55                   push ebp
// 005615f3  ffd2                 call edx
// 005615f5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005615f9  83c410               add esp, 0x10
// 005615fc  3d00010000           cmp eax, 0x100
// 00561601  7f06                 jg 0x561609
// 00561603  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00561607  7e15                 jle 0x56161e
// 00561609  8b4500               mov eax, dword ptr [ebp]
// 0056160c  c7401408000000       mov dword ptr [eax + 0x14], 8
// 00561613  8b4d00               mov ecx, dword ptr [ebp]
// 00561616  8b11                 mov edx, dword ptr [ecx]
// 00561618  55                   push ebp
// 00561619  ffd2                 call edx
// 0056161b  83c404               add esp, 4
// 0056161e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00561622  33ff                 xor edi, edi
// 00561624  85c0                 test eax, eax
// 00561626  7e35                 jle 0x56165d
// 00561628  85f6                 test esi, esi
// 0056162a  7520                 jne 0x56164c
// 0056162c  8b742430             mov esi, dword ptr [esp + 0x30]
// 00561630  8b460c               mov eax, dword ptr [esi + 0xc]
// 00561633  55                   push ebp
// 00561634  ffd0                 call eax
// 00561636  83c404               add esp, 4
// 00561639  84c0                 test al, al
// 0056163b  0f841dfeffff         je 0x56145e
// 00561641  8b4e04               mov ecx, dword ptr [esi + 4]
// 00561644  8b1e                 mov ebx, dword ptr [esi]
// 00561646  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056164a  8bf1                 mov esi, ecx
// 0056164c  8a13                 mov dl, byte ptr [ebx]
// 0056164e  88543c38             mov byte ptr [esp + edi + 0x38], dl
// 00561652  4e                   dec esi
// 00561653  47                   inc edi
// 00561654  43                   inc ebx
// 00561655  3bf8                 cmp edi, eax
// 00561657  89742410             mov dword ptr [esp + 0x10], esi
// 0056165b  7ccb                 jl 0x561628
// 0056165d  29442414             sub dword ptr [esp + 0x14], eax
// 00561661  8b442434             mov eax, dword ptr [esp + 0x34]
// 00561665  a810                 test al, 0x10
// 00561667  740c                 je 0x561675
// 00561669  83e810               sub eax, 0x10
// 0056166c  8db485b0000000       lea esi, [ebp + eax*4 + 0xb0]
// 00561673  eb07                 jmp 0x56167c
// 00561675  8db485a0000000       lea esi, [ebp + eax*4 + 0xa0]
// 0056167c  85c0                 test eax, eax
// 0056167e  7c05                 jl 0x561685
// 00561680  83f804               cmp eax, 4
// 00561683  7c1b                 jl 0x5616a0
// 00561685  8b4d00               mov ecx, dword ptr [ebp]
// 00561688  c741141e000000       mov dword ptr [ecx + 0x14], 0x1e
// 0056168f  8b5500               mov edx, dword ptr [ebp]
// 00561692  894218               mov dword ptr [edx + 0x18], eax
// 00561695  8b4500               mov eax, dword ptr [ebp]
// 00561698  8b08                 mov ecx, dword ptr [eax]
// 0056169a  55                   push ebp
// 0056169b  ffd1                 call ecx
// 0056169d  83c404               add esp, 4
// 005616a0  833e00               cmp dword ptr [esi], 0
// 005616a3  750b                 jne 0x5616b0
// 005616a5  55                   push ebp
// 005616a6  e845110000           call 0x5627f0
// 005616ab  83c404               add esp, 4
// 005616ae  8906                 mov dword ptr [esi], eax
// 005616b0  8b06                 mov eax, dword ptr [esi]
// 005616b2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005616b6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005616ba  8910                 mov dword ptr [eax], edx
// 005616bc  8b542424             mov edx, dword ptr [esp + 0x24]
// 005616c0  894804               mov dword ptr [eax + 4], ecx
// 005616c3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005616c7  895008               mov dword ptr [eax + 8], edx
// 005616ca  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 005616ce  89480c               mov dword ptr [eax + 0xc], ecx
// 005616d1  885010               mov byte ptr [eax + 0x10], dl
// 005616d4  8b3e                 mov edi, dword ptr [esi]
// 005616d6  83c711               add edi, 0x11
// 005616d9  837c241410           cmp dword ptr [esp + 0x14], 0x10
// 005616de  b940000000           mov ecx, 0x40
// 005616e3  8d742438             lea esi, [esp + 0x38]
// 005616e7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005616e9  8b742410             mov esi, dword ptr [esp + 0x10]
// 005616ed  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005616f1  0f8fbafdffff         jg 0x5614b1
// 005616f7  8b442414             mov eax, dword ptr [esp + 0x14]
// 005616fb  85c0                 test eax, eax
// 005616fd  7415                 je 0x561714
// 005616ff  8b4500               mov eax, dword ptr [ebp]
// 00561702  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 00561709  8b4d00               mov ecx, dword ptr [ebp]
// 0056170c  8b11                 mov edx, dword ptr [ecx]
// 0056170e  55                   push ebp
// 0056170f  ffd2                 call edx
// 00561711  83c404               add esp, 4
// 00561714  891f                 mov dword ptr [edi], ebx
// 00561716  897704               mov dword ptr [edi + 4], esi
// 00561719  5f                   pop edi
// 0056171a  5e                   pop esi
// 0056171b  5d                   pop ebp
// 0056171c  b001                 mov al, 1
// 0056171e  5b                   pop ebx
// 0056171f  81c428010000         add esp, 0x128
// 00561725  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dht)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
