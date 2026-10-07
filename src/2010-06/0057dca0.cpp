// roc 2010-06 0057dca0  unit: seg_00570000  size: 1110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057dca0
//
// 0057dca0  83ec3c               sub esp, 0x3c
// 0057dca3  53                   push ebx
// 0057dca4  55                   push ebp
// 0057dca5  56                   push esi
// 0057dca6  57                   push edi
// 0057dca7  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0057dcab  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0057dcae  8b5104               mov edx, dword ptr [ecx + 4]
// 0057dcb1  8b5838               mov ebx, dword ptr [eax + 0x38]
// 0057dcb4  8b29                 mov ebp, dword ptr [ecx]
// 0057dcb6  4d                   dec ebp
// 0057dcb7  8d542afb             lea edx, [edx + ebp - 5]
// 0057dcbb  89542414             mov dword ptr [esp + 0x14], edx
// 0057dcbf  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0057dcc2  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0057dcc5  8bd1                 mov edx, ecx
// 0057dcc7  2b542454             sub edx, dword ptr [esp + 0x54]
// 0057dccb  4e                   dec esi
// 0057dccc  03d6                 add edx, esi
// 0057dcce  8d8c31fffeffff       lea ecx, [ecx + esi - 0x101]
// 0057dcd5  89542438             mov dword ptr [esp + 0x38], edx
// 0057dcd9  8b5028               mov edx, dword ptr [eax + 0x28]
// 0057dcdc  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0057dce0  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0057dce3  89542428             mov dword ptr [esp + 0x28], edx
// 0057dce7  8b5030               mov edx, dword ptr [eax + 0x30]
// 0057dcea  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0057dcee  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0057dcf1  89542444             mov dword ptr [esp + 0x44], edx
// 0057dcf5  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0057dcf8  894c2440             mov dword ptr [esp + 0x40], ecx
// 0057dcfc  8b4850               mov ecx, dword ptr [eax + 0x50]
// 0057dcff  89542420             mov dword ptr [esp + 0x20], edx
// 0057dd03  894c2424             mov dword ptr [esp + 0x24], ecx
// 0057dd07  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0057dd0a  ba01000000           mov edx, 1
// 0057dd0f  d3e2                 shl edx, cl
// 0057dd11  8b4858               mov ecx, dword ptr [eax + 0x58]
// 0057dd14  89442418             mov dword ptr [esp + 0x18], eax
// 0057dd18  8b783c               mov edi, dword ptr [eax + 0x3c]
// 0057dd1b  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0057dd23  8b442454             mov eax, dword ptr [esp + 0x54]
// 0057dd27  d3e0                 shl eax, cl
// 0057dd29  4a                   dec edx
// 0057dd2a  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057dd2e  89542448             mov dword ptr [esp + 0x48], edx
// 0057dd32  48                   dec eax
// 0057dd33  89442430             mov dword ptr [esp + 0x30], eax
// 0057dd37  83ff0f               cmp edi, 0xf
// 0057dd3a  7320                 jae 0x57dd5c
// 0057dd3c  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0057dd40  45                   inc ebp
// 0057dd41  8bcf                 mov ecx, edi
// 0057dd43  d3e0                 shl eax, cl
// 0057dd45  45                   inc ebp
// 0057dd46  83c708               add edi, 8
// 0057dd49  8bcf                 mov ecx, edi
// 0057dd4b  03d8                 add ebx, eax
// 0057dd4d  0fb64500             movzx eax, byte ptr [ebp]
// 0057dd51  d3e0                 shl eax, cl
// 0057dd53  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057dd57  03d8                 add ebx, eax
// 0057dd59  83c708               add edi, 8
// 0057dd5c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057dd60  23d3                 and edx, ebx
// 0057dd62  8b0491               mov eax, dword ptr [ecx + edx*4]
// 0057dd65  8bd0                 mov edx, eax
// 0057dd67  c1ea08               shr edx, 8
// 0057dd6a  0fb6ca               movzx ecx, dl
// 0057dd6d  0fb6d0               movzx edx, al
// 0057dd70  d3eb                 shr ebx, cl
// 0057dd72  2bf9                 sub edi, ecx
// 0057dd74  85d2                 test edx, edx
// 0057dd76  7441                 je 0x57ddb9
// 0057dd78  f6c210               test dl, 0x10
// 0057dd7b  7547                 jne 0x57ddc4
// 0057dd7d  f6c240               test dl, 0x40
// 0057dd80  0f85f4020000         jne 0x57e07a
// 0057dd86  b901000000           mov ecx, 1
// 0057dd8b  894c2454             mov dword ptr [esp + 0x54], ecx
// 0057dd8f  8bca                 mov ecx, edx
// 0057dd91  8b542454             mov edx, dword ptr [esp + 0x54]
// 0057dd95  d3e2                 shl edx, cl
// 0057dd97  c1e810               shr eax, 0x10
// 0057dd9a  4a                   dec edx
// 0057dd9b  23d3                 and edx, ebx
// 0057dd9d  03d0                 add edx, eax
// 0057dd9f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057dda3  8b0490               mov eax, dword ptr [eax + edx*4]
// 0057dda6  8bc8                 mov ecx, eax
// 0057dda8  c1e908               shr ecx, 8
// 0057ddab  0fb6c9               movzx ecx, cl
// 0057ddae  0fb6d0               movzx edx, al
// 0057ddb1  d3eb                 shr ebx, cl
// 0057ddb3  2bf9                 sub edi, ecx
// 0057ddb5  85d2                 test edx, edx
// 0057ddb7  75bf                 jne 0x57dd78
// 0057ddb9  46                   inc esi
// 0057ddba  c1e810               shr eax, 0x10
// 0057ddbd  8806                 mov byte ptr [esi], al
// 0057ddbf  e92b020000           jmp 0x57dfef
// 0057ddc4  c1e810               shr eax, 0x10
// 0057ddc7  83e20f               and edx, 0xf
// 0057ddca  89442454             mov dword ptr [esp + 0x54], eax
// 0057ddce  742a                 je 0x57ddfa
// 0057ddd0  3bfa                 cmp edi, edx
// 0057ddd2  7312                 jae 0x57dde6
// 0057ddd4  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0057ddd8  45                   inc ebp
// 0057ddd9  8bcf                 mov ecx, edi
// 0057dddb  d3e0                 shl eax, cl
// 0057dddd  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057dde1  03d8                 add ebx, eax
// 0057dde3  83c708               add edi, 8
// 0057dde6  8bca                 mov ecx, edx
// 0057dde8  b801000000           mov eax, 1
// 0057dded  d3e0                 shl eax, cl
// 0057ddef  48                   dec eax
// 0057ddf0  23c3                 and eax, ebx
// 0057ddf2  01442454             add dword ptr [esp + 0x54], eax
// 0057ddf6  d3eb                 shr ebx, cl
// 0057ddf8  2bfa                 sub edi, edx
// 0057ddfa  83ff0f               cmp edi, 0xf
// 0057ddfd  7320                 jae 0x57de1f
// 0057ddff  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0057de03  45                   inc ebp
// 0057de04  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0057de08  8bcf                 mov ecx, edi
// 0057de0a  45                   inc ebp
// 0057de0b  d3e2                 shl edx, cl
// 0057de0d  83c708               add edi, 8
// 0057de10  8bcf                 mov ecx, edi
// 0057de12  d3e0                 shl eax, cl
// 0057de14  03da                 add ebx, edx
// 0057de16  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057de1a  03d8                 add ebx, eax
// 0057de1c  83c708               add edi, 8
// 0057de1f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057de23  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057de27  23cb                 and ecx, ebx
// 0057de29  8b148a               mov edx, dword ptr [edx + ecx*4]
// 0057de2c  8bc2                 mov eax, edx
// 0057de2e  c1e808               shr eax, 8
// 0057de31  0fb6c8               movzx ecx, al
// 0057de34  0fb6c2               movzx eax, dl
// 0057de37  d3eb                 shr ebx, cl
// 0057de39  2bf9                 sub edi, ecx
// 0057de3b  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057de3f  a810                 test al, 0x10
// 0057de41  7539                 jne 0x57de7c
// 0057de43  a840                 test al, 0x40
// 0057de45  0f8522020000         jne 0x57e06d
// 0057de4b  8bc8                 mov ecx, eax
// 0057de4d  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 0057de52  ba01000000           mov edx, 1
// 0057de57  d3e2                 shl edx, cl
// 0057de59  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057de5d  4a                   dec edx
// 0057de5e  23d3                 and edx, ebx
// 0057de60  03d0                 add edx, eax
// 0057de62  8b1491               mov edx, dword ptr [ecx + edx*4]
// 0057de65  8bc2                 mov eax, edx
// 0057de67  c1e808               shr eax, 8
// 0057de6a  0fb6c8               movzx ecx, al
// 0057de6d  0fb6c2               movzx eax, dl
// 0057de70  d3eb                 shr ebx, cl
// 0057de72  2bf9                 sub edi, ecx
// 0057de74  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057de78  a810                 test al, 0x10
// 0057de7a  74c7                 je 0x57de43
// 0057de7c  c1ea10               shr edx, 0x10
// 0057de7f  83e00f               and eax, 0xf
// 0057de82  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057de86  3bf8                 cmp edi, eax
// 0057de88  7328                 jae 0x57deb2
// 0057de8a  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0057de8e  45                   inc ebp
// 0057de8f  8bcf                 mov ecx, edi
// 0057de91  d3e2                 shl edx, cl
// 0057de93  83c708               add edi, 8
// 0057de96  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057de9a  03da                 add ebx, edx
// 0057de9c  3bf8                 cmp edi, eax
// 0057de9e  7312                 jae 0x57deb2
// 0057dea0  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0057dea4  45                   inc ebp
// 0057dea5  8bcf                 mov ecx, edi
// 0057dea7  d3e2                 shl edx, cl
// 0057dea9  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057dead  03da                 add ebx, edx
// 0057deaf  83c708               add edi, 8
// 0057deb2  b901000000           mov ecx, 1
// 0057deb7  8bd1                 mov edx, ecx
// 0057deb9  8bc8                 mov ecx, eax
// 0057debb  d3e2                 shl edx, cl
// 0057debd  2bf8                 sub edi, eax
// 0057debf  4a                   dec edx
// 0057dec0  23d3                 and edx, ebx
// 0057dec2  8bca                 mov ecx, edx
// 0057dec4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057dec8  03d1                 add edx, ecx
// 0057deca  8bc8                 mov ecx, eax
// 0057decc  8bc6                 mov eax, esi
// 0057dece  2b442438             sub eax, dword ptr [esp + 0x38]
// 0057ded2  d3eb                 shr ebx, cl
// 0057ded4  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057ded8  3bd0                 cmp edx, eax
// 0057deda  0f862e010000         jbe 0x57e00e
// 0057dee0  8bea                 mov ebp, edx
// 0057dee2  2be8                 sub ebp, eax
// 0057dee4  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 0057dee8  0f8764010000         ja 0x57e052
// 0057deee  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0057def2  8b442444             mov eax, dword ptr [esp + 0x44]
// 0057def6  49                   dec ecx
// 0057def7  894c2434             mov dword ptr [esp + 0x34], ecx
// 0057defb  85c0                 test eax, eax
// 0057defd  7524                 jne 0x57df23
// 0057deff  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057df03  2bc5                 sub eax, ebp
// 0057df05  03c8                 add ecx, eax
// 0057df07  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0057df0b  0f8381000000         jae 0x57df92
// 0057df11  296c2454             sub dword ptr [esp + 0x54], ebp
// 0057df15  8a4101               mov al, byte ptr [ecx + 1]
// 0057df18  41                   inc ecx
// 0057df19  46                   inc esi
// 0057df1a  83ed01               sub ebp, 1
// 0057df1d  8806                 mov byte ptr [esi], al
// 0057df1f  75f4                 jne 0x57df15
// 0057df21  eb6b                 jmp 0x57df8e
// 0057df23  3bc5                 cmp eax, ebp
// 0057df25  734d                 jae 0x57df74
// 0057df27  8bd0                 mov edx, eax
// 0057df29  2bd5                 sub edx, ebp
// 0057df2b  03542428             add edx, dword ptr [esp + 0x28]
// 0057df2f  2be8                 sub ebp, eax
// 0057df31  03ca                 add ecx, edx
// 0057df33  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0057df37  7359                 jae 0x57df92
// 0057df39  296c2454             sub dword ptr [esp + 0x54], ebp
// 0057df3d  8d4900               lea ecx, [ecx]
// 0057df40  8a5101               mov dl, byte ptr [ecx + 1]
// 0057df43  41                   inc ecx
// 0057df44  46                   inc esi
// 0057df45  83ed01               sub ebp, 1
// 0057df48  8816                 mov byte ptr [esi], dl
// 0057df4a  75f4                 jne 0x57df40
// 0057df4c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057df50  3b442454             cmp eax, dword ptr [esp + 0x54]
// 0057df54  733c                 jae 0x57df92
// 0057df56  29442454             sub dword ptr [esp + 0x54], eax
// 0057df5a  8be8                 mov ebp, eax
// 0057df5c  8d642400             lea esp, [esp]
// 0057df60  8a4101               mov al, byte ptr [ecx + 1]
// 0057df63  41                   inc ecx
// 0057df64  46                   inc esi
// 0057df65  83ed01               sub ebp, 1
// 0057df68  8806                 mov byte ptr [esi], al
// 0057df6a  75f4                 jne 0x57df60
// 0057df6c  8bce                 mov ecx, esi
// 0057df6e  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0057df72  eb1e                 jmp 0x57df92
// 0057df74  2bc5                 sub eax, ebp
// 0057df76  03c8                 add ecx, eax
// 0057df78  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0057df7c  7314                 jae 0x57df92
// 0057df7e  296c2454             sub dword ptr [esp + 0x54], ebp
// 0057df82  8a4101               mov al, byte ptr [ecx + 1]
// 0057df85  41                   inc ecx
// 0057df86  46                   inc esi
// 0057df87  83ed01               sub ebp, 1
// 0057df8a  8806                 mov byte ptr [esi], al
// 0057df8c  75f4                 jne 0x57df82
// 0057df8e  8bce                 mov ecx, esi
// 0057df90  2bca                 sub ecx, edx
// 0057df92  8b442454             mov eax, dword ptr [esp + 0x54]
// 0057df96  83f802               cmp eax, 2
// 0057df99  7636                 jbe 0x57dfd1
// 0057df9b  8d50fd               lea edx, [eax - 3]
// 0057df9e  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0057dfa3  f7e2                 mul edx
// 0057dfa5  8bea                 mov ebp, edx
// 0057dfa7  d1ed                 shr ebp, 1
// 0057dfa9  45                   inc ebp
// 0057dfaa  8d9b00000000         lea ebx, [ebx]
// 0057dfb0  0fb64101             movzx eax, byte ptr [ecx + 1]
// 0057dfb4  836c245403           sub dword ptr [esp + 0x54], 3
// 0057dfb9  41                   inc ecx
// 0057dfba  46                   inc esi
// 0057dfbb  8806                 mov byte ptr [esi], al
// 0057dfbd  8a5101               mov dl, byte ptr [ecx + 1]
// 0057dfc0  41                   inc ecx
// 0057dfc1  46                   inc esi
// 0057dfc2  8816                 mov byte ptr [esi], dl
// 0057dfc4  0fb64101             movzx eax, byte ptr [ecx + 1]
// 0057dfc8  41                   inc ecx
// 0057dfc9  46                   inc esi
// 0057dfca  83ed01               sub ebp, 1
// 0057dfcd  8806                 mov byte ptr [esi], al
// 0057dfcf  75df                 jne 0x57dfb0
// 0057dfd1  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0057dfd5  85ed                 test ebp, ebp
// 0057dfd7  7412                 je 0x57dfeb
// 0057dfd9  8a5101               mov dl, byte ptr [ecx + 1]
// 0057dfdc  41                   inc ecx
// 0057dfdd  46                   inc esi
// 0057dfde  8816                 mov byte ptr [esi], dl
// 0057dfe0  83fd01               cmp ebp, 1
// 0057dfe3  7606                 jbe 0x57dfeb
// 0057dfe5  8a4101               mov al, byte ptr [ecx + 1]
// 0057dfe8  46                   inc esi
// 0057dfe9  8806                 mov byte ptr [esi], al
// 0057dfeb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057dfef  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057dff3  3bea                 cmp ebp, edx
// 0057dff5  0f83a9000000         jae 0x57e0a4
// 0057dffb  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 0057dfff  0f839f000000         jae 0x57e0a4
// 0057e005  8b542448             mov edx, dword ptr [esp + 0x48]
// 0057e009  e929fdffff           jmp 0x57dd37
// 0057e00e  8bc6                 mov eax, esi
// 0057e010  2bc2                 sub eax, edx
// 0057e012  0fb64801             movzx ecx, byte ptr [eax + 1]
// 0057e016  40                   inc eax
// 0057e017  884e01               mov byte ptr [esi + 1], cl
// 0057e01a  8a5001               mov dl, byte ptr [eax + 1]
// 0057e01d  46                   inc esi
// 0057e01e  40                   inc eax
// 0057e01f  46                   inc esi
// 0057e020  8816                 mov byte ptr [esi], dl
// 0057e022  0fb64801             movzx ecx, byte ptr [eax + 1]
// 0057e026  40                   inc eax
// 0057e027  46                   inc esi
// 0057e028  880e                 mov byte ptr [esi], cl
// 0057e02a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0057e02e  83e903               sub ecx, 3
// 0057e031  894c2454             mov dword ptr [esp + 0x54], ecx
// 0057e035  83f902               cmp ecx, 2
// 0057e038  77d8                 ja 0x57e012
// 0057e03a  85c9                 test ecx, ecx
// 0057e03c  74b1                 je 0x57dfef
// 0057e03e  8a5001               mov dl, byte ptr [eax + 1]
// 0057e041  40                   inc eax
// 0057e042  46                   inc esi
// 0057e043  8816                 mov byte ptr [esi], dl
// 0057e045  83f901               cmp ecx, 1
// 0057e048  76a5                 jbe 0x57dfef
// 0057e04a  8a4001               mov al, byte ptr [eax + 1]
// 0057e04d  46                   inc esi
// 0057e04e  8806                 mov byte ptr [esi], al
// 0057e050  eb9d                 jmp 0x57dfef
// 0057e052  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0057e056  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057e05a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057e05e  c741188069a200       mov dword ptr [ecx + 0x18], 0xa26980
// 0057e065  c7021b000000         mov dword ptr [edx], 0x1b
// 0057e06b  eb33                 jmp 0x57e0a0
// 0057e06d  8b442450             mov eax, dword ptr [esp + 0x50]
// 0057e071  c74018a069a200       mov dword ptr [eax + 0x18], 0xa269a0
// 0057e078  eb1c                 jmp 0x57e096
// 0057e07a  f6c220               test dl, 0x20
// 0057e07d  740c                 je 0x57e08b
// 0057e07f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057e083  c7020b000000         mov dword ptr [edx], 0xb
// 0057e089  eb15                 jmp 0x57e0a0
// 0057e08b  8b442450             mov eax, dword ptr [esp + 0x50]
// 0057e08f  c74018b869a200       mov dword ptr [eax + 0x18], 0xa269b8
// 0057e096  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057e09a  c7011b000000         mov dword ptr [ecx], 0x1b
// 0057e0a0  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057e0a4  8bc7                 mov eax, edi
// 0057e0a6  c1e803               shr eax, 3
// 0057e0a9  2be8                 sub ebp, eax
// 0057e0ab  03c0                 add eax, eax
// 0057e0ad  03c0                 add eax, eax
// 0057e0af  03c0                 add eax, eax
// 0057e0b1  2bf8                 sub edi, eax
// 0057e0b3  8bcf                 mov ecx, edi
// 0057e0b5  b801000000           mov eax, 1
// 0057e0ba  d3e0                 shl eax, cl
// 0057e0bc  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0057e0c0  2bd5                 sub edx, ebp
// 0057e0c2  83c205               add edx, 5
// 0057e0c5  48                   dec eax
// 0057e0c6  23d8                 and ebx, eax
// 0057e0c8  8d4501               lea eax, [ebp + 1]
// 0057e0cb  8901                 mov dword ptr [ecx], eax
// 0057e0cd  8d4601               lea eax, [esi + 1]
// 0057e0d0  89410c               mov dword ptr [ecx + 0xc], eax
// 0057e0d3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057e0d7  2bc6                 sub eax, esi
// 0057e0d9  0501010000           add eax, 0x101
// 0057e0de  894110               mov dword ptr [ecx + 0x10], eax
// 0057e0e1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057e0e5  895104               mov dword ptr [ecx + 4], edx
// 0057e0e8  89783c               mov dword ptr [eax + 0x3c], edi
// 0057e0eb  5f                   pop edi
// 0057e0ec  5e                   pop esi
// 0057e0ed  5d                   pop ebp
// 0057e0ee  895838               mov dword ptr [eax + 0x38], ebx
// 0057e0f1  5b                   pop ebx
// 0057e0f2  83c43c               add esp, 0x3c
// 0057e0f5  c3                   ret 
// library zlib-1.2.3/inffast.c (function _inflate_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inffast.c
