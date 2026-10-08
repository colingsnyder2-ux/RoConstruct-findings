// from server: 100% by auto
// roc 2007-08 00512500  unit: G3D::_internal::DialogTemplate  size: 810 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00512500
//
// 00512500  81ec2c010000         sub esp, 0x12c
// 00512506  a188518b00           mov eax, dword ptr [0x8b5188]
// 0051250b  33c4                 xor eax, esp
// 0051250d  89842428010000       mov dword ptr [esp + 0x128], eax
// 00512514  53                   push ebx
// 00512515  55                   push ebp
// 00512516  8bac2438010000       mov ebp, dword ptr [esp + 0x138]
// 0051251d  56                   push esi
// 0051251e  57                   push edi
// 0051251f  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 00512522  8b7704               mov esi, dword ptr [edi + 4]
// 00512525  85f6                 test esi, esi
// 00512527  8b1f                 mov ebx, dword ptr [edi]
// 00512529  897c241c             mov dword ptr [esp + 0x1c], edi
// 0051252d  751b                 jne 0x51254a
// 0051252f  8b470c               mov eax, dword ptr [edi + 0xc]
// 00512532  55                   push ebp
// 00512533  ffd0                 call eax
// 00512535  83c404               add esp, 4
// 00512538  84c0                 test al, al
// 0051253a  7507                 jne 0x512543
// 0051253c  32c0                 xor al, al
// 0051253e  e9ce020000           jmp 0x512811
// 00512543  8b4f04               mov ecx, dword ptr [edi + 4]
// 00512546  8b1f                 mov ebx, dword ptr [edi]
// 00512548  8bf1                 mov esi, ecx
// 0051254a  33c0                 xor eax, eax
// 0051254c  8a23                 mov ah, byte ptr [ebx]
// 0051254e  83ee01               sub esi, 1
// 00512551  83c301               add ebx, 1
// 00512554  85f6                 test esi, esi
// 00512556  89442414             mov dword ptr [esp + 0x14], eax
// 0051255a  7518                 jne 0x512574
// 0051255c  8b570c               mov edx, dword ptr [edi + 0xc]
// 0051255f  55                   push ebp
// 00512560  ffd2                 call edx
// 00512562  83c404               add esp, 4
// 00512565  84c0                 test al, al
// 00512567  74d3                 je 0x51253c
// 00512569  8b4704               mov eax, dword ptr [edi + 4]
// 0051256c  8b1f                 mov ebx, dword ptr [edi]
// 0051256e  8bf0                 mov esi, eax
// 00512570  8b442414             mov eax, dword ptr [esp + 0x14]
// 00512574  0fb60b               movzx ecx, byte ptr [ebx]
// 00512577  03c1                 add eax, ecx
// 00512579  83e802               sub eax, 2
// 0051257c  83ee01               sub esi, 1
// 0051257f  83c301               add ebx, 1
// 00512582  83f810               cmp eax, 0x10
// 00512585  89442414             mov dword ptr [esp + 0x14], eax
// 00512589  0f8e62020000         jle 0x5127f1
// 0051258f  90                   nop 
// 00512590  85f6                 test esi, esi
// 00512592  7518                 jne 0x5125ac
// 00512594  8b570c               mov edx, dword ptr [edi + 0xc]
// 00512597  55                   push ebp
// 00512598  ffd2                 call edx
// 0051259a  83c404               add esp, 4
// 0051259d  84c0                 test al, al
// 0051259f  749b                 je 0x51253c
// 005125a1  8b4704               mov eax, dword ptr [edi + 4]
// 005125a4  8b1f                 mov ebx, dword ptr [edi]
// 005125a6  89442410             mov dword ptr [esp + 0x10], eax
// 005125aa  8bf0                 mov esi, eax
// 005125ac  0fb603               movzx eax, byte ptr [ebx]
// 005125af  8b4d00               mov ecx, dword ptr [ebp]
// 005125b2  c7411450000000       mov dword ptr [ecx + 0x14], 0x50
// 005125b9  8b5500               mov edx, dword ptr [ebp]
// 005125bc  894218               mov dword ptr [edx + 0x18], eax
// 005125bf  89442420             mov dword ptr [esp + 0x20], eax
// 005125c3  8b4500               mov eax, dword ptr [ebp]
// 005125c6  8b4804               mov ecx, dword ptr [eax + 4]
// 005125c9  6a01                 push 1
// 005125cb  55                   push ebp
// 005125cc  83ee01               sub esi, 1
// 005125cf  83c301               add ebx, 1
// 005125d2  ffd1                 call ecx
// 005125d4  83c408               add esp, 8
// 005125d7  c644242400           mov byte ptr [esp + 0x24], 0
// 005125dc  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005125e4  bf01000000           mov edi, 1
// 005125e9  8da42400000000       lea esp, [esp]
// 005125f0  85f6                 test esi, esi
// 005125f2  751c                 jne 0x512610
// 005125f4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005125f8  8b560c               mov edx, dword ptr [esi + 0xc]
// 005125fb  55                   push ebp
// 005125fc  ffd2                 call edx
// 005125fe  83c404               add esp, 4
// 00512601  84c0                 test al, al
// 00512603  0f8433ffffff         je 0x51253c
// 00512609  8b4604               mov eax, dword ptr [esi + 4]
// 0051260c  8b1e                 mov ebx, dword ptr [esi]
// 0051260e  8bf0                 mov esi, eax
// 00512610  8a0b                 mov cl, byte ptr [ebx]
// 00512612  0fb6d1               movzx edx, cl
// 00512615  01542418             add dword ptr [esp + 0x18], edx
// 00512619  884c3c24             mov byte ptr [esp + edi + 0x24], cl
// 0051261d  83ee01               sub esi, 1
// 00512620  83c701               add edi, 1
// 00512623  83c301               add ebx, 1
// 00512626  83ff10               cmp edi, 0x10
// 00512629  89742410             mov dword ptr [esp + 0x10], esi
// 0051262d  7ec1                 jle 0x5125f0
// 0051262f  8b4500               mov eax, dword ptr [ebp]
// 00512632  0fb64c2425           movzx ecx, byte ptr [esp + 0x25]
// 00512637  0fb6542426           movzx edx, byte ptr [esp + 0x26]
// 0051263c  83c018               add eax, 0x18
// 0051263f  836c241411           sub dword ptr [esp + 0x14], 0x11
// 00512644  8908                 mov dword ptr [eax], ecx
// 00512646  0fb64c2427           movzx ecx, byte ptr [esp + 0x27]
// 0051264b  895004               mov dword ptr [eax + 4], edx
// 0051264e  0fb6542428           movzx edx, byte ptr [esp + 0x28]
// 00512653  894808               mov dword ptr [eax + 8], ecx
// 00512656  0fb64c2429           movzx ecx, byte ptr [esp + 0x29]
// 0051265b  89500c               mov dword ptr [eax + 0xc], edx
// 0051265e  0fb654242a           movzx edx, byte ptr [esp + 0x2a]
// 00512663  894810               mov dword ptr [eax + 0x10], ecx
// 00512666  0fb64c242b           movzx ecx, byte ptr [esp + 0x2b]
// 0051266b  895014               mov dword ptr [eax + 0x14], edx
// 0051266e  0fb654242c           movzx edx, byte ptr [esp + 0x2c]
// 00512673  894818               mov dword ptr [eax + 0x18], ecx
// 00512676  89501c               mov dword ptr [eax + 0x1c], edx
// 00512679  8b4500               mov eax, dword ptr [ebp]
// 0051267c  bf56000000           mov edi, 0x56
// 00512681  897814               mov dword ptr [eax + 0x14], edi
// 00512684  8b4d00               mov ecx, dword ptr [ebp]
// 00512687  8b5104               mov edx, dword ptr [ecx + 4]
// 0051268a  6a02                 push 2
// 0051268c  55                   push ebp
// 0051268d  ffd2                 call edx
// 0051268f  8b4500               mov eax, dword ptr [ebp]
// 00512692  0fb64c2435           movzx ecx, byte ptr [esp + 0x35]
// 00512697  0fb6542436           movzx edx, byte ptr [esp + 0x36]
// 0051269c  83c018               add eax, 0x18
// 0051269f  8908                 mov dword ptr [eax], ecx
// 005126a1  0fb64c2437           movzx ecx, byte ptr [esp + 0x37]
// 005126a6  895004               mov dword ptr [eax + 4], edx
// 005126a9  0fb6542438           movzx edx, byte ptr [esp + 0x38]
// 005126ae  894808               mov dword ptr [eax + 8], ecx
// 005126b1  0fb64c2439           movzx ecx, byte ptr [esp + 0x39]
// 005126b6  89500c               mov dword ptr [eax + 0xc], edx
// 005126b9  0fb654243a           movzx edx, byte ptr [esp + 0x3a]
// 005126be  894810               mov dword ptr [eax + 0x10], ecx
// 005126c1  0fb64c243b           movzx ecx, byte ptr [esp + 0x3b]
// 005126c6  895014               mov dword ptr [eax + 0x14], edx
// 005126c9  0fb654243c           movzx edx, byte ptr [esp + 0x3c]
// 005126ce  894818               mov dword ptr [eax + 0x18], ecx
// 005126d1  89501c               mov dword ptr [eax + 0x1c], edx
// 005126d4  8b4500               mov eax, dword ptr [ebp]
// 005126d7  897814               mov dword ptr [eax + 0x14], edi
// 005126da  8b4d00               mov ecx, dword ptr [ebp]
// 005126dd  8b5104               mov edx, dword ptr [ecx + 4]
// 005126e0  6a02                 push 2
// 005126e2  55                   push ebp
// 005126e3  ffd2                 call edx
// 005126e5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005126e9  83c410               add esp, 0x10
// 005126ec  3d00010000           cmp eax, 0x100
// 005126f1  7f06                 jg 0x5126f9
// 005126f3  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005126f7  7e15                 jle 0x51270e
// 005126f9  8b4500               mov eax, dword ptr [ebp]
// 005126fc  c7401408000000       mov dword ptr [eax + 0x14], 8
// 00512703  8b4d00               mov ecx, dword ptr [ebp]
// 00512706  8b11                 mov edx, dword ptr [ecx]
// 00512708  55                   push ebp
// 00512709  ffd2                 call edx
// 0051270b  83c404               add esp, 4
// 0051270e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00512712  33ff                 xor edi, edi
// 00512714  85c0                 test eax, eax
// 00512716  7e3b                 jle 0x512753
// 00512718  85f6                 test esi, esi
// 0051271a  7520                 jne 0x51273c
// 0051271c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00512720  8b460c               mov eax, dword ptr [esi + 0xc]
// 00512723  55                   push ebp
// 00512724  ffd0                 call eax
// 00512726  83c404               add esp, 4
// 00512729  84c0                 test al, al
// 0051272b  0f840bfeffff         je 0x51253c
// 00512731  8b4e04               mov ecx, dword ptr [esi + 4]
// 00512734  8b1e                 mov ebx, dword ptr [esi]
// 00512736  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051273a  8bf1                 mov esi, ecx
// 0051273c  8a13                 mov dl, byte ptr [ebx]
// 0051273e  88543c38             mov byte ptr [esp + edi + 0x38], dl
// 00512742  83ee01               sub esi, 1
// 00512745  83c701               add edi, 1
// 00512748  83c301               add ebx, 1
// 0051274b  3bf8                 cmp edi, eax
// 0051274d  89742410             mov dword ptr [esp + 0x10], esi
// 00512751  7cc5                 jl 0x512718
// 00512753  29442414             sub dword ptr [esp + 0x14], eax
// 00512757  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051275b  a810                 test al, 0x10
// 0051275d  740c                 je 0x51276b
// 0051275f  83e810               sub eax, 0x10
// 00512762  8db485b0000000       lea esi, [ebp + eax*4 + 0xb0]
// 00512769  eb07                 jmp 0x512772
// 0051276b  8db485a0000000       lea esi, [ebp + eax*4 + 0xa0]
// 00512772  85c0                 test eax, eax
// 00512774  7c05                 jl 0x51277b
// 00512776  83f804               cmp eax, 4
// 00512779  7c1b                 jl 0x512796
// 0051277b  8b4d00               mov ecx, dword ptr [ebp]
// 0051277e  c741141e000000       mov dword ptr [ecx + 0x14], 0x1e
// 00512785  8b5500               mov edx, dword ptr [ebp]
// 00512788  894218               mov dword ptr [edx + 0x18], eax
// 0051278b  8b4500               mov eax, dword ptr [ebp]
// 0051278e  8b08                 mov ecx, dword ptr [eax]
// 00512790  55                   push ebp
// 00512791  ffd1                 call ecx
// 00512793  83c404               add esp, 4
// 00512796  833e00               cmp dword ptr [esi], 0
// 00512799  750b                 jne 0x5127a6
// 0051279b  55                   push ebp
// 0051279c  e89f110000           call 0x513940
// 005127a1  83c404               add esp, 4
// 005127a4  8906                 mov dword ptr [esi], eax
// 005127a6  8b06                 mov eax, dword ptr [esi]
// 005127a8  8b542424             mov edx, dword ptr [esp + 0x24]
// 005127ac  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005127b0  8910                 mov dword ptr [eax], edx
// 005127b2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005127b6  894804               mov dword ptr [eax + 4], ecx
// 005127b9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005127bd  895008               mov dword ptr [eax + 8], edx
// 005127c0  8a542434             mov dl, byte ptr [esp + 0x34]
// 005127c4  89480c               mov dword ptr [eax + 0xc], ecx
// 005127c7  885010               mov byte ptr [eax + 0x10], dl
// 005127ca  8b3e                 mov edi, dword ptr [esi]
// 005127cc  83c711               add edi, 0x11
// 005127cf  837c241410           cmp dword ptr [esp + 0x14], 0x10
// 005127d4  b940000000           mov ecx, 0x40
// 005127d9  8d742438             lea esi, [esp + 0x38]
// 005127dd  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005127df  8b742410             mov esi, dword ptr [esp + 0x10]
// 005127e3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005127e7  0f8fa3fdffff         jg 0x512590
// 005127ed  8b442414             mov eax, dword ptr [esp + 0x14]
// 005127f1  85c0                 test eax, eax
// 005127f3  7415                 je 0x51280a
// 005127f5  8b4500               mov eax, dword ptr [ebp]
// 005127f8  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 005127ff  8b4d00               mov ecx, dword ptr [ebp]
// 00512802  8b11                 mov edx, dword ptr [ecx]
// 00512804  55                   push ebp
// 00512805  ffd2                 call edx
// 00512807  83c404               add esp, 4
// 0051280a  891f                 mov dword ptr [edi], ebx
// 0051280c  897704               mov dword ptr [edi + 4], esi
// 0051280f  b001                 mov al, 1
// 00512811  8b8c2438010000       mov ecx, dword ptr [esp + 0x138]
// 00512818  5f                   pop edi
// 00512819  5e                   pop esi
// 0051281a  5d                   pop ebp
// 0051281b  5b                   pop ebx
// 0051281c  33cc                 xor ecx, esp
// 0051281e  e8fbe11100           call 0x630a1e
// 00512823  81c42c010000         add esp, 0x12c
// 00512829  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dht)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jdmarker.c
