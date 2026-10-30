// roc 2009-12 006072e0  unit: seg_00600000  size: 4256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006072e0
//
// 006072e0  83ec10               sub esp, 0x10
// 006072e3  837c242000           cmp dword ptr [esp + 0x20], 0
// 006072e8  8b442414             mov eax, dword ptr [esp + 0x14]
// 006072ec  8b08                 mov ecx, dword ptr [eax]
// 006072ee  890c24               mov dword ptr [esp], ecx
// 006072f1  0f8440100000         je 0x608337
// 006072f7  8a4008               mov al, byte ptr [eax + 8]
// 006072fa  55                   push ebp
// 006072fb  a804                 test al, 4
// 006072fd  7416                 je 0x607315
// 006072ff  3c03                 cmp al, 3
// 00607301  0f842f100000         je 0x608336
// 00607307  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0060730b  85ed                 test ebp, ebp
// 0060730d  0f8423100000         je 0x608336
// 00607313  eb04                 jmp 0x607319
// 00607315  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00607319  0fb6c0               movzx eax, al
// 0060731c  83f806               cmp eax, 6
// 0060731f  0f87ce0f0000         ja 0x6082f3
// 00607325  53                   push ebx
// 00607326  56                   push esi
// 00607327  57                   push edi
// 00607328  ff24853c836000       jmp dword ptr [eax*4 + 0x60833c]
// 0060732f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00607333  0fb64209             movzx eax, byte ptr [edx + 9]
// 00607337  48                   dec eax
// 00607338  83f80f               cmp eax, 0xf
// 0060733b  0f87af0f0000         ja 0x6082f0
// 00607341  0fb68070836000       movzx eax, byte ptr [eax + 0x608370]
// 00607348  ff248558836000       jmp dword ptr [eax*4 + 0x608358]
// 0060734f  8b742428             mov esi, dword ptr [esp + 0x28]
// 00607353  ba07000000           mov edx, 7
// 00607358  85c9                 test ecx, ecx
// 0060735a  0f86900f0000         jbe 0x6082f0
// 00607360  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00607364  8be9                 mov ebp, ecx
// 00607366  8a1e                 mov bl, byte ptr [esi]
// 00607368  8ac3                 mov al, bl
// 0060736a  8aca                 mov cl, dl
// 0060736c  d2e8                 shr al, cl
// 0060736e  2401                 and al, 1
// 00607370  660fb6c8             movzx cx, al
// 00607374  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00607378  663b4808             cmp cx, word ptr [eax + 8]
// 0060737c  751d                 jne 0x60739b
// 0060737e  b907000000           mov ecx, 7
// 00607383  2bca                 sub ecx, edx
// 00607385  b87f7f0000           mov eax, 0x7f7f
// 0060738a  d3f8                 sar eax, cl
// 0060738c  8bca                 mov ecx, edx
// 0060738e  22c3                 and al, bl
// 00607390  8806                 mov byte ptr [esi], al
// 00607392  8a5f08               mov bl, byte ptr [edi + 8]
// 00607395  d2e3                 shl bl, cl
// 00607397  0ad8                 or bl, al
// 00607399  881e                 mov byte ptr [esi], bl
// 0060739b  85d2                 test edx, edx
// 0060739d  7508                 jne 0x6073a7
// 0060739f  ba07000000           mov edx, 7
// 006073a4  46                   inc esi
// 006073a5  eb01                 jmp 0x6073a8
// 006073a7  4a                   dec edx
// 006073a8  83ed01               sub ebp, 1
// 006073ab  75b9                 jne 0x607366
// 006073ad  e93e0f0000           jmp 0x6082f0
// 006073b2  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006073b6  8b742428             mov esi, dword ptr [esp + 0x28]
// 006073ba  ba06000000           mov edx, 6
// 006073bf  85ff                 test edi, edi
// 006073c1  0f8498000000         je 0x60745f
// 006073c7  85c9                 test ecx, ecx
// 006073c9  0f86210f0000         jbe 0x6082f0
// 006073cf  894c2418             mov dword ptr [esp + 0x18], ecx
// 006073d3  8a1e                 mov bl, byte ptr [esi]
// 006073d5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006073d9  8aca                 mov cl, dl
// 006073db  8ac3                 mov al, bl
// 006073dd  d2e8                 shr al, cl
// 006073df  2403                 and al, 3
// 006073e1  660fb6c8             movzx cx, al
// 006073e5  663b4d08             cmp cx, word ptr [ebp + 8]
// 006073e9  751f                 jne 0x60740a
// 006073eb  b906000000           mov ecx, 6
// 006073f0  2bca                 sub ecx, edx
// 006073f2  b83f3f0000           mov eax, 0x3f3f
// 006073f7  d3f8                 sar eax, cl
// 006073f9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006073fd  22c3                 and al, bl
// 006073ff  8806                 mov byte ptr [esi], al
// 00607401  8a5908               mov bl, byte ptr [ecx + 8]
// 00607404  8bca                 mov ecx, edx
// 00607406  d2e3                 shl bl, cl
// 00607408  eb32                 jmp 0x60743c
// 0060740a  0fb6c0               movzx eax, al
// 0060740d  8d0c8500000000       lea ecx, [eax*4]
// 00607414  0bc8                 or ecx, eax
// 00607416  03c9                 add ecx, ecx
// 00607418  03c9                 add ecx, ecx
// 0060741a  0bc8                 or ecx, eax
// 0060741c  03c9                 add ecx, ecx
// 0060741e  03c9                 add ecx, ecx
// 00607420  0bc8                 or ecx, eax
// 00607422  8a0439               mov al, byte ptr [ecx + edi]
// 00607425  b906000000           mov ecx, 6
// 0060742a  2bca                 sub ecx, edx
// 0060742c  bb3f3f0000           mov ebx, 0x3f3f
// 00607431  d3fb                 sar ebx, cl
// 00607433  c0e806               shr al, 6
// 00607436  8bca                 mov ecx, edx
// 00607438  221e                 and bl, byte ptr [esi]
// 0060743a  d2e0                 shl al, cl
// 0060743c  0ad8                 or bl, al
// 0060743e  881e                 mov byte ptr [esi], bl
// 00607440  85d2                 test edx, edx
// 00607442  7508                 jne 0x60744c
// 00607444  ba06000000           mov edx, 6
// 00607449  46                   inc esi
// 0060744a  eb03                 jmp 0x60744f
// 0060744c  83ea02               sub edx, 2
// 0060744f  836c241801           sub dword ptr [esp + 0x18], 1
// 00607454  0f8579ffffff         jne 0x6073d3
// 0060745a  e9910e0000           jmp 0x6082f0
// 0060745f  85c9                 test ecx, ecx
// 00607461  0f86890e0000         jbe 0x6082f0
// 00607467  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0060746b  8be9                 mov ebp, ecx
// 0060746d  8d4900               lea ecx, [ecx]
// 00607470  8a1e                 mov bl, byte ptr [esi]
// 00607472  8ac3                 mov al, bl
// 00607474  8aca                 mov cl, dl
// 00607476  d2e8                 shr al, cl
// 00607478  2403                 and al, 3
// 0060747a  660fb6c8             movzx cx, al
// 0060747e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00607482  663b4808             cmp cx, word ptr [eax + 8]
// 00607486  751d                 jne 0x6074a5
// 00607488  b906000000           mov ecx, 6
// 0060748d  2bca                 sub ecx, edx
// 0060748f  b83f3f0000           mov eax, 0x3f3f
// 00607494  d3f8                 sar eax, cl
// 00607496  8bca                 mov ecx, edx
// 00607498  22c3                 and al, bl
// 0060749a  8806                 mov byte ptr [esi], al
// 0060749c  8a5f08               mov bl, byte ptr [edi + 8]
// 0060749f  d2e3                 shl bl, cl
// 006074a1  0ad8                 or bl, al
// 006074a3  881e                 mov byte ptr [esi], bl
// 006074a5  85d2                 test edx, edx
// 006074a7  7508                 jne 0x6074b1
// 006074a9  ba06000000           mov edx, 6
// 006074ae  46                   inc esi
// 006074af  eb03                 jmp 0x6074b4
// 006074b1  83ea02               sub edx, 2
// 006074b4  83ed01               sub ebp, 1
// 006074b7  75b7                 jne 0x607470
// 006074b9  e9320e0000           jmp 0x6082f0
// 006074be  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006074c2  8b742428             mov esi, dword ptr [esp + 0x28]
// 006074c6  ba04000000           mov edx, 4
// 006074cb  85ff                 test edi, edi
// 006074cd  0f8487000000         je 0x60755a
// 006074d3  85c9                 test ecx, ecx
// 006074d5  0f86150e0000         jbe 0x6082f0
// 006074db  894c2418             mov dword ptr [esp + 0x18], ecx
// 006074df  90                   nop 
// 006074e0  8a1e                 mov bl, byte ptr [esi]
// 006074e2  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006074e6  8aca                 mov cl, dl
// 006074e8  8ac3                 mov al, bl
// 006074ea  d2e8                 shr al, cl
// 006074ec  240f                 and al, 0xf
// 006074ee  660fb6c8             movzx cx, al
// 006074f2  663b4d08             cmp cx, word ptr [ebp + 8]
// 006074f6  751f                 jne 0x607517
// 006074f8  b904000000           mov ecx, 4
// 006074fd  2bca                 sub ecx, edx
// 006074ff  b80f0f0000           mov eax, 0xf0f
// 00607504  d3f8                 sar eax, cl
// 00607506  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0060750a  22c3                 and al, bl
// 0060750c  8806                 mov byte ptr [esi], al
// 0060750e  8a5908               mov bl, byte ptr [ecx + 8]
// 00607511  8bca                 mov ecx, edx
// 00607513  d2e3                 shl bl, cl
// 00607515  eb24                 jmp 0x60753b
// 00607517  0fb6c0               movzx eax, al
// 0060751a  8bc8                 mov ecx, eax
// 0060751c  c1e104               shl ecx, 4
// 0060751f  0bc8                 or ecx, eax
// 00607521  8a0439               mov al, byte ptr [ecx + edi]
// 00607524  b904000000           mov ecx, 4
// 00607529  2bca                 sub ecx, edx
// 0060752b  bb0f0f0000           mov ebx, 0xf0f
// 00607530  d3fb                 sar ebx, cl
// 00607532  c0e804               shr al, 4
// 00607535  8bca                 mov ecx, edx
// 00607537  221e                 and bl, byte ptr [esi]
// 00607539  d2e0                 shl al, cl
// 0060753b  0ad8                 or bl, al
// 0060753d  881e                 mov byte ptr [esi], bl
// 0060753f  85d2                 test edx, edx
// 00607541  7508                 jne 0x60754b
// 00607543  ba04000000           mov edx, 4
// 00607548  46                   inc esi
// 00607549  eb03                 jmp 0x60754e
// 0060754b  83ea04               sub edx, 4
// 0060754e  836c241801           sub dword ptr [esp + 0x18], 1
// 00607553  758b                 jne 0x6074e0
// 00607555  e9960d0000           jmp 0x6082f0
// 0060755a  85c9                 test ecx, ecx
// 0060755c  0f868e0d0000         jbe 0x6082f0
// 00607562  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00607566  8be9                 mov ebp, ecx
// 00607568  8a1e                 mov bl, byte ptr [esi]
// 0060756a  8ac3                 mov al, bl
// 0060756c  8aca                 mov cl, dl
// 0060756e  d2e8                 shr al, cl
// 00607570  240f                 and al, 0xf
// 00607572  660fb6c8             movzx cx, al
// 00607576  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060757a  663b4808             cmp cx, word ptr [eax + 8]
// 0060757e  751d                 jne 0x60759d
// 00607580  b904000000           mov ecx, 4
// 00607585  2bca                 sub ecx, edx
// 00607587  b80f0f0000           mov eax, 0xf0f
// 0060758c  d3f8                 sar eax, cl
// 0060758e  8bca                 mov ecx, edx
// 00607590  22c3                 and al, bl
// 00607592  8806                 mov byte ptr [esi], al
// 00607594  8a5f08               mov bl, byte ptr [edi + 8]
// 00607597  d2e3                 shl bl, cl
// 00607599  0ad8                 or bl, al
// 0060759b  881e                 mov byte ptr [esi], bl
// 0060759d  85d2                 test edx, edx
// 0060759f  7508                 jne 0x6075a9
// 006075a1  ba04000000           mov edx, 4
// 006075a6  46                   inc esi
// 006075a7  eb03                 jmp 0x6075ac
// 006075a9  83ea04               sub edx, 4
// 006075ac  83ed01               sub ebp, 1
// 006075af  75b7                 jne 0x607568
// 006075b1  e93a0d0000           jmp 0x6082f0
// 006075b6  8b742438             mov esi, dword ptr [esp + 0x38]
// 006075ba  8b442428             mov eax, dword ptr [esp + 0x28]
// 006075be  85f6                 test esi, esi
// 006075c0  7432                 je 0x6075f4
// 006075c2  85c9                 test ecx, ecx
// 006075c4  0f86260d0000         jbe 0x6082f0
// 006075ca  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006075ce  8bd1                 mov edx, ecx
// 006075d0  8a08                 mov cl, byte ptr [eax]
// 006075d2  660fb6d9             movzx bx, cl
// 006075d6  663b5d08             cmp bx, word ptr [ebp + 8]
// 006075da  7505                 jne 0x6075e1
// 006075dc  8a4f08               mov cl, byte ptr [edi + 8]
// 006075df  eb06                 jmp 0x6075e7
// 006075e1  0fb6c9               movzx ecx, cl
// 006075e4  8a0c31               mov cl, byte ptr [ecx + esi]
// 006075e7  8808                 mov byte ptr [eax], cl
// 006075e9  40                   inc eax
// 006075ea  83ea01               sub edx, 1
// 006075ed  75e1                 jne 0x6075d0
// 006075ef  e9fc0c0000           jmp 0x6082f0
// 006075f4  85c9                 test ecx, ecx
// 006075f6  0f86f40c0000         jbe 0x6082f0
// 006075fc  8b742430             mov esi, dword ptr [esp + 0x30]
// 00607600  660fb610             movzx dx, byte ptr [eax]
// 00607604  663b5508             cmp dx, word ptr [ebp + 8]
// 00607608  7505                 jne 0x60760f
// 0060760a  8a5608               mov dl, byte ptr [esi + 8]
// 0060760d  8810                 mov byte ptr [eax], dl
// 0060760f  40                   inc eax
// 00607610  83e901               sub ecx, 1
// 00607613  75eb                 jne 0x607600
// 00607615  e9d60c0000           jmp 0x6082f0
// 0060761a  8b742444             mov esi, dword ptr [esp + 0x44]
// 0060761e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00607622  85f6                 test esi, esi
// 00607624  746b                 je 0x607691
// 00607626  85c9                 test ecx, ecx
// 00607628  0f86c20c0000         jbe 0x6082f0
// 0060762e  8a5c2450             mov bl, byte ptr [esp + 0x50]
// 00607632  894c2418             mov dword ptr [esp + 0x18], ecx
// 00607636  8a10                 mov dl, byte ptr [eax]
// 00607638  8a4801               mov cl, byte ptr [eax + 1]
// 0060763b  660fb6fa             movzx di, dl
// 0060763f  bd00010000           mov ebp, 0x100
// 00607644  660faffd             imul di, bp
// 00607648  660fb6e9             movzx bp, cl
// 0060764c  6603fd               add di, bp
// 0060764f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00607653  663b7d08             cmp di, word ptr [ebp + 8]
// 00607657  750e                 jne 0x607667
// 00607659  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0060765d  8a5709               mov dl, byte ptr [edi + 9]
// 00607660  8810                 mov byte ptr [eax], dl
// 00607662  8a4f08               mov cl, byte ptr [edi + 8]
// 00607665  eb18                 jmp 0x60767f
// 00607667  0fb6f9               movzx edi, cl
// 0060766a  8acb                 mov cl, bl
// 0060766c  d3ef                 shr edi, cl
// 0060766e  0fb6d2               movzx edx, dl
// 00607671  8b0cbe               mov ecx, dword ptr [esi + edi*4]
// 00607674  0fb70c51             movzx ecx, word ptr [ecx + edx*2]
// 00607678  8bd1                 mov edx, ecx
// 0060767a  c1ea08               shr edx, 8
// 0060767d  8810                 mov byte ptr [eax], dl
// 0060767f  884801               mov byte ptr [eax + 1], cl
// 00607682  83c002               add eax, 2
// 00607685  836c241801           sub dword ptr [esp + 0x18], 1
// 0060768a  75aa                 jne 0x607636
// 0060768c  e95f0c0000           jmp 0x6082f0
// 00607691  85c9                 test ecx, ecx
// 00607693  0f86570c0000         jbe 0x6082f0
// 00607699  8b742430             mov esi, dword ptr [esp + 0x30]
// 0060769d  8d4900               lea ecx, [ecx]
// 006076a0  660fb610             movzx dx, byte ptr [eax]
// 006076a4  bf00010000           mov edi, 0x100
// 006076a9  660fafd7             imul dx, di
// 006076ad  660fb67801           movzx di, byte ptr [eax + 1]
// 006076b2  6603d7               add dx, di
// 006076b5  663b5508             cmp dx, word ptr [ebp + 8]
// 006076b9  750d                 jne 0x6076c8
// 006076bb  0fb65609             movzx edx, byte ptr [esi + 9]
// 006076bf  8810                 mov byte ptr [eax], dl
// 006076c1  0fb65608             movzx edx, byte ptr [esi + 8]
// 006076c5  885001               mov byte ptr [eax + 1], dl
// 006076c8  83c002               add eax, 2
// 006076cb  83e901               sub ecx, 1
// 006076ce  75d0                 jne 0x6076a0
// 006076d0  e91b0c0000           jmp 0x6082f0
// 006076d5  8b442424             mov eax, dword ptr [esp + 0x24]
// 006076d9  80780908             cmp byte ptr [eax + 9], 8
// 006076dd  0f85d2000000         jne 0x6077b5
// 006076e3  8b542438             mov edx, dword ptr [esp + 0x38]
// 006076e7  85d2                 test edx, edx
// 006076e9  7476                 je 0x607761
// 006076eb  85c9                 test ecx, ecx
// 006076ed  0f86fd0b0000         jbe 0x6082f0
// 006076f3  8b442428             mov eax, dword ptr [esp + 0x28]
// 006076f7  8b742430             mov esi, dword ptr [esp + 0x30]
// 006076fb  83c002               add eax, 2
// 006076fe  8bf9                 mov edi, ecx
// 00607700  8a48fe               mov cl, byte ptr [eax - 2]
// 00607703  660fb6d9             movzx bx, cl
// 00607707  663b5d02             cmp bx, word ptr [ebp + 2]
// 0060770b  7529                 jne 0x607736
// 0060770d  660fb658ff           movzx bx, byte ptr [eax - 1]
// 00607712  663b5d04             cmp bx, word ptr [ebp + 4]
// 00607716  751e                 jne 0x607736
// 00607718  660fb618             movzx bx, byte ptr [eax]
// 0060771c  663b5d06             cmp bx, word ptr [ebp + 6]
// 00607720  7514                 jne 0x607736
// 00607722  0fb64e02             movzx ecx, byte ptr [esi + 2]
// 00607726  8848fe               mov byte ptr [eax - 2], cl
// 00607729  0fb64e04             movzx ecx, byte ptr [esi + 4]
// 0060772d  8848ff               mov byte ptr [eax - 1], cl
// 00607730  0fb64e06             movzx ecx, byte ptr [esi + 6]
// 00607734  eb1c                 jmp 0x607752
// 00607736  0fb6c9               movzx ecx, cl
// 00607739  0fb60c11             movzx ecx, byte ptr [ecx + edx]
// 0060773d  8848fe               mov byte ptr [eax - 2], cl
// 00607740  0fb648ff             movzx ecx, byte ptr [eax - 1]
// 00607744  0fb60c11             movzx ecx, byte ptr [ecx + edx]
// 00607748  8848ff               mov byte ptr [eax - 1], cl
// 0060774b  0fb608               movzx ecx, byte ptr [eax]
// 0060774e  0fb60c11             movzx ecx, byte ptr [ecx + edx]
// 00607752  8808                 mov byte ptr [eax], cl
// 00607754  83c003               add eax, 3
// 00607757  83ef01               sub edi, 1
// 0060775a  75a4                 jne 0x607700
// 0060775c  e98f0b0000           jmp 0x6082f0
// 00607761  85c9                 test ecx, ecx
// 00607763  0f86870b0000         jbe 0x6082f0
// 00607769  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060776d  8b742430             mov esi, dword ptr [esp + 0x30]
// 00607771  83c002               add eax, 2
// 00607774  660fb650fe           movzx dx, byte ptr [eax - 2]
// 00607779  663b5502             cmp dx, word ptr [ebp + 2]
// 0060777d  7529                 jne 0x6077a8
// 0060777f  660fb650ff           movzx dx, byte ptr [eax - 1]
// 00607784  663b5504             cmp dx, word ptr [ebp + 4]
// 00607788  751e                 jne 0x6077a8
// 0060778a  660fb610             movzx dx, byte ptr [eax]
// 0060778e  663b5506             cmp dx, word ptr [ebp + 6]
// 00607792  7514                 jne 0x6077a8
// 00607794  0fb65602             movzx edx, byte ptr [esi + 2]
// 00607798  8850fe               mov byte ptr [eax - 2], dl
// 0060779b  0fb65604             movzx edx, byte ptr [esi + 4]
// 0060779f  8850ff               mov byte ptr [eax - 1], dl
// 006077a2  0fb65606             movzx edx, byte ptr [esi + 6]
// 006077a6  8810                 mov byte ptr [eax], dl
// 006077a8  83c003               add eax, 3
// 006077ab  83e901               sub ecx, 1
// 006077ae  75c4                 jne 0x607774
// 006077b0  e93b0b0000           jmp 0x6082f0
// 006077b5  8b742444             mov esi, dword ptr [esp + 0x44]
// 006077b9  85f6                 test esi, esi
// 006077bb  0f841b010000         je 0x6078dc
// 006077c1  85c9                 test ecx, ecx
// 006077c3  0f86270b0000         jbe 0x6082f0
// 006077c9  8b442428             mov eax, dword ptr [esp + 0x28]
// 006077cd  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006077d1  83c002               add eax, 2
// 006077d4  894c2418             mov dword ptr [esp + 0x18], ecx
// 006077d8  eb06                 jmp 0x6077e0
// 006077da  8d9b00000000         lea ebx, [ebx]
// 006077e0  8a58fe               mov bl, byte ptr [eax - 2]
// 006077e3  8a48ff               mov cl, byte ptr [eax - 1]
// 006077e6  660fb6d3             movzx dx, bl
// 006077ea  bd00010000           mov ebp, 0x100
// 006077ef  660fafd5             imul dx, bp
// 006077f3  660fb6e9             movzx bp, cl
// 006077f7  6603d5               add dx, bp
// 006077fa  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006077fe  663b5502             cmp dx, word ptr [ebp + 2]
// 00607802  756a                 jne 0x60786e
// 00607804  660fb610             movzx dx, byte ptr [eax]
// 00607808  bd00010000           mov ebp, 0x100
// 0060780d  660fafd5             imul dx, bp
// 00607811  660fb66801           movzx bp, byte ptr [eax + 1]
// 00607816  6603d5               add dx, bp
// 00607819  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0060781d  663b5504             cmp dx, word ptr [ebp + 4]
// 00607821  754b                 jne 0x60786e
// 00607823  660fb65002           movzx dx, byte ptr [eax + 2]
// 00607828  bd00010000           mov ebp, 0x100
// 0060782d  660fafd5             imul dx, bp
// 00607831  660fb66803           movzx bp, byte ptr [eax + 3]
// 00607836  6603d5               add dx, bp
// 00607839  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0060783d  663b5506             cmp dx, word ptr [ebp + 6]
// 00607841  752b                 jne 0x60786e
// 00607843  0fb64f03             movzx ecx, byte ptr [edi + 3]
// 00607847  8848fe               mov byte ptr [eax - 2], cl
// 0060784a  0fb65702             movzx edx, byte ptr [edi + 2]
// 0060784e  8850ff               mov byte ptr [eax - 1], dl
// 00607851  0fb64f05             movzx ecx, byte ptr [edi + 5]
// 00607855  8808                 mov byte ptr [eax], cl
// 00607857  0fb65704             movzx edx, byte ptr [edi + 4]
// 0060785b  885001               mov byte ptr [eax + 1], dl
// 0060785e  0fb64f07             movzx ecx, byte ptr [edi + 7]
// 00607862  884802               mov byte ptr [eax + 2], cl
// 00607865  0fb65706             movzx edx, byte ptr [edi + 6]
// 00607869  885003               mov byte ptr [eax + 3], dl
// 0060786c  eb5b                 jmp 0x6078c9
// 0060786e  0fb6542450           movzx edx, byte ptr [esp + 0x50]
// 00607873  0fb6e9               movzx ebp, cl
// 00607876  8aca                 mov cl, dl
// 00607878  d3ed                 shr ebp, cl
// 0060787a  0fb6cb               movzx ecx, bl
// 0060787d  8b1cae               mov ebx, dword ptr [esi + ebp*4]
// 00607880  0fb70c4b             movzx ecx, word ptr [ebx + ecx*2]
// 00607884  8bd9                 mov ebx, ecx
// 00607886  c1eb08               shr ebx, 8
// 00607889  8858fe               mov byte ptr [eax - 2], bl
// 0060788c  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00607890  8848ff               mov byte ptr [eax - 1], cl
// 00607893  8aca                 mov cl, dl
// 00607895  d3eb                 shr ebx, cl
// 00607897  0fb608               movzx ecx, byte ptr [eax]
// 0060789a  8b1c9e               mov ebx, dword ptr [esi + ebx*4]
// 0060789d  0fb70c4b             movzx ecx, word ptr [ebx + ecx*2]
// 006078a1  8bd9                 mov ebx, ecx
// 006078a3  c1eb08               shr ebx, 8
// 006078a6  8818                 mov byte ptr [eax], bl
// 006078a8  0fb65803             movzx ebx, byte ptr [eax + 3]
// 006078ac  884801               mov byte ptr [eax + 1], cl
// 006078af  8aca                 mov cl, dl
// 006078b1  0fb65002             movzx edx, byte ptr [eax + 2]
// 006078b5  d3eb                 shr ebx, cl
// 006078b7  8b0c9e               mov ecx, dword ptr [esi + ebx*4]
// 006078ba  0fb70c51             movzx ecx, word ptr [ecx + edx*2]
// 006078be  8bd1                 mov edx, ecx
// 006078c0  c1ea08               shr edx, 8
// 006078c3  885002               mov byte ptr [eax + 2], dl
// 006078c6  884803               mov byte ptr [eax + 3], cl
// 006078c9  83c006               add eax, 6
// 006078cc  836c241801           sub dword ptr [esp + 0x18], 1
// 006078d1  0f8509ffffff         jne 0x6077e0
// 006078d7  e9140a0000           jmp 0x6082f0
// 006078dc  85c9                 test ecx, ecx
// 006078de  0f860c0a0000         jbe 0x6082f0
// 006078e4  8b442428             mov eax, dword ptr [esp + 0x28]
// 006078e8  8b742430             mov esi, dword ptr [esp + 0x30]
// 006078ec  83c002               add eax, 2
// 006078ef  90                   nop 
// 006078f0  660fb650fe           movzx dx, byte ptr [eax - 2]
// 006078f5  bf00010000           mov edi, 0x100
// 006078fa  660fafd7             imul dx, di
// 006078fe  660fb678ff           movzx di, byte ptr [eax - 1]
// 00607903  6603d7               add dx, di
// 00607906  663b5502             cmp dx, word ptr [ebp + 2]
// 0060790a  7560                 jne 0x60796c
// 0060790c  660fb610             movzx dx, byte ptr [eax]
// 00607910  bf00010000           mov edi, 0x100
// 00607915  660fafd7             imul dx, di
// 00607919  660fb67801           movzx di, byte ptr [eax + 1]
// 0060791e  6603d7               add dx, di
// 00607921  663b5504             cmp dx, word ptr [ebp + 4]
// 00607925  7545                 jne 0x60796c
// 00607927  660fb65002           movzx dx, byte ptr [eax + 2]
// 0060792c  bf00010000           mov edi, 0x100
// 00607931  660fafd7             imul dx, di
// 00607935  660fb67803           movzx di, byte ptr [eax + 3]
// 0060793a  6603d7               add dx, di
// 0060793d  663b5506             cmp dx, word ptr [ebp + 6]
// 00607941  7529                 jne 0x60796c
// 00607943  0fb65603             movzx edx, byte ptr [esi + 3]
// 00607947  8850fe               mov byte ptr [eax - 2], dl
// 0060794a  0fb65602             movzx edx, byte ptr [esi + 2]
// 0060794e  8850ff               mov byte ptr [eax - 1], dl
// 00607951  0fb65605             movzx edx, byte ptr [esi + 5]
// 00607955  8810                 mov byte ptr [eax], dl
// 00607957  0fb65604             movzx edx, byte ptr [esi + 4]
// 0060795b  885001               mov byte ptr [eax + 1], dl
// 0060795e  0fb65607             movzx edx, byte ptr [esi + 7]
// 00607962  885002               mov byte ptr [eax + 2], dl
// 00607965  0fb65606             movzx edx, byte ptr [esi + 6]
// 00607969  885003               mov byte ptr [eax + 3], dl
// 0060796c  83c006               add eax, 6
// 0060796f  83e901               sub ecx, 1
// 00607972  0f8578ffffff         jne 0x6078f0
// 00607978  e973090000           jmp 0x6082f0
// 0060797d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00607981  80780908             cmp byte ptr [eax + 9], 8
// 00607985  0f852d010000         jne 0x607ab8
// 0060798b  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0060798f  85ff                 test edi, edi
// 00607991  0f84a9000000         je 0x607a40
// 00607997  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0060799c  0f849e000000         je 0x607a40
// 006079a2  837c243800           cmp dword ptr [esp + 0x38], 0
// 006079a7  0f8493000000         je 0x607a40
// 006079ad  837c241000           cmp dword ptr [esp + 0x10], 0
// 006079b2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006079b6  8bf1                 mov esi, ecx
// 006079b8  0f8632090000         jbe 0x6082f0
// 006079be  8b542410             mov edx, dword ptr [esp + 0x10]
// 006079c2  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 006079c6  89542418             mov dword ptr [esp + 0x18], edx
// 006079ca  8d9b00000000         lea ebx, [ebx]
// 006079d0  660fb64101           movzx ax, byte ptr [ecx + 1]
// 006079d5  0fb7c0               movzx eax, ax
// 006079d8  baff000000           mov edx, 0xff
// 006079dd  663bc2               cmp ax, dx
// 006079e0  7509                 jne 0x6079eb
// 006079e2  0fb601               movzx eax, byte ptr [ecx]
// 006079e5  8b542438             mov edx, dword ptr [esp + 0x38]
// 006079e9  eb40                 jmp 0x607a2b
// 006079eb  6685c0               test ax, ax
// 006079ee  7509                 jne 0x6079f9
// 006079f0  8b542430             mov edx, dword ptr [esp + 0x30]
// 006079f4  8a4208               mov al, byte ptr [edx + 8]
// 006079f7  eb35                 jmp 0x607a2e
// 006079f9  0fb619               movzx ebx, byte ptr [ecx]
// 006079fc  660fb61c3b           movzx bx, byte ptr [ebx + edi]
// 00607a01  2bd0                 sub edx, eax
// 00607a03  660fafd8             imul bx, ax
// 00607a07  660faf5508           imul dx, word ptr [ebp + 8]
// 00607a0c  6603d3               add dx, bx
// 00607a0f  b880000000           mov eax, 0x80
// 00607a14  6603d0               add dx, ax
// 00607a17  0fb7c2               movzx eax, dx
// 00607a1a  8bd0                 mov edx, eax
// 00607a1c  c1ea08               shr edx, 8
// 00607a1f  03d0                 add edx, eax
// 00607a21  c1fa08               sar edx, 8
// 00607a24  0fb6c2               movzx eax, dl
// 00607a27  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00607a2b  8a0410               mov al, byte ptr [eax + edx]
// 00607a2e  8806                 mov byte ptr [esi], al
// 00607a30  83c102               add ecx, 2
// 00607a33  46                   inc esi
// 00607a34  836c241801           sub dword ptr [esp + 0x18], 1
// 00607a39  7595                 jne 0x6079d0
// 00607a3b  e9b0080000           jmp 0x6082f0
// 00607a40  837c241000           cmp dword ptr [esp + 0x10], 0
// 00607a45  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00607a49  8bf1                 mov esi, ecx
// 00607a4b  0f869f080000         jbe 0x6082f0
// 00607a51  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00607a55  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00607a59  8da42400000000       lea esp, [esp]
// 00607a60  8a4101               mov al, byte ptr [ecx + 1]
// 00607a63  3cff                 cmp al, 0xff
// 00607a65  7504                 jne 0x607a6b
// 00607a67  8a11                 mov dl, byte ptr [ecx]
// 00607a69  eb3d                 jmp 0x607aa8
// 00607a6b  84c0                 test al, al
// 00607a6d  7509                 jne 0x607a78
// 00607a6f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00607a73  8a5008               mov dl, byte ptr [eax + 8]
// 00607a76  eb30                 jmp 0x607aa8
// 00607a78  660fb619             movzx bx, byte ptr [ecx]
// 00607a7c  660fb6c0             movzx ax, al
// 00607a80  baff000000           mov edx, 0xff
// 00607a85  660fafd8             imul bx, ax
// 00607a89  2bd0                 sub edx, eax
// 00607a8b  660faf5508           imul dx, word ptr [ebp + 8]
// 00607a90  6603d3               add dx, bx
// 00607a93  b880000000           mov eax, 0x80
// 00607a98  6603d0               add dx, ax
// 00607a9b  0fb7c2               movzx eax, dx
// 00607a9e  8bd0                 mov edx, eax
// 00607aa0  c1ea08               shr edx, 8
// 00607aa3  03d0                 add edx, eax
// 00607aa5  c1fa08               sar edx, 8
// 00607aa8  8816                 mov byte ptr [esi], dl
// 00607aaa  83c102               add ecx, 2
// 00607aad  46                   inc esi
// 00607aae  83ef01               sub edi, 1
// 00607ab1  75ad                 jne 0x607a60
// 00607ab3  e938080000           jmp 0x6082f0
// 00607ab8  837c244400           cmp dword ptr [esp + 0x44], 0
// 00607abd  0f8407010000         je 0x607bca
// 00607ac3  837c244800           cmp dword ptr [esp + 0x48], 0
// 00607ac8  0f84fc000000         je 0x607bca
// 00607ace  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 00607ad3  0f84f1000000         je 0x607bca
// 00607ad9  8b542428             mov edx, dword ptr [esp + 0x28]
// 00607add  8bf2                 mov esi, edx
// 00607adf  85c9                 test ecx, ecx
// 00607ae1  0f8609080000         jbe 0x6082f0
// 00607ae7  8a5c2450             mov bl, byte ptr [esp + 0x50]
// 00607aeb  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00607aef  8bc1                 mov eax, ecx
// 00607af1  42                   inc edx
// 00607af2  89442418             mov dword ptr [esp + 0x18], eax
// 00607af6  eb08                 jmp 0x607b00
// 00607af8  8da42400000000       lea esp, [esp]
// 00607aff  90                   nop 
// 00607b00  660fb64a01           movzx cx, byte ptr [edx + 1]
// 00607b05  b800010000           mov eax, 0x100
// 00607b0a  660fafc8             imul cx, ax
// 00607b0e  660fb64202           movzx ax, byte ptr [edx + 2]
// 00607b13  6603c8               add cx, ax
// 00607b16  0fb7c1               movzx eax, cx
// 00607b19  b9ffff0000           mov ecx, 0xffff
// 00607b1e  663bc1               cmp ax, cx
// 00607b21  7519                 jne 0x607b3c
// 00607b23  0fb602               movzx eax, byte ptr [edx]
// 00607b26  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00607b2a  8acb                 mov cl, bl
// 00607b2c  d3e8                 shr eax, cl
// 00607b2e  0fb64aff             movzx ecx, byte ptr [edx - 1]
// 00607b32  8b448500             mov eax, dword ptr [ebp + eax*4]
// 00607b36  0fb70448             movzx eax, word ptr [eax + ecx*2]
// 00607b3a  eb6e                 jmp 0x607baa
// 00607b3c  6685c0               test ax, ax
// 00607b3f  750d                 jne 0x607b4e
// 00607b41  8a4709               mov al, byte ptr [edi + 9]
// 00607b44  8806                 mov byte ptr [esi], al
// 00607b46  8a4f08               mov cl, byte ptr [edi + 8]
// 00607b49  884e01               mov byte ptr [esi + 1], cl
// 00607b4c  eb66                 jmp 0x607bb4
// 00607b4e  0fb63a               movzx edi, byte ptr [edx]
// 00607b51  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00607b55  8acb                 mov cl, bl
// 00607b57  d3ef                 shr edi, cl
// 00607b59  0fb64aff             movzx ecx, byte ptr [edx - 1]
// 00607b5d  8b7cbd00             mov edi, dword ptr [ebp + edi*4]
// 00607b61  0fb70c4f             movzx ecx, word ptr [edi + ecx*2]
// 00607b65  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00607b69  0fb77f08             movzx edi, word ptr [edi + 8]
// 00607b6d  0fb7c0               movzx eax, ax
// 00607b70  0fafc8               imul ecx, eax
// 00607b73  bdffff0000           mov ebp, 0xffff
// 00607b78  2be8                 sub ebp, eax
// 00607b7a  0faffd               imul edi, ebp
// 00607b7d  8d8c3900800000       lea ecx, [ecx + edi + 0x8000]
// 00607b84  8bc1                 mov eax, ecx
// 00607b86  c1e810               shr eax, 0x10
// 00607b89  03c1                 add eax, ecx
// 00607b8b  c1e810               shr eax, 0x10
// 00607b8e  0fb7c0               movzx eax, ax
// 00607b91  0fb6f8               movzx edi, al
// 00607b94  8acb                 mov cl, bl
// 00607b96  d3ef                 shr edi, cl
// 00607b98  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00607b9c  c1e808               shr eax, 8
// 00607b9f  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 00607ba2  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 00607ba6  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00607baa  8bc8                 mov ecx, eax
// 00607bac  c1e908               shr ecx, 8
// 00607baf  884601               mov byte ptr [esi + 1], al
// 00607bb2  880e                 mov byte ptr [esi], cl
// 00607bb4  83c204               add edx, 4
// 00607bb7  83c602               add esi, 2
// 00607bba  836c241801           sub dword ptr [esp + 0x18], 1
// 00607bbf  0f853bffffff         jne 0x607b00
// 00607bc5  e926070000           jmp 0x6082f0
// 00607bca  837c241000           cmp dword ptr [esp + 0x10], 0
// 00607bcf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00607bd3  8bf1                 mov esi, ecx
// 00607bd5  0f8615070000         jbe 0x6082f0
// 00607bdb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00607bdf  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00607be3  89542418             mov dword ptr [esp + 0x18], edx
// 00607be7  8b542430             mov edx, dword ptr [esp + 0x30]
// 00607beb  83c103               add ecx, 3
// 00607bee  8bff                 mov edi, edi
// 00607bf0  660fb641ff           movzx ax, byte ptr [ecx - 1]
// 00607bf5  bf00010000           mov edi, 0x100
// 00607bfa  660fafc7             imul ax, di
// 00607bfe  660fb639             movzx di, byte ptr [ecx]
// 00607c02  6603c7               add ax, di
// 00607c05  0fb7c0               movzx eax, ax
// 00607c08  bfffff0000           mov edi, 0xffff
// 00607c0d  663bc7               cmp ax, di
// 00607c10  7509                 jne 0x607c1b
// 00607c12  668b41fd             mov ax, word ptr [ecx - 3]
// 00607c16  668906               mov word ptr [esi], ax
// 00607c19  eb5d                 jmp 0x607c78
// 00607c1b  6685c0               test ax, ax
// 00607c1e  750c                 jne 0x607c2c
// 00607c20  0fb64209             movzx eax, byte ptr [edx + 9]
// 00607c24  8806                 mov byte ptr [esi], al
// 00607c26  0fb64208             movzx eax, byte ptr [edx + 8]
// 00607c2a  eb49                 jmp 0x607c75
// 00607c2c  660fb651fd           movzx dx, byte ptr [ecx - 3]
// 00607c31  bf00010000           mov edi, 0x100
// 00607c36  660fafd7             imul dx, di
// 00607c3a  660fb679fe           movzx di, byte ptr [ecx - 2]
// 00607c3f  6603d7               add dx, di
// 00607c42  0fb77d08             movzx edi, word ptr [ebp + 8]
// 00607c46  0fb7c0               movzx eax, ax
// 00607c49  0fb7d2               movzx edx, dx
// 00607c4c  0fafd0               imul edx, eax
// 00607c4f  bbffff0000           mov ebx, 0xffff
// 00607c54  2bd8                 sub ebx, eax
// 00607c56  0faffb               imul edi, ebx
// 00607c59  8d943a00800000       lea edx, [edx + edi + 0x8000]
// 00607c60  8bc2                 mov eax, edx
// 00607c62  c1e810               shr eax, 0x10
// 00607c65  03c2                 add eax, edx
// 00607c67  c1e810               shr eax, 0x10
// 00607c6a  8bd0                 mov edx, eax
// 00607c6c  c1ea08               shr edx, 8
// 00607c6f  8816                 mov byte ptr [esi], dl
// 00607c71  8b542430             mov edx, dword ptr [esp + 0x30]
// 00607c75  884601               mov byte ptr [esi + 1], al
// 00607c78  83c104               add ecx, 4
// 00607c7b  83c602               add esi, 2
// 00607c7e  836c241801           sub dword ptr [esp + 0x18], 1
// 00607c83  0f8567ffffff         jne 0x607bf0
// 00607c89  e962060000           jmp 0x6082f0
// 00607c8e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00607c92  80780908             cmp byte ptr [eax + 9], 8
// 00607c96  0f856a020000         jne 0x607f06
// 00607c9c  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00607ca0  85ed                 test ebp, ebp
// 00607ca2  0f8460010000         je 0x607e08
// 00607ca8  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00607cad  0f8455010000         je 0x607e08
// 00607cb3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00607cb7  85c9                 test ecx, ecx
// 00607cb9  0f8449010000         je 0x607e08
// 00607cbf  837c241000           cmp dword ptr [esp + 0x10], 0
// 00607cc4  0f8626060000         jbe 0x6082f0
// 00607cca  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00607cce  8b542410             mov edx, dword ptr [esp + 0x10]
// 00607cd2  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00607cd6  8d7702               lea esi, [edi + 2]
// 00607cd9  89542418             mov dword ptr [esp + 0x18], edx
// 00607cdd  8b542434             mov edx, dword ptr [esp + 0x34]
// 00607ce1  47                   inc edi
// 00607ce2  8a4702               mov al, byte ptr [edi + 2]
// 00607ce5  3cff                 cmp al, 0xff
// 00607ce7  7522                 jne 0x607d0b
// 00607ce9  0fb647ff             movzx eax, byte ptr [edi - 1]
// 00607ced  0fb60408             movzx eax, byte ptr [eax + ecx]
// 00607cf1  8846fe               mov byte ptr [esi - 2], al
// 00607cf4  0fb607               movzx eax, byte ptr [edi]
// 00607cf7  0fb60408             movzx eax, byte ptr [eax + ecx]
// 00607cfb  8846ff               mov byte ptr [esi - 1], al
// 00607cfe  0fb64701             movzx eax, byte ptr [edi + 1]
// 00607d02  0fb60408             movzx eax, byte ptr [eax + ecx]
// 00607d06  e9e5000000           jmp 0x607df0
// 00607d0b  84c0                 test al, al
// 00607d0d  7517                 jne 0x607d26
// 00607d0f  0fb64302             movzx eax, byte ptr [ebx + 2]
// 00607d13  8846fe               mov byte ptr [esi - 2], al
// 00607d16  0fb64304             movzx eax, byte ptr [ebx + 4]
// 00607d1a  8846ff               mov byte ptr [esi - 1], al
// 00607d1d  0fb64306             movzx eax, byte ptr [ebx + 6]
// 00607d21  e9ca000000           jmp 0x607df0
// 00607d26  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00607d2a  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00607d2e  668b6a02             mov bp, word ptr [edx + 2]
// 00607d32  660fb6c0             movzx ax, al
// 00607d36  660fafd8             imul bx, ax
// 00607d3a  b9ff000000           mov ecx, 0xff
// 00607d3f  2bc8                 sub ecx, eax
// 00607d41  660fafe9             imul bp, cx
// 00607d45  6603dd               add bx, bp
// 00607d48  bd80000000           mov ebp, 0x80
// 00607d4d  6603dd               add bx, bp
// 00607d50  0fb7db               movzx ebx, bx
// 00607d53  0fb7eb               movzx ebp, bx
// 00607d56  8bdd                 mov ebx, ebp
// 00607d58  c1eb08               shr ebx, 8
// 00607d5b  03dd                 add ebx, ebp
// 00607d5d  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00607d61  c1fb08               sar ebx, 8
// 00607d64  0fb6db               movzx ebx, bl
// 00607d67  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00607d6b  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00607d6f  885efe               mov byte ptr [esi - 2], bl
// 00607d72  0fb61f               movzx ebx, byte ptr [edi]
// 00607d75  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00607d79  668b6a04             mov bp, word ptr [edx + 4]
// 00607d7d  660fafd8             imul bx, ax
// 00607d81  660fafe9             imul bp, cx
// 00607d85  6603dd               add bx, bp
// 00607d88  bd80000000           mov ebp, 0x80
// 00607d8d  6603dd               add bx, bp
// 00607d90  0fb7db               movzx ebx, bx
// 00607d93  0fb7eb               movzx ebp, bx
// 00607d96  8bdd                 mov ebx, ebp
// 00607d98  c1eb08               shr ebx, 8
// 00607d9b  03dd                 add ebx, ebp
// 00607d9d  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00607da1  c1fb08               sar ebx, 8
// 00607da4  0fb6db               movzx ebx, bl
// 00607da7  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00607dab  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00607daf  885eff               mov byte ptr [esi - 1], bl
// 00607db2  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 00607db6  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00607dba  660fafd8             imul bx, ax
// 00607dbe  668b4206             mov ax, word ptr [edx + 6]
// 00607dc2  660fafc1             imul ax, cx
// 00607dc6  6603d8               add bx, ax
// 00607dc9  b980000000           mov ecx, 0x80
// 00607dce  6603d9               add bx, cx
// 00607dd1  0fb7c3               movzx eax, bx
// 00607dd4  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00607dd8  8bc8                 mov ecx, eax
// 00607dda  c1e908               shr ecx, 8
// 00607ddd  03c8                 add ecx, eax
// 00607ddf  c1f908               sar ecx, 8
// 00607de2  0fb6c1               movzx eax, cl
// 00607de5  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00607de9  8a0408               mov al, byte ptr [eax + ecx]
// 00607dec  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00607df0  8806                 mov byte ptr [esi], al
// 00607df2  83c704               add edi, 4
// 00607df5  83c603               add esi, 3
// 00607df8  836c241801           sub dword ptr [esp + 0x18], 1
// 00607dfd  0f85dffeffff         jne 0x607ce2
// 00607e03  e9e8040000           jmp 0x6082f0
// 00607e08  837c241000           cmp dword ptr [esp + 0x10], 0
// 00607e0d  0f86dd040000         jbe 0x6082f0
// 00607e13  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00607e17  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00607e1b  8b542430             mov edx, dword ptr [esp + 0x30]
// 00607e1f  8d7702               lea esi, [edi + 2]
// 00607e22  47                   inc edi
// 00607e23  894c2418             mov dword ptr [esp + 0x18], ecx
// 00607e27  8a4702               mov al, byte ptr [edi + 2]
// 00607e2a  3cff                 cmp al, 0xff
// 00607e2c  7517                 jne 0x607e45
// 00607e2e  0fb647ff             movzx eax, byte ptr [edi - 1]
// 00607e32  8846fe               mov byte ptr [esi - 2], al
// 00607e35  8a0f                 mov cl, byte ptr [edi]
// 00607e37  884eff               mov byte ptr [esi - 1], cl
// 00607e3a  0fb64701             movzx eax, byte ptr [edi + 1]
// 00607e3e  8806                 mov byte ptr [esi], al
// 00607e40  e9ab000000           jmp 0x607ef0
// 00607e45  84c0                 test al, al
// 00607e47  7516                 jne 0x607e5f
// 00607e49  0fb64a02             movzx ecx, byte ptr [edx + 2]
// 00607e4d  884efe               mov byte ptr [esi - 2], cl
// 00607e50  8a4204               mov al, byte ptr [edx + 4]
// 00607e53  8846ff               mov byte ptr [esi - 1], al
// 00607e56  0fb64a06             movzx ecx, byte ptr [edx + 6]
// 00607e5a  e98f000000           jmp 0x607eee
// 00607e5f  0fb65fff             movzx ebx, byte ptr [edi - 1]
// 00607e63  668b6a02             mov bp, word ptr [edx + 2]
// 00607e67  660fb6c0             movzx ax, al
// 00607e6b  660fafd8             imul bx, ax
// 00607e6f  b9ff000000           mov ecx, 0xff
// 00607e74  2bc8                 sub ecx, eax
// 00607e76  660fafe9             imul bp, cx
// 00607e7a  6603dd               add bx, bp
// 00607e7d  bd80000000           mov ebp, 0x80
// 00607e82  6603dd               add bx, bp
// 00607e85  0fb7db               movzx ebx, bx
// 00607e88  0fb7eb               movzx ebp, bx
// 00607e8b  8bdd                 mov ebx, ebp
// 00607e8d  c1eb08               shr ebx, 8
// 00607e90  03dd                 add ebx, ebp
// 00607e92  c1fb08               sar ebx, 8
// 00607e95  885efe               mov byte ptr [esi - 2], bl
// 00607e98  0fb75a04             movzx ebx, word ptr [edx + 4]
// 00607e9c  660fb62f             movzx bp, byte ptr [edi]
// 00607ea0  660fafd9             imul bx, cx
// 00607ea4  660fafe8             imul bp, ax
// 00607ea8  6603dd               add bx, bp
// 00607eab  bd80000000           mov ebp, 0x80
// 00607eb0  6603dd               add bx, bp
// 00607eb3  0fb7db               movzx ebx, bx
// 00607eb6  0fb7eb               movzx ebp, bx
// 00607eb9  8bdd                 mov ebx, ebp
// 00607ebb  c1eb08               shr ebx, 8
// 00607ebe  03dd                 add ebx, ebp
// 00607ec0  c1fb08               sar ebx, 8
// 00607ec3  885eff               mov byte ptr [esi - 1], bl
// 00607ec6  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 00607eca  660fafd8             imul bx, ax
// 00607ece  668b4206             mov ax, word ptr [edx + 6]
// 00607ed2  660fafc1             imul ax, cx
// 00607ed6  6603d8               add bx, ax
// 00607ed9  b980000000           mov ecx, 0x80
// 00607ede  6603d9               add bx, cx
// 00607ee1  0fb7c3               movzx eax, bx
// 00607ee4  8bc8                 mov ecx, eax
// 00607ee6  c1e908               shr ecx, 8
// 00607ee9  03c8                 add ecx, eax
// 00607eeb  c1f908               sar ecx, 8
// 00607eee  880e                 mov byte ptr [esi], cl
// 00607ef0  83c704               add edi, 4
// 00607ef3  83c603               add esi, 3
// 00607ef6  836c241801           sub dword ptr [esp + 0x18], 1
// 00607efb  0f8526ffffff         jne 0x607e27
// 00607f01  e9ea030000           jmp 0x6082f0
// 00607f06  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00607f0a  85ed                 test ebp, ebp
// 00607f0c  0f8467020000         je 0x608179
// 00607f12  837c244800           cmp dword ptr [esp + 0x48], 0
// 00607f17  0f845c020000         je 0x608179
// 00607f1d  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 00607f22  0f8451020000         je 0x608179
// 00607f28  85c9                 test ecx, ecx
// 00607f2a  0f86c0030000         jbe 0x6082f0
// 00607f30  8b542428             mov edx, dword ptr [esp + 0x28]
// 00607f34  8a5c2450             mov bl, byte ptr [esp + 0x50]
// 00607f38  8d4202               lea eax, [edx + 2]
// 00607f3b  42                   inc edx
// 00607f3c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00607f40  660fb64a05           movzx cx, byte ptr [edx + 5]
// 00607f45  be00010000           mov esi, 0x100
// 00607f4a  660fafce             imul cx, si
// 00607f4e  660fb67206           movzx si, byte ptr [edx + 6]
// 00607f53  6603ce               add cx, si
// 00607f56  0fb7f1               movzx esi, cx
// 00607f59  b9ffff0000           mov ecx, 0xffff
// 00607f5e  663bf1               cmp si, cx
// 00607f61  0f8583000000         jne 0x607fea
// 00607f67  0fb632               movzx esi, byte ptr [edx]
// 00607f6a  0fb6cb               movzx ecx, bl
// 00607f6d  d3ee                 shr esi, cl
// 00607f6f  894c2418             mov dword ptr [esp + 0x18], ecx
// 00607f73  0fb64aff             movzx ecx, byte ptr [edx - 1]
// 00607f77  8b74b500             mov esi, dword ptr [ebp + esi*4]
// 00607f7b  0fb7344e             movzx esi, word ptr [esi + ecx*2]
// 00607f7f  8bce                 mov ecx, esi
// 00607f81  c1e908               shr ecx, 8
// 00607f84  8848fe               mov byte ptr [eax - 2], cl
// 00607f87  89742414             mov dword ptr [esp + 0x14], esi
// 00607f8b  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 00607f90  8848ff               mov byte ptr [eax - 1], cl
// 00607f93  0fb67202             movzx esi, byte ptr [edx + 2]
// 00607f97  0fb64c2418           movzx ecx, byte ptr [esp + 0x18]
// 00607f9c  d3ee                 shr esi, cl
// 00607f9e  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 00607fa2  8b74b500             mov esi, dword ptr [ebp + esi*4]
// 00607fa6  0fb7344e             movzx esi, word ptr [esi + ecx*2]
// 00607faa  8bce                 mov ecx, esi
// 00607fac  c1e908               shr ecx, 8
// 00607faf  8808                 mov byte ptr [eax], cl
// 00607fb1  89742414             mov dword ptr [esp + 0x14], esi
// 00607fb5  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 00607fba  884801               mov byte ptr [eax + 1], cl
// 00607fbd  0fb67204             movzx esi, byte ptr [edx + 4]
// 00607fc1  0fb64c2418           movzx ecx, byte ptr [esp + 0x18]
// 00607fc6  d3ee                 shr esi, cl
// 00607fc8  0fb64a03             movzx ecx, byte ptr [edx + 3]
// 00607fcc  8b74b500             mov esi, dword ptr [ebp + esi*4]
// 00607fd0  0fb7344e             movzx esi, word ptr [esi + ecx*2]
// 00607fd4  8bce                 mov ecx, esi
// 00607fd6  c1e908               shr ecx, 8
// 00607fd9  89742414             mov dword ptr [esp + 0x14], esi
// 00607fdd  884802               mov byte ptr [eax + 2], cl
// 00607fe0  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 00607fe5  e976010000           jmp 0x608160
// 00607fea  6685f6               test si, si
// 00607fed  7543                 jne 0x608032
// 00607fef  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00607ff3  0fb64903             movzx ecx, byte ptr [ecx + 3]
// 00607ff7  8848fe               mov byte ptr [eax - 2], cl
// 00607ffa  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00607ffe  0fb64902             movzx ecx, byte ptr [ecx + 2]
// 00608002  8848ff               mov byte ptr [eax - 1], cl
// 00608005  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00608009  0fb64905             movzx ecx, byte ptr [ecx + 5]
// 0060800d  8808                 mov byte ptr [eax], cl
// 0060800f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00608013  0fb64904             movzx ecx, byte ptr [ecx + 4]
// 00608017  884801               mov byte ptr [eax + 1], cl
// 0060801a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0060801e  0fb64907             movzx ecx, byte ptr [ecx + 7]
// 00608022  884802               mov byte ptr [eax + 2], cl
// 00608025  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00608029  0fb64906             movzx ecx, byte ptr [ecx + 6]
// 0060802d  e92e010000           jmp 0x608160
// 00608032  0fb7fe               movzx edi, si
// 00608035  0fb632               movzx esi, byte ptr [edx]
// 00608038  0fb6cb               movzx ecx, bl
// 0060803b  d3ee                 shr esi, cl
// 0060803d  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 00608041  894c2418             mov dword ptr [esp + 0x18], ecx
// 00608045  0fb64aff             movzx ecx, byte ptr [edx - 1]
// 00608049  8b34b3               mov esi, dword ptr [ebx + esi*4]
// 0060804c  0fb70c4e             movzx ecx, word ptr [esi + ecx*2]
// 00608050  8b742434             mov esi, dword ptr [esp + 0x34]
// 00608054  0fafcf               imul ecx, edi
// 00608057  0fb77602             movzx esi, word ptr [esi + 2]
// 0060805b  bdffff0000           mov ebp, 0xffff
// 00608060  2bef                 sub ebp, edi
// 00608062  0faff5               imul esi, ebp
// 00608065  8d8c3100800000       lea ecx, [ecx + esi + 0x8000]
// 0060806c  8bf1                 mov esi, ecx
// 0060806e  c1ee10               shr esi, 0x10
// 00608071  03f1                 add esi, ecx
// 00608073  0fb74c2450           movzx ecx, word ptr [esp + 0x50]
// 00608078  c1ee10               shr esi, 0x10
// 0060807b  0fb7de               movzx ebx, si
// 0060807e  894c2414             mov dword ptr [esp + 0x14], ecx
// 00608082  0fb6f3               movzx esi, bl
// 00608085  d3ee                 shr esi, cl
// 00608087  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0060808b  c1eb08               shr ebx, 8
// 0060808e  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00608091  0fb70c59             movzx ecx, word ptr [ecx + ebx*2]
// 00608095  8848ff               mov byte ptr [eax - 1], cl
// 00608098  8bd9                 mov ebx, ecx
// 0060809a  0fb64c2418           movzx ecx, byte ptr [esp + 0x18]
// 0060809f  c1eb08               shr ebx, 8
// 006080a2  8858fe               mov byte ptr [eax - 2], bl
// 006080a5  0fb67202             movzx esi, byte ptr [edx + 2]
// 006080a9  d3ee                 shr esi, cl
// 006080ab  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 006080af  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 006080b3  8b34b3               mov esi, dword ptr [ebx + esi*4]
// 006080b6  0fb70c4e             movzx ecx, word ptr [esi + ecx*2]
// 006080ba  8b742434             mov esi, dword ptr [esp + 0x34]
// 006080be  0fafcf               imul ecx, edi
// 006080c1  0fb77604             movzx esi, word ptr [esi + 4]
// 006080c5  0faff5               imul esi, ebp
// 006080c8  8d8c3100800000       lea ecx, [ecx + esi + 0x8000]
// 006080cf  8bf1                 mov esi, ecx
// 006080d1  c1ee10               shr esi, 0x10
// 006080d4  03f1                 add esi, ecx
// 006080d6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006080da  c1ee10               shr esi, 0x10
// 006080dd  0fb7de               movzx ebx, si
// 006080e0  0fb6f3               movzx esi, bl
// 006080e3  d3ee                 shr esi, cl
// 006080e5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006080e9  c1eb08               shr ebx, 8
// 006080ec  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 006080ef  0fb70c59             movzx ecx, word ptr [ecx + ebx*2]
// 006080f3  8bd9                 mov ebx, ecx
// 006080f5  884801               mov byte ptr [eax + 1], cl
// 006080f8  0fb64c2418           movzx ecx, byte ptr [esp + 0x18]
// 006080fd  c1eb08               shr ebx, 8
// 00608100  8818                 mov byte ptr [eax], bl
// 00608102  0fb67204             movzx esi, byte ptr [edx + 4]
// 00608106  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0060810a  d3ee                 shr esi, cl
// 0060810c  0fb64a03             movzx ecx, byte ptr [edx + 3]
// 00608110  8b34b3               mov esi, dword ptr [ebx + esi*4]
// 00608113  0fb70c4e             movzx ecx, word ptr [esi + ecx*2]
// 00608117  8b742434             mov esi, dword ptr [esp + 0x34]
// 0060811b  0fafcf               imul ecx, edi
// 0060811e  0fb77606             movzx esi, word ptr [esi + 6]
// 00608122  0faff5               imul esi, ebp
// 00608125  8d8c3100800000       lea ecx, [ecx + esi + 0x8000]
// 0060812c  8bf1                 mov esi, ecx
// 0060812e  c1ee10               shr esi, 0x10
// 00608131  03f1                 add esi, ecx
// 00608133  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00608137  c1ee10               shr esi, 0x10
// 0060813a  0fb7de               movzx ebx, si
// 0060813d  0fb6f3               movzx esi, bl
// 00608140  d3ee                 shr esi, cl
// 00608142  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00608146  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00608149  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0060814d  c1eb08               shr ebx, 8
// 00608150  0fb70c59             movzx ecx, word ptr [ecx + ebx*2]
// 00608154  8bd9                 mov ebx, ecx
// 00608156  c1eb08               shr ebx, 8
// 00608159  885802               mov byte ptr [eax + 2], bl
// 0060815c  8a5c2450             mov bl, byte ptr [esp + 0x50]
// 00608160  884803               mov byte ptr [eax + 3], cl
// 00608163  83c208               add edx, 8
// 00608166  83c006               add eax, 6
// 00608169  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0060816e  0f85ccfdffff         jne 0x607f40
// 00608174  e977010000           jmp 0x6082f0
// 00608179  8bd1                 mov edx, ecx
// 0060817b  85d2                 test edx, edx
// 0060817d  0f866d010000         jbe 0x6082f0
// 00608183  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00608187  8b742430             mov esi, dword ptr [esp + 0x30]
// 0060818b  8d4102               lea eax, [ecx + 2]
// 0060818e  83c107               add ecx, 7
// 00608191  8954241c             mov dword ptr [esp + 0x1c], edx
// 00608195  eb09                 jmp 0x6081a0
// 00608197  8da42400000000       lea esp, [esp]
// 0060819e  8bff                 mov edi, edi
// 006081a0  660fb651ff           movzx dx, byte ptr [ecx - 1]
// 006081a5  bf00010000           mov edi, 0x100
// 006081aa  660fafd7             imul dx, di
// 006081ae  660fb639             movzx di, byte ptr [ecx]
// 006081b2  6603d7               add dx, di
// 006081b5  0fb7d2               movzx edx, dx
// 006081b8  bfffff0000           mov edi, 0xffff
// 006081bd  663bd7               cmp dx, di
// 006081c0  7513                 jne 0x6081d5
// 006081c2  8b51f9               mov edx, dword ptr [ecx - 7]
// 006081c5  8950fe               mov dword ptr [eax - 2], edx
// 006081c8  668b51fd             mov dx, word ptr [ecx - 3]
// 006081cc  66895002             mov word ptr [eax + 2], dx
// 006081d0  e90a010000           jmp 0x6082df
// 006081d5  6685d2               test dx, dx
// 006081d8  752b                 jne 0x608205
// 006081da  0fb65603             movzx edx, byte ptr [esi + 3]
// 006081de  8850fe               mov byte ptr [eax - 2], dl
// 006081e1  0fb65602             movzx edx, byte ptr [esi + 2]
// 006081e5  8850ff               mov byte ptr [eax - 1], dl
// 006081e8  0fb65605             movzx edx, byte ptr [esi + 5]
// 006081ec  8810                 mov byte ptr [eax], dl
// 006081ee  0fb65604             movzx edx, byte ptr [esi + 4]
// 006081f2  885001               mov byte ptr [eax + 1], dl
// 006081f5  0fb65607             movzx edx, byte ptr [esi + 7]
// 006081f9  885002               mov byte ptr [eax + 2], dl
// 006081fc  0fb65606             movzx edx, byte ptr [esi + 6]
// 00608200  e9d7000000           jmp 0x6082dc
// 00608205  0fb671fb             movzx esi, byte ptr [ecx - 5]
// 00608209  bf00010000           mov edi, 0x100
// 0060820e  660faff7             imul si, di
// 00608212  0fb679fc             movzx edi, byte ptr [ecx - 4]
// 00608216  6603f7               add si, di
// 00608219  0fb7f6               movzx esi, si
// 0060821c  89742418             mov dword ptr [esp + 0x18], esi
// 00608220  0fb671fd             movzx esi, byte ptr [ecx - 3]
// 00608224  bf00010000           mov edi, 0x100
// 00608229  660faff7             imul si, di
// 0060822d  0fb679fe             movzx edi, byte ptr [ecx - 2]
// 00608231  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00608235  6603f7               add si, di
// 00608238  0fb7f6               movzx esi, si
// 0060823b  89742414             mov dword ptr [esp + 0x14], esi
// 0060823f  0fb7f2               movzx esi, dx
// 00608242  660fb651f9           movzx dx, byte ptr [ecx - 7]
// 00608247  bb00010000           mov ebx, 0x100
// 0060824c  660fafd3             imul dx, bx
// 00608250  660fb659fa           movzx bx, byte ptr [ecx - 6]
// 00608255  6603d3               add dx, bx
// 00608258  0fb75d02             movzx ebx, word ptr [ebp + 2]
// 0060825c  0fb7d2               movzx edx, dx
// 0060825f  0fafd6               imul edx, esi
// 00608262  bfffff0000           mov edi, 0xffff
// 00608267  2bfe                 sub edi, esi
// 00608269  0fafdf               imul ebx, edi
// 0060826c  8d9c1a00800000       lea ebx, [edx + ebx + 0x8000]
// 00608273  8bd3                 mov edx, ebx
// 00608275  c1ea10               shr edx, 0x10
// 00608278  03d3                 add edx, ebx
// 0060827a  c1ea10               shr edx, 0x10
// 0060827d  8bda                 mov ebx, edx
// 0060827f  8850ff               mov byte ptr [eax - 1], dl
// 00608282  c1eb08               shr ebx, 8
// 00608285  8858fe               mov byte ptr [eax - 2], bl
// 00608288  0fb75504             movzx edx, word ptr [ebp + 4]
// 0060828c  0fb75c2418           movzx ebx, word ptr [esp + 0x18]
// 00608291  0fafd7               imul edx, edi
// 00608294  0fafde               imul ebx, esi
// 00608297  8d9c1a00800000       lea ebx, [edx + ebx + 0x8000]
// 0060829e  8bd3                 mov edx, ebx
// 006082a0  c1ea10               shr edx, 0x10
// 006082a3  03d3                 add edx, ebx
// 006082a5  c1ea10               shr edx, 0x10
// 006082a8  8bda                 mov ebx, edx
// 006082aa  885001               mov byte ptr [eax + 1], dl
// 006082ad  c1eb08               shr ebx, 8
// 006082b0  8818                 mov byte ptr [eax], bl
// 006082b2  0fb75506             movzx edx, word ptr [ebp + 6]
// 006082b6  0fafd7               imul edx, edi
// 006082b9  0fb77c2414           movzx edi, word ptr [esp + 0x14]
// 006082be  0faffe               imul edi, esi
// 006082c1  8db43a00800000       lea esi, [edx + edi + 0x8000]
// 006082c8  8bd6                 mov edx, esi
// 006082ca  c1ea10               shr edx, 0x10
// 006082cd  03d6                 add edx, esi
// 006082cf  c1ea10               shr edx, 0x10
// 006082d2  8bda                 mov ebx, edx
// 006082d4  c1eb08               shr ebx, 8
// 006082d7  885802               mov byte ptr [eax + 2], bl
// 006082da  8bf5                 mov esi, ebp
// 006082dc  885003               mov byte ptr [eax + 3], dl
// 006082df  83c108               add ecx, 8
// 006082e2  83c006               add eax, 6
// 006082e5  836c241c01           sub dword ptr [esp + 0x1c], 1
// 006082ea  0f85b0feffff         jne 0x6081a0
// 006082f0  5f                   pop edi
// 006082f1  5e                   pop esi
// 006082f2  5b                   pop ebx
// 006082f3  8b542418             mov edx, dword ptr [esp + 0x18]
// 006082f7  8a4208               mov al, byte ptr [edx + 8]
// 006082fa  a804                 test al, 4
// 006082fc  7438                 je 0x608336
// 006082fe  fe4a0a               dec byte ptr [edx + 0xa]
// 00608301  8a4a0a               mov cl, byte ptr [edx + 0xa]
// 00608304  24fb                 and al, 0xfb
// 00608306  884208               mov byte ptr [edx + 8], al
// 00608309  8a4209               mov al, byte ptr [edx + 9]
// 0060830c  f6e9                 imul cl
// 0060830e  88420b               mov byte ptr [edx + 0xb], al
// 00608311  3c08                 cmp al, 8
// 00608313  0fb6c0               movzx eax, al
// 00608316  7210                 jb 0x608328
// 00608318  c1e803               shr eax, 3
// 0060831b  0faf442404           imul eax, dword ptr [esp + 4]
// 00608320  894204               mov dword ptr [edx + 4], eax
// 00608323  5d                   pop ebp
// 00608324  83c410               add esp, 0x10
// 00608327  c3                   ret 
// 00608328  0faf442404           imul eax, dword ptr [esp + 4]
// 0060832d  83c007               add eax, 7
// 00608330  c1e803               shr eax, 3
// 00608333  894204               mov dword ptr [edx + 4], eax
// 00608336  5d                   pop ebp
// 00608337  83c410               add esp, 0x10
// 0060833a  c3                   ret 
// 0060833b  90                   nop 
// 0060833c  2f                   das 
// 0060833d  7360                 jae 0x60839f
// 0060833f  00f0                 add al, dh
// 00608341  826000d5             and byte ptr [eax], 0xd5
// 00608345  7660                 jbe 0x6083a7
// 00608347  00f0                 add al, dh
// 00608349  8260007d             and byte ptr [eax], 0x7d
// 0060834d  7960                 jns 0x6083af
// 0060834f  00f0                 add al, dh
// 00608351  8260008e             and byte ptr [eax], 0x8e
// 00608355  7c60                 jl 0x6083b7
// 00608357  004f73               add byte ptr [edi + 0x73], cl
// 0060835a  60                   pushal 
// 0060835b  00b2736000be         add byte ptr [edx - 0x41ff9f8d], dh
// 00608361  7460                 je 0x6083c3
// 00608363  00b67560001a         add byte ptr [esi + 0x1a006075], dh
// 00608369  7660                 jbe 0x6083cb
// 0060836b  00f0                 add al, dh
// 0060836d  82600000             and byte ptr [eax], 0
// 00608371  010502050505         add dword ptr [0x5050502], eax
// 00608377  030505050505         add eax, dword ptr [0x5050505]
// library libpng-1.2.6/pngrtran.c (function _png_do_background)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrtran.c
