// roc 2007-03 00592600  unit: seg_00590000  size: 1409 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00592600
//
// 00592600  83ec0c               sub esp, 0xc
// 00592603  53                   push ebx
// 00592604  8b1d44e97700         mov ebx, dword ptr [0x77e944]
// 0059260a  55                   push ebp
// 0059260b  56                   push esi
// 0059260c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00592610  8be9                 mov ebp, ecx
// 00592612  837d3c00             cmp dword ptr [ebp + 0x3c], 0
// 00592616  57                   push edi
// 00592617  bf10000000           mov edi, 0x10
// 0059261c  0f85c0000000         jne 0x5926e2
// 00592622  8b06                 mov eax, dword ptr [esi]
// 00592624  83f8fe               cmp eax, -2
// 00592627  740c                 je 0x592635
// 00592629  85c0                 test eax, eax
// 0059262b  7406                 je 0x592633
// 0059262d  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00592631  7402                 je 0x592635
// 00592633  ffd3                 call ebx
// 00592635  8b4604               mov eax, dword ptr [esi + 4]
// 00592638  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0059263c  0f84a0000000         je 0x5926e2
// 00592642  8b06                 mov eax, dword ptr [esi]
// 00592644  83f8fe               cmp eax, -2
// 00592647  7421                 je 0x59266a
// 00592649  85c0                 test eax, eax
// 0059264b  7502                 jne 0x59264f
// 0059264d  ffd3                 call ebx
// 0059264f  8b06                 mov eax, dword ptr [esi]
// 00592651  397818               cmp dword ptr [eax + 0x18], edi
// 00592654  7205                 jb 0x59265b
// 00592656  8b4804               mov ecx, dword ptr [eax + 4]
// 00592659  eb03                 jmp 0x59265e
// 0059265b  8d4804               lea ecx, [eax + 4]
// 0059265e  8b5014               mov edx, dword ptr [eax + 0x14]
// 00592661  03d1                 add edx, ecx
// 00592663  395604               cmp dword ptr [esi + 4], edx
// 00592666  7202                 jb 0x59266a
// 00592668  ffd3                 call ebx
// 0059266a  837d3000             cmp dword ptr [ebp + 0x30], 0
// 0059266e  8b4604               mov eax, dword ptr [esi + 4]
// 00592671  8a00                 mov al, byte ptr [eax]
// 00592673  7420                 je 0x592695
// 00592675  6a01                 push 1
// 00592677  6a00                 push 0
// 00592679  8d4c2428             lea ecx, [esp + 0x28]
// 0059267d  51                   push ecx
// 0059267e  8d4d1c               lea ecx, [ebp + 0x1c]
// 00592681  8844242c             mov byte ptr [esp + 0x2c], al
// 00592685  ff1540e67700         call dword ptr [0x77e640]
// 0059268b  8b15fce67700         mov edx, dword ptr [0x77e6fc]
// 00592691  3b02                 cmp eax, dword ptr [edx]
// 00592693  eb15                 jmp 0x5926aa
// 00592695  807d3900             cmp byte ptr [ebp + 0x39], 0
// 00592699  7447                 je 0x5926e2
// 0059269b  0fbec0               movsx eax, al
// 0059269e  50                   push eax
// 0059269f  ff159ce97700         call dword ptr [0x77e99c]
// 005926a5  83c404               add esp, 4
// 005926a8  85c0                 test eax, eax
// 005926aa  0f95c0               setne al
// 005926ad  84c0                 test al, al
// 005926af  7431                 je 0x5926e2
// 005926b1  8b06                 mov eax, dword ptr [esi]
// 005926b3  83f8fe               cmp eax, -2
// 005926b6  7421                 je 0x5926d9
// 005926b8  85c0                 test eax, eax
// 005926ba  7502                 jne 0x5926be
// 005926bc  ffd3                 call ebx
// 005926be  8b06                 mov eax, dword ptr [esi]
// 005926c0  397818               cmp dword ptr [eax + 0x18], edi
// 005926c3  7205                 jb 0x5926ca
// 005926c5  8b4804               mov ecx, dword ptr [eax + 4]
// 005926c8  eb03                 jmp 0x5926cd
// 005926ca  8d4804               lea ecx, [eax + 4]
// 005926cd  8b5014               mov edx, dword ptr [eax + 0x14]
// 005926d0  03d1                 add edx, ecx
// 005926d2  395604               cmp dword ptr [esi + 4], edx
// 005926d5  7202                 jb 0x5926d9
// 005926d7  ffd3                 call ebx
// 005926d9  83460401             add dword ptr [esi + 4], 1
// 005926dd  e940ffffff           jmp 0x592622
// 005926e2  837d3c00             cmp dword ptr [ebp + 0x3c], 0
// 005926e6  8b4604               mov eax, dword ptr [esi + 4]
// 005926e9  8b3e                 mov edi, dword ptr [esi]
// 005926eb  89442418             mov dword ptr [esp + 0x18], eax
// 005926ef  897c2414             mov dword ptr [esp + 0x14], edi
// 005926f3  8bc7                 mov eax, edi
// 005926f5  0f8523020000         jne 0x59291e
// 005926fb  83f8fe               cmp eax, -2
// 005926fe  740c                 je 0x59270c
// 00592700  85c0                 test eax, eax
// 00592702  7406                 je 0x59270a
// 00592704  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00592708  7402                 je 0x59270c
// 0059270a  ffd3                 call ebx
// 0059270c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00592710  394e04               cmp dword ptr [esi + 4], ecx
// 00592713  750c                 jne 0x592721
// 00592715  5f                   pop edi
// 00592716  5e                   pop esi
// 00592717  5d                   pop ebp
// 00592718  32c0                 xor al, al
// 0059271a  5b                   pop ebx
// 0059271b  83c40c               add esp, 0xc
// 0059271e  c21000               ret 0x10
// 00592721  8b06                 mov eax, dword ptr [esi]
// 00592723  83f8fe               cmp eax, -2
// 00592726  7422                 je 0x59274a
// 00592728  85c0                 test eax, eax
// 0059272a  7502                 jne 0x59272e
// 0059272c  ffd3                 call ebx
// 0059272e  8b06                 mov eax, dword ptr [esi]
// 00592730  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00592734  7205                 jb 0x59273b
// 00592736  8b4804               mov ecx, dword ptr [eax + 4]
// 00592739  eb03                 jmp 0x59273e
// 0059273b  8d4804               lea ecx, [eax + 4]
// 0059273e  8b5014               mov edx, dword ptr [eax + 0x14]
// 00592741  03d1                 add edx, ecx
// 00592743  395604               cmp dword ptr [esi + 4], edx
// 00592746  7202                 jb 0x59274a
// 00592748  ffd3                 call ebx
// 0059274a  8b4604               mov eax, dword ptr [esi + 4]
// 0059274d  0fb600               movzx eax, byte ptr [eax]
// 00592750  50                   push eax
// 00592751  8bcd                 mov ecx, ebp
// 00592753  e8a8f9ffff           call 0x592100
// 00592758  84c0                 test al, al
// 0059275a  745e                 je 0x5927ba
// 0059275c  8b06                 mov eax, dword ptr [esi]
// 0059275e  83f8fe               cmp eax, -2
// 00592761  744e                 je 0x5927b1
// 00592763  85c0                 test eax, eax
// 00592765  7502                 jne 0x592769
// 00592767  ffd3                 call ebx
// 00592769  8b06                 mov eax, dword ptr [esi]
// 0059276b  bf10000000           mov edi, 0x10
// 00592770  397818               cmp dword ptr [eax + 0x18], edi
// 00592773  7205                 jb 0x59277a
// 00592775  8b4804               mov ecx, dword ptr [eax + 4]
// 00592778  eb03                 jmp 0x59277d
// 0059277a  8d4804               lea ecx, [eax + 4]
// 0059277d  8b5014               mov edx, dword ptr [eax + 0x14]
// 00592780  03d1                 add edx, ecx
// 00592782  395604               cmp dword ptr [esi + 4], edx
// 00592785  7202                 jb 0x592789
// 00592787  ffd3                 call ebx
// 00592789  8b06                 mov eax, dword ptr [esi]
// 0059278b  83f8fe               cmp eax, -2
// 0059278e  7421                 je 0x5927b1
// 00592790  85c0                 test eax, eax
// 00592792  7502                 jne 0x592796
// 00592794  ffd3                 call ebx
// 00592796  8b06                 mov eax, dword ptr [esi]
// 00592798  397818               cmp dword ptr [eax + 0x18], edi
// 0059279b  7205                 jb 0x5927a2
// 0059279d  8b4804               mov ecx, dword ptr [eax + 4]
// 005927a0  eb03                 jmp 0x5927a5
// 005927a2  8d4804               lea ecx, [eax + 4]
// 005927a5  8b4014               mov eax, dword ptr [eax + 0x14]
// 005927a8  03c1                 add eax, ecx
// 005927aa  394604               cmp dword ptr [esi + 4], eax
// 005927ad  7202                 jb 0x5927b1
// 005927af  ffd3                 call ebx
// 005927b1  83460401             add dword ptr [esi + 4], 1
// 005927b5  e9a0030000           jmp 0x592b5a
// 005927ba  8b3d88e87700         mov edi, dword ptr [0x77e888]
// 005927c0  8b06                 mov eax, dword ptr [esi]
// 005927c2  83f8fe               cmp eax, -2
// 005927c5  740c                 je 0x5927d3
// 005927c7  85c0                 test eax, eax
// 005927c9  7406                 je 0x5927d1
// 005927cb  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005927cf  7402                 je 0x5927d3
// 005927d1  ffd3                 call ebx
// 005927d3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005927d7  394e04               cmp dword ptr [esi + 4], ecx
// 005927da  0f847a030000         je 0x592b5a
// 005927e0  8b06                 mov eax, dword ptr [esi]
// 005927e2  83f8fe               cmp eax, -2
// 005927e5  7422                 je 0x592809
// 005927e7  85c0                 test eax, eax
// 005927e9  7502                 jne 0x5927ed
// 005927eb  ffd3                 call ebx
// 005927ed  8b06                 mov eax, dword ptr [esi]
// 005927ef  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005927f3  7205                 jb 0x5927fa
// 005927f5  8b4804               mov ecx, dword ptr [eax + 4]
// 005927f8  eb03                 jmp 0x5927fd
// 005927fa  8d4804               lea ecx, [eax + 4]
// 005927fd  8b5014               mov edx, dword ptr [eax + 0x14]
// 00592800  03d1                 add edx, ecx
// 00592802  395604               cmp dword ptr [esi + 4], edx
// 00592805  7202                 jb 0x592809
// 00592807  ffd3                 call ebx
// 00592809  837d3000             cmp dword ptr [ebp + 0x30], 0
// 0059280d  8b4604               mov eax, dword ptr [esi + 4]
// 00592810  8a00                 mov al, byte ptr [eax]
// 00592812  7420                 je 0x592834
// 00592814  6a01                 push 1
// 00592816  6a00                 push 0
// 00592818  8d4c2428             lea ecx, [esp + 0x28]
// 0059281c  51                   push ecx
// 0059281d  8d4d1c               lea ecx, [ebp + 0x1c]
// 00592820  8844242c             mov byte ptr [esp + 0x2c], al
// 00592824  ff1540e67700         call dword ptr [0x77e640]
// 0059282a  8b15fce67700         mov edx, dword ptr [0x77e6fc]
// 00592830  3b02                 cmp eax, dword ptr [edx]
// 00592832  eb15                 jmp 0x592849
// 00592834  807d3900             cmp byte ptr [ebp + 0x39], 0
// 00592838  741a                 je 0x592854
// 0059283a  0fbec0               movsx eax, al
// 0059283d  50                   push eax
// 0059283e  ff159ce97700         call dword ptr [0x77e99c]
// 00592844  83c404               add esp, 4
// 00592847  85c0                 test eax, eax
// 00592849  0f95c0               setne al
// 0059284c  84c0                 test al, al
// 0059284e  0f8506030000         jne 0x592b5a
// 00592854  8b06                 mov eax, dword ptr [esi]
// 00592856  83f8fe               cmp eax, -2
// 00592859  7422                 je 0x59287d
// 0059285b  85c0                 test eax, eax
// 0059285d  7502                 jne 0x592861
// 0059285f  ffd3                 call ebx
// 00592861  8b06                 mov eax, dword ptr [esi]
// 00592863  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00592867  7205                 jb 0x59286e
// 00592869  8b4804               mov ecx, dword ptr [eax + 4]
// 0059286c  eb03                 jmp 0x592871
// 0059286e  8d4804               lea ecx, [eax + 4]
// 00592871  8b5014               mov edx, dword ptr [eax + 0x14]
// 00592874  03d1                 add edx, ecx
// 00592876  395604               cmp dword ptr [esi + 4], edx
// 00592879  7202                 jb 0x59287d
// 0059287b  ffd3                 call ebx
// 0059287d  837d1400             cmp dword ptr [ebp + 0x14], 0
// 00592881  8b4604               mov eax, dword ptr [esi + 4]
// 00592884  8a00                 mov al, byte ptr [eax]
// 00592886  741f                 je 0x5928a7
// 00592888  6a01                 push 1
// 0059288a  6a00                 push 0
// 0059288c  8d4c2418             lea ecx, [esp + 0x18]
// 00592890  51                   push ecx
// 00592891  8bcd                 mov ecx, ebp
// 00592893  8844241c             mov byte ptr [esp + 0x1c], al
// 00592897  ff1540e67700         call dword ptr [0x77e640]
// 0059289d  8b15fce67700         mov edx, dword ptr [0x77e6fc]
// 005928a3  3b02                 cmp eax, dword ptr [edx]
// 005928a5  eb11                 jmp 0x5928b8
// 005928a7  807d3800             cmp byte ptr [ebp + 0x38], 0
// 005928ab  7416                 je 0x5928c3
// 005928ad  0fbec0               movsx eax, al
// 005928b0  50                   push eax
// 005928b1  ffd7                 call edi
// 005928b3  83c404               add esp, 4
// 005928b6  85c0                 test eax, eax
// 005928b8  0f95c0               setne al
// 005928bb  84c0                 test al, al
// 005928bd  0f8597020000         jne 0x592b5a
// 005928c3  8b06                 mov eax, dword ptr [esi]
// 005928c5  83f8fe               cmp eax, -2
// 005928c8  744b                 je 0x592915
// 005928ca  85c0                 test eax, eax
// 005928cc  7502                 jne 0x5928d0
// 005928ce  ffd3                 call ebx
// 005928d0  8b06                 mov eax, dword ptr [esi]
// 005928d2  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005928d6  7205                 jb 0x5928dd
// 005928d8  8b4804               mov ecx, dword ptr [eax + 4]
// 005928db  eb03                 jmp 0x5928e0
// 005928dd  8d4804               lea ecx, [eax + 4]
// 005928e0  8b5014               mov edx, dword ptr [eax + 0x14]
// 005928e3  03d1                 add edx, ecx
// 005928e5  395604               cmp dword ptr [esi + 4], edx
// 005928e8  7202                 jb 0x5928ec
// 005928ea  ffd3                 call ebx
// 005928ec  8b06                 mov eax, dword ptr [esi]
// 005928ee  83f8fe               cmp eax, -2
// 005928f1  7422                 je 0x592915
// 005928f3  85c0                 test eax, eax
// 005928f5  7502                 jne 0x5928f9
// 005928f7  ffd3                 call ebx
// 005928f9  8b06                 mov eax, dword ptr [esi]
// 005928fb  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005928ff  7205                 jb 0x592906
// 00592901  8b4804               mov ecx, dword ptr [eax + 4]
// 00592904  eb03                 jmp 0x592909
// 00592906  8d4804               lea ecx, [eax + 4]
// 00592909  8b4014               mov eax, dword ptr [eax + 0x14]
// 0059290c  03c1                 add eax, ecx
// 0059290e  394604               cmp dword ptr [esi + 4], eax
// 00592911  7202                 jb 0x592915
// 00592913  ffd3                 call ebx
// 00592915  83460401             add dword ptr [esi + 4], 1
// 00592919  e9a2feffff           jmp 0x5927c0
// 0059291e  83f8fe               cmp eax, -2
// 00592921  740c                 je 0x59292f
// 00592923  85c0                 test eax, eax
// 00592925  7406                 je 0x59292d
// 00592927  3b442424             cmp eax, dword ptr [esp + 0x24]
// 0059292b  7402                 je 0x59292f
// 0059292d  ffd3                 call ebx
// 0059292f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00592933  394e04               cmp dword ptr [esi + 4], ecx
// 00592936  7520                 jne 0x592958
// 00592938  807d4000             cmp byte ptr [ebp + 0x40], 0
// 0059293c  0f85d3fdffff         jne 0x592715
// 00592942  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00592946  c6454001             mov byte ptr [ebp + 0x40], 1
// 0059294a  8b5604               mov edx, dword ptr [esi + 4]
// 0059294d  8b06                 mov eax, dword ptr [esi]
// 0059294f  52                   push edx
// 00592950  50                   push eax
// 00592951  51                   push ecx
// 00592952  57                   push edi
// 00592953  e913020000           jmp 0x592b6b
// 00592958  8b06                 mov eax, dword ptr [esi]
// 0059295a  83f8fe               cmp eax, -2
// 0059295d  7422                 je 0x592981
// 0059295f  85c0                 test eax, eax
// 00592961  7502                 jne 0x592965
// 00592963  ffd3                 call ebx
// 00592965  8b06                 mov eax, dword ptr [esi]
// 00592967  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0059296b  7205                 jb 0x592972
// 0059296d  8b4804               mov ecx, dword ptr [eax + 4]
// 00592970  eb03                 jmp 0x592975
// 00592972  8d4804               lea ecx, [eax + 4]
// 00592975  8b5014               mov edx, dword ptr [eax + 0x14]
// 00592978  03d1                 add edx, ecx
// 0059297a  395604               cmp dword ptr [esi + 4], edx
// 0059297d  7202                 jb 0x592981
// 0059297f  ffd3                 call ebx
// 00592981  8b4604               mov eax, dword ptr [esi + 4]
// 00592984  0fb600               movzx eax, byte ptr [eax]
// 00592987  50                   push eax
// 00592988  8bcd                 mov ecx, ebp
// 0059298a  e871f7ffff           call 0x592100
// 0059298f  84c0                 test al, al
// 00592991  7421                 je 0x5929b4
// 00592993  807d4000             cmp byte ptr [ebp + 0x40], 0
// 00592997  0f84b9010000         je 0x592b56
// 0059299d  8bce                 mov ecx, esi
// 0059299f  e8bce1ecff           call 0x460b60
// 005929a4  8bce                 mov ecx, esi
// 005929a6  e895e3ecff           call 0x460d40
// 005929ab  c6454000             mov byte ptr [ebp + 0x40], 0
// 005929af  e9a6010000           jmp 0x592b5a
// 005929b4  807d4000             cmp byte ptr [ebp + 0x40], 0
// 005929b8  751a                 jne 0x5929d4
// 005929ba  8bce                 mov ecx, esi
// 005929bc  e89fe1ecff           call 0x460b60
// 005929c1  0fb608               movzx ecx, byte ptr [eax]
// 005929c4  51                   push ecx
// 005929c5  8bcd                 mov ecx, ebp
// 005929c7  e894f7ffff           call 0x592160
// 005929cc  84c0                 test al, al
// 005929ce  0f8582010000         jne 0x592b56
// 005929d4  8b06                 mov eax, dword ptr [esi]
// 005929d6  83f8fe               cmp eax, -2
// 005929d9  7428                 je 0x592a03
// 005929db  85c0                 test eax, eax
// 005929dd  7502                 jne 0x5929e1
// 005929df  ffd3                 call ebx
// 005929e1  8b06                 mov eax, dword ptr [esi]
// 005929e3  bf10000000           mov edi, 0x10
// 005929e8  397818               cmp dword ptr [eax + 0x18], edi
// 005929eb  7205                 jb 0x5929f2
// 005929ed  8b4804               mov ecx, dword ptr [eax + 4]
// 005929f0  eb03                 jmp 0x5929f5
// 005929f2  8d4804               lea ecx, [eax + 4]
// 005929f5  8b5014               mov edx, dword ptr [eax + 0x14]
// 005929f8  03d1                 add edx, ecx
// 005929fa  395604               cmp dword ptr [esi + 4], edx
// 005929fd  7209                 jb 0x592a08
// 005929ff  ffd3                 call ebx
// 00592a01  eb05                 jmp 0x592a08
// 00592a03  bf10000000           mov edi, 0x10
// 00592a08  8b4604               mov eax, dword ptr [esi + 4]
// 00592a0b  0fb600               movzx eax, byte ptr [eax]
// 00592a0e  50                   push eax
// 00592a0f  8bcd                 mov ecx, ebp
// 00592a11  e84af7ffff           call 0x592160
// 00592a16  84c0                 test al, al
// 00592a18  7416                 je 0x592a30
// 00592a1a  8bce                 mov ecx, esi
// 00592a1c  e81fe3ecff           call 0x460d40
// 00592a21  8b08                 mov ecx, dword ptr [eax]
// 00592a23  8b5004               mov edx, dword ptr [eax + 4]
// 00592a26  894c2414             mov dword ptr [esp + 0x14], ecx
// 00592a2a  89542418             mov dword ptr [esp + 0x18], edx
// 00592a2e  8bff                 mov edi, edi
// 00592a30  8b06                 mov eax, dword ptr [esi]
// 00592a32  83f8fe               cmp eax, -2
// 00592a35  740c                 je 0x592a43
// 00592a37  85c0                 test eax, eax
// 00592a39  7406                 je 0x592a41
// 00592a3b  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00592a3f  7402                 je 0x592a43
// 00592a41  ffd3                 call ebx
// 00592a43  8b4604               mov eax, dword ptr [esi + 4]
// 00592a46  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00592a4a  0f8406010000         je 0x592b56
// 00592a50  8b06                 mov eax, dword ptr [esi]
// 00592a52  83f8fe               cmp eax, -2
// 00592a55  7421                 je 0x592a78
// 00592a57  85c0                 test eax, eax
// 00592a59  7502                 jne 0x592a5d
// 00592a5b  ffd3                 call ebx
// 00592a5d  8b06                 mov eax, dword ptr [esi]
// 00592a5f  397818               cmp dword ptr [eax + 0x18], edi
// 00592a62  7205                 jb 0x592a69
// 00592a64  8b4804               mov ecx, dword ptr [eax + 4]
// 00592a67  eb03                 jmp 0x592a6c
// 00592a69  8d4804               lea ecx, [eax + 4]
// 00592a6c  8b5014               mov edx, dword ptr [eax + 0x14]
// 00592a6f  03d1                 add edx, ecx
// 00592a71  395604               cmp dword ptr [esi + 4], edx
// 00592a74  7202                 jb 0x592a78
// 00592a76  ffd3                 call ebx
// 00592a78  837d3000             cmp dword ptr [ebp + 0x30], 0
// 00592a7c  8b4604               mov eax, dword ptr [esi + 4]
// 00592a7f  8a00                 mov al, byte ptr [eax]
// 00592a81  7420                 je 0x592aa3
// 00592a83  6a01                 push 1
// 00592a85  6a00                 push 0
// 00592a87  8d4c2428             lea ecx, [esp + 0x28]
// 00592a8b  51                   push ecx
// 00592a8c  8d4d1c               lea ecx, [ebp + 0x1c]
// 00592a8f  8844242c             mov byte ptr [esp + 0x2c], al
// 00592a93  ff1540e67700         call dword ptr [0x77e640]
// 00592a99  8b15fce67700         mov edx, dword ptr [0x77e6fc]
// 00592a9f  3b02                 cmp eax, dword ptr [edx]
// 00592aa1  eb15                 jmp 0x592ab8
// 00592aa3  807d3900             cmp byte ptr [ebp + 0x39], 0
// 00592aa7  741a                 je 0x592ac3
// 00592aa9  0fbec0               movsx eax, al
// 00592aac  50                   push eax
// 00592aad  ff159ce97700         call dword ptr [0x77e99c]
// 00592ab3  83c404               add esp, 4
// 00592ab6  85c0                 test eax, eax
// 00592ab8  0f95c0               setne al
// 00592abb  84c0                 test al, al
// 00592abd  0f8593000000         jne 0x592b56
// 00592ac3  8b06                 mov eax, dword ptr [esi]
// 00592ac5  83f8fe               cmp eax, -2
// 00592ac8  7421                 je 0x592aeb
// 00592aca  85c0                 test eax, eax
// 00592acc  7502                 jne 0x592ad0
// 00592ace  ffd3                 call ebx
// 00592ad0  8b06                 mov eax, dword ptr [esi]
// 00592ad2  397818               cmp dword ptr [eax + 0x18], edi
// 00592ad5  7205                 jb 0x592adc
// 00592ad7  8b4804               mov ecx, dword ptr [eax + 4]
// 00592ada  eb03                 jmp 0x592adf
// 00592adc  8d4804               lea ecx, [eax + 4]
// 00592adf  8b5014               mov edx, dword ptr [eax + 0x14]
// 00592ae2  03d1                 add edx, ecx
// 00592ae4  395604               cmp dword ptr [esi + 4], edx
// 00592ae7  7202                 jb 0x592aeb
// 00592ae9  ffd3                 call ebx
// 00592aeb  8b4604               mov eax, dword ptr [esi + 4]
// 00592aee  0fb600               movzx eax, byte ptr [eax]
// 00592af1  50                   push eax
// 00592af2  8bcd                 mov ecx, ebp
// 00592af4  e807f6ffff           call 0x592100
// 00592af9  84c0                 test al, al
// 00592afb  7559                 jne 0x592b56
// 00592afd  8b06                 mov eax, dword ptr [esi]
// 00592aff  83f8fe               cmp eax, -2
// 00592b02  7449                 je 0x592b4d
// 00592b04  85c0                 test eax, eax
// 00592b06  7502                 jne 0x592b0a
// 00592b08  ffd3                 call ebx
// 00592b0a  8b06                 mov eax, dword ptr [esi]
// 00592b0c  397818               cmp dword ptr [eax + 0x18], edi
// 00592b0f  7205                 jb 0x592b16
// 00592b11  8b4804               mov ecx, dword ptr [eax + 4]
// 00592b14  eb03                 jmp 0x592b19
// 00592b16  8d4804               lea ecx, [eax + 4]
// 00592b19  8b5014               mov edx, dword ptr [eax + 0x14]
// 00592b1c  03d1                 add edx, ecx
// 00592b1e  395604               cmp dword ptr [esi + 4], edx
// 00592b21  7202                 jb 0x592b25
// 00592b23  ffd3                 call ebx
// 00592b25  8b06                 mov eax, dword ptr [esi]
// 00592b27  83f8fe               cmp eax, -2
// 00592b2a  7421                 je 0x592b4d
// 00592b2c  85c0                 test eax, eax
// 00592b2e  7502                 jne 0x592b32
// 00592b30  ffd3                 call ebx
// 00592b32  8b06                 mov eax, dword ptr [esi]
// 00592b34  397818               cmp dword ptr [eax + 0x18], edi
// 00592b37  7205                 jb 0x592b3e
// 00592b39  8b4804               mov ecx, dword ptr [eax + 4]
// 00592b3c  eb03                 jmp 0x592b41
// 00592b3e  8d4804               lea ecx, [eax + 4]
// 00592b41  8b4014               mov eax, dword ptr [eax + 0x14]
// 00592b44  03c1                 add eax, ecx
// 00592b46  394604               cmp dword ptr [esi + 4], eax
// 00592b49  7202                 jb 0x592b4d
// 00592b4b  ffd3                 call ebx
// 00592b4d  83460401             add dword ptr [esi + 4], 1
// 00592b51  e9dafeffff           jmp 0x592a30
// 00592b56  c6454001             mov byte ptr [ebp + 0x40], 1
// 00592b5a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00592b5d  8b16                 mov edx, dword ptr [esi]
// 00592b5f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00592b63  51                   push ecx
// 00592b64  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00592b68  52                   push edx
// 00592b69  50                   push eax
// 00592b6a  51                   push ecx
// 00592b6b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00592b6f  ff1528e57700         call dword ptr [0x77e528]
// 00592b75  5f                   pop edi
// 00592b76  5e                   pop esi
// 00592b77  5d                   pop ebp
// 00592b78  b001                 mov al, 1
// 00592b7a  5b                   pop ebx
// 00592b7b  83c40c               add esp, 0xc
// 00592b7e  c21000               ret 0x10
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?RV?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@?$char_separator@DU?$char_traits@D@std@@@boost@@QAE_NAAV?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
