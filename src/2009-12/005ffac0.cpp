// roc 2009-12 005ffac0  unit: G3D::_internal::DialogTemplate  size: 758 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ffac0
//
// 005ffac0  81ec28010000         sub esp, 0x128
// 005ffac6  53                   push ebx
// 005ffac7  55                   push ebp
// 005ffac8  8bac2434010000       mov ebp, dword ptr [esp + 0x134]
// 005ffacf  56                   push esi
// 005ffad0  57                   push edi
// 005ffad1  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 005ffad4  8b7704               mov esi, dword ptr [edi + 4]
// 005ffad7  8b1f                 mov ebx, dword ptr [edi]
// 005ffad9  897c2430             mov dword ptr [esp + 0x30], edi
// 005ffadd  85f6                 test esi, esi
// 005ffadf  7521                 jne 0x5ffb02
// 005ffae1  8b470c               mov eax, dword ptr [edi + 0xc]
// 005ffae4  55                   push ebp
// 005ffae5  ffd0                 call eax
// 005ffae7  83c404               add esp, 4
// 005ffaea  84c0                 test al, al
// 005ffaec  750d                 jne 0x5ffafb
// 005ffaee  5f                   pop edi
// 005ffaef  5e                   pop esi
// 005ffaf0  5d                   pop ebp
// 005ffaf1  32c0                 xor al, al
// 005ffaf3  5b                   pop ebx
// 005ffaf4  81c428010000         add esp, 0x128
// 005ffafa  c3                   ret 
// 005ffafb  8b4f04               mov ecx, dword ptr [edi + 4]
// 005ffafe  8b1f                 mov ebx, dword ptr [edi]
// 005ffb00  8bf1                 mov esi, ecx
// 005ffb02  0fb603               movzx eax, byte ptr [ebx]
// 005ffb05  4e                   dec esi
// 005ffb06  c1e008               shl eax, 8
// 005ffb09  43                   inc ebx
// 005ffb0a  89442414             mov dword ptr [esp + 0x14], eax
// 005ffb0e  85f6                 test esi, esi
// 005ffb10  7518                 jne 0x5ffb2a
// 005ffb12  8b570c               mov edx, dword ptr [edi + 0xc]
// 005ffb15  55                   push ebp
// 005ffb16  ffd2                 call edx
// 005ffb18  83c404               add esp, 4
// 005ffb1b  84c0                 test al, al
// 005ffb1d  74cf                 je 0x5ffaee
// 005ffb1f  8b4704               mov eax, dword ptr [edi + 4]
// 005ffb22  8b1f                 mov ebx, dword ptr [edi]
// 005ffb24  8bf0                 mov esi, eax
// 005ffb26  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ffb2a  0fb60b               movzx ecx, byte ptr [ebx]
// 005ffb2d  03c1                 add eax, ecx
// 005ffb2f  83e802               sub eax, 2
// 005ffb32  4e                   dec esi
// 005ffb33  43                   inc ebx
// 005ffb34  83f810               cmp eax, 0x10
// 005ffb37  89442414             mov dword ptr [esp + 0x14], eax
// 005ffb3b  0f8e4a020000         jle 0x5ffd8b
// 005ffb41  85f6                 test esi, esi
// 005ffb43  7518                 jne 0x5ffb5d
// 005ffb45  8b570c               mov edx, dword ptr [edi + 0xc]
// 005ffb48  55                   push ebp
// 005ffb49  ffd2                 call edx
// 005ffb4b  83c404               add esp, 4
// 005ffb4e  84c0                 test al, al
// 005ffb50  749c                 je 0x5ffaee
// 005ffb52  8b4704               mov eax, dword ptr [edi + 4]
// 005ffb55  8b1f                 mov ebx, dword ptr [edi]
// 005ffb57  89442410             mov dword ptr [esp + 0x10], eax
// 005ffb5b  8bf0                 mov esi, eax
// 005ffb5d  0fb603               movzx eax, byte ptr [ebx]
// 005ffb60  8b4d00               mov ecx, dword ptr [ebp]
// 005ffb63  c7411450000000       mov dword ptr [ecx + 0x14], 0x50
// 005ffb6a  8b5500               mov edx, dword ptr [ebp]
// 005ffb6d  894218               mov dword ptr [edx + 0x18], eax
// 005ffb70  89442434             mov dword ptr [esp + 0x34], eax
// 005ffb74  8b4500               mov eax, dword ptr [ebp]
// 005ffb77  8b4804               mov ecx, dword ptr [eax + 4]
// 005ffb7a  6a01                 push 1
// 005ffb7c  55                   push ebp
// 005ffb7d  4e                   dec esi
// 005ffb7e  43                   inc ebx
// 005ffb7f  ffd1                 call ecx
// 005ffb81  83c408               add esp, 8
// 005ffb84  c644241c00           mov byte ptr [esp + 0x1c], 0
// 005ffb89  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ffb91  bf01000000           mov edi, 1
// 005ffb96  85f6                 test esi, esi
// 005ffb98  751c                 jne 0x5ffbb6
// 005ffb9a  8b742430             mov esi, dword ptr [esp + 0x30]
// 005ffb9e  8b560c               mov edx, dword ptr [esi + 0xc]
// 005ffba1  55                   push ebp
// 005ffba2  ffd2                 call edx
// 005ffba4  83c404               add esp, 4
// 005ffba7  84c0                 test al, al
// 005ffba9  0f843fffffff         je 0x5ffaee
// 005ffbaf  8b4604               mov eax, dword ptr [esi + 4]
// 005ffbb2  8b1e                 mov ebx, dword ptr [esi]
// 005ffbb4  8bf0                 mov esi, eax
// 005ffbb6  8a0b                 mov cl, byte ptr [ebx]
// 005ffbb8  0fb6d1               movzx edx, cl
// 005ffbbb  01542418             add dword ptr [esp + 0x18], edx
// 005ffbbf  884c3c1c             mov byte ptr [esp + edi + 0x1c], cl
// 005ffbc3  4e                   dec esi
// 005ffbc4  47                   inc edi
// 005ffbc5  43                   inc ebx
// 005ffbc6  83ff10               cmp edi, 0x10
// 005ffbc9  89742410             mov dword ptr [esp + 0x10], esi
// 005ffbcd  7ec7                 jle 0x5ffb96
// 005ffbcf  8b4500               mov eax, dword ptr [ebp]
// 005ffbd2  0fb64c241d           movzx ecx, byte ptr [esp + 0x1d]
// 005ffbd7  0fb654241e           movzx edx, byte ptr [esp + 0x1e]
// 005ffbdc  83c018               add eax, 0x18
// 005ffbdf  836c241411           sub dword ptr [esp + 0x14], 0x11
// 005ffbe4  8908                 mov dword ptr [eax], ecx
// 005ffbe6  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 005ffbeb  895004               mov dword ptr [eax + 4], edx
// 005ffbee  0fb6542420           movzx edx, byte ptr [esp + 0x20]
// 005ffbf3  894808               mov dword ptr [eax + 8], ecx
// 005ffbf6  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 005ffbfb  89500c               mov dword ptr [eax + 0xc], edx
// 005ffbfe  0fb6542422           movzx edx, byte ptr [esp + 0x22]
// 005ffc03  894810               mov dword ptr [eax + 0x10], ecx
// 005ffc06  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 005ffc0b  895014               mov dword ptr [eax + 0x14], edx
// 005ffc0e  0fb6542424           movzx edx, byte ptr [esp + 0x24]
// 005ffc13  894818               mov dword ptr [eax + 0x18], ecx
// 005ffc16  89501c               mov dword ptr [eax + 0x1c], edx
// 005ffc19  8b4500               mov eax, dword ptr [ebp]
// 005ffc1c  bf56000000           mov edi, 0x56
// 005ffc21  897814               mov dword ptr [eax + 0x14], edi
// 005ffc24  8b4d00               mov ecx, dword ptr [ebp]
// 005ffc27  8b5104               mov edx, dword ptr [ecx + 4]
// 005ffc2a  6a02                 push 2
// 005ffc2c  55                   push ebp
// 005ffc2d  ffd2                 call edx
// 005ffc2f  8b4500               mov eax, dword ptr [ebp]
// 005ffc32  0fb64c242d           movzx ecx, byte ptr [esp + 0x2d]
// 005ffc37  0fb654242e           movzx edx, byte ptr [esp + 0x2e]
// 005ffc3c  83c018               add eax, 0x18
// 005ffc3f  8908                 mov dword ptr [eax], ecx
// 005ffc41  0fb64c242f           movzx ecx, byte ptr [esp + 0x2f]
// 005ffc46  895004               mov dword ptr [eax + 4], edx
// 005ffc49  0fb6542430           movzx edx, byte ptr [esp + 0x30]
// 005ffc4e  894808               mov dword ptr [eax + 8], ecx
// 005ffc51  0fb64c2431           movzx ecx, byte ptr [esp + 0x31]
// 005ffc56  89500c               mov dword ptr [eax + 0xc], edx
// 005ffc59  0fb6542432           movzx edx, byte ptr [esp + 0x32]
// 005ffc5e  894810               mov dword ptr [eax + 0x10], ecx
// 005ffc61  0fb64c2433           movzx ecx, byte ptr [esp + 0x33]
// 005ffc66  895014               mov dword ptr [eax + 0x14], edx
// 005ffc69  0fb6542434           movzx edx, byte ptr [esp + 0x34]
// 005ffc6e  894818               mov dword ptr [eax + 0x18], ecx
// 005ffc71  89501c               mov dword ptr [eax + 0x1c], edx
// 005ffc74  8b4500               mov eax, dword ptr [ebp]
// 005ffc77  897814               mov dword ptr [eax + 0x14], edi
// 005ffc7a  8b4d00               mov ecx, dword ptr [ebp]
// 005ffc7d  8b5104               mov edx, dword ptr [ecx + 4]
// 005ffc80  6a02                 push 2
// 005ffc82  55                   push ebp
// 005ffc83  ffd2                 call edx
// 005ffc85  8b442428             mov eax, dword ptr [esp + 0x28]
// 005ffc89  83c410               add esp, 0x10
// 005ffc8c  3d00010000           cmp eax, 0x100
// 005ffc91  7f06                 jg 0x5ffc99
// 005ffc93  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005ffc97  7e15                 jle 0x5ffcae
// 005ffc99  8b4500               mov eax, dword ptr [ebp]
// 005ffc9c  c7401408000000       mov dword ptr [eax + 0x14], 8
// 005ffca3  8b4d00               mov ecx, dword ptr [ebp]
// 005ffca6  8b11                 mov edx, dword ptr [ecx]
// 005ffca8  55                   push ebp
// 005ffca9  ffd2                 call edx
// 005ffcab  83c404               add esp, 4
// 005ffcae  8b442418             mov eax, dword ptr [esp + 0x18]
// 005ffcb2  33ff                 xor edi, edi
// 005ffcb4  85c0                 test eax, eax
// 005ffcb6  7e35                 jle 0x5ffced
// 005ffcb8  85f6                 test esi, esi
// 005ffcba  7520                 jne 0x5ffcdc
// 005ffcbc  8b742430             mov esi, dword ptr [esp + 0x30]
// 005ffcc0  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ffcc3  55                   push ebp
// 005ffcc4  ffd0                 call eax
// 005ffcc6  83c404               add esp, 4
// 005ffcc9  84c0                 test al, al
// 005ffccb  0f841dfeffff         je 0x5ffaee
// 005ffcd1  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ffcd4  8b1e                 mov ebx, dword ptr [esi]
// 005ffcd6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005ffcda  8bf1                 mov esi, ecx
// 005ffcdc  8a13                 mov dl, byte ptr [ebx]
// 005ffcde  88543c38             mov byte ptr [esp + edi + 0x38], dl
// 005ffce2  4e                   dec esi
// 005ffce3  47                   inc edi
// 005ffce4  43                   inc ebx
// 005ffce5  3bf8                 cmp edi, eax
// 005ffce7  89742410             mov dword ptr [esp + 0x10], esi
// 005ffceb  7ccb                 jl 0x5ffcb8
// 005ffced  29442414             sub dword ptr [esp + 0x14], eax
// 005ffcf1  8b442434             mov eax, dword ptr [esp + 0x34]
// 005ffcf5  a810                 test al, 0x10
// 005ffcf7  740c                 je 0x5ffd05
// 005ffcf9  83e810               sub eax, 0x10
// 005ffcfc  8db485b0000000       lea esi, [ebp + eax*4 + 0xb0]
// 005ffd03  eb07                 jmp 0x5ffd0c
// 005ffd05  8db485a0000000       lea esi, [ebp + eax*4 + 0xa0]
// 005ffd0c  85c0                 test eax, eax
// 005ffd0e  7c05                 jl 0x5ffd15
// 005ffd10  83f804               cmp eax, 4
// 005ffd13  7c1b                 jl 0x5ffd30
// 005ffd15  8b4d00               mov ecx, dword ptr [ebp]
// 005ffd18  c741141e000000       mov dword ptr [ecx + 0x14], 0x1e
// 005ffd1f  8b5500               mov edx, dword ptr [ebp]
// 005ffd22  894218               mov dword ptr [edx + 0x18], eax
// 005ffd25  8b4500               mov eax, dword ptr [ebp]
// 005ffd28  8b08                 mov ecx, dword ptr [eax]
// 005ffd2a  55                   push ebp
// 005ffd2b  ffd1                 call ecx
// 005ffd2d  83c404               add esp, 4
// 005ffd30  833e00               cmp dword ptr [esi], 0
// 005ffd33  750b                 jne 0x5ffd40
// 005ffd35  55                   push ebp
// 005ffd36  e845110000           call 0x600e80
// 005ffd3b  83c404               add esp, 4
// 005ffd3e  8906                 mov dword ptr [esi], eax
// 005ffd40  8b06                 mov eax, dword ptr [esi]
// 005ffd42  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005ffd46  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ffd4a  8910                 mov dword ptr [eax], edx
// 005ffd4c  8b542424             mov edx, dword ptr [esp + 0x24]
// 005ffd50  894804               mov dword ptr [eax + 4], ecx
// 005ffd53  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ffd57  895008               mov dword ptr [eax + 8], edx
// 005ffd5a  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 005ffd5e  89480c               mov dword ptr [eax + 0xc], ecx
// 005ffd61  885010               mov byte ptr [eax + 0x10], dl
// 005ffd64  8b3e                 mov edi, dword ptr [esi]
// 005ffd66  83c711               add edi, 0x11
// 005ffd69  837c241410           cmp dword ptr [esp + 0x14], 0x10
// 005ffd6e  b940000000           mov ecx, 0x40
// 005ffd73  8d742438             lea esi, [esp + 0x38]
// 005ffd77  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005ffd79  8b742410             mov esi, dword ptr [esp + 0x10]
// 005ffd7d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005ffd81  0f8fbafdffff         jg 0x5ffb41
// 005ffd87  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ffd8b  85c0                 test eax, eax
// 005ffd8d  7415                 je 0x5ffda4
// 005ffd8f  8b4500               mov eax, dword ptr [ebp]
// 005ffd92  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 005ffd99  8b4d00               mov ecx, dword ptr [ebp]
// 005ffd9c  8b11                 mov edx, dword ptr [ecx]
// 005ffd9e  55                   push ebp
// 005ffd9f  ffd2                 call edx
// 005ffda1  83c404               add esp, 4
// 005ffda4  891f                 mov dword ptr [edi], ebx
// 005ffda6  897704               mov dword ptr [edi + 4], esi
// 005ffda9  5f                   pop edi
// 005ffdaa  5e                   pop esi
// 005ffdab  5d                   pop ebp
// 005ffdac  b001                 mov al, 1
// 005ffdae  5b                   pop ebx
// 005ffdaf  81c428010000         add esp, 0x128
// 005ffdb5  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dht)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
