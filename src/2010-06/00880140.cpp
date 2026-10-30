// roc 2010-06 00880140  unit: CXTPPropertyGridPaintManager  size: 1645 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00880140
//
// 00880140  6aff                 push -1
// 00880142  68aeab9b00           push 0x9babae
// 00880147  64a100000000         mov eax, dword ptr fs:[0]
// 0088014d  50                   push eax
// 0088014e  81ecb8000000         sub esp, 0xb8
// 00880154  53                   push ebx
// 00880155  55                   push ebp
// 00880156  56                   push esi
// 00880157  57                   push edi
// 00880158  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0088015d  33c4                 xor eax, esp
// 0088015f  50                   push eax
// 00880160  8d8424cc000000       lea eax, [esp + 0xcc]
// 00880167  64a300000000         mov dword ptr fs:[0], eax
// 0088016d  8bf1                 mov esi, ecx
// 0088016f  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00880172  e86919f8ff           call 0x801ae0
// 00880177  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 0088017e  8b7d2c               mov edi, dword ptr [ebp + 0x2c]
// 00880181  50                   push eax
// 00880182  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 00880189  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088018d  e81ef1f7ff           call 0x7ff2b0
// 00880192  8d451c               lea eax, [ebp + 0x1c]
// 00880195  50                   push eax
// 00880196  8d4c2420             lea ecx, [esp + 0x20]
// 0088019a  51                   push ecx
// 0088019b  ff1548bc9e00         call dword ptr [0x9ebc48]
// 008801a1  8b4518               mov eax, dword ptr [ebp + 0x18]
// 008801a4  8d54241c             lea edx, [esp + 0x1c]
// 008801a8  52                   push edx
// 008801a9  50                   push eax
// 008801aa  8d4c245c             lea ecx, [esp + 0x5c]
// 008801ae  e8bdf1f7ff           call 0x7ff370
// 008801b3  8b16                 mov edx, dword ptr [esi]
// 008801b5  8b420c               mov eax, dword ptr [edx + 0xc]
// 008801b8  6a01                 push 1
// 008801ba  57                   push edi
// 008801bb  8bce                 mov ecx, esi
// 008801bd  c78424dc00000000000000 mov dword ptr [esp + 0xdc], 0
// 008801c8  ffd0                 call eax
// 008801ca  50                   push eax
// 008801cb  8d4c2458             lea ecx, [esp + 0x58]
// 008801cf  51                   push ecx
// 008801d0  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 008801d7  e8c4f4f7ff           call 0x7ff6a0
// 008801dc  8b16                 mov edx, dword ptr [esi]
// 008801de  8b4208               mov eax, dword ptr [edx + 8]
// 008801e1  6a00                 push 0
// 008801e3  57                   push edi
// 008801e4  8bce                 mov ecx, esi
// 008801e6  c68424dc00000001     mov byte ptr [esp + 0xdc], 1
// 008801ee  ffd0                 call eax
// 008801f0  50                   push eax
// 008801f1  8d4c2420             lea ecx, [esp + 0x20]
// 008801f5  51                   push ecx
// 008801f6  8d4c245c             lea ecx, [esp + 0x5c]
// 008801fa  e83f85f2ff           call 0x7a873e
// 008801ff  6a01                 push 1
// 00880201  8d4c2458             lea ecx, [esp + 0x58]
// 00880205  e8aacb0f00           call 0x97cdb4
// 0088020a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088020e  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00880212  e859c5f9ff           call 0x81c770
// 00880217  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088021b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088021f  03c2                 add eax, edx
// 00880221  895c2438             mov dword ptr [esp + 0x38], ebx
// 00880225  8b1e                 mov ebx, dword ptr [esi]
// 00880227  89442414             mov dword ptr [esp + 0x14], eax
// 0088022b  8954242c             mov dword ptr [esp + 0x2c], edx
// 0088022f  894c2430             mov dword ptr [esp + 0x30], ecx
// 00880233  89442434             mov dword ptr [esp + 0x34], eax
// 00880237  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 0088023d  83ec10               sub esp, 0x10
// 00880240  85c0                 test eax, eax
// 00880242  0f8481010000         je 0x8803c9
// 00880248  8bc4                 mov eax, esp
// 0088024a  8910                 mov dword ptr [eax], edx
// 0088024c  8b542434             mov edx, dword ptr [esp + 0x34]
// 00880250  894804               mov dword ptr [eax + 4], ecx
// 00880253  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00880257  895008               mov dword ptr [eax + 8], edx
// 0088025a  89480c               mov dword ptr [eax + 0xc], ecx
// 0088025d  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 00880260  8d542464             lea edx, [esp + 0x64]
// 00880264  52                   push edx
// 00880265  8bce                 mov ecx, esi
// 00880267  ffd0                 call eax
// 00880269  8b16                 mov edx, dword ptr [esi]
// 0088026b  8b420c               mov eax, dword ptr [edx + 0xc]
// 0088026e  6a00                 push 0
// 00880270  57                   push edi
// 00880271  8bce                 mov ecx, esi
// 00880273  ffd0                 call eax
// 00880275  50                   push eax
// 00880276  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0088027d  e89edff7ff           call 0x7fe220
// 00880282  8b16                 mov edx, dword ptr [esi]
// 00880284  8b4204               mov eax, dword ptr [edx + 4]
// 00880287  6a00                 push 0
// 00880289  57                   push edi
// 0088028a  8bce                 mov ecx, esi
// 0088028c  ffd0                 call eax
// 0088028e  50                   push eax
// 0088028f  8d4c2458             lea ecx, [esp + 0x58]
// 00880293  e8c4cb0f00           call 0x97ce5c
// 00880298  8d4c2444             lea ecx, [esp + 0x44]
// 0088029c  e8cfeff7ff           call 0x7ff270
// 008802a1  8d4c2414             lea ecx, [esp + 0x14]
// 008802a5  51                   push ecx
// 008802a6  8bcf                 mov ecx, edi
// 008802a8  e81337bbff           call 0x4339c0
// 008802ad  8be8                 mov ebp, eax
// 008802af  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008802b3  68240c0000           push 0xc24
// 008802b8  8d542448             lea edx, [esp + 0x48]
// 008802bc  52                   push edx
// 008802bd  8bcd                 mov ecx, ebp
// 008802bf  c68424dc00000002     mov byte ptr [esp + 0xdc], 2
// 008802c7  83c370               add ebx, 0x70
// 008802ca  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008802d0  50                   push eax
// 008802d1  8bcd                 mov ecx, ebp
// 008802d3  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008802d9  50                   push eax
// 008802da  8b03                 mov eax, dword ptr [ebx]
// 008802dc  8d4c2464             lea ecx, [esp + 0x64]
// 008802e0  ffd0                 call eax
// 008802e2  8d4c2414             lea ecx, [esp + 0x14]
// 008802e6  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 008802ee  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008802f4  8b9784000000         mov edx, dword ptr [edi + 0x84]
// 008802fa  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008802fe  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00880302  8b442428             mov eax, dword ptr [esp + 0x28]
// 00880306  2b4c2444             sub ecx, dword ptr [esp + 0x44]
// 0088030a  8d1cd500000000       lea ebx, [edx*8]
// 00880311  2bda                 sub ebx, edx
// 00880313  2bc5                 sub eax, ebp
// 00880315  8d541b0d             lea edx, [ebx + ebx + 0xd]
// 00880319  8d4c0a04             lea ecx, [edx + ecx + 4]
// 0088031d  45                   inc ebp
// 0088031e  89942488000000       mov dword ptr [esp + 0x88], edx
// 00880325  8d5428fd             lea edx, [eax + ebp - 3]
// 00880329  8d442414             lea eax, [esp + 0x14]
// 0088032d  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 00880334  50                   push eax
// 00880335  8bcf                 mov ecx, edi
// 00880337  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 0088033e  89942498000000       mov dword ptr [esp + 0x98], edx
// 00880345  e87636bbff           call 0x4339c0
// 0088034a  8bd8                 mov ebx, eax
// 0088034c  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 00880350  c68424d400000003     mov byte ptr [esp + 0xd4], 3
// 00880358  83c570               add ebp, 0x70
// 0088035b  6826080000           push 0x826
// 00880360  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00880367  51                   push ecx
// 00880368  8bcb                 mov ecx, ebx
// 0088036a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00880370  50                   push eax
// 00880371  8bcb                 mov ecx, ebx
// 00880373  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00880379  8b5500               mov edx, dword ptr [ebp]
// 0088037c  50                   push eax
// 0088037d  8d4c2464             lea ecx, [esp + 0x64]
// 00880381  ffd2                 call edx
// 00880383  8d4c2414             lea ecx, [esp + 0x14]
// 00880387  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 0088038f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00880395  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 0088039c  f6451010             test byte ptr [ebp + 0x10], 0x10
// 008803a0  0f84c4020000         je 0x88066a
// 008803a6  6a00                 push 0
// 008803a8  8d4c2458             lea ecx, [esp + 0x58]
// 008803ac  e8abca0f00           call 0x97ce5c
// 008803b1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008803b5  8d842488000000       lea eax, [esp + 0x88]
// 008803bc  50                   push eax
// 008803bd  51                   push ecx
// 008803be  ff15c8ba9e00         call dword ptr [0x9ebac8]
// 008803c4  e9a1020000           jmp 0x88066a
// 008803c9  8b442434             mov eax, dword ptr [esp + 0x34]
// 008803cd  8b542438             mov edx, dword ptr [esp + 0x38]
// 008803d1  894c2458             mov dword ptr [esp + 0x58], ecx
// 008803d5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008803d9  8944245c             mov dword ptr [esp + 0x5c], eax
// 008803dd  8bc4                 mov eax, esp
// 008803df  8908                 mov dword ptr [eax], ecx
// 008803e1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008803e5  894804               mov dword ptr [eax + 4], ecx
// 008803e8  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008803ec  4a                   dec edx
// 008803ed  894808               mov dword ptr [eax + 8], ecx
// 008803f0  89500c               mov dword ptr [eax + 0xc], edx
// 008803f3  8b4340               mov eax, dword ptr [ebx + 0x40]
// 008803f6  8954244c             mov dword ptr [esp + 0x4c], edx
// 008803fa  57                   push edi
// 008803fb  8d542468             lea edx, [esp + 0x68]
// 008803ff  52                   push edx
// 00880400  8bce                 mov ecx, esi
// 00880402  ffd0                 call eax
// 00880404  8b16                 mov edx, dword ptr [esi]
// 00880406  8b4204               mov eax, dword ptr [edx + 4]
// 00880409  6a00                 push 0
// 0088040b  57                   push edi
// 0088040c  8bce                 mov ecx, esi
// 0088040e  ffd0                 call eax
// 00880410  50                   push eax
// 00880411  8d4c2458             lea ecx, [esp + 0x58]
// 00880415  e842ca0f00           call 0x97ce5c
// 0088041a  8b16                 mov edx, dword ptr [esi]
// 0088041c  8b420c               mov eax, dword ptr [edx + 0xc]
// 0088041f  6a00                 push 0
// 00880421  57                   push edi
// 00880422  8bce                 mov ecx, esi
// 00880424  ffd0                 call eax
// 00880426  50                   push eax
// 00880427  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0088042e  e8edddf7ff           call 0x7fe220
// 00880433  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00880436  83e001               and eax, 1
// 00880439  89842484000000       mov dword ptr [esp + 0x84], eax
// 00880440  0f84a8000000         je 0x8804ee
// 00880446  8b1d80ba9e00         mov ebx, dword ptr [0x9eba80]
// 0088044c  ffd3                 call ebx
// 0088044e  50                   push eax
// 0088044f  e81678f2ff           call 0x7a7c6a
// 00880454  85c0                 test eax, eax
// 00880456  7469                 je 0x8804c1
// 00880458  ffd3                 call ebx
// 0088045a  50                   push eax
// 0088045b  e80a78f2ff           call 0x7a7c6a
// 00880460  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00880464  7433                 je 0x880499
// 00880466  ffd3                 call ebx
// 00880468  50                   push eax
// 00880469  e8fc77f2ff           call 0x7a7c6a
// 0088046e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00880471  51                   push ecx
// 00880472  ff154cba9e00         call dword ptr [0x9eba4c]
// 00880478  50                   push eax
// 00880479  e8ec77f2ff           call 0x7a7c6a
// 0088047e  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00880482  7415                 je 0x880499
// 00880484  ffd3                 call ebx
// 00880486  50                   push eax
// 00880487  e8de77f2ff           call 0x7a7c6a
// 0088048c  8bc8                 mov ecx, eax
// 0088048e  e8bd9ff3ff           call 0x7ba450
// 00880493  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00880497  7528                 jne 0x8804c1
// 00880499  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0088049c  83f8ff               cmp eax, -1
// 0088049f  7503                 jne 0x8804a4
// 008804a1  8b4658               mov eax, dword ptr [esi + 0x58]
// 008804a4  50                   push eax
// 008804a5  8d4c2458             lea ecx, [esp + 0x58]
// 008804a9  e8aec90f00           call 0x97ce5c
// 008804ae  8b4650               mov eax, dword ptr [esi + 0x50]
// 008804b1  83f8ff               cmp eax, -1
// 008804b4  7503                 jne 0x8804b9
// 008804b6  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008804b9  50                   push eax
// 008804ba  8d542430             lea edx, [esp + 0x30]
// 008804be  52                   push edx
// 008804bf  eb24                 jmp 0x8804e5
// 008804c1  8b4660               mov eax, dword ptr [esi + 0x60]
// 008804c4  83785c00             cmp dword ptr [eax + 0x5c], 0
// 008804c8  7524                 jne 0x8804ee
// 008804ca  8b4674               mov eax, dword ptr [esi + 0x74]
// 008804cd  8b4854               mov ecx, dword ptr [eax + 0x54]
// 008804d0  83c04c               add eax, 0x4c
// 008804d3  83f9ff               cmp ecx, -1
// 008804d6  7505                 jne 0x8804dd
// 008804d8  8b4004               mov eax, dword ptr [eax + 4]
// 008804db  eb02                 jmp 0x8804df
// 008804dd  8bc1                 mov eax, ecx
// 008804df  50                   push eax
// 008804e0  8d4c2430             lea ecx, [esp + 0x30]
// 008804e4  51                   push ecx
// 008804e5  8d4c245c             lea ecx, [esp + 0x5c]
// 008804e9  e85082f2ff           call 0x7a873e
// 008804ee  8b9fb8000000         mov ebx, dword ptr [edi + 0xb8]
// 008804f4  85db                 test ebx, ebx
// 008804f6  745f                 je 0x880557
// 008804f8  eb06                 jmp 0x880500
// 008804fa  8d9b00000000         lea ebx, [ebx]
// 00880500  83bb9800000000       cmp dword ptr [ebx + 0x98], 0
// 00880507  7444                 je 0x88054d
// 00880509  8b4674               mov eax, dword ptr [esi + 0x74]
// 0088050c  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0088050f  83c04c               add eax, 0x4c
// 00880512  83f9ff               cmp ecx, -1
// 00880515  7505                 jne 0x88051c
// 00880517  8b4004               mov eax, dword ptr [eax + 4]
// 0088051a  eb02                 jmp 0x88051e
// 0088051c  8bc1                 mov eax, ecx
// 0088051e  8b542428             mov edx, dword ptr [esp + 0x28]
// 00880522  8b8b84000000         mov ecx, dword ptr [ebx + 0x84]
// 00880528  50                   push eax
// 00880529  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088052d  2bd0                 sub edx, eax
// 0088052f  52                   push edx
// 00880530  6a0e                 push 0xe
// 00880532  50                   push eax
// 00880533  8d04cd00000000       lea eax, [ecx*8]
// 0088053a  2bc1                 sub eax, ecx
// 0088053c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00880540  8d1441               lea edx, [ecx + eax*2]
// 00880543  52                   push edx
// 00880544  8d4c2468             lea ecx, [esp + 0x68]
// 00880548  e83dc80f00           call 0x97cd8a
// 0088054d  8b9bb8000000         mov ebx, dword ptr [ebx + 0xb8]
// 00880553  85db                 test ebx, ebx
// 00880555  75a9                 jne 0x880500
// 00880557  8b4674               mov eax, dword ptr [esi + 0x74]
// 0088055a  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0088055d  83c04c               add eax, 0x4c
// 00880560  83f9ff               cmp ecx, -1
// 00880563  7505                 jne 0x88056a
// 00880565  8b4004               mov eax, dword ptr [eax + 4]
// 00880568  eb02                 jmp 0x88056c
// 0088056a  8bc1                 mov eax, ecx
// 0088056c  50                   push eax
// 0088056d  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00880571  50                   push eax
// 00880572  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00880579  e8c2f1f7ff           call 0x7ff740
// 0088057e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00880582  49                   dec ecx
// 00880583  51                   push ecx
// 00880584  6a00                 push 0
// 00880586  8d942490000000       lea edx, [esp + 0x90]
// 0088058d  52                   push edx
// 0088058e  8d4c2460             lea ecx, [esp + 0x60]
// 00880592  c68424e000000004     mov byte ptr [esp + 0xe0], 4
// 0088059a  e8dd82f2ff           call 0x7a887c
// 0088059f  8b442428             mov eax, dword ptr [esp + 0x28]
// 008805a3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008805a7  48                   dec eax
// 008805a8  50                   push eax
// 008805a9  51                   push ecx
// 008805aa  8d4c245c             lea ecx, [esp + 0x5c]
// 008805ae  e8c382f2ff           call 0x7a8876
// 008805b3  8b542420             mov edx, dword ptr [esp + 0x20]
// 008805b7  8b442434             mov eax, dword ptr [esp + 0x34]
// 008805bb  52                   push edx
// 008805bc  50                   push eax
// 008805bd  8d8c2490000000       lea ecx, [esp + 0x90]
// 008805c4  51                   push ecx
// 008805c5  8d4c2460             lea ecx, [esp + 0x60]
// 008805c9  e8ae82f2ff           call 0x7a887c
// 008805ce  8b542428             mov edx, dword ptr [esp + 0x28]
// 008805d2  8b442434             mov eax, dword ptr [esp + 0x34]
// 008805d6  4a                   dec edx
// 008805d7  52                   push edx
// 008805d8  50                   push eax
// 008805d9  8d4c245c             lea ecx, [esp + 0x5c]
// 008805dd  e89482f2ff           call 0x7a8876
// 008805e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008805e6  8b16                 mov edx, dword ptr [esi]
// 008805e8  8b5244               mov edx, dword ptr [edx + 0x44]
// 008805eb  83ec10               sub esp, 0x10
// 008805ee  8bc4                 mov eax, esp
// 008805f0  8908                 mov dword ptr [eax], ecx
// 008805f2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008805f6  894804               mov dword ptr [eax + 4], ecx
// 008805f9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008805fd  894808               mov dword ptr [eax + 8], ecx
// 00880600  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00880604  89480c               mov dword ptr [eax + 0xc], ecx
// 00880607  57                   push edi
// 00880608  8d442468             lea eax, [esp + 0x68]
// 0088060c  50                   push eax
// 0088060d  8bce                 mov ecx, esi
// 0088060f  ffd2                 call edx
// 00880611  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 00880619  750c                 jne 0x880627
// 0088061b  8b4660               mov eax, dword ptr [esi + 0x60]
// 0088061e  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 00880625  742f                 je 0x880656
// 00880627  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088062b  8b16                 mov edx, dword ptr [esi]
// 0088062d  8b5248               mov edx, dword ptr [edx + 0x48]
// 00880630  83ec10               sub esp, 0x10
// 00880633  8bc4                 mov eax, esp
// 00880635  8908                 mov dword ptr [eax], ecx
// 00880637  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0088063b  894804               mov dword ptr [eax + 4], ecx
// 0088063e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00880642  894808               mov dword ptr [eax + 8], ecx
// 00880645  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00880649  89480c               mov dword ptr [eax + 0xc], ecx
// 0088064c  57                   push edi
// 0088064d  8d442468             lea eax, [esp + 0x68]
// 00880651  50                   push eax
// 00880652  8bce                 mov ecx, esi
// 00880654  ffd2                 call edx
// 00880656  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 0088065d  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 00880665  e866f1f7ff           call 0x7ff7d0
// 0088066a  8b4508               mov eax, dword ptr [ebp + 8]
// 0088066d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00880671  40                   inc eax
// 00880672  50                   push eax
// 00880673  e898c3f9ff           call 0x81ca10
// 00880678  85c0                 test eax, eax
// 0088067a  744a                 je 0x8806c6
// 0088067c  83b89800000000       cmp dword ptr [eax + 0x98], 0
// 00880683  7441                 je 0x8806c6
// 00880685  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0088068c  7438                 je 0x8806c6
// 0088068e  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00880691  83f9ff               cmp ecx, -1
// 00880694  7503                 jne 0x880699
// 00880696  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00880699  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0088069f  8b542428             mov edx, dword ptr [esp + 0x28]
// 008806a3  51                   push ecx
// 008806a4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008806a8  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 008806ac  6a01                 push 1
// 008806ae  51                   push ecx
// 008806af  8d0cc500000000       lea ecx, [eax*8]
// 008806b6  2bc8                 sub ecx, eax
// 008806b8  4a                   dec edx
// 008806b9  03c9                 add ecx, ecx
// 008806bb  52                   push edx
// 008806bc  51                   push ecx
// 008806bd  8d4c2468             lea ecx, [esp + 0x68]
// 008806c1  e8c4c60f00           call 0x97cd8a
// 008806c6  8bcf                 mov ecx, edi
// 008806c8  e8039cf9ff           call 0x81a2d0
// 008806cd  85c0                 test eax, eax
// 008806cf  0f8494000000         je 0x880769
// 008806d5  bbe06da500           mov ebx, 0xa56de0
// 008806da  c744244000000000     mov dword ptr [esp + 0x40], 0
// 008806e2  895c243c             mov dword ptr [esp + 0x3c], ebx
// 008806e6  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 008806ed  c68424d400000005     mov byte ptr [esp + 0xd4], 5
// 008806f5  7523                 jne 0x88071a
// 008806f7  8d54242c             lea edx, [esp + 0x2c]
// 008806fb  52                   push edx
// 008806fc  ff150ca19e00         call dword ptr [0x9ea10c]
// 00880702  50                   push eax
// 00880703  8d4c2440             lea ecx, [esp + 0x40]
// 00880707  e85e78f2ff           call 0x7a7f6a
// 0088070c  8d44243c             lea eax, [esp + 0x3c]
// 00880710  50                   push eax
// 00880711  8d4c2458             lea ecx, [esp + 0x58]
// 00880715  e886c80f00           call 0x97cfa0
// 0088071a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088071e  8b16                 mov edx, dword ptr [esi]
// 00880720  8b5238               mov edx, dword ptr [edx + 0x38]
// 00880723  83ec10               sub esp, 0x10
// 00880726  8bc4                 mov eax, esp
// 00880728  8908                 mov dword ptr [eax], ecx
// 0088072a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088072e  894804               mov dword ptr [eax + 4], ecx
// 00880731  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00880735  894808               mov dword ptr [eax + 8], ecx
// 00880738  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0088073c  89480c               mov dword ptr [eax + 0xc], ecx
// 0088073f  57                   push edi
// 00880740  8d442468             lea eax, [esp + 0x68]
// 00880744  50                   push eax
// 00880745  8bce                 mov ecx, esi
// 00880747  ffd2                 call edx
// 00880749  6a00                 push 0
// 0088074b  8d4c2458             lea ecx, [esp + 0x58]
// 0088074f  e84cc80f00           call 0x97cfa0
// 00880754  8d4c243c             lea ecx, [esp + 0x3c]
// 00880758  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 00880760  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00880764  e8f7eeb8ff           call 0x40f660
// 00880769  8d8c2498000000       lea ecx, [esp + 0x98]
// 00880770  c68424d400000000     mov byte ptr [esp + 0xd4], 0
// 00880778  e8a3eff7ff           call 0x7ff720
// 0088077d  8d4c2454             lea ecx, [esp + 0x54]
// 00880781  c78424d4000000ffffffff mov dword ptr [esp + 0xd4], 0xffffffff
// 0088078c  e8efedf7ff           call 0x7ff580
// 00880791  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 00880798  64890d00000000       mov dword ptr fs:[0], ecx
// 0088079f  59                   pop ecx
// 008807a0  5f                   pop edi
// 008807a1  5e                   pop esi
// 008807a2  5d                   pop ebp
// 008807a3  5b                   pop ebx
// 008807a4  81c4c4000000         add esp, 0xc4
// 008807aa  c20400               ret 4
// copied from an identical function in another client (function ?DrawItem@CXTPPropertyGridPaintManager@@UAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp