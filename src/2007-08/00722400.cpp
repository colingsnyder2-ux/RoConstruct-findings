// from server: 100% by auto
// roc 2007-08 00722400  unit: CXTIconHandle  size: 1208 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00722400
//
// 00722400  83ec3c               sub esp, 0x3c
// 00722403  53                   push ebx
// 00722404  55                   push ebp
// 00722405  56                   push esi
// 00722406  57                   push edi
// 00722407  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0072240b  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0072240e  8b5104               mov edx, dword ptr [ecx + 4]
// 00722411  8b5838               mov ebx, dword ptr [eax + 0x38]
// 00722414  8b29                 mov ebp, dword ptr [ecx]
// 00722416  83ed01               sub ebp, 1
// 00722419  8d542afb             lea edx, [edx + ebp - 5]
// 0072241d  89542414             mov dword ptr [esp + 0x14], edx
// 00722421  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00722424  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00722427  8bd1                 mov edx, ecx
// 00722429  2b542454             sub edx, dword ptr [esp + 0x54]
// 0072242d  83ee01               sub esi, 1
// 00722430  03d6                 add edx, esi
// 00722432  8d8c31fffeffff       lea ecx, [ecx + esi - 0x101]
// 00722439  89542438             mov dword ptr [esp + 0x38], edx
// 0072243d  8b5028               mov edx, dword ptr [eax + 0x28]
// 00722440  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00722444  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00722447  89542428             mov dword ptr [esp + 0x28], edx
// 0072244b  8b5030               mov edx, dword ptr [eax + 0x30]
// 0072244e  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00722452  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00722455  89542444             mov dword ptr [esp + 0x44], edx
// 00722459  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0072245c  894c2440             mov dword ptr [esp + 0x40], ecx
// 00722460  8b4850               mov ecx, dword ptr [eax + 0x50]
// 00722463  89542420             mov dword ptr [esp + 0x20], edx
// 00722467  894c2424             mov dword ptr [esp + 0x24], ecx
// 0072246b  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0072246e  ba01000000           mov edx, 1
// 00722473  d3e2                 shl edx, cl
// 00722475  8b4858               mov ecx, dword ptr [eax + 0x58]
// 00722478  89442418             mov dword ptr [esp + 0x18], eax
// 0072247c  8b783c               mov edi, dword ptr [eax + 0x3c]
// 0072247f  c744245401000000     mov dword ptr [esp + 0x54], 1
// 00722487  8b442454             mov eax, dword ptr [esp + 0x54]
// 0072248b  d3e0                 shl eax, cl
// 0072248d  83ea01               sub edx, 1
// 00722490  896c2410             mov dword ptr [esp + 0x10], ebp
// 00722494  89542448             mov dword ptr [esp + 0x48], edx
// 00722498  83e801               sub eax, 1
// 0072249b  89442430             mov dword ptr [esp + 0x30], eax
// 0072249f  90                   nop 
// 007224a0  83ff0f               cmp edi, 0xf
// 007224a3  7324                 jae 0x7224c9
// 007224a5  0fb64501             movzx eax, byte ptr [ebp + 1]
// 007224a9  83c501               add ebp, 1
// 007224ac  8bcf                 mov ecx, edi
// 007224ae  d3e0                 shl eax, cl
// 007224b0  83c501               add ebp, 1
// 007224b3  83c708               add edi, 8
// 007224b6  8bcf                 mov ecx, edi
// 007224b8  03d8                 add ebx, eax
// 007224ba  0fb64500             movzx eax, byte ptr [ebp]
// 007224be  d3e0                 shl eax, cl
// 007224c0  896c2410             mov dword ptr [esp + 0x10], ebp
// 007224c4  03d8                 add ebx, eax
// 007224c6  83c708               add edi, 8
// 007224c9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007224cd  23d3                 and edx, ebx
// 007224cf  8b0491               mov eax, dword ptr [ecx + edx*4]
// 007224d2  8bd0                 mov edx, eax
// 007224d4  c1ea08               shr edx, 8
// 007224d7  0fb6ca               movzx ecx, dl
// 007224da  0fb6d0               movzx edx, al
// 007224dd  d3eb                 shr ebx, cl
// 007224df  2bf9                 sub edi, ecx
// 007224e1  85d2                 test edx, edx
// 007224e3  7443                 je 0x722528
// 007224e5  f6c210               test dl, 0x10
// 007224e8  754b                 jne 0x722535
// 007224ea  f6c240               test dl, 0x40
// 007224ed  0f8547030000         jne 0x72283a
// 007224f3  b901000000           mov ecx, 1
// 007224f8  894c2454             mov dword ptr [esp + 0x54], ecx
// 007224fc  8bca                 mov ecx, edx
// 007224fe  8b542454             mov edx, dword ptr [esp + 0x54]
// 00722502  d3e2                 shl edx, cl
// 00722504  c1e810               shr eax, 0x10
// 00722507  83ea01               sub edx, 1
// 0072250a  23d3                 and edx, ebx
// 0072250c  03d0                 add edx, eax
// 0072250e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00722512  8b0490               mov eax, dword ptr [eax + edx*4]
// 00722515  8bc8                 mov ecx, eax
// 00722517  c1e908               shr ecx, 8
// 0072251a  0fb6c9               movzx ecx, cl
// 0072251d  0fb6d0               movzx edx, al
// 00722520  d3eb                 shr ebx, cl
// 00722522  2bf9                 sub edi, ecx
// 00722524  85d2                 test edx, edx
// 00722526  75bd                 jne 0x7224e5
// 00722528  83c601               add esi, 1
// 0072252b  c1e810               shr eax, 0x10
// 0072252e  8806                 mov byte ptr [esi], al
// 00722530  e960020000           jmp 0x722795
// 00722535  c1e810               shr eax, 0x10
// 00722538  83e20f               and edx, 0xf
// 0072253b  89442454             mov dword ptr [esp + 0x54], eax
// 0072253f  742e                 je 0x72256f
// 00722541  3bfa                 cmp edi, edx
// 00722543  7314                 jae 0x722559
// 00722545  0fb64501             movzx eax, byte ptr [ebp + 1]
// 00722549  83c501               add ebp, 1
// 0072254c  8bcf                 mov ecx, edi
// 0072254e  d3e0                 shl eax, cl
// 00722550  896c2410             mov dword ptr [esp + 0x10], ebp
// 00722554  03d8                 add ebx, eax
// 00722556  83c708               add edi, 8
// 00722559  8bca                 mov ecx, edx
// 0072255b  b801000000           mov eax, 1
// 00722560  d3e0                 shl eax, cl
// 00722562  83e801               sub eax, 1
// 00722565  23c3                 and eax, ebx
// 00722567  01442454             add dword ptr [esp + 0x54], eax
// 0072256b  d3eb                 shr ebx, cl
// 0072256d  2bfa                 sub edi, edx
// 0072256f  83ff0f               cmp edi, 0xf
// 00722572  7324                 jae 0x722598
// 00722574  0fb65501             movzx edx, byte ptr [ebp + 1]
// 00722578  83c501               add ebp, 1
// 0072257b  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0072257f  8bcf                 mov ecx, edi
// 00722581  83c501               add ebp, 1
// 00722584  d3e2                 shl edx, cl
// 00722586  83c708               add edi, 8
// 00722589  8bcf                 mov ecx, edi
// 0072258b  d3e0                 shl eax, cl
// 0072258d  03da                 add ebx, edx
// 0072258f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00722593  03d8                 add ebx, eax
// 00722595  83c708               add edi, 8
// 00722598  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0072259c  8b542424             mov edx, dword ptr [esp + 0x24]
// 007225a0  23cb                 and ecx, ebx
// 007225a2  8b148a               mov edx, dword ptr [edx + ecx*4]
// 007225a5  8bc2                 mov eax, edx
// 007225a7  c1e808               shr eax, 8
// 007225aa  0fb6c8               movzx ecx, al
// 007225ad  0fb6c2               movzx eax, dl
// 007225b0  d3eb                 shr ebx, cl
// 007225b2  2bf9                 sub edi, ecx
// 007225b4  a810                 test al, 0x10
// 007225b6  8954241c             mov dword ptr [esp + 0x1c], edx
// 007225ba  753f                 jne 0x7225fb
// 007225bc  8d642400             lea esp, [esp]
// 007225c0  a840                 test al, 0x40
// 007225c2  0f8565020000         jne 0x72282d
// 007225c8  8bc8                 mov ecx, eax
// 007225ca  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 007225cf  ba01000000           mov edx, 1
// 007225d4  d3e2                 shl edx, cl
// 007225d6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007225da  83ea01               sub edx, 1
// 007225dd  23d3                 and edx, ebx
// 007225df  03d0                 add edx, eax
// 007225e1  8b1491               mov edx, dword ptr [ecx + edx*4]
// 007225e4  8bc2                 mov eax, edx
// 007225e6  c1e808               shr eax, 8
// 007225e9  0fb6c8               movzx ecx, al
// 007225ec  0fb6c2               movzx eax, dl
// 007225ef  d3eb                 shr ebx, cl
// 007225f1  2bf9                 sub edi, ecx
// 007225f3  a810                 test al, 0x10
// 007225f5  8954241c             mov dword ptr [esp + 0x1c], edx
// 007225f9  74c5                 je 0x7225c0
// 007225fb  c1ea10               shr edx, 0x10
// 007225fe  83e00f               and eax, 0xf
// 00722601  3bf8                 cmp edi, eax
// 00722603  8954241c             mov dword ptr [esp + 0x1c], edx
// 00722607  732c                 jae 0x722635
// 00722609  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0072260d  83c501               add ebp, 1
// 00722610  8bcf                 mov ecx, edi
// 00722612  d3e2                 shl edx, cl
// 00722614  83c708               add edi, 8
// 00722617  896c2410             mov dword ptr [esp + 0x10], ebp
// 0072261b  03da                 add ebx, edx
// 0072261d  3bf8                 cmp edi, eax
// 0072261f  7314                 jae 0x722635
// 00722621  0fb65501             movzx edx, byte ptr [ebp + 1]
// 00722625  83c501               add ebp, 1
// 00722628  8bcf                 mov ecx, edi
// 0072262a  d3e2                 shl edx, cl
// 0072262c  896c2410             mov dword ptr [esp + 0x10], ebp
// 00722630  03da                 add ebx, edx
// 00722632  83c708               add edi, 8
// 00722635  b901000000           mov ecx, 1
// 0072263a  8bd1                 mov edx, ecx
// 0072263c  8bc8                 mov ecx, eax
// 0072263e  d3e2                 shl edx, cl
// 00722640  2bf8                 sub edi, eax
// 00722642  83ea01               sub edx, 1
// 00722645  23d3                 and edx, ebx
// 00722647  8bca                 mov ecx, edx
// 00722649  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0072264d  03d1                 add edx, ecx
// 0072264f  8bc8                 mov ecx, eax
// 00722651  8bc6                 mov eax, esi
// 00722653  2b442438             sub eax, dword ptr [esp + 0x38]
// 00722657  d3eb                 shr ebx, cl
// 00722659  3bd0                 cmp edx, eax
// 0072265b  8954241c             mov dword ptr [esp + 0x1c], edx
// 0072265f  0f864f010000         jbe 0x7227b4
// 00722665  8bea                 mov ebp, edx
// 00722667  2be8                 sub ebp, eax
// 00722669  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 0072266d  0f879f010000         ja 0x722812
// 00722673  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00722677  8b442444             mov eax, dword ptr [esp + 0x44]
// 0072267b  83c1ff               add ecx, -1
// 0072267e  85c0                 test eax, eax
// 00722680  894c2434             mov dword ptr [esp + 0x34], ecx
// 00722684  752c                 jne 0x7226b2
// 00722686  8b442428             mov eax, dword ptr [esp + 0x28]
// 0072268a  2bc5                 sub eax, ebp
// 0072268c  03c8                 add ecx, eax
// 0072268e  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 00722692  0f8392000000         jae 0x72272a
// 00722698  296c2454             sub dword ptr [esp + 0x54], ebp
// 0072269c  8d642400             lea esp, [esp]
// 007226a0  8a4101               mov al, byte ptr [ecx + 1]
// 007226a3  83c101               add ecx, 1
// 007226a6  83c601               add esi, 1
// 007226a9  83ed01               sub ebp, 1
// 007226ac  8806                 mov byte ptr [esi], al
// 007226ae  75f0                 jne 0x7226a0
// 007226b0  eb74                 jmp 0x722726
// 007226b2  3bc5                 cmp eax, ebp
// 007226b4  7352                 jae 0x722708
// 007226b6  8bd0                 mov edx, eax
// 007226b8  2bd5                 sub edx, ebp
// 007226ba  03542428             add edx, dword ptr [esp + 0x28]
// 007226be  2be8                 sub ebp, eax
// 007226c0  03ca                 add ecx, edx
// 007226c2  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 007226c6  7362                 jae 0x72272a
// 007226c8  296c2454             sub dword ptr [esp + 0x54], ebp
// 007226cc  8d642400             lea esp, [esp]
// 007226d0  8a5101               mov dl, byte ptr [ecx + 1]
// 007226d3  83c101               add ecx, 1
// 007226d6  83c601               add esi, 1
// 007226d9  83ed01               sub ebp, 1
// 007226dc  8816                 mov byte ptr [esi], dl
// 007226de  75f0                 jne 0x7226d0
// 007226e0  3b442454             cmp eax, dword ptr [esp + 0x54]
// 007226e4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007226e8  7340                 jae 0x72272a
// 007226ea  29442454             sub dword ptr [esp + 0x54], eax
// 007226ee  8be8                 mov ebp, eax
// 007226f0  8a4101               mov al, byte ptr [ecx + 1]
// 007226f3  83c101               add ecx, 1
// 007226f6  83c601               add esi, 1
// 007226f9  83ed01               sub ebp, 1
// 007226fc  8806                 mov byte ptr [esi], al
// 007226fe  75f0                 jne 0x7226f0
// 00722700  8bce                 mov ecx, esi
// 00722702  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00722706  eb22                 jmp 0x72272a
// 00722708  2bc5                 sub eax, ebp
// 0072270a  03c8                 add ecx, eax
// 0072270c  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 00722710  7318                 jae 0x72272a
// 00722712  296c2454             sub dword ptr [esp + 0x54], ebp
// 00722716  8a4101               mov al, byte ptr [ecx + 1]
// 00722719  83c101               add ecx, 1
// 0072271c  83c601               add esi, 1
// 0072271f  83ed01               sub ebp, 1
// 00722722  8806                 mov byte ptr [esi], al
// 00722724  75f0                 jne 0x722716
// 00722726  8bce                 mov ecx, esi
// 00722728  2bca                 sub ecx, edx
// 0072272a  8b442454             mov eax, dword ptr [esp + 0x54]
// 0072272e  83f802               cmp eax, 2
// 00722731  763e                 jbe 0x722771
// 00722733  8d50fd               lea edx, [eax - 3]
// 00722736  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0072273b  f7e2                 mul edx
// 0072273d  8bea                 mov ebp, edx
// 0072273f  d1ed                 shr ebp, 1
// 00722741  83c501               add ebp, 1
// 00722744  0fb64101             movzx eax, byte ptr [ecx + 1]
// 00722748  836c245403           sub dword ptr [esp + 0x54], 3
// 0072274d  83c101               add ecx, 1
// 00722750  83c601               add esi, 1
// 00722753  8806                 mov byte ptr [esi], al
// 00722755  8a5101               mov dl, byte ptr [ecx + 1]
// 00722758  83c101               add ecx, 1
// 0072275b  83c601               add esi, 1
// 0072275e  8816                 mov byte ptr [esi], dl
// 00722760  0fb64101             movzx eax, byte ptr [ecx + 1]
// 00722764  83c101               add ecx, 1
// 00722767  83c601               add esi, 1
// 0072276a  83ed01               sub ebp, 1
// 0072276d  8806                 mov byte ptr [esi], al
// 0072276f  75d3                 jne 0x722744
// 00722771  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 00722775  85ed                 test ebp, ebp
// 00722777  7418                 je 0x722791
// 00722779  8a5101               mov dl, byte ptr [ecx + 1]
// 0072277c  83c101               add ecx, 1
// 0072277f  83c601               add esi, 1
// 00722782  83fd01               cmp ebp, 1
// 00722785  8816                 mov byte ptr [esi], dl
// 00722787  7608                 jbe 0x722791
// 00722789  8a4101               mov al, byte ptr [ecx + 1]
// 0072278c  83c601               add esi, 1
// 0072278f  8806                 mov byte ptr [esi], al
// 00722791  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00722795  8b542414             mov edx, dword ptr [esp + 0x14]
// 00722799  3bea                 cmp ebp, edx
// 0072279b  0f83c3000000         jae 0x722864
// 007227a1  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 007227a5  0f83b9000000         jae 0x722864
// 007227ab  8b542448             mov edx, dword ptr [esp + 0x48]
// 007227af  e9ecfcffff           jmp 0x7224a0
// 007227b4  8bc6                 mov eax, esi
// 007227b6  2bc2                 sub eax, edx
// 007227b8  eb06                 jmp 0x7227c0
// 007227ba  8d9b00000000         lea ebx, [ebx]
// 007227c0  0fb64801             movzx ecx, byte ptr [eax + 1]
// 007227c4  83c001               add eax, 1
// 007227c7  884e01               mov byte ptr [esi + 1], cl
// 007227ca  8a5001               mov dl, byte ptr [eax + 1]
// 007227cd  83c601               add esi, 1
// 007227d0  83c001               add eax, 1
// 007227d3  83c601               add esi, 1
// 007227d6  8816                 mov byte ptr [esi], dl
// 007227d8  0fb64801             movzx ecx, byte ptr [eax + 1]
// 007227dc  83c001               add eax, 1
// 007227df  83c601               add esi, 1
// 007227e2  880e                 mov byte ptr [esi], cl
// 007227e4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007227e8  83e903               sub ecx, 3
// 007227eb  83f902               cmp ecx, 2
// 007227ee  894c2454             mov dword ptr [esp + 0x54], ecx
// 007227f2  77cc                 ja 0x7227c0
// 007227f4  85c9                 test ecx, ecx
// 007227f6  749d                 je 0x722795
// 007227f8  8a5001               mov dl, byte ptr [eax + 1]
// 007227fb  83c001               add eax, 1
// 007227fe  83c601               add esi, 1
// 00722801  83f901               cmp ecx, 1
// 00722804  8816                 mov byte ptr [esi], dl
// 00722806  768d                 jbe 0x722795
// 00722808  8a4001               mov al, byte ptr [eax + 1]
// 0072280b  83c601               add esi, 1
// 0072280e  8806                 mov byte ptr [esi], al
// 00722810  eb83                 jmp 0x722795
// 00722812  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00722816  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072281a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0072281e  c74118081f7e00       mov dword ptr [ecx + 0x18], 0x7e1f08
// 00722825  c7021b000000         mov dword ptr [edx], 0x1b
// 0072282b  eb33                 jmp 0x722860
// 0072282d  8b442450             mov eax, dword ptr [esp + 0x50]
// 00722831  c74018281f7e00       mov dword ptr [eax + 0x18], 0x7e1f28
// 00722838  eb1c                 jmp 0x722856
// 0072283a  f6c220               test dl, 0x20
// 0072283d  740c                 je 0x72284b
// 0072283f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00722843  c7020b000000         mov dword ptr [edx], 0xb
// 00722849  eb15                 jmp 0x722860
// 0072284b  8b442450             mov eax, dword ptr [esp + 0x50]
// 0072284f  c74018401f7e00       mov dword ptr [eax + 0x18], 0x7e1f40
// 00722856  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072285a  c7011b000000         mov dword ptr [ecx], 0x1b
// 00722860  8b542414             mov edx, dword ptr [esp + 0x14]
// 00722864  8bc7                 mov eax, edi
// 00722866  c1e803               shr eax, 3
// 00722869  2be8                 sub ebp, eax
// 0072286b  03c0                 add eax, eax
// 0072286d  03c0                 add eax, eax
// 0072286f  03c0                 add eax, eax
// 00722871  2bf8                 sub edi, eax
// 00722873  8bcf                 mov ecx, edi
// 00722875  b801000000           mov eax, 1
// 0072287a  d3e0                 shl eax, cl
// 0072287c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00722880  2bd5                 sub edx, ebp
// 00722882  83c205               add edx, 5
// 00722885  83e801               sub eax, 1
// 00722888  23d8                 and ebx, eax
// 0072288a  8d4501               lea eax, [ebp + 1]
// 0072288d  8901                 mov dword ptr [ecx], eax
// 0072288f  8d4601               lea eax, [esi + 1]
// 00722892  89410c               mov dword ptr [ecx + 0xc], eax
// 00722895  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00722899  2bc6                 sub eax, esi
// 0072289b  0501010000           add eax, 0x101
// 007228a0  894110               mov dword ptr [ecx + 0x10], eax
// 007228a3  8b442418             mov eax, dword ptr [esp + 0x18]
// 007228a7  895104               mov dword ptr [ecx + 4], edx
// 007228aa  89783c               mov dword ptr [eax + 0x3c], edi
// 007228ad  5f                   pop edi
// 007228ae  5e                   pop esi
// 007228af  5d                   pop ebp
// 007228b0  895838               mov dword ptr [eax + 0x38], ebx
// 007228b3  5b                   pop ebx
// 007228b4  83c43c               add esp, 0x3c
// 007228b7  c3                   ret 
// library zlib-1.2.3/inffast.c (function _inflate_fast)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inffast.c
