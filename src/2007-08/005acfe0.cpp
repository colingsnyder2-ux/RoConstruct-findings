// roc 2007-08 005acfe0  unit: RBX::VLighting::?$FactoryProduct  size: 1409 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005acfe0
//
// 005acfe0  83ec0c               sub esp, 0xc
// 005acfe3  53                   push ebx
// 005acfe4  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005acfea  55                   push ebp
// 005acfeb  56                   push esi
// 005acfec  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005acff0  8be9                 mov ebp, ecx
// 005acff2  837d3c00             cmp dword ptr [ebp + 0x3c], 0
// 005acff6  57                   push edi
// 005acff7  bf10000000           mov edi, 0x10
// 005acffc  0f85c0000000         jne 0x5ad0c2
// 005ad002  8b06                 mov eax, dword ptr [esi]
// 005ad004  83f8fe               cmp eax, -2
// 005ad007  740c                 je 0x5ad015
// 005ad009  85c0                 test eax, eax
// 005ad00b  7406                 je 0x5ad013
// 005ad00d  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005ad011  7402                 je 0x5ad015
// 005ad013  ffd3                 call ebx
// 005ad015  8b4604               mov eax, dword ptr [esi + 4]
// 005ad018  3b442428             cmp eax, dword ptr [esp + 0x28]
// 005ad01c  0f84a0000000         je 0x5ad0c2
// 005ad022  8b06                 mov eax, dword ptr [esi]
// 005ad024  83f8fe               cmp eax, -2
// 005ad027  7421                 je 0x5ad04a
// 005ad029  85c0                 test eax, eax
// 005ad02b  7502                 jne 0x5ad02f
// 005ad02d  ffd3                 call ebx
// 005ad02f  8b06                 mov eax, dword ptr [esi]
// 005ad031  397818               cmp dword ptr [eax + 0x18], edi
// 005ad034  7205                 jb 0x5ad03b
// 005ad036  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad039  eb03                 jmp 0x5ad03e
// 005ad03b  8d4804               lea ecx, [eax + 4]
// 005ad03e  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ad041  03d1                 add edx, ecx
// 005ad043  395604               cmp dword ptr [esi + 4], edx
// 005ad046  7202                 jb 0x5ad04a
// 005ad048  ffd3                 call ebx
// 005ad04a  837d3000             cmp dword ptr [ebp + 0x30], 0
// 005ad04e  8b4604               mov eax, dword ptr [esi + 4]
// 005ad051  8a00                 mov al, byte ptr [eax]
// 005ad053  7420                 je 0x5ad075
// 005ad055  6a01                 push 1
// 005ad057  6a00                 push 0
// 005ad059  8d4c2428             lea ecx, [esp + 0x28]
// 005ad05d  51                   push ecx
// 005ad05e  8d4d1c               lea ecx, [ebp + 0x1c]
// 005ad061  8844242c             mov byte ptr [esp + 0x2c], al
// 005ad065  ff157ce57700         call dword ptr [0x77e57c]
// 005ad06b  8b153ce67700         mov edx, dword ptr [0x77e63c]
// 005ad071  3b02                 cmp eax, dword ptr [edx]
// 005ad073  eb15                 jmp 0x5ad08a
// 005ad075  807d3900             cmp byte ptr [ebp + 0x39], 0
// 005ad079  7447                 je 0x5ad0c2
// 005ad07b  0fbec0               movsx eax, al
// 005ad07e  50                   push eax
// 005ad07f  ff159ce97700         call dword ptr [0x77e99c]
// 005ad085  83c404               add esp, 4
// 005ad088  85c0                 test eax, eax
// 005ad08a  0f95c0               setne al
// 005ad08d  84c0                 test al, al
// 005ad08f  7431                 je 0x5ad0c2
// 005ad091  8b06                 mov eax, dword ptr [esi]
// 005ad093  83f8fe               cmp eax, -2
// 005ad096  7421                 je 0x5ad0b9
// 005ad098  85c0                 test eax, eax
// 005ad09a  7502                 jne 0x5ad09e
// 005ad09c  ffd3                 call ebx
// 005ad09e  8b06                 mov eax, dword ptr [esi]
// 005ad0a0  397818               cmp dword ptr [eax + 0x18], edi
// 005ad0a3  7205                 jb 0x5ad0aa
// 005ad0a5  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad0a8  eb03                 jmp 0x5ad0ad
// 005ad0aa  8d4804               lea ecx, [eax + 4]
// 005ad0ad  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ad0b0  03d1                 add edx, ecx
// 005ad0b2  395604               cmp dword ptr [esi + 4], edx
// 005ad0b5  7202                 jb 0x5ad0b9
// 005ad0b7  ffd3                 call ebx
// 005ad0b9  83460401             add dword ptr [esi + 4], 1
// 005ad0bd  e940ffffff           jmp 0x5ad002
// 005ad0c2  837d3c00             cmp dword ptr [ebp + 0x3c], 0
// 005ad0c6  8b4604               mov eax, dword ptr [esi + 4]
// 005ad0c9  8b3e                 mov edi, dword ptr [esi]
// 005ad0cb  89442418             mov dword ptr [esp + 0x18], eax
// 005ad0cf  897c2414             mov dword ptr [esp + 0x14], edi
// 005ad0d3  8bc7                 mov eax, edi
// 005ad0d5  0f8523020000         jne 0x5ad2fe
// 005ad0db  83f8fe               cmp eax, -2
// 005ad0de  740c                 je 0x5ad0ec
// 005ad0e0  85c0                 test eax, eax
// 005ad0e2  7406                 je 0x5ad0ea
// 005ad0e4  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005ad0e8  7402                 je 0x5ad0ec
// 005ad0ea  ffd3                 call ebx
// 005ad0ec  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ad0f0  394e04               cmp dword ptr [esi + 4], ecx
// 005ad0f3  750c                 jne 0x5ad101
// 005ad0f5  5f                   pop edi
// 005ad0f6  5e                   pop esi
// 005ad0f7  5d                   pop ebp
// 005ad0f8  32c0                 xor al, al
// 005ad0fa  5b                   pop ebx
// 005ad0fb  83c40c               add esp, 0xc
// 005ad0fe  c21000               ret 0x10
// 005ad101  8b06                 mov eax, dword ptr [esi]
// 005ad103  83f8fe               cmp eax, -2
// 005ad106  7422                 je 0x5ad12a
// 005ad108  85c0                 test eax, eax
// 005ad10a  7502                 jne 0x5ad10e
// 005ad10c  ffd3                 call ebx
// 005ad10e  8b06                 mov eax, dword ptr [esi]
// 005ad110  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ad114  7205                 jb 0x5ad11b
// 005ad116  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad119  eb03                 jmp 0x5ad11e
// 005ad11b  8d4804               lea ecx, [eax + 4]
// 005ad11e  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ad121  03d1                 add edx, ecx
// 005ad123  395604               cmp dword ptr [esi + 4], edx
// 005ad126  7202                 jb 0x5ad12a
// 005ad128  ffd3                 call ebx
// 005ad12a  8b4604               mov eax, dword ptr [esi + 4]
// 005ad12d  0fb600               movzx eax, byte ptr [eax]
// 005ad130  50                   push eax
// 005ad131  8bcd                 mov ecx, ebp
// 005ad133  e818fcffff           call 0x5acd50
// 005ad138  84c0                 test al, al
// 005ad13a  745e                 je 0x5ad19a
// 005ad13c  8b06                 mov eax, dword ptr [esi]
// 005ad13e  83f8fe               cmp eax, -2
// 005ad141  744e                 je 0x5ad191
// 005ad143  85c0                 test eax, eax
// 005ad145  7502                 jne 0x5ad149
// 005ad147  ffd3                 call ebx
// 005ad149  8b06                 mov eax, dword ptr [esi]
// 005ad14b  bf10000000           mov edi, 0x10
// 005ad150  397818               cmp dword ptr [eax + 0x18], edi
// 005ad153  7205                 jb 0x5ad15a
// 005ad155  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad158  eb03                 jmp 0x5ad15d
// 005ad15a  8d4804               lea ecx, [eax + 4]
// 005ad15d  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ad160  03d1                 add edx, ecx
// 005ad162  395604               cmp dword ptr [esi + 4], edx
// 005ad165  7202                 jb 0x5ad169
// 005ad167  ffd3                 call ebx
// 005ad169  8b06                 mov eax, dword ptr [esi]
// 005ad16b  83f8fe               cmp eax, -2
// 005ad16e  7421                 je 0x5ad191
// 005ad170  85c0                 test eax, eax
// 005ad172  7502                 jne 0x5ad176
// 005ad174  ffd3                 call ebx
// 005ad176  8b06                 mov eax, dword ptr [esi]
// 005ad178  397818               cmp dword ptr [eax + 0x18], edi
// 005ad17b  7205                 jb 0x5ad182
// 005ad17d  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad180  eb03                 jmp 0x5ad185
// 005ad182  8d4804               lea ecx, [eax + 4]
// 005ad185  8b4014               mov eax, dword ptr [eax + 0x14]
// 005ad188  03c1                 add eax, ecx
// 005ad18a  394604               cmp dword ptr [esi + 4], eax
// 005ad18d  7202                 jb 0x5ad191
// 005ad18f  ffd3                 call ebx
// 005ad191  83460401             add dword ptr [esi + 4], 1
// 005ad195  e9a0030000           jmp 0x5ad53a
// 005ad19a  8b3d4ce87700         mov edi, dword ptr [0x77e84c]
// 005ad1a0  8b06                 mov eax, dword ptr [esi]
// 005ad1a2  83f8fe               cmp eax, -2
// 005ad1a5  740c                 je 0x5ad1b3
// 005ad1a7  85c0                 test eax, eax
// 005ad1a9  7406                 je 0x5ad1b1
// 005ad1ab  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005ad1af  7402                 je 0x5ad1b3
// 005ad1b1  ffd3                 call ebx
// 005ad1b3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ad1b7  394e04               cmp dword ptr [esi + 4], ecx
// 005ad1ba  0f847a030000         je 0x5ad53a
// 005ad1c0  8b06                 mov eax, dword ptr [esi]
// 005ad1c2  83f8fe               cmp eax, -2
// 005ad1c5  7422                 je 0x5ad1e9
// 005ad1c7  85c0                 test eax, eax
// 005ad1c9  7502                 jne 0x5ad1cd
// 005ad1cb  ffd3                 call ebx
// 005ad1cd  8b06                 mov eax, dword ptr [esi]
// 005ad1cf  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ad1d3  7205                 jb 0x5ad1da
// 005ad1d5  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad1d8  eb03                 jmp 0x5ad1dd
// 005ad1da  8d4804               lea ecx, [eax + 4]
// 005ad1dd  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ad1e0  03d1                 add edx, ecx
// 005ad1e2  395604               cmp dword ptr [esi + 4], edx
// 005ad1e5  7202                 jb 0x5ad1e9
// 005ad1e7  ffd3                 call ebx
// 005ad1e9  837d3000             cmp dword ptr [ebp + 0x30], 0
// 005ad1ed  8b4604               mov eax, dword ptr [esi + 4]
// 005ad1f0  8a00                 mov al, byte ptr [eax]
// 005ad1f2  7420                 je 0x5ad214
// 005ad1f4  6a01                 push 1
// 005ad1f6  6a00                 push 0
// 005ad1f8  8d4c2428             lea ecx, [esp + 0x28]
// 005ad1fc  51                   push ecx
// 005ad1fd  8d4d1c               lea ecx, [ebp + 0x1c]
// 005ad200  8844242c             mov byte ptr [esp + 0x2c], al
// 005ad204  ff157ce57700         call dword ptr [0x77e57c]
// 005ad20a  8b153ce67700         mov edx, dword ptr [0x77e63c]
// 005ad210  3b02                 cmp eax, dword ptr [edx]
// 005ad212  eb15                 jmp 0x5ad229
// 005ad214  807d3900             cmp byte ptr [ebp + 0x39], 0
// 005ad218  741a                 je 0x5ad234
// 005ad21a  0fbec0               movsx eax, al
// 005ad21d  50                   push eax
// 005ad21e  ff159ce97700         call dword ptr [0x77e99c]
// 005ad224  83c404               add esp, 4
// 005ad227  85c0                 test eax, eax
// 005ad229  0f95c0               setne al
// 005ad22c  84c0                 test al, al
// 005ad22e  0f8506030000         jne 0x5ad53a
// 005ad234  8b06                 mov eax, dword ptr [esi]
// 005ad236  83f8fe               cmp eax, -2
// 005ad239  7422                 je 0x5ad25d
// 005ad23b  85c0                 test eax, eax
// 005ad23d  7502                 jne 0x5ad241
// 005ad23f  ffd3                 call ebx
// 005ad241  8b06                 mov eax, dword ptr [esi]
// 005ad243  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ad247  7205                 jb 0x5ad24e
// 005ad249  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad24c  eb03                 jmp 0x5ad251
// 005ad24e  8d4804               lea ecx, [eax + 4]
// 005ad251  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ad254  03d1                 add edx, ecx
// 005ad256  395604               cmp dword ptr [esi + 4], edx
// 005ad259  7202                 jb 0x5ad25d
// 005ad25b  ffd3                 call ebx
// 005ad25d  837d1400             cmp dword ptr [ebp + 0x14], 0
// 005ad261  8b4604               mov eax, dword ptr [esi + 4]
// 005ad264  8a00                 mov al, byte ptr [eax]
// 005ad266  741f                 je 0x5ad287
// 005ad268  6a01                 push 1
// 005ad26a  6a00                 push 0
// 005ad26c  8d4c2418             lea ecx, [esp + 0x18]
// 005ad270  51                   push ecx
// 005ad271  8bcd                 mov ecx, ebp
// 005ad273  8844241c             mov byte ptr [esp + 0x1c], al
// 005ad277  ff157ce57700         call dword ptr [0x77e57c]
// 005ad27d  8b153ce67700         mov edx, dword ptr [0x77e63c]
// 005ad283  3b02                 cmp eax, dword ptr [edx]
// 005ad285  eb11                 jmp 0x5ad298
// 005ad287  807d3800             cmp byte ptr [ebp + 0x38], 0
// 005ad28b  7416                 je 0x5ad2a3
// 005ad28d  0fbec0               movsx eax, al
// 005ad290  50                   push eax
// 005ad291  ffd7                 call edi
// 005ad293  83c404               add esp, 4
// 005ad296  85c0                 test eax, eax
// 005ad298  0f95c0               setne al
// 005ad29b  84c0                 test al, al
// 005ad29d  0f8597020000         jne 0x5ad53a
// 005ad2a3  8b06                 mov eax, dword ptr [esi]
// 005ad2a5  83f8fe               cmp eax, -2
// 005ad2a8  744b                 je 0x5ad2f5
// 005ad2aa  85c0                 test eax, eax
// 005ad2ac  7502                 jne 0x5ad2b0
// 005ad2ae  ffd3                 call ebx
// 005ad2b0  8b06                 mov eax, dword ptr [esi]
// 005ad2b2  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ad2b6  7205                 jb 0x5ad2bd
// 005ad2b8  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad2bb  eb03                 jmp 0x5ad2c0
// 005ad2bd  8d4804               lea ecx, [eax + 4]
// 005ad2c0  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ad2c3  03d1                 add edx, ecx
// 005ad2c5  395604               cmp dword ptr [esi + 4], edx
// 005ad2c8  7202                 jb 0x5ad2cc
// 005ad2ca  ffd3                 call ebx
// 005ad2cc  8b06                 mov eax, dword ptr [esi]
// 005ad2ce  83f8fe               cmp eax, -2
// 005ad2d1  7422                 je 0x5ad2f5
// 005ad2d3  85c0                 test eax, eax
// 005ad2d5  7502                 jne 0x5ad2d9
// 005ad2d7  ffd3                 call ebx
// 005ad2d9  8b06                 mov eax, dword ptr [esi]
// 005ad2db  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ad2df  7205                 jb 0x5ad2e6
// 005ad2e1  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad2e4  eb03                 jmp 0x5ad2e9
// 005ad2e6  8d4804               lea ecx, [eax + 4]
// 005ad2e9  8b4014               mov eax, dword ptr [eax + 0x14]
// 005ad2ec  03c1                 add eax, ecx
// 005ad2ee  394604               cmp dword ptr [esi + 4], eax
// 005ad2f1  7202                 jb 0x5ad2f5
// 005ad2f3  ffd3                 call ebx
// 005ad2f5  83460401             add dword ptr [esi + 4], 1
// 005ad2f9  e9a2feffff           jmp 0x5ad1a0
// 005ad2fe  83f8fe               cmp eax, -2
// 005ad301  740c                 je 0x5ad30f
// 005ad303  85c0                 test eax, eax
// 005ad305  7406                 je 0x5ad30d
// 005ad307  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005ad30b  7402                 je 0x5ad30f
// 005ad30d  ffd3                 call ebx
// 005ad30f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ad313  394e04               cmp dword ptr [esi + 4], ecx
// 005ad316  7520                 jne 0x5ad338
// 005ad318  807d4000             cmp byte ptr [ebp + 0x40], 0
// 005ad31c  0f85d3fdffff         jne 0x5ad0f5
// 005ad322  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ad326  c6454001             mov byte ptr [ebp + 0x40], 1
// 005ad32a  8b5604               mov edx, dword ptr [esi + 4]
// 005ad32d  8b06                 mov eax, dword ptr [esi]
// 005ad32f  52                   push edx
// 005ad330  50                   push eax
// 005ad331  51                   push ecx
// 005ad332  57                   push edi
// 005ad333  e913020000           jmp 0x5ad54b
// 005ad338  8b06                 mov eax, dword ptr [esi]
// 005ad33a  83f8fe               cmp eax, -2
// 005ad33d  7422                 je 0x5ad361
// 005ad33f  85c0                 test eax, eax
// 005ad341  7502                 jne 0x5ad345
// 005ad343  ffd3                 call ebx
// 005ad345  8b06                 mov eax, dword ptr [esi]
// 005ad347  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005ad34b  7205                 jb 0x5ad352
// 005ad34d  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad350  eb03                 jmp 0x5ad355
// 005ad352  8d4804               lea ecx, [eax + 4]
// 005ad355  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ad358  03d1                 add edx, ecx
// 005ad35a  395604               cmp dword ptr [esi + 4], edx
// 005ad35d  7202                 jb 0x5ad361
// 005ad35f  ffd3                 call ebx
// 005ad361  8b4604               mov eax, dword ptr [esi + 4]
// 005ad364  0fb600               movzx eax, byte ptr [eax]
// 005ad367  50                   push eax
// 005ad368  8bcd                 mov ecx, ebp
// 005ad36a  e8e1f9ffff           call 0x5acd50
// 005ad36f  84c0                 test al, al
// 005ad371  7421                 je 0x5ad394
// 005ad373  807d4000             cmp byte ptr [ebp + 0x40], 0
// 005ad377  0f84b9010000         je 0x5ad536
// 005ad37d  8bce                 mov ecx, esi
// 005ad37f  e86cf1ebff           call 0x46c4f0
// 005ad384  8bce                 mov ecx, esi
// 005ad386  e8a5f1ebff           call 0x46c530
// 005ad38b  c6454000             mov byte ptr [ebp + 0x40], 0
// 005ad38f  e9a6010000           jmp 0x5ad53a
// 005ad394  807d4000             cmp byte ptr [ebp + 0x40], 0
// 005ad398  751a                 jne 0x5ad3b4
// 005ad39a  8bce                 mov ecx, esi
// 005ad39c  e84ff1ebff           call 0x46c4f0
// 005ad3a1  0fb608               movzx ecx, byte ptr [eax]
// 005ad3a4  51                   push ecx
// 005ad3a5  8bcd                 mov ecx, ebp
// 005ad3a7  e804faffff           call 0x5acdb0
// 005ad3ac  84c0                 test al, al
// 005ad3ae  0f8582010000         jne 0x5ad536
// 005ad3b4  8b06                 mov eax, dword ptr [esi]
// 005ad3b6  83f8fe               cmp eax, -2
// 005ad3b9  7428                 je 0x5ad3e3
// 005ad3bb  85c0                 test eax, eax
// 005ad3bd  7502                 jne 0x5ad3c1
// 005ad3bf  ffd3                 call ebx
// 005ad3c1  8b06                 mov eax, dword ptr [esi]
// 005ad3c3  bf10000000           mov edi, 0x10
// 005ad3c8  397818               cmp dword ptr [eax + 0x18], edi
// 005ad3cb  7205                 jb 0x5ad3d2
// 005ad3cd  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad3d0  eb03                 jmp 0x5ad3d5
// 005ad3d2  8d4804               lea ecx, [eax + 4]
// 005ad3d5  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ad3d8  03d1                 add edx, ecx
// 005ad3da  395604               cmp dword ptr [esi + 4], edx
// 005ad3dd  7209                 jb 0x5ad3e8
// 005ad3df  ffd3                 call ebx
// 005ad3e1  eb05                 jmp 0x5ad3e8
// 005ad3e3  bf10000000           mov edi, 0x10
// 005ad3e8  8b4604               mov eax, dword ptr [esi + 4]
// 005ad3eb  0fb600               movzx eax, byte ptr [eax]
// 005ad3ee  50                   push eax
// 005ad3ef  8bcd                 mov ecx, ebp
// 005ad3f1  e8baf9ffff           call 0x5acdb0
// 005ad3f6  84c0                 test al, al
// 005ad3f8  7416                 je 0x5ad410
// 005ad3fa  8bce                 mov ecx, esi
// 005ad3fc  e82ff1ebff           call 0x46c530
// 005ad401  8b08                 mov ecx, dword ptr [eax]
// 005ad403  8b5004               mov edx, dword ptr [eax + 4]
// 005ad406  894c2414             mov dword ptr [esp + 0x14], ecx
// 005ad40a  89542418             mov dword ptr [esp + 0x18], edx
// 005ad40e  8bff                 mov edi, edi
// 005ad410  8b06                 mov eax, dword ptr [esi]
// 005ad412  83f8fe               cmp eax, -2
// 005ad415  740c                 je 0x5ad423
// 005ad417  85c0                 test eax, eax
// 005ad419  7406                 je 0x5ad421
// 005ad41b  3b442424             cmp eax, dword ptr [esp + 0x24]
// 005ad41f  7402                 je 0x5ad423
// 005ad421  ffd3                 call ebx
// 005ad423  8b4604               mov eax, dword ptr [esi + 4]
// 005ad426  3b442428             cmp eax, dword ptr [esp + 0x28]
// 005ad42a  0f8406010000         je 0x5ad536
// 005ad430  8b06                 mov eax, dword ptr [esi]
// 005ad432  83f8fe               cmp eax, -2
// 005ad435  7421                 je 0x5ad458
// 005ad437  85c0                 test eax, eax
// 005ad439  7502                 jne 0x5ad43d
// 005ad43b  ffd3                 call ebx
// 005ad43d  8b06                 mov eax, dword ptr [esi]
// 005ad43f  397818               cmp dword ptr [eax + 0x18], edi
// 005ad442  7205                 jb 0x5ad449
// 005ad444  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad447  eb03                 jmp 0x5ad44c
// 005ad449  8d4804               lea ecx, [eax + 4]
// 005ad44c  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ad44f  03d1                 add edx, ecx
// 005ad451  395604               cmp dword ptr [esi + 4], edx
// 005ad454  7202                 jb 0x5ad458
// 005ad456  ffd3                 call ebx
// 005ad458  837d3000             cmp dword ptr [ebp + 0x30], 0
// 005ad45c  8b4604               mov eax, dword ptr [esi + 4]
// 005ad45f  8a00                 mov al, byte ptr [eax]
// 005ad461  7420                 je 0x5ad483
// 005ad463  6a01                 push 1
// 005ad465  6a00                 push 0
// 005ad467  8d4c2428             lea ecx, [esp + 0x28]
// 005ad46b  51                   push ecx
// 005ad46c  8d4d1c               lea ecx, [ebp + 0x1c]
// 005ad46f  8844242c             mov byte ptr [esp + 0x2c], al
// 005ad473  ff157ce57700         call dword ptr [0x77e57c]
// 005ad479  8b153ce67700         mov edx, dword ptr [0x77e63c]
// 005ad47f  3b02                 cmp eax, dword ptr [edx]
// 005ad481  eb15                 jmp 0x5ad498
// 005ad483  807d3900             cmp byte ptr [ebp + 0x39], 0
// 005ad487  741a                 je 0x5ad4a3
// 005ad489  0fbec0               movsx eax, al
// 005ad48c  50                   push eax
// 005ad48d  ff159ce97700         call dword ptr [0x77e99c]
// 005ad493  83c404               add esp, 4
// 005ad496  85c0                 test eax, eax
// 005ad498  0f95c0               setne al
// 005ad49b  84c0                 test al, al
// 005ad49d  0f8593000000         jne 0x5ad536
// 005ad4a3  8b06                 mov eax, dword ptr [esi]
// 005ad4a5  83f8fe               cmp eax, -2
// 005ad4a8  7421                 je 0x5ad4cb
// 005ad4aa  85c0                 test eax, eax
// 005ad4ac  7502                 jne 0x5ad4b0
// 005ad4ae  ffd3                 call ebx
// 005ad4b0  8b06                 mov eax, dword ptr [esi]
// 005ad4b2  397818               cmp dword ptr [eax + 0x18], edi
// 005ad4b5  7205                 jb 0x5ad4bc
// 005ad4b7  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad4ba  eb03                 jmp 0x5ad4bf
// 005ad4bc  8d4804               lea ecx, [eax + 4]
// 005ad4bf  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ad4c2  03d1                 add edx, ecx
// 005ad4c4  395604               cmp dword ptr [esi + 4], edx
// 005ad4c7  7202                 jb 0x5ad4cb
// 005ad4c9  ffd3                 call ebx
// 005ad4cb  8b4604               mov eax, dword ptr [esi + 4]
// 005ad4ce  0fb600               movzx eax, byte ptr [eax]
// 005ad4d1  50                   push eax
// 005ad4d2  8bcd                 mov ecx, ebp
// 005ad4d4  e877f8ffff           call 0x5acd50
// 005ad4d9  84c0                 test al, al
// 005ad4db  7559                 jne 0x5ad536
// 005ad4dd  8b06                 mov eax, dword ptr [esi]
// 005ad4df  83f8fe               cmp eax, -2
// 005ad4e2  7449                 je 0x5ad52d
// 005ad4e4  85c0                 test eax, eax
// 005ad4e6  7502                 jne 0x5ad4ea
// 005ad4e8  ffd3                 call ebx
// 005ad4ea  8b06                 mov eax, dword ptr [esi]
// 005ad4ec  397818               cmp dword ptr [eax + 0x18], edi
// 005ad4ef  7205                 jb 0x5ad4f6
// 005ad4f1  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad4f4  eb03                 jmp 0x5ad4f9
// 005ad4f6  8d4804               lea ecx, [eax + 4]
// 005ad4f9  8b5014               mov edx, dword ptr [eax + 0x14]
// 005ad4fc  03d1                 add edx, ecx
// 005ad4fe  395604               cmp dword ptr [esi + 4], edx
// 005ad501  7202                 jb 0x5ad505
// 005ad503  ffd3                 call ebx
// 005ad505  8b06                 mov eax, dword ptr [esi]
// 005ad507  83f8fe               cmp eax, -2
// 005ad50a  7421                 je 0x5ad52d
// 005ad50c  85c0                 test eax, eax
// 005ad50e  7502                 jne 0x5ad512
// 005ad510  ffd3                 call ebx
// 005ad512  8b06                 mov eax, dword ptr [esi]
// 005ad514  397818               cmp dword ptr [eax + 0x18], edi
// 005ad517  7205                 jb 0x5ad51e
// 005ad519  8b4804               mov ecx, dword ptr [eax + 4]
// 005ad51c  eb03                 jmp 0x5ad521
// 005ad51e  8d4804               lea ecx, [eax + 4]
// 005ad521  8b4014               mov eax, dword ptr [eax + 0x14]
// 005ad524  03c1                 add eax, ecx
// 005ad526  394604               cmp dword ptr [esi + 4], eax
// 005ad529  7202                 jb 0x5ad52d
// 005ad52b  ffd3                 call ebx
// 005ad52d  83460401             add dword ptr [esi + 4], 1
// 005ad531  e9dafeffff           jmp 0x5ad410
// 005ad536  c6454001             mov byte ptr [ebp + 0x40], 1
// 005ad53a  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ad53d  8b16                 mov edx, dword ptr [esi]
// 005ad53f  8b442418             mov eax, dword ptr [esp + 0x18]
// 005ad543  51                   push ecx
// 005ad544  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ad548  52                   push edx
// 005ad549  50                   push eax
// 005ad54a  51                   push ecx
// 005ad54b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005ad54f  ff1580e47700         call dword ptr [0x77e480]
// 005ad555  5f                   pop edi
// 005ad556  5e                   pop esi
// 005ad557  5d                   pop ebp
// 005ad558  b001                 mov al, 1
// 005ad55a  5b                   pop ebx
// 005ad55b  83c40c               add esp, 0xc
// 005ad55e  c21000               ret 0x10
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?RV?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@?$char_separator@DU?$char_traits@D@std@@@boost@@QAE_NAAV?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
