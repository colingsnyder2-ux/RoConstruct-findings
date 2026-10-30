// roc 2009-12 008cbf70  unit: CXTPPropertyGridPaintManager  size: 1645 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cbf70
//
// 008cbf70  6aff                 push -1
// 008cbf72  683e4c9600           push 0x964c3e
// 008cbf77  64a100000000         mov eax, dword ptr fs:[0]
// 008cbf7d  50                   push eax
// 008cbf7e  81ecb8000000         sub esp, 0xb8
// 008cbf84  53                   push ebx
// 008cbf85  55                   push ebp
// 008cbf86  56                   push esi
// 008cbf87  57                   push edi
// 008cbf88  a10052b600           mov eax, dword ptr [0xb65200]
// 008cbf8d  33c4                 xor eax, esp
// 008cbf8f  50                   push eax
// 008cbf90  8d8424cc000000       lea eax, [esp + 0xcc]
// 008cbf97  64a300000000         mov dword ptr fs:[0], eax
// 008cbf9d  8bf1                 mov esi, ecx
// 008cbf9f  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008cbfa2  e8d91af8ff           call 0x84da80
// 008cbfa7  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 008cbfae  8b7d2c               mov edi, dword ptr [ebp + 0x2c]
// 008cbfb1  50                   push eax
// 008cbfb2  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 008cbfb9  8944241c             mov dword ptr [esp + 0x1c], eax
// 008cbfbd  e8aef2f7ff           call 0x84b270
// 008cbfc2  8d451c               lea eax, [ebp + 0x1c]
// 008cbfc5  50                   push eax
// 008cbfc6  8d4c2420             lea ecx, [esp + 0x20]
// 008cbfca  51                   push ecx
// 008cbfcb  ff1564cc9800         call dword ptr [0x98cc64]
// 008cbfd1  8b4518               mov eax, dword ptr [ebp + 0x18]
// 008cbfd4  8d54241c             lea edx, [esp + 0x1c]
// 008cbfd8  52                   push edx
// 008cbfd9  50                   push eax
// 008cbfda  8d4c245c             lea ecx, [esp + 0x5c]
// 008cbfde  e84df3f7ff           call 0x84b330
// 008cbfe3  8b16                 mov edx, dword ptr [esi]
// 008cbfe5  8b420c               mov eax, dword ptr [edx + 0xc]
// 008cbfe8  6a01                 push 1
// 008cbfea  57                   push edi
// 008cbfeb  8bce                 mov ecx, esi
// 008cbfed  c78424dc00000000000000 mov dword ptr [esp + 0xdc], 0
// 008cbff8  ffd0                 call eax
// 008cbffa  50                   push eax
// 008cbffb  8d4c2458             lea ecx, [esp + 0x58]
// 008cbfff  51                   push ecx
// 008cc000  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 008cc007  e854f6f7ff           call 0x84b660
// 008cc00c  8b16                 mov edx, dword ptr [esi]
// 008cc00e  8b4208               mov eax, dword ptr [edx + 8]
// 008cc011  6a00                 push 0
// 008cc013  57                   push edi
// 008cc014  8bce                 mov ecx, esi
// 008cc016  c68424dc00000001     mov byte ptr [esp + 0xdc], 1
// 008cc01e  ffd0                 call eax
// 008cc020  50                   push eax
// 008cc021  8d4c2420             lea ecx, [esp + 0x20]
// 008cc025  51                   push ecx
// 008cc026  8d4c245c             lea ecx, [esp + 0x5c]
// 008cc02a  e8cf85f2ff           call 0x7f45fe
// 008cc02f  6a01                 push 1
// 008cc031  8d4c2458             lea ecx, [esp + 0x58]
// 008cc035  e856a40500           call 0x926490
// 008cc03a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008cc03e  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008cc042  e819c7f9ff           call 0x868760
// 008cc047  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008cc04b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008cc04f  03c2                 add eax, edx
// 008cc051  895c2438             mov dword ptr [esp + 0x38], ebx
// 008cc055  8b1e                 mov ebx, dword ptr [esi]
// 008cc057  89442414             mov dword ptr [esp + 0x14], eax
// 008cc05b  8954242c             mov dword ptr [esp + 0x2c], edx
// 008cc05f  894c2430             mov dword ptr [esp + 0x30], ecx
// 008cc063  89442434             mov dword ptr [esp + 0x34], eax
// 008cc067  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 008cc06d  83ec10               sub esp, 0x10
// 008cc070  85c0                 test eax, eax
// 008cc072  0f8481010000         je 0x8cc1f9
// 008cc078  8bc4                 mov eax, esp
// 008cc07a  8910                 mov dword ptr [eax], edx
// 008cc07c  8b542434             mov edx, dword ptr [esp + 0x34]
// 008cc080  894804               mov dword ptr [eax + 4], ecx
// 008cc083  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008cc087  895008               mov dword ptr [eax + 8], edx
// 008cc08a  89480c               mov dword ptr [eax + 0xc], ecx
// 008cc08d  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 008cc090  8d542464             lea edx, [esp + 0x64]
// 008cc094  52                   push edx
// 008cc095  8bce                 mov ecx, esi
// 008cc097  ffd0                 call eax
// 008cc099  8b16                 mov edx, dword ptr [esi]
// 008cc09b  8b420c               mov eax, dword ptr [edx + 0xc]
// 008cc09e  6a00                 push 0
// 008cc0a0  57                   push edi
// 008cc0a1  8bce                 mov ecx, esi
// 008cc0a3  ffd0                 call eax
// 008cc0a5  50                   push eax
// 008cc0a6  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008cc0ad  e8cee0f7ff           call 0x84a180
// 008cc0b2  8b16                 mov edx, dword ptr [esi]
// 008cc0b4  8b4204               mov eax, dword ptr [edx + 4]
// 008cc0b7  6a00                 push 0
// 008cc0b9  57                   push edi
// 008cc0ba  8bce                 mov ecx, esi
// 008cc0bc  ffd0                 call eax
// 008cc0be  50                   push eax
// 008cc0bf  8d4c2458             lea ecx, [esp + 0x58]
// 008cc0c3  e858a40500           call 0x926520
// 008cc0c8  8d4c2444             lea ecx, [esp + 0x44]
// 008cc0cc  e85ff1f7ff           call 0x84b230
// 008cc0d1  8d4c2414             lea ecx, [esp + 0x14]
// 008cc0d5  51                   push ecx
// 008cc0d6  8bcf                 mov ecx, edi
// 008cc0d8  e81365b6ff           call 0x4325f0
// 008cc0dd  8be8                 mov ebp, eax
// 008cc0df  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008cc0e3  68240c0000           push 0xc24
// 008cc0e8  8d542448             lea edx, [esp + 0x48]
// 008cc0ec  52                   push edx
// 008cc0ed  8bcd                 mov ecx, ebp
// 008cc0ef  c68424dc00000002     mov byte ptr [esp + 0xdc], 2
// 008cc0f7  83c370               add ebx, 0x70
// 008cc0fa  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008cc100  50                   push eax
// 008cc101  8bcd                 mov ecx, ebp
// 008cc103  ff1580de9800         call dword ptr [0x98de80]
// 008cc109  50                   push eax
// 008cc10a  8b03                 mov eax, dword ptr [ebx]
// 008cc10c  8d4c2464             lea ecx, [esp + 0x64]
// 008cc110  ffd0                 call eax
// 008cc112  8d4c2414             lea ecx, [esp + 0x14]
// 008cc116  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 008cc11e  ff15c0de9800         call dword ptr [0x98dec0]
// 008cc124  8b9784000000         mov edx, dword ptr [edi + 0x84]
// 008cc12a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008cc12e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008cc132  8b442428             mov eax, dword ptr [esp + 0x28]
// 008cc136  2b4c2444             sub ecx, dword ptr [esp + 0x44]
// 008cc13a  8d1cd500000000       lea ebx, [edx*8]
// 008cc141  2bda                 sub ebx, edx
// 008cc143  2bc5                 sub eax, ebp
// 008cc145  8d541b0d             lea edx, [ebx + ebx + 0xd]
// 008cc149  8d4c0a04             lea ecx, [edx + ecx + 4]
// 008cc14d  45                   inc ebp
// 008cc14e  89942488000000       mov dword ptr [esp + 0x88], edx
// 008cc155  8d5428fd             lea edx, [eax + ebp - 3]
// 008cc159  8d442414             lea eax, [esp + 0x14]
// 008cc15d  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 008cc164  50                   push eax
// 008cc165  8bcf                 mov ecx, edi
// 008cc167  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 008cc16e  89942498000000       mov dword ptr [esp + 0x98], edx
// 008cc175  e87664b6ff           call 0x4325f0
// 008cc17a  8bd8                 mov ebx, eax
// 008cc17c  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 008cc180  c68424d400000003     mov byte ptr [esp + 0xd4], 3
// 008cc188  83c570               add ebp, 0x70
// 008cc18b  6826080000           push 0x826
// 008cc190  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008cc197  51                   push ecx
// 008cc198  8bcb                 mov ecx, ebx
// 008cc19a  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008cc1a0  50                   push eax
// 008cc1a1  8bcb                 mov ecx, ebx
// 008cc1a3  ff1580de9800         call dword ptr [0x98de80]
// 008cc1a9  8b5500               mov edx, dword ptr [ebp]
// 008cc1ac  50                   push eax
// 008cc1ad  8d4c2464             lea ecx, [esp + 0x64]
// 008cc1b1  ffd2                 call edx
// 008cc1b3  8d4c2414             lea ecx, [esp + 0x14]
// 008cc1b7  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 008cc1bf  ff15c0de9800         call dword ptr [0x98dec0]
// 008cc1c5  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 008cc1cc  f6451010             test byte ptr [ebp + 0x10], 0x10
// 008cc1d0  0f84c4020000         je 0x8cc49a
// 008cc1d6  6a00                 push 0
// 008cc1d8  8d4c2458             lea ecx, [esp + 0x58]
// 008cc1dc  e83fa30500           call 0x926520
// 008cc1e1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008cc1e5  8d842488000000       lea eax, [esp + 0x88]
// 008cc1ec  50                   push eax
// 008cc1ed  51                   push ecx
// 008cc1ee  ff15d4ca9800         call dword ptr [0x98cad4]
// 008cc1f4  e9a1020000           jmp 0x8cc49a
// 008cc1f9  8b442434             mov eax, dword ptr [esp + 0x34]
// 008cc1fd  8b542438             mov edx, dword ptr [esp + 0x38]
// 008cc201  894c2458             mov dword ptr [esp + 0x58], ecx
// 008cc205  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008cc209  8944245c             mov dword ptr [esp + 0x5c], eax
// 008cc20d  8bc4                 mov eax, esp
// 008cc20f  8908                 mov dword ptr [eax], ecx
// 008cc211  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008cc215  894804               mov dword ptr [eax + 4], ecx
// 008cc218  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008cc21c  4a                   dec edx
// 008cc21d  894808               mov dword ptr [eax + 8], ecx
// 008cc220  89500c               mov dword ptr [eax + 0xc], edx
// 008cc223  8b4340               mov eax, dword ptr [ebx + 0x40]
// 008cc226  8954244c             mov dword ptr [esp + 0x4c], edx
// 008cc22a  57                   push edi
// 008cc22b  8d542468             lea edx, [esp + 0x68]
// 008cc22f  52                   push edx
// 008cc230  8bce                 mov ecx, esi
// 008cc232  ffd0                 call eax
// 008cc234  8b16                 mov edx, dword ptr [esi]
// 008cc236  8b4204               mov eax, dword ptr [edx + 4]
// 008cc239  6a00                 push 0
// 008cc23b  57                   push edi
// 008cc23c  8bce                 mov ecx, esi
// 008cc23e  ffd0                 call eax
// 008cc240  50                   push eax
// 008cc241  8d4c2458             lea ecx, [esp + 0x58]
// 008cc245  e8d6a20500           call 0x926520
// 008cc24a  8b16                 mov edx, dword ptr [esi]
// 008cc24c  8b420c               mov eax, dword ptr [edx + 0xc]
// 008cc24f  6a00                 push 0
// 008cc251  57                   push edi
// 008cc252  8bce                 mov ecx, esi
// 008cc254  ffd0                 call eax
// 008cc256  50                   push eax
// 008cc257  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008cc25e  e81ddff7ff           call 0x84a180
// 008cc263  8b4510               mov eax, dword ptr [ebp + 0x10]
// 008cc266  83e001               and eax, 1
// 008cc269  89842484000000       mov dword ptr [esp + 0x84], eax
// 008cc270  0f84a8000000         je 0x8cc31e
// 008cc276  8b1deccb9800         mov ebx, dword ptr [0x98cbec]
// 008cc27c  ffd3                 call ebx
// 008cc27e  50                   push eax
// 008cc27f  e8a678f2ff           call 0x7f3b2a
// 008cc284  85c0                 test eax, eax
// 008cc286  7469                 je 0x8cc2f1
// 008cc288  ffd3                 call ebx
// 008cc28a  50                   push eax
// 008cc28b  e89a78f2ff           call 0x7f3b2a
// 008cc290  3b442418             cmp eax, dword ptr [esp + 0x18]
// 008cc294  7433                 je 0x8cc2c9
// 008cc296  ffd3                 call ebx
// 008cc298  50                   push eax
// 008cc299  e88c78f2ff           call 0x7f3b2a
// 008cc29e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008cc2a1  51                   push ecx
// 008cc2a2  ff15bccb9800         call dword ptr [0x98cbbc]
// 008cc2a8  50                   push eax
// 008cc2a9  e87c78f2ff           call 0x7f3b2a
// 008cc2ae  3b442418             cmp eax, dword ptr [esp + 0x18]
// 008cc2b2  7415                 je 0x8cc2c9
// 008cc2b4  ffd3                 call ebx
// 008cc2b6  50                   push eax
// 008cc2b7  e86e78f2ff           call 0x7f3b2a
// 008cc2bc  8bc8                 mov ecx, eax
// 008cc2be  e81da0f3ff           call 0x8062e0
// 008cc2c3  3b442418             cmp eax, dword ptr [esp + 0x18]
// 008cc2c7  7528                 jne 0x8cc2f1
// 008cc2c9  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008cc2cc  83f8ff               cmp eax, -1
// 008cc2cf  7503                 jne 0x8cc2d4
// 008cc2d1  8b4658               mov eax, dword ptr [esi + 0x58]
// 008cc2d4  50                   push eax
// 008cc2d5  8d4c2458             lea ecx, [esp + 0x58]
// 008cc2d9  e842a20500           call 0x926520
// 008cc2de  8b4650               mov eax, dword ptr [esi + 0x50]
// 008cc2e1  83f8ff               cmp eax, -1
// 008cc2e4  7503                 jne 0x8cc2e9
// 008cc2e6  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008cc2e9  50                   push eax
// 008cc2ea  8d542430             lea edx, [esp + 0x30]
// 008cc2ee  52                   push edx
// 008cc2ef  eb24                 jmp 0x8cc315
// 008cc2f1  8b4660               mov eax, dword ptr [esi + 0x60]
// 008cc2f4  83785c00             cmp dword ptr [eax + 0x5c], 0
// 008cc2f8  7524                 jne 0x8cc31e
// 008cc2fa  8b4674               mov eax, dword ptr [esi + 0x74]
// 008cc2fd  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008cc300  83c04c               add eax, 0x4c
// 008cc303  83f9ff               cmp ecx, -1
// 008cc306  7505                 jne 0x8cc30d
// 008cc308  8b4004               mov eax, dword ptr [eax + 4]
// 008cc30b  eb02                 jmp 0x8cc30f
// 008cc30d  8bc1                 mov eax, ecx
// 008cc30f  50                   push eax
// 008cc310  8d4c2430             lea ecx, [esp + 0x30]
// 008cc314  51                   push ecx
// 008cc315  8d4c245c             lea ecx, [esp + 0x5c]
// 008cc319  e8e082f2ff           call 0x7f45fe
// 008cc31e  8b9fb8000000         mov ebx, dword ptr [edi + 0xb8]
// 008cc324  85db                 test ebx, ebx
// 008cc326  745f                 je 0x8cc387
// 008cc328  eb06                 jmp 0x8cc330
// 008cc32a  8d9b00000000         lea ebx, [ebx]
// 008cc330  83bb9800000000       cmp dword ptr [ebx + 0x98], 0
// 008cc337  7444                 je 0x8cc37d
// 008cc339  8b4674               mov eax, dword ptr [esi + 0x74]
// 008cc33c  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008cc33f  83c04c               add eax, 0x4c
// 008cc342  83f9ff               cmp ecx, -1
// 008cc345  7505                 jne 0x8cc34c
// 008cc347  8b4004               mov eax, dword ptr [eax + 4]
// 008cc34a  eb02                 jmp 0x8cc34e
// 008cc34c  8bc1                 mov eax, ecx
// 008cc34e  8b542428             mov edx, dword ptr [esp + 0x28]
// 008cc352  8b8b84000000         mov ecx, dword ptr [ebx + 0x84]
// 008cc358  50                   push eax
// 008cc359  8b442424             mov eax, dword ptr [esp + 0x24]
// 008cc35d  2bd0                 sub edx, eax
// 008cc35f  52                   push edx
// 008cc360  6a0e                 push 0xe
// 008cc362  50                   push eax
// 008cc363  8d04cd00000000       lea eax, [ecx*8]
// 008cc36a  2bc1                 sub eax, ecx
// 008cc36c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008cc370  8d1441               lea edx, [ecx + eax*2]
// 008cc373  52                   push edx
// 008cc374  8d4c2468             lea ecx, [esp + 0x68]
// 008cc378  e819a10500           call 0x926496
// 008cc37d  8b9bb8000000         mov ebx, dword ptr [ebx + 0xb8]
// 008cc383  85db                 test ebx, ebx
// 008cc385  75a9                 jne 0x8cc330
// 008cc387  8b4674               mov eax, dword ptr [esi + 0x74]
// 008cc38a  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008cc38d  83c04c               add eax, 0x4c
// 008cc390  83f9ff               cmp ecx, -1
// 008cc393  7505                 jne 0x8cc39a
// 008cc395  8b4004               mov eax, dword ptr [eax + 4]
// 008cc398  eb02                 jmp 0x8cc39c
// 008cc39a  8bc1                 mov eax, ecx
// 008cc39c  50                   push eax
// 008cc39d  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008cc3a1  50                   push eax
// 008cc3a2  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 008cc3a9  e852f3f7ff           call 0x84b700
// 008cc3ae  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008cc3b2  49                   dec ecx
// 008cc3b3  51                   push ecx
// 008cc3b4  6a00                 push 0
// 008cc3b6  8d942490000000       lea edx, [esp + 0x90]
// 008cc3bd  52                   push edx
// 008cc3be  8d4c2460             lea ecx, [esp + 0x60]
// 008cc3c2  c68424e000000004     mov byte ptr [esp + 0xe0], 4
// 008cc3ca  e87383f2ff           call 0x7f4742
// 008cc3cf  8b442428             mov eax, dword ptr [esp + 0x28]
// 008cc3d3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008cc3d7  48                   dec eax
// 008cc3d8  50                   push eax
// 008cc3d9  51                   push ecx
// 008cc3da  8d4c245c             lea ecx, [esp + 0x5c]
// 008cc3de  e85983f2ff           call 0x7f473c
// 008cc3e3  8b542420             mov edx, dword ptr [esp + 0x20]
// 008cc3e7  8b442434             mov eax, dword ptr [esp + 0x34]
// 008cc3eb  52                   push edx
// 008cc3ec  50                   push eax
// 008cc3ed  8d8c2490000000       lea ecx, [esp + 0x90]
// 008cc3f4  51                   push ecx
// 008cc3f5  8d4c2460             lea ecx, [esp + 0x60]
// 008cc3f9  e84483f2ff           call 0x7f4742
// 008cc3fe  8b542428             mov edx, dword ptr [esp + 0x28]
// 008cc402  8b442434             mov eax, dword ptr [esp + 0x34]
// 008cc406  4a                   dec edx
// 008cc407  52                   push edx
// 008cc408  50                   push eax
// 008cc409  8d4c245c             lea ecx, [esp + 0x5c]
// 008cc40d  e82a83f2ff           call 0x7f473c
// 008cc412  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008cc416  8b16                 mov edx, dword ptr [esi]
// 008cc418  8b5244               mov edx, dword ptr [edx + 0x44]
// 008cc41b  83ec10               sub esp, 0x10
// 008cc41e  8bc4                 mov eax, esp
// 008cc420  8908                 mov dword ptr [eax], ecx
// 008cc422  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008cc426  894804               mov dword ptr [eax + 4], ecx
// 008cc429  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008cc42d  894808               mov dword ptr [eax + 8], ecx
// 008cc430  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008cc434  89480c               mov dword ptr [eax + 0xc], ecx
// 008cc437  57                   push edi
// 008cc438  8d442468             lea eax, [esp + 0x68]
// 008cc43c  50                   push eax
// 008cc43d  8bce                 mov ecx, esi
// 008cc43f  ffd2                 call edx
// 008cc441  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 008cc449  750c                 jne 0x8cc457
// 008cc44b  8b4660               mov eax, dword ptr [esi + 0x60]
// 008cc44e  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 008cc455  742f                 je 0x8cc486
// 008cc457  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008cc45b  8b16                 mov edx, dword ptr [esi]
// 008cc45d  8b5248               mov edx, dword ptr [edx + 0x48]
// 008cc460  83ec10               sub esp, 0x10
// 008cc463  8bc4                 mov eax, esp
// 008cc465  8908                 mov dword ptr [eax], ecx
// 008cc467  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008cc46b  894804               mov dword ptr [eax + 4], ecx
// 008cc46e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008cc472  894808               mov dword ptr [eax + 8], ecx
// 008cc475  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008cc479  89480c               mov dword ptr [eax + 0xc], ecx
// 008cc47c  57                   push edi
// 008cc47d  8d442468             lea eax, [esp + 0x68]
// 008cc481  50                   push eax
// 008cc482  8bce                 mov ecx, esi
// 008cc484  ffd2                 call edx
// 008cc486  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 008cc48d  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 008cc495  e8f6f2f7ff           call 0x84b790
// 008cc49a  8b4508               mov eax, dword ptr [ebp + 8]
// 008cc49d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008cc4a1  40                   inc eax
// 008cc4a2  50                   push eax
// 008cc4a3  e858c5f9ff           call 0x868a00
// 008cc4a8  85c0                 test eax, eax
// 008cc4aa  744a                 je 0x8cc4f6
// 008cc4ac  83b89800000000       cmp dword ptr [eax + 0x98], 0
// 008cc4b3  7441                 je 0x8cc4f6
// 008cc4b5  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 008cc4bc  7438                 je 0x8cc4f6
// 008cc4be  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 008cc4c1  83f9ff               cmp ecx, -1
// 008cc4c4  7503                 jne 0x8cc4c9
// 008cc4c6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008cc4c9  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 008cc4cf  8b542428             mov edx, dword ptr [esp + 0x28]
// 008cc4d3  51                   push ecx
// 008cc4d4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008cc4d8  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 008cc4dc  6a01                 push 1
// 008cc4de  51                   push ecx
// 008cc4df  8d0cc500000000       lea ecx, [eax*8]
// 008cc4e6  2bc8                 sub ecx, eax
// 008cc4e8  4a                   dec edx
// 008cc4e9  03c9                 add ecx, ecx
// 008cc4eb  52                   push edx
// 008cc4ec  51                   push ecx
// 008cc4ed  8d4c2468             lea ecx, [esp + 0x68]
// 008cc4f1  e8a09f0500           call 0x926496
// 008cc4f6  8bcf                 mov ecx, edi
// 008cc4f8  e8139ef9ff           call 0x866310
// 008cc4fd  85c0                 test eax, eax
// 008cc4ff  0f8494000000         je 0x8cc599
// 008cc505  bbf82a9f00           mov ebx, 0x9f2af8
// 008cc50a  c744244000000000     mov dword ptr [esp + 0x40], 0
// 008cc512  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008cc516  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 008cc51d  c68424d400000005     mov byte ptr [esp + 0xd4], 5
// 008cc525  7523                 jne 0x8cc54a
// 008cc527  8d54242c             lea edx, [esp + 0x2c]
// 008cc52b  52                   push edx
// 008cc52c  ff15c4b09800         call dword ptr [0x98b0c4]
// 008cc532  50                   push eax
// 008cc533  8d4c2440             lea ecx, [esp + 0x40]
// 008cc537  e8ee78f2ff           call 0x7f3e2a
// 008cc53c  8d44243c             lea eax, [esp + 0x3c]
// 008cc540  50                   push eax
// 008cc541  8d4c2458             lea ecx, [esp + 0x58]
// 008cc545  e81aa10500           call 0x926664
// 008cc54a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008cc54e  8b16                 mov edx, dword ptr [esi]
// 008cc550  8b5238               mov edx, dword ptr [edx + 0x38]
// 008cc553  83ec10               sub esp, 0x10
// 008cc556  8bc4                 mov eax, esp
// 008cc558  8908                 mov dword ptr [eax], ecx
// 008cc55a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008cc55e  894804               mov dword ptr [eax + 4], ecx
// 008cc561  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008cc565  894808               mov dword ptr [eax + 8], ecx
// 008cc568  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008cc56c  89480c               mov dword ptr [eax + 0xc], ecx
// 008cc56f  57                   push edi
// 008cc570  8d442468             lea eax, [esp + 0x68]
// 008cc574  50                   push eax
// 008cc575  8bce                 mov ecx, esi
// 008cc577  ffd2                 call edx
// 008cc579  6a00                 push 0
// 008cc57b  8d4c2458             lea ecx, [esp + 0x58]
// 008cc57f  e8e0a00500           call 0x926664
// 008cc584  8d4c243c             lea ecx, [esp + 0x3c]
// 008cc588  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 008cc590  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008cc594  e8972cb4ff           call 0x40f230
// 008cc599  8d8c2498000000       lea ecx, [esp + 0x98]
// 008cc5a0  c68424d400000000     mov byte ptr [esp + 0xd4], 0
// 008cc5a8  e833f1f7ff           call 0x84b6e0
// 008cc5ad  8d4c2454             lea ecx, [esp + 0x54]
// 008cc5b1  c78424d4000000ffffffff mov dword ptr [esp + 0xd4], 0xffffffff
// 008cc5bc  e87feff7ff           call 0x84b540
// 008cc5c1  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 008cc5c8  64890d00000000       mov dword ptr fs:[0], ecx
// 008cc5cf  59                   pop ecx
// 008cc5d0  5f                   pop edi
// 008cc5d1  5e                   pop esi
// 008cc5d2  5d                   pop ebp
// 008cc5d3  5b                   pop ebx
// 008cc5d4  81c4c4000000         add esp, 0xc4
// 008cc5da  c20400               ret 4
// copied from an identical function in another client (function ?DrawItem@CXTPPropertyGridPaintManager@@UAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp