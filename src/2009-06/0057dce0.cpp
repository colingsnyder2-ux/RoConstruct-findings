// from server: 100% by auto
// roc 2009-06 0057dce0  unit: G3D::_internal::DialogTemplate  size: 758 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057dce0
//
// 0057dce0  81ec28010000         sub esp, 0x128
// 0057dce6  53                   push ebx
// 0057dce7  55                   push ebp
// 0057dce8  8bac2434010000       mov ebp, dword ptr [esp + 0x134]
// 0057dcef  56                   push esi
// 0057dcf0  57                   push edi
// 0057dcf1  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 0057dcf4  8b7704               mov esi, dword ptr [edi + 4]
// 0057dcf7  8b1f                 mov ebx, dword ptr [edi]
// 0057dcf9  897c2430             mov dword ptr [esp + 0x30], edi
// 0057dcfd  85f6                 test esi, esi
// 0057dcff  7521                 jne 0x57dd22
// 0057dd01  8b470c               mov eax, dword ptr [edi + 0xc]
// 0057dd04  55                   push ebp
// 0057dd05  ffd0                 call eax
// 0057dd07  83c404               add esp, 4
// 0057dd0a  84c0                 test al, al
// 0057dd0c  750d                 jne 0x57dd1b
// 0057dd0e  5f                   pop edi
// 0057dd0f  5e                   pop esi
// 0057dd10  5d                   pop ebp
// 0057dd11  32c0                 xor al, al
// 0057dd13  5b                   pop ebx
// 0057dd14  81c428010000         add esp, 0x128
// 0057dd1a  c3                   ret 
// 0057dd1b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057dd1e  8b1f                 mov ebx, dword ptr [edi]
// 0057dd20  8bf1                 mov esi, ecx
// 0057dd22  0fb603               movzx eax, byte ptr [ebx]
// 0057dd25  4e                   dec esi
// 0057dd26  c1e008               shl eax, 8
// 0057dd29  43                   inc ebx
// 0057dd2a  89442414             mov dword ptr [esp + 0x14], eax
// 0057dd2e  85f6                 test esi, esi
// 0057dd30  7518                 jne 0x57dd4a
// 0057dd32  8b570c               mov edx, dword ptr [edi + 0xc]
// 0057dd35  55                   push ebp
// 0057dd36  ffd2                 call edx
// 0057dd38  83c404               add esp, 4
// 0057dd3b  84c0                 test al, al
// 0057dd3d  74cf                 je 0x57dd0e
// 0057dd3f  8b4704               mov eax, dword ptr [edi + 4]
// 0057dd42  8b1f                 mov ebx, dword ptr [edi]
// 0057dd44  8bf0                 mov esi, eax
// 0057dd46  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057dd4a  0fb60b               movzx ecx, byte ptr [ebx]
// 0057dd4d  03c1                 add eax, ecx
// 0057dd4f  83e802               sub eax, 2
// 0057dd52  4e                   dec esi
// 0057dd53  43                   inc ebx
// 0057dd54  83f810               cmp eax, 0x10
// 0057dd57  89442414             mov dword ptr [esp + 0x14], eax
// 0057dd5b  0f8e4a020000         jle 0x57dfab
// 0057dd61  85f6                 test esi, esi
// 0057dd63  7518                 jne 0x57dd7d
// 0057dd65  8b570c               mov edx, dword ptr [edi + 0xc]
// 0057dd68  55                   push ebp
// 0057dd69  ffd2                 call edx
// 0057dd6b  83c404               add esp, 4
// 0057dd6e  84c0                 test al, al
// 0057dd70  749c                 je 0x57dd0e
// 0057dd72  8b4704               mov eax, dword ptr [edi + 4]
// 0057dd75  8b1f                 mov ebx, dword ptr [edi]
// 0057dd77  89442410             mov dword ptr [esp + 0x10], eax
// 0057dd7b  8bf0                 mov esi, eax
// 0057dd7d  0fb603               movzx eax, byte ptr [ebx]
// 0057dd80  8b4d00               mov ecx, dword ptr [ebp]
// 0057dd83  c7411450000000       mov dword ptr [ecx + 0x14], 0x50
// 0057dd8a  8b5500               mov edx, dword ptr [ebp]
// 0057dd8d  894218               mov dword ptr [edx + 0x18], eax
// 0057dd90  89442434             mov dword ptr [esp + 0x34], eax
// 0057dd94  8b4500               mov eax, dword ptr [ebp]
// 0057dd97  8b4804               mov ecx, dword ptr [eax + 4]
// 0057dd9a  6a01                 push 1
// 0057dd9c  55                   push ebp
// 0057dd9d  4e                   dec esi
// 0057dd9e  43                   inc ebx
// 0057dd9f  ffd1                 call ecx
// 0057dda1  83c408               add esp, 8
// 0057dda4  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0057dda9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057ddb1  bf01000000           mov edi, 1
// 0057ddb6  85f6                 test esi, esi
// 0057ddb8  751c                 jne 0x57ddd6
// 0057ddba  8b742430             mov esi, dword ptr [esp + 0x30]
// 0057ddbe  8b560c               mov edx, dword ptr [esi + 0xc]
// 0057ddc1  55                   push ebp
// 0057ddc2  ffd2                 call edx
// 0057ddc4  83c404               add esp, 4
// 0057ddc7  84c0                 test al, al
// 0057ddc9  0f843fffffff         je 0x57dd0e
// 0057ddcf  8b4604               mov eax, dword ptr [esi + 4]
// 0057ddd2  8b1e                 mov ebx, dword ptr [esi]
// 0057ddd4  8bf0                 mov esi, eax
// 0057ddd6  8a0b                 mov cl, byte ptr [ebx]
// 0057ddd8  0fb6d1               movzx edx, cl
// 0057dddb  01542418             add dword ptr [esp + 0x18], edx
// 0057dddf  884c3c1c             mov byte ptr [esp + edi + 0x1c], cl
// 0057dde3  4e                   dec esi
// 0057dde4  47                   inc edi
// 0057dde5  43                   inc ebx
// 0057dde6  83ff10               cmp edi, 0x10
// 0057dde9  89742410             mov dword ptr [esp + 0x10], esi
// 0057dded  7ec7                 jle 0x57ddb6
// 0057ddef  8b4500               mov eax, dword ptr [ebp]
// 0057ddf2  0fb64c241d           movzx ecx, byte ptr [esp + 0x1d]
// 0057ddf7  0fb654241e           movzx edx, byte ptr [esp + 0x1e]
// 0057ddfc  83c018               add eax, 0x18
// 0057ddff  836c241411           sub dword ptr [esp + 0x14], 0x11
// 0057de04  8908                 mov dword ptr [eax], ecx
// 0057de06  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 0057de0b  895004               mov dword ptr [eax + 4], edx
// 0057de0e  0fb6542420           movzx edx, byte ptr [esp + 0x20]
// 0057de13  894808               mov dword ptr [eax + 8], ecx
// 0057de16  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 0057de1b  89500c               mov dword ptr [eax + 0xc], edx
// 0057de1e  0fb6542422           movzx edx, byte ptr [esp + 0x22]
// 0057de23  894810               mov dword ptr [eax + 0x10], ecx
// 0057de26  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 0057de2b  895014               mov dword ptr [eax + 0x14], edx
// 0057de2e  0fb6542424           movzx edx, byte ptr [esp + 0x24]
// 0057de33  894818               mov dword ptr [eax + 0x18], ecx
// 0057de36  89501c               mov dword ptr [eax + 0x1c], edx
// 0057de39  8b4500               mov eax, dword ptr [ebp]
// 0057de3c  bf56000000           mov edi, 0x56
// 0057de41  897814               mov dword ptr [eax + 0x14], edi
// 0057de44  8b4d00               mov ecx, dword ptr [ebp]
// 0057de47  8b5104               mov edx, dword ptr [ecx + 4]
// 0057de4a  6a02                 push 2
// 0057de4c  55                   push ebp
// 0057de4d  ffd2                 call edx
// 0057de4f  8b4500               mov eax, dword ptr [ebp]
// 0057de52  0fb64c242d           movzx ecx, byte ptr [esp + 0x2d]
// 0057de57  0fb654242e           movzx edx, byte ptr [esp + 0x2e]
// 0057de5c  83c018               add eax, 0x18
// 0057de5f  8908                 mov dword ptr [eax], ecx
// 0057de61  0fb64c242f           movzx ecx, byte ptr [esp + 0x2f]
// 0057de66  895004               mov dword ptr [eax + 4], edx
// 0057de69  0fb6542430           movzx edx, byte ptr [esp + 0x30]
// 0057de6e  894808               mov dword ptr [eax + 8], ecx
// 0057de71  0fb64c2431           movzx ecx, byte ptr [esp + 0x31]
// 0057de76  89500c               mov dword ptr [eax + 0xc], edx
// 0057de79  0fb6542432           movzx edx, byte ptr [esp + 0x32]
// 0057de7e  894810               mov dword ptr [eax + 0x10], ecx
// 0057de81  0fb64c2433           movzx ecx, byte ptr [esp + 0x33]
// 0057de86  895014               mov dword ptr [eax + 0x14], edx
// 0057de89  0fb6542434           movzx edx, byte ptr [esp + 0x34]
// 0057de8e  894818               mov dword ptr [eax + 0x18], ecx
// 0057de91  89501c               mov dword ptr [eax + 0x1c], edx
// 0057de94  8b4500               mov eax, dword ptr [ebp]
// 0057de97  897814               mov dword ptr [eax + 0x14], edi
// 0057de9a  8b4d00               mov ecx, dword ptr [ebp]
// 0057de9d  8b5104               mov edx, dword ptr [ecx + 4]
// 0057dea0  6a02                 push 2
// 0057dea2  55                   push ebp
// 0057dea3  ffd2                 call edx
// 0057dea5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057dea9  83c410               add esp, 0x10
// 0057deac  3d00010000           cmp eax, 0x100
// 0057deb1  7f06                 jg 0x57deb9
// 0057deb3  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0057deb7  7e15                 jle 0x57dece
// 0057deb9  8b4500               mov eax, dword ptr [ebp]
// 0057debc  c7401408000000       mov dword ptr [eax + 0x14], 8
// 0057dec3  8b4d00               mov ecx, dword ptr [ebp]
// 0057dec6  8b11                 mov edx, dword ptr [ecx]
// 0057dec8  55                   push ebp
// 0057dec9  ffd2                 call edx
// 0057decb  83c404               add esp, 4
// 0057dece  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057ded2  33ff                 xor edi, edi
// 0057ded4  85c0                 test eax, eax
// 0057ded6  7e35                 jle 0x57df0d
// 0057ded8  85f6                 test esi, esi
// 0057deda  7520                 jne 0x57defc
// 0057dedc  8b742430             mov esi, dword ptr [esp + 0x30]
// 0057dee0  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057dee3  55                   push ebp
// 0057dee4  ffd0                 call eax
// 0057dee6  83c404               add esp, 4
// 0057dee9  84c0                 test al, al
// 0057deeb  0f841dfeffff         je 0x57dd0e
// 0057def1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0057def4  8b1e                 mov ebx, dword ptr [esi]
// 0057def6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057defa  8bf1                 mov esi, ecx
// 0057defc  8a13                 mov dl, byte ptr [ebx]
// 0057defe  88543c38             mov byte ptr [esp + edi + 0x38], dl
// 0057df02  4e                   dec esi
// 0057df03  47                   inc edi
// 0057df04  43                   inc ebx
// 0057df05  3bf8                 cmp edi, eax
// 0057df07  89742410             mov dword ptr [esp + 0x10], esi
// 0057df0b  7ccb                 jl 0x57ded8
// 0057df0d  29442414             sub dword ptr [esp + 0x14], eax
// 0057df11  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057df15  a810                 test al, 0x10
// 0057df17  740c                 je 0x57df25
// 0057df19  83e810               sub eax, 0x10
// 0057df1c  8db485b0000000       lea esi, [ebp + eax*4 + 0xb0]
// 0057df23  eb07                 jmp 0x57df2c
// 0057df25  8db485a0000000       lea esi, [ebp + eax*4 + 0xa0]
// 0057df2c  85c0                 test eax, eax
// 0057df2e  7c05                 jl 0x57df35
// 0057df30  83f804               cmp eax, 4
// 0057df33  7c1b                 jl 0x57df50
// 0057df35  8b4d00               mov ecx, dword ptr [ebp]
// 0057df38  c741141e000000       mov dword ptr [ecx + 0x14], 0x1e
// 0057df3f  8b5500               mov edx, dword ptr [ebp]
// 0057df42  894218               mov dword ptr [edx + 0x18], eax
// 0057df45  8b4500               mov eax, dword ptr [ebp]
// 0057df48  8b08                 mov ecx, dword ptr [eax]
// 0057df4a  55                   push ebp
// 0057df4b  ffd1                 call ecx
// 0057df4d  83c404               add esp, 4
// 0057df50  833e00               cmp dword ptr [esi], 0
// 0057df53  750b                 jne 0x57df60
// 0057df55  55                   push ebp
// 0057df56  e845110000           call 0x57f0a0
// 0057df5b  83c404               add esp, 4
// 0057df5e  8906                 mov dword ptr [esi], eax
// 0057df60  8b06                 mov eax, dword ptr [esi]
// 0057df62  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057df66  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057df6a  8910                 mov dword ptr [eax], edx
// 0057df6c  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057df70  894804               mov dword ptr [eax + 4], ecx
// 0057df73  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057df77  895008               mov dword ptr [eax + 8], edx
// 0057df7a  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 0057df7e  89480c               mov dword ptr [eax + 0xc], ecx
// 0057df81  885010               mov byte ptr [eax + 0x10], dl
// 0057df84  8b3e                 mov edi, dword ptr [esi]
// 0057df86  83c711               add edi, 0x11
// 0057df89  837c241410           cmp dword ptr [esp + 0x14], 0x10
// 0057df8e  b940000000           mov ecx, 0x40
// 0057df93  8d742438             lea esi, [esp + 0x38]
// 0057df97  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0057df99  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057df9d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0057dfa1  0f8fbafdffff         jg 0x57dd61
// 0057dfa7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057dfab  85c0                 test eax, eax
// 0057dfad  7415                 je 0x57dfc4
// 0057dfaf  8b4500               mov eax, dword ptr [ebp]
// 0057dfb2  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 0057dfb9  8b4d00               mov ecx, dword ptr [ebp]
// 0057dfbc  8b11                 mov edx, dword ptr [ecx]
// 0057dfbe  55                   push ebp
// 0057dfbf  ffd2                 call edx
// 0057dfc1  83c404               add esp, 4
// 0057dfc4  891f                 mov dword ptr [edi], ebx
// 0057dfc6  897704               mov dword ptr [edi + 4], esi
// 0057dfc9  5f                   pop edi
// 0057dfca  5e                   pop esi
// 0057dfcb  5d                   pop ebp
// 0057dfcc  b001                 mov al, 1
// 0057dfce  5b                   pop ebx
// 0057dfcf  81c428010000         add esp, 0x128
// 0057dfd5  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dht)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
