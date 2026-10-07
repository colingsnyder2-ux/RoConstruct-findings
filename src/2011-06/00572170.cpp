// roc 2011-06 00572170  unit: seg_00570000  size: 1110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00572170
//
// 00572170  83ec3c               sub esp, 0x3c
// 00572173  53                   push ebx
// 00572174  55                   push ebp
// 00572175  56                   push esi
// 00572176  57                   push edi
// 00572177  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0057217b  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0057217e  8b5104               mov edx, dword ptr [ecx + 4]
// 00572181  8b5838               mov ebx, dword ptr [eax + 0x38]
// 00572184  8b29                 mov ebp, dword ptr [ecx]
// 00572186  4d                   dec ebp
// 00572187  8d542afb             lea edx, [edx + ebp - 5]
// 0057218b  89542414             mov dword ptr [esp + 0x14], edx
// 0057218f  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00572192  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00572195  8bd1                 mov edx, ecx
// 00572197  2b542454             sub edx, dword ptr [esp + 0x54]
// 0057219b  4e                   dec esi
// 0057219c  03d6                 add edx, esi
// 0057219e  8d8c31fffeffff       lea ecx, [ecx + esi - 0x101]
// 005721a5  89542438             mov dword ptr [esp + 0x38], edx
// 005721a9  8b5028               mov edx, dword ptr [eax + 0x28]
// 005721ac  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005721b0  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 005721b3  89542428             mov dword ptr [esp + 0x28], edx
// 005721b7  8b5030               mov edx, dword ptr [eax + 0x30]
// 005721ba  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005721be  8b4834               mov ecx, dword ptr [eax + 0x34]
// 005721c1  89542444             mov dword ptr [esp + 0x44], edx
// 005721c5  8b504c               mov edx, dword ptr [eax + 0x4c]
// 005721c8  894c2440             mov dword ptr [esp + 0x40], ecx
// 005721cc  8b4850               mov ecx, dword ptr [eax + 0x50]
// 005721cf  89542420             mov dword ptr [esp + 0x20], edx
// 005721d3  894c2424             mov dword ptr [esp + 0x24], ecx
// 005721d7  8b4854               mov ecx, dword ptr [eax + 0x54]
// 005721da  ba01000000           mov edx, 1
// 005721df  d3e2                 shl edx, cl
// 005721e1  8b4858               mov ecx, dword ptr [eax + 0x58]
// 005721e4  89442418             mov dword ptr [esp + 0x18], eax
// 005721e8  8b783c               mov edi, dword ptr [eax + 0x3c]
// 005721eb  c744245401000000     mov dword ptr [esp + 0x54], 1
// 005721f3  8b442454             mov eax, dword ptr [esp + 0x54]
// 005721f7  d3e0                 shl eax, cl
// 005721f9  4a                   dec edx
// 005721fa  896c2410             mov dword ptr [esp + 0x10], ebp
// 005721fe  89542448             mov dword ptr [esp + 0x48], edx
// 00572202  48                   dec eax
// 00572203  89442430             mov dword ptr [esp + 0x30], eax
// 00572207  83ff0f               cmp edi, 0xf
// 0057220a  7320                 jae 0x57222c
// 0057220c  0fb64501             movzx eax, byte ptr [ebp + 1]
// 00572210  45                   inc ebp
// 00572211  8bcf                 mov ecx, edi
// 00572213  d3e0                 shl eax, cl
// 00572215  45                   inc ebp
// 00572216  83c708               add edi, 8
// 00572219  8bcf                 mov ecx, edi
// 0057221b  03d8                 add ebx, eax
// 0057221d  0fb64500             movzx eax, byte ptr [ebp]
// 00572221  d3e0                 shl eax, cl
// 00572223  896c2410             mov dword ptr [esp + 0x10], ebp
// 00572227  03d8                 add ebx, eax
// 00572229  83c708               add edi, 8
// 0057222c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00572230  23d3                 and edx, ebx
// 00572232  8b0491               mov eax, dword ptr [ecx + edx*4]
// 00572235  8bd0                 mov edx, eax
// 00572237  c1ea08               shr edx, 8
// 0057223a  0fb6ca               movzx ecx, dl
// 0057223d  0fb6d0               movzx edx, al
// 00572240  d3eb                 shr ebx, cl
// 00572242  2bf9                 sub edi, ecx
// 00572244  85d2                 test edx, edx
// 00572246  7441                 je 0x572289
// 00572248  f6c210               test dl, 0x10
// 0057224b  7547                 jne 0x572294
// 0057224d  f6c240               test dl, 0x40
// 00572250  0f85f4020000         jne 0x57254a
// 00572256  b901000000           mov ecx, 1
// 0057225b  894c2454             mov dword ptr [esp + 0x54], ecx
// 0057225f  8bca                 mov ecx, edx
// 00572261  8b542454             mov edx, dword ptr [esp + 0x54]
// 00572265  d3e2                 shl edx, cl
// 00572267  c1e810               shr eax, 0x10
// 0057226a  4a                   dec edx
// 0057226b  23d3                 and edx, ebx
// 0057226d  03d0                 add edx, eax
// 0057226f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00572273  8b0490               mov eax, dword ptr [eax + edx*4]
// 00572276  8bc8                 mov ecx, eax
// 00572278  c1e908               shr ecx, 8
// 0057227b  0fb6c9               movzx ecx, cl
// 0057227e  0fb6d0               movzx edx, al
// 00572281  d3eb                 shr ebx, cl
// 00572283  2bf9                 sub edi, ecx
// 00572285  85d2                 test edx, edx
// 00572287  75bf                 jne 0x572248
// 00572289  46                   inc esi
// 0057228a  c1e810               shr eax, 0x10
// 0057228d  8806                 mov byte ptr [esi], al
// 0057228f  e92b020000           jmp 0x5724bf
// 00572294  c1e810               shr eax, 0x10
// 00572297  83e20f               and edx, 0xf
// 0057229a  89442454             mov dword ptr [esp + 0x54], eax
// 0057229e  742a                 je 0x5722ca
// 005722a0  3bfa                 cmp edi, edx
// 005722a2  7312                 jae 0x5722b6
// 005722a4  0fb64501             movzx eax, byte ptr [ebp + 1]
// 005722a8  45                   inc ebp
// 005722a9  8bcf                 mov ecx, edi
// 005722ab  d3e0                 shl eax, cl
// 005722ad  896c2410             mov dword ptr [esp + 0x10], ebp
// 005722b1  03d8                 add ebx, eax
// 005722b3  83c708               add edi, 8
// 005722b6  8bca                 mov ecx, edx
// 005722b8  b801000000           mov eax, 1
// 005722bd  d3e0                 shl eax, cl
// 005722bf  48                   dec eax
// 005722c0  23c3                 and eax, ebx
// 005722c2  01442454             add dword ptr [esp + 0x54], eax
// 005722c6  d3eb                 shr ebx, cl
// 005722c8  2bfa                 sub edi, edx
// 005722ca  83ff0f               cmp edi, 0xf
// 005722cd  7320                 jae 0x5722ef
// 005722cf  0fb65501             movzx edx, byte ptr [ebp + 1]
// 005722d3  45                   inc ebp
// 005722d4  0fb64501             movzx eax, byte ptr [ebp + 1]
// 005722d8  8bcf                 mov ecx, edi
// 005722da  45                   inc ebp
// 005722db  d3e2                 shl edx, cl
// 005722dd  83c708               add edi, 8
// 005722e0  8bcf                 mov ecx, edi
// 005722e2  d3e0                 shl eax, cl
// 005722e4  03da                 add ebx, edx
// 005722e6  896c2410             mov dword ptr [esp + 0x10], ebp
// 005722ea  03d8                 add ebx, eax
// 005722ec  83c708               add edi, 8
// 005722ef  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005722f3  8b542424             mov edx, dword ptr [esp + 0x24]
// 005722f7  23cb                 and ecx, ebx
// 005722f9  8b148a               mov edx, dword ptr [edx + ecx*4]
// 005722fc  8bc2                 mov eax, edx
// 005722fe  c1e808               shr eax, 8
// 00572301  0fb6c8               movzx ecx, al
// 00572304  0fb6c2               movzx eax, dl
// 00572307  d3eb                 shr ebx, cl
// 00572309  2bf9                 sub edi, ecx
// 0057230b  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057230f  a810                 test al, 0x10
// 00572311  7539                 jne 0x57234c
// 00572313  a840                 test al, 0x40
// 00572315  0f8522020000         jne 0x57253d
// 0057231b  8bc8                 mov ecx, eax
// 0057231d  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 00572322  ba01000000           mov edx, 1
// 00572327  d3e2                 shl edx, cl
// 00572329  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057232d  4a                   dec edx
// 0057232e  23d3                 and edx, ebx
// 00572330  03d0                 add edx, eax
// 00572332  8b1491               mov edx, dword ptr [ecx + edx*4]
// 00572335  8bc2                 mov eax, edx
// 00572337  c1e808               shr eax, 8
// 0057233a  0fb6c8               movzx ecx, al
// 0057233d  0fb6c2               movzx eax, dl
// 00572340  d3eb                 shr ebx, cl
// 00572342  2bf9                 sub edi, ecx
// 00572344  8954241c             mov dword ptr [esp + 0x1c], edx
// 00572348  a810                 test al, 0x10
// 0057234a  74c7                 je 0x572313
// 0057234c  c1ea10               shr edx, 0x10
// 0057234f  83e00f               and eax, 0xf
// 00572352  8954241c             mov dword ptr [esp + 0x1c], edx
// 00572356  3bf8                 cmp edi, eax
// 00572358  7328                 jae 0x572382
// 0057235a  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0057235e  45                   inc ebp
// 0057235f  8bcf                 mov ecx, edi
// 00572361  d3e2                 shl edx, cl
// 00572363  83c708               add edi, 8
// 00572366  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057236a  03da                 add ebx, edx
// 0057236c  3bf8                 cmp edi, eax
// 0057236e  7312                 jae 0x572382
// 00572370  0fb65501             movzx edx, byte ptr [ebp + 1]
// 00572374  45                   inc ebp
// 00572375  8bcf                 mov ecx, edi
// 00572377  d3e2                 shl edx, cl
// 00572379  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057237d  03da                 add ebx, edx
// 0057237f  83c708               add edi, 8
// 00572382  b901000000           mov ecx, 1
// 00572387  8bd1                 mov edx, ecx
// 00572389  8bc8                 mov ecx, eax
// 0057238b  d3e2                 shl edx, cl
// 0057238d  2bf8                 sub edi, eax
// 0057238f  4a                   dec edx
// 00572390  23d3                 and edx, ebx
// 00572392  8bca                 mov ecx, edx
// 00572394  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00572398  03d1                 add edx, ecx
// 0057239a  8bc8                 mov ecx, eax
// 0057239c  8bc6                 mov eax, esi
// 0057239e  2b442438             sub eax, dword ptr [esp + 0x38]
// 005723a2  d3eb                 shr ebx, cl
// 005723a4  8954241c             mov dword ptr [esp + 0x1c], edx
// 005723a8  3bd0                 cmp edx, eax
// 005723aa  0f862e010000         jbe 0x5724de
// 005723b0  8bea                 mov ebp, edx
// 005723b2  2be8                 sub ebp, eax
// 005723b4  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 005723b8  0f8764010000         ja 0x572522
// 005723be  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005723c2  8b442444             mov eax, dword ptr [esp + 0x44]
// 005723c6  49                   dec ecx
// 005723c7  894c2434             mov dword ptr [esp + 0x34], ecx
// 005723cb  85c0                 test eax, eax
// 005723cd  7524                 jne 0x5723f3
// 005723cf  8b442428             mov eax, dword ptr [esp + 0x28]
// 005723d3  2bc5                 sub eax, ebp
// 005723d5  03c8                 add ecx, eax
// 005723d7  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 005723db  0f8381000000         jae 0x572462
// 005723e1  296c2454             sub dword ptr [esp + 0x54], ebp
// 005723e5  8a4101               mov al, byte ptr [ecx + 1]
// 005723e8  41                   inc ecx
// 005723e9  46                   inc esi
// 005723ea  83ed01               sub ebp, 1
// 005723ed  8806                 mov byte ptr [esi], al
// 005723ef  75f4                 jne 0x5723e5
// 005723f1  eb6b                 jmp 0x57245e
// 005723f3  3bc5                 cmp eax, ebp
// 005723f5  734d                 jae 0x572444
// 005723f7  8bd0                 mov edx, eax
// 005723f9  2bd5                 sub edx, ebp
// 005723fb  03542428             add edx, dword ptr [esp + 0x28]
// 005723ff  2be8                 sub ebp, eax
// 00572401  03ca                 add ecx, edx
// 00572403  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 00572407  7359                 jae 0x572462
// 00572409  296c2454             sub dword ptr [esp + 0x54], ebp
// 0057240d  8d4900               lea ecx, [ecx]
// 00572410  8a5101               mov dl, byte ptr [ecx + 1]
// 00572413  41                   inc ecx
// 00572414  46                   inc esi
// 00572415  83ed01               sub ebp, 1
// 00572418  8816                 mov byte ptr [esi], dl
// 0057241a  75f4                 jne 0x572410
// 0057241c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00572420  3b442454             cmp eax, dword ptr [esp + 0x54]
// 00572424  733c                 jae 0x572462
// 00572426  29442454             sub dword ptr [esp + 0x54], eax
// 0057242a  8be8                 mov ebp, eax
// 0057242c  8d642400             lea esp, [esp]
// 00572430  8a4101               mov al, byte ptr [ecx + 1]
// 00572433  41                   inc ecx
// 00572434  46                   inc esi
// 00572435  83ed01               sub ebp, 1
// 00572438  8806                 mov byte ptr [esi], al
// 0057243a  75f4                 jne 0x572430
// 0057243c  8bce                 mov ecx, esi
// 0057243e  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00572442  eb1e                 jmp 0x572462
// 00572444  2bc5                 sub eax, ebp
// 00572446  03c8                 add ecx, eax
// 00572448  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0057244c  7314                 jae 0x572462
// 0057244e  296c2454             sub dword ptr [esp + 0x54], ebp
// 00572452  8a4101               mov al, byte ptr [ecx + 1]
// 00572455  41                   inc ecx
// 00572456  46                   inc esi
// 00572457  83ed01               sub ebp, 1
// 0057245a  8806                 mov byte ptr [esi], al
// 0057245c  75f4                 jne 0x572452
// 0057245e  8bce                 mov ecx, esi
// 00572460  2bca                 sub ecx, edx
// 00572462  8b442454             mov eax, dword ptr [esp + 0x54]
// 00572466  83f802               cmp eax, 2
// 00572469  7636                 jbe 0x5724a1
// 0057246b  8d50fd               lea edx, [eax - 3]
// 0057246e  b8abaaaaaa           mov eax, 0xaaaaaaab
// 00572473  f7e2                 mul edx
// 00572475  8bea                 mov ebp, edx
// 00572477  d1ed                 shr ebp, 1
// 00572479  45                   inc ebp
// 0057247a  8d9b00000000         lea ebx, [ebx]
// 00572480  0fb64101             movzx eax, byte ptr [ecx + 1]
// 00572484  836c245403           sub dword ptr [esp + 0x54], 3
// 00572489  41                   inc ecx
// 0057248a  46                   inc esi
// 0057248b  8806                 mov byte ptr [esi], al
// 0057248d  8a5101               mov dl, byte ptr [ecx + 1]
// 00572490  41                   inc ecx
// 00572491  46                   inc esi
// 00572492  8816                 mov byte ptr [esi], dl
// 00572494  0fb64101             movzx eax, byte ptr [ecx + 1]
// 00572498  41                   inc ecx
// 00572499  46                   inc esi
// 0057249a  83ed01               sub ebp, 1
// 0057249d  8806                 mov byte ptr [esi], al
// 0057249f  75df                 jne 0x572480
// 005724a1  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 005724a5  85ed                 test ebp, ebp
// 005724a7  7412                 je 0x5724bb
// 005724a9  8a5101               mov dl, byte ptr [ecx + 1]
// 005724ac  41                   inc ecx
// 005724ad  46                   inc esi
// 005724ae  8816                 mov byte ptr [esi], dl
// 005724b0  83fd01               cmp ebp, 1
// 005724b3  7606                 jbe 0x5724bb
// 005724b5  8a4101               mov al, byte ptr [ecx + 1]
// 005724b8  46                   inc esi
// 005724b9  8806                 mov byte ptr [esi], al
// 005724bb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005724bf  8b542414             mov edx, dword ptr [esp + 0x14]
// 005724c3  3bea                 cmp ebp, edx
// 005724c5  0f83a9000000         jae 0x572574
// 005724cb  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 005724cf  0f839f000000         jae 0x572574
// 005724d5  8b542448             mov edx, dword ptr [esp + 0x48]
// 005724d9  e929fdffff           jmp 0x572207
// 005724de  8bc6                 mov eax, esi
// 005724e0  2bc2                 sub eax, edx
// 005724e2  0fb64801             movzx ecx, byte ptr [eax + 1]
// 005724e6  40                   inc eax
// 005724e7  884e01               mov byte ptr [esi + 1], cl
// 005724ea  8a5001               mov dl, byte ptr [eax + 1]
// 005724ed  46                   inc esi
// 005724ee  40                   inc eax
// 005724ef  46                   inc esi
// 005724f0  8816                 mov byte ptr [esi], dl
// 005724f2  0fb64801             movzx ecx, byte ptr [eax + 1]
// 005724f6  40                   inc eax
// 005724f7  46                   inc esi
// 005724f8  880e                 mov byte ptr [esi], cl
// 005724fa  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005724fe  83e903               sub ecx, 3
// 00572501  894c2454             mov dword ptr [esp + 0x54], ecx
// 00572505  83f902               cmp ecx, 2
// 00572508  77d8                 ja 0x5724e2
// 0057250a  85c9                 test ecx, ecx
// 0057250c  74b1                 je 0x5724bf
// 0057250e  8a5001               mov dl, byte ptr [eax + 1]
// 00572511  40                   inc eax
// 00572512  46                   inc esi
// 00572513  8816                 mov byte ptr [esi], dl
// 00572515  83f901               cmp ecx, 1
// 00572518  76a5                 jbe 0x5724bf
// 0057251a  8a4001               mov al, byte ptr [eax + 1]
// 0057251d  46                   inc esi
// 0057251e  8806                 mov byte ptr [esi], al
// 00572520  eb9d                 jmp 0x5724bf
// 00572522  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00572526  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057252a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057252e  c741184056a800       mov dword ptr [ecx + 0x18], 0xa85640
// 00572535  c7021b000000         mov dword ptr [edx], 0x1b
// 0057253b  eb33                 jmp 0x572570
// 0057253d  8b442450             mov eax, dword ptr [esp + 0x50]
// 00572541  c740186056a800       mov dword ptr [eax + 0x18], 0xa85660
// 00572548  eb1c                 jmp 0x572566
// 0057254a  f6c220               test dl, 0x20
// 0057254d  740c                 je 0x57255b
// 0057254f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00572553  c7020b000000         mov dword ptr [edx], 0xb
// 00572559  eb15                 jmp 0x572570
// 0057255b  8b442450             mov eax, dword ptr [esp + 0x50]
// 0057255f  c740187856a800       mov dword ptr [eax + 0x18], 0xa85678
// 00572566  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057256a  c7011b000000         mov dword ptr [ecx], 0x1b
// 00572570  8b542414             mov edx, dword ptr [esp + 0x14]
// 00572574  8bc7                 mov eax, edi
// 00572576  c1e803               shr eax, 3
// 00572579  2be8                 sub ebp, eax
// 0057257b  03c0                 add eax, eax
// 0057257d  03c0                 add eax, eax
// 0057257f  03c0                 add eax, eax
// 00572581  2bf8                 sub edi, eax
// 00572583  8bcf                 mov ecx, edi
// 00572585  b801000000           mov eax, 1
// 0057258a  d3e0                 shl eax, cl
// 0057258c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00572590  2bd5                 sub edx, ebp
// 00572592  83c205               add edx, 5
// 00572595  48                   dec eax
// 00572596  23d8                 and ebx, eax
// 00572598  8d4501               lea eax, [ebp + 1]
// 0057259b  8901                 mov dword ptr [ecx], eax
// 0057259d  8d4601               lea eax, [esi + 1]
// 005725a0  89410c               mov dword ptr [ecx + 0xc], eax
// 005725a3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005725a7  2bc6                 sub eax, esi
// 005725a9  0501010000           add eax, 0x101
// 005725ae  894110               mov dword ptr [ecx + 0x10], eax
// 005725b1  8b442418             mov eax, dword ptr [esp + 0x18]
// 005725b5  895104               mov dword ptr [ecx + 4], edx
// 005725b8  89783c               mov dword ptr [eax + 0x3c], edi
// 005725bb  5f                   pop edi
// 005725bc  5e                   pop esi
// 005725bd  5d                   pop ebp
// 005725be  895838               mov dword ptr [eax + 0x38], ebx
// 005725c1  5b                   pop ebx
// 005725c2  83c43c               add esp, 0x3c
// 005725c5  c3                   ret 
// library zlib-1.2.3/inffast.c (function _inflate_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inffast.c
