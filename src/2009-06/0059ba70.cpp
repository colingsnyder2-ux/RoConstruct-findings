// roc 2009-06 0059ba70  unit: seg_00590000  size: 1523 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059ba70
//
// 0059ba70  81ec00010000         sub esp, 0x100
// 0059ba76  56                   push esi
// 0059ba77  8bb42408010000       mov esi, dword ptr [esp + 0x108]
// 0059ba7e  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 0059ba84  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0059ba87  89442458             mov dword ptr [esp + 0x58], eax
// 0059ba8b  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 0059ba91  48                   dec eax
// 0059ba92  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 0059ba98  89442478             mov dword ptr [esp + 0x78], eax
// 0059ba9c  7f4d                 jg 0x59baeb
// 0059ba9e  8bff                 mov edi, edi
// 0059baa0  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0059baa6  80781100             cmp byte ptr [eax + 0x11], 0
// 0059baaa  753f                 jne 0x59baeb
// 0059baac  8b567c               mov edx, dword ptr [esi + 0x7c]
// 0059baaf  3b9684000000         cmp edx, dword ptr [esi + 0x84]
// 0059bab5  7519                 jne 0x59bad0
// 0059bab7  33c9                 xor ecx, ecx
// 0059bab9  398e6c010000         cmp dword ptr [esi + 0x16c], ecx
// 0059babf  0f94c1               sete cl
// 0059bac2  038e88000000         add ecx, dword ptr [esi + 0x88]
// 0059bac8  398e80000000         cmp dword ptr [esi + 0x80], ecx
// 0059bace  771b                 ja 0x59baeb
// 0059bad0  8b10                 mov edx, dword ptr [eax]
// 0059bad2  56                   push esi
// 0059bad3  ffd2                 call edx
// 0059bad5  83c404               add esp, 4
// 0059bad8  85c0                 test eax, eax
// 0059bada  0f8482000000         je 0x59bb62
// 0059bae0  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0059bae3  3b8684000000         cmp eax, dword ptr [esi + 0x84]
// 0059bae9  7eb5                 jle 0x59baa0
// 0059baeb  837e2400             cmp dword ptr [esi + 0x24], 0
// 0059baef  53                   push ebx
// 0059baf0  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 0059baf6  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0059bafe  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0059bb02  0f8e34050000         jle 0x59c03c
// 0059bb08  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0059bb0c  b8b8ffffff           mov eax, 0xffffffb8
// 0059bb11  8d5148               lea edx, [ecx + 0x48]
// 0059bb14  2bc1                 sub eax, ecx
// 0059bb16  55                   push ebp
// 0059bb17  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0059bb1f  89542428             mov dword ptr [esp + 0x28], edx
// 0059bb23  89842488000000       mov dword ptr [esp + 0x88], eax
// 0059bb2a  57                   push edi
// 0059bb2b  eb03                 jmp 0x59bb30
// 0059bb2d  8d4900               lea ecx, [ecx]
// 0059bb30  807b3000             cmp byte ptr [ebx + 0x30], 0
// 0059bb34  0f84d6040000         je 0x59c010
// 0059bb3a  8b842414010000       mov eax, dword ptr [esp + 0x114]
// 0059bb41  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 0059bb47  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0059bb4a  3bb42484000000       cmp esi, dword ptr [esp + 0x84]
// 0059bb51  7319                 jae 0x59bb6c
// 0059bb53  8bc1                 mov eax, ecx
// 0059bb55  89442414             mov dword ptr [esp + 0x14], eax
// 0059bb59  03c0                 add eax, eax
// 0059bb5b  c644241300           mov byte ptr [esp + 0x13], 0
// 0059bb60  eb26                 jmp 0x59bb88
// 0059bb62  33c0                 xor eax, eax
// 0059bb64  5e                   pop esi
// 0059bb65  81c400010000         add esp, 0x100
// 0059bb6b  c3                   ret 
// 0059bb6c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0059bb6f  33d2                 xor edx, edx
// 0059bb71  f7f1                 div ecx
// 0059bb73  8bc2                 mov eax, edx
// 0059bb75  89442414             mov dword ptr [esp + 0x14], eax
// 0059bb79  85c0                 test eax, eax
// 0059bb7b  7506                 jne 0x59bb83
// 0059bb7d  8bc1                 mov eax, ecx
// 0059bb7f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059bb83  c644241301           mov byte ptr [esp + 0x13], 1
// 0059bb88  8bbc2414010000       mov edi, dword ptr [esp + 0x114]
// 0059bb8f  6a00                 push 0
// 0059bb91  85f6                 test esi, esi
// 0059bb93  7625                 jbe 0x59bbba
// 0059bb95  8b5704               mov edx, dword ptr [edi + 4]
// 0059bb98  4e                   dec esi
// 0059bb99  0faff1               imul esi, ecx
// 0059bb9c  03c1                 add eax, ecx
// 0059bb9e  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0059bba1  50                   push eax
// 0059bba2  56                   push esi
// 0059bba3  8b742438             mov esi, dword ptr [esp + 0x38]
// 0059bba7  8b06                 mov eax, dword ptr [esi]
// 0059bba9  50                   push eax
// 0059bbaa  57                   push edi
// 0059bbab  ffd1                 call ecx
// 0059bbad  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0059bbb0  8d0490               lea eax, [eax + edx*4]
// 0059bbb3  c644242600           mov byte ptr [esp + 0x26], 0
// 0059bbb8  eb18                 jmp 0x59bbd2
// 0059bbba  8b742430             mov esi, dword ptr [esp + 0x30]
// 0059bbbe  8b16                 mov edx, dword ptr [esi]
// 0059bbc0  8b4f04               mov ecx, dword ptr [edi + 4]
// 0059bbc3  50                   push eax
// 0059bbc4  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0059bbc7  6a00                 push 0
// 0059bbc9  52                   push edx
// 0059bbca  57                   push edi
// 0059bbcb  ffd0                 call eax
// 0059bbcd  c644242601           mov byte ptr [esp + 0x26], 1
// 0059bbd2  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0059bbd6  89842480000000       mov dword ptr [esp + 0x80], eax
// 0059bbdd  8b4170               mov eax, dword ptr [ecx + 0x70]
// 0059bbe0  03442474             add eax, dword ptr [esp + 0x74]
// 0059bbe4  83c414               add esp, 0x14
// 0059bbe7  89442420             mov dword ptr [esp + 0x20], eax
// 0059bbeb  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 0059bbee  0fb710               movzx edx, word ptr [eax]
// 0059bbf1  0fb74802             movzx ecx, word ptr [eax + 2]
// 0059bbf5  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059bbf9  0fb75010             movzx edx, word ptr [eax + 0x10]
// 0059bbfd  894c2478             mov dword ptr [esp + 0x78], ecx
// 0059bc01  0fb74820             movzx ecx, word ptr [eax + 0x20]
// 0059bc05  89542474             mov dword ptr [esp + 0x74], edx
// 0059bc09  0fb75012             movzx edx, word ptr [eax + 0x12]
// 0059bc0d  0fb74004             movzx eax, word ptr [eax + 4]
// 0059bc11  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 0059bc18  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 0059bc1e  038c248c000000       add ecx, dword ptr [esp + 0x8c]
// 0059bc25  837c241400           cmp dword ptr [esp + 0x14], 0
// 0059bc2a  8954247c             mov dword ptr [esp + 0x7c], edx
// 0059bc2e  8b543104             mov edx, dword ptr [ecx + esi + 4]
// 0059bc32  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0059bc36  89442468             mov dword ptr [esp + 0x68], eax
// 0059bc3a  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 0059bc41  89942488000000       mov dword ptr [esp + 0x88], edx
// 0059bc48  8b1488               mov edx, dword ptr [eax + ecx*4]
// 0059bc4b  89542448             mov dword ptr [esp + 0x48], edx
// 0059bc4f  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0059bc57  0f8eb3030000         jle 0x59c010
// 0059bc5d  8d4900               lea ecx, [ecx]
// 0059bc60  807c241200           cmp byte ptr [esp + 0x12], 0
// 0059bc65  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0059bc69  8b542450             mov edx, dword ptr [esp + 0x50]
// 0059bc6d  8b3c96               mov edi, dword ptr [esi + edx*4]
// 0059bc70  897c2418             mov dword ptr [esp + 0x18], edi
// 0059bc74  7406                 je 0x59bc7c
// 0059bc76  8bcf                 mov ecx, edi
// 0059bc78  85d2                 test edx, edx
// 0059bc7a  7404                 je 0x59bc80
// 0059bc7c  8b4c96fc             mov ecx, dword ptr [esi + edx*4 - 4]
// 0059bc80  807c241300           cmp byte ptr [esp + 0x13], 0
// 0059bc85  740b                 je 0x59bc92
// 0059bc87  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059bc8b  48                   dec eax
// 0059bc8c  3bd0                 cmp edx, eax
// 0059bc8e  8bc7                 mov eax, edi
// 0059bc90  7404                 je 0x59bc96
// 0059bc92  8b449604             mov eax, dword ptr [esi + edx*4 + 4]
// 0059bc96  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059bc9a  0fbf32               movsx esi, word ptr [edx]
// 0059bc9d  0fbf39               movsx edi, word ptr [ecx]
// 0059bca0  0fbf28               movsx ebp, word ptr [eax]
// 0059bca3  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 0059bca6  4a                   dec edx
// 0059bca7  83e880               sub eax, -0x80
// 0059bcaa  83e980               sub ecx, -0x80
// 0059bcad  897c243c             mov dword ptr [esp + 0x3c], edi
// 0059bcb1  897c2424             mov dword ptr [esp + 0x24], edi
// 0059bcb5  89742430             mov dword ptr [esp + 0x30], esi
// 0059bcb9  8974245c             mov dword ptr [esp + 0x5c], esi
// 0059bcbd  896c2444             mov dword ptr [esp + 0x44], ebp
// 0059bcc1  896c2428             mov dword ptr [esp + 0x28], ebp
// 0059bcc5  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0059bccd  89542470             mov dword ptr [esp + 0x70], edx
// 0059bcd1  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0059bcd9  8944244c             mov dword ptr [esp + 0x4c], eax
// 0059bcdd  894c2454             mov dword ptr [esp + 0x54], ecx
// 0059bce1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059bce5  6a01                 push 1
// 0059bce7  8d842494000000       lea eax, [esp + 0x94]
// 0059bcee  50                   push eax
// 0059bcef  51                   push ecx
// 0059bcf0  e89be1feff           call 0x589e90
// 0059bcf5  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0059bcf9  83c40c               add esp, 0xc
// 0059bcfc  39542440             cmp dword ptr [esp + 0x40], edx
// 0059bd00  7321                 jae 0x59bd23
// 0059bd02  8b442454             mov eax, dword ptr [esp + 0x54]
// 0059bd06  0fbf08               movsx ecx, word ptr [eax]
// 0059bd09  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0059bd0d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059bd11  0fbfb280000000       movsx esi, word ptr [edx + 0x80]
// 0059bd18  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0059bd1c  0fbf08               movsx ecx, word ptr [eax]
// 0059bd1f  894c2444             mov dword ptr [esp + 0x44], ecx
// 0059bd23  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059bd27  8b4a04               mov ecx, dword ptr [edx + 4]
// 0059bd2a  85c9                 test ecx, ecx
// 0059bd2c  7469                 je 0x59bd97
// 0059bd2e  6683bc249200000000   cmp word ptr [esp + 0x92], 0
// 0059bd37  755e                 jne 0x59bd97
// 0059bd39  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0059bd3d  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 0059bd41  2bc6                 sub eax, esi
// 0059bd43  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0059bd48  8d14c0               lea edx, [eax + eax*8]
// 0059bd4b  8bc3                 mov eax, ebx
// 0059bd4d  03d2                 add edx, edx
// 0059bd4f  c1e007               shl eax, 7
// 0059bd52  c1e308               shl ebx, 8
// 0059bd55  03d2                 add edx, edx
// 0059bd57  7819                 js 0x59bd72
// 0059bd59  03c2                 add eax, edx
// 0059bd5b  99                   cdq 
// 0059bd5c  f7fb                 idiv ebx
// 0059bd5e  85c9                 test ecx, ecx
// 0059bd60  7e29                 jle 0x59bd8b
// 0059bd62  ba01000000           mov edx, 1
// 0059bd67  d3e2                 shl edx, cl
// 0059bd69  3bc2                 cmp eax, edx
// 0059bd6b  7c1e                 jl 0x59bd8b
// 0059bd6d  8d42ff               lea eax, [edx - 1]
// 0059bd70  eb19                 jmp 0x59bd8b
// 0059bd72  2bc2                 sub eax, edx
// 0059bd74  99                   cdq 
// 0059bd75  f7fb                 idiv ebx
// 0059bd77  85c9                 test ecx, ecx
// 0059bd79  7e0e                 jle 0x59bd89
// 0059bd7b  ba01000000           mov edx, 1
// 0059bd80  d3e2                 shl edx, cl
// 0059bd82  3bc2                 cmp eax, edx
// 0059bd84  7c03                 jl 0x59bd89
// 0059bd86  8d42ff               lea eax, [edx - 1]
// 0059bd89  f7d8                 neg eax
// 0059bd8b  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0059bd8f  6689842492000000     mov word ptr [esp + 0x92], ax
// 0059bd97  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059bd9b  8b4808               mov ecx, dword ptr [eax + 8]
// 0059bd9e  85c9                 test ecx, ecx
// 0059bda0  746b                 je 0x59be0d
// 0059bda2  6683bc24a000000000   cmp word ptr [esp + 0xa0], 0
// 0059bdab  7560                 jne 0x59be0d
// 0059bdad  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059bdb1  2b442428             sub eax, dword ptr [esp + 0x28]
// 0059bdb5  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0059bdb9  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0059bdbe  8d14c0               lea edx, [eax + eax*8]
// 0059bdc1  8bc3                 mov eax, ebx
// 0059bdc3  03d2                 add edx, edx
// 0059bdc5  c1e007               shl eax, 7
// 0059bdc8  c1e308               shl ebx, 8
// 0059bdcb  03d2                 add edx, edx
// 0059bdcd  7819                 js 0x59bde8
// 0059bdcf  03c2                 add eax, edx
// 0059bdd1  99                   cdq 
// 0059bdd2  f7fb                 idiv ebx
// 0059bdd4  85c9                 test ecx, ecx
// 0059bdd6  7e29                 jle 0x59be01
// 0059bdd8  ba01000000           mov edx, 1
// 0059bddd  d3e2                 shl edx, cl
// 0059bddf  3bc2                 cmp eax, edx
// 0059bde1  7c1e                 jl 0x59be01
// 0059bde3  8d42ff               lea eax, [edx - 1]
// 0059bde6  eb19                 jmp 0x59be01
// 0059bde8  2bc2                 sub eax, edx
// 0059bdea  99                   cdq 
// 0059bdeb  f7fb                 idiv ebx
// 0059bded  85c9                 test ecx, ecx
// 0059bdef  7e0e                 jle 0x59bdff
// 0059bdf1  ba01000000           mov edx, 1
// 0059bdf6  d3e2                 shl edx, cl
// 0059bdf8  3bc2                 cmp eax, edx
// 0059bdfa  7c03                 jl 0x59bdff
// 0059bdfc  8d42ff               lea eax, [edx - 1]
// 0059bdff  f7d8                 neg eax
// 0059be01  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0059be05  66898424a0000000     mov word ptr [esp + 0xa0], ax
// 0059be0d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059be11  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0059be14  85c9                 test ecx, ecx
// 0059be16  7477                 je 0x59be8f
// 0059be18  6683bc24b000000000   cmp word ptr [esp + 0xb0], 0
// 0059be21  756c                 jne 0x59be8f
// 0059be23  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059be27  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 0059be2e  8d0412               lea eax, [edx + edx]
// 0059be31  8bd0                 mov edx, eax
// 0059be33  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059be37  2bc2                 sub eax, edx
// 0059be39  03442424             add eax, dword ptr [esp + 0x24]
// 0059be3d  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0059be42  8d14c0               lea edx, [eax + eax*8]
// 0059be45  8bc3                 mov eax, ebx
// 0059be47  c1e007               shl eax, 7
// 0059be4a  c1e308               shl ebx, 8
// 0059be4d  85d2                 test edx, edx
// 0059be4f  7c19                 jl 0x59be6a
// 0059be51  03c2                 add eax, edx
// 0059be53  99                   cdq 
// 0059be54  f7fb                 idiv ebx
// 0059be56  85c9                 test ecx, ecx
// 0059be58  7e29                 jle 0x59be83
// 0059be5a  ba01000000           mov edx, 1
// 0059be5f  d3e2                 shl edx, cl
// 0059be61  3bc2                 cmp eax, edx
// 0059be63  7c1e                 jl 0x59be83
// 0059be65  8d42ff               lea eax, [edx - 1]
// 0059be68  eb19                 jmp 0x59be83
// 0059be6a  2bc2                 sub eax, edx
// 0059be6c  99                   cdq 
// 0059be6d  f7fb                 idiv ebx
// 0059be6f  85c9                 test ecx, ecx
// 0059be71  7e0e                 jle 0x59be81
// 0059be73  ba01000000           mov edx, 1
// 0059be78  d3e2                 shl edx, cl
// 0059be7a  3bc2                 cmp eax, edx
// 0059be7c  7c03                 jl 0x59be81
// 0059be7e  8d42ff               lea eax, [edx - 1]
// 0059be81  f7d8                 neg eax
// 0059be83  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0059be87  66898424b0000000     mov word ptr [esp + 0xb0], ax
// 0059be8f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059be93  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0059be96  85c9                 test ecx, ecx
// 0059be98  7469                 je 0x59bf03
// 0059be9a  6683bc24a200000000   cmp word ptr [esp + 0xa2], 0
// 0059bea3  755e                 jne 0x59bf03
// 0059bea5  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059bea9  2bc5                 sub eax, ebp
// 0059beab  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 0059beaf  03c7                 add eax, edi
// 0059beb1  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0059beb6  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 0059beba  8d1480               lea edx, [eax + eax*4]
// 0059bebd  8bc7                 mov eax, edi
// 0059bebf  c1e007               shl eax, 7
// 0059bec2  c1e708               shl edi, 8
// 0059bec5  85d2                 test edx, edx
// 0059bec7  7c19                 jl 0x59bee2
// 0059bec9  03c2                 add eax, edx
// 0059becb  99                   cdq 
// 0059becc  f7ff                 idiv edi
// 0059bece  85c9                 test ecx, ecx
// 0059bed0  7e29                 jle 0x59befb
// 0059bed2  ba01000000           mov edx, 1
// 0059bed7  d3e2                 shl edx, cl
// 0059bed9  3bc2                 cmp eax, edx
// 0059bedb  7c1e                 jl 0x59befb
// 0059bedd  8d42ff               lea eax, [edx - 1]
// 0059bee0  eb19                 jmp 0x59befb
// 0059bee2  2bc2                 sub eax, edx
// 0059bee4  99                   cdq 
// 0059bee5  f7ff                 idiv edi
// 0059bee7  85c9                 test ecx, ecx
// 0059bee9  7e0e                 jle 0x59bef9
// 0059beeb  ba01000000           mov edx, 1
// 0059bef0  d3e2                 shl edx, cl
// 0059bef2  3bc2                 cmp eax, edx
// 0059bef4  7c03                 jl 0x59bef9
// 0059bef6  8d42ff               lea eax, [edx - 1]
// 0059bef9  f7d8                 neg eax
// 0059befb  66898424a2000000     mov word ptr [esp + 0xa2], ax
// 0059bf03  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059bf07  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0059bf0a  85c9                 test ecx, ecx
// 0059bf0c  746e                 je 0x59bf7c
// 0059bf0e  6683bc249400000000   cmp word ptr [esp + 0x94], 0
// 0059bf17  7563                 jne 0x59bf7c
// 0059bf19  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059bf1d  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 0059bf21  8d0412               lea eax, [edx + edx]
// 0059bf24  8bd0                 mov edx, eax
// 0059bf26  8bc6                 mov eax, esi
// 0059bf28  2bc2                 sub eax, edx
// 0059bf2a  0344245c             add eax, dword ptr [esp + 0x5c]
// 0059bf2e  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 0059bf33  8d14c0               lea edx, [eax + eax*8]
// 0059bf36  8bc7                 mov eax, edi
// 0059bf38  c1e007               shl eax, 7
// 0059bf3b  c1e708               shl edi, 8
// 0059bf3e  85d2                 test edx, edx
// 0059bf40  7c19                 jl 0x59bf5b
// 0059bf42  03c2                 add eax, edx
// 0059bf44  99                   cdq 
// 0059bf45  f7ff                 idiv edi
// 0059bf47  85c9                 test ecx, ecx
// 0059bf49  7e29                 jle 0x59bf74
// 0059bf4b  ba01000000           mov edx, 1
// 0059bf50  d3e2                 shl edx, cl
// 0059bf52  3bc2                 cmp eax, edx
// 0059bf54  7c1e                 jl 0x59bf74
// 0059bf56  8d42ff               lea eax, [edx - 1]
// 0059bf59  eb19                 jmp 0x59bf74
// 0059bf5b  2bc2                 sub eax, edx
// 0059bf5d  99                   cdq 
// 0059bf5e  f7ff                 idiv edi
// 0059bf60  85c9                 test ecx, ecx
// 0059bf62  7e0e                 jle 0x59bf72
// 0059bf64  ba01000000           mov edx, 1
// 0059bf69  d3e2                 shl edx, cl
// 0059bf6b  3bc2                 cmp eax, edx
// 0059bf6d  7c03                 jl 0x59bf72
// 0059bf6f  8d42ff               lea eax, [edx - 1]
// 0059bf72  f7d8                 neg eax
// 0059bf74  6689842494000000     mov word ptr [esp + 0x94], ax
// 0059bf7c  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059bf80  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0059bf84  50                   push eax
// 0059bf85  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 0059bf8c  51                   push ecx
// 0059bf8d  8d942498000000       lea edx, [esp + 0x98]
// 0059bf94  52                   push edx
// 0059bf95  53                   push ebx
// 0059bf96  50                   push eax
// 0059bf97  ff94249c000000       call dword ptr [esp + 0x9c]
// 0059bf9e  8b442458             mov eax, dword ptr [esp + 0x58]
// 0059bfa2  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0059bfa6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0059bfaa  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0059bfae  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059bfb2  8944243c             mov dword ptr [esp + 0x3c], eax
// 0059bfb6  b880000000           mov eax, 0x80
// 0059bfbb  0144242c             add dword ptr [esp + 0x2c], eax
// 0059bfbf  01442468             add dword ptr [esp + 0x68], eax
// 0059bfc3  01442460             add dword ptr [esp + 0x60], eax
// 0059bfc7  8b442454             mov eax, dword ptr [esp + 0x54]
// 0059bfcb  894c2438             mov dword ptr [esp + 0x38], ecx
// 0059bfcf  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 0059bfd2  014c244c             add dword ptr [esp + 0x4c], ecx
// 0059bfd6  40                   inc eax
// 0059bfd7  83c414               add esp, 0x14
// 0059bfda  8954245c             mov dword ptr [esp + 0x5c], edx
// 0059bfde  89742430             mov dword ptr [esp + 0x30], esi
// 0059bfe2  89442440             mov dword ptr [esp + 0x40], eax
// 0059bfe6  3b442470             cmp eax, dword ptr [esp + 0x70]
// 0059bfea  0f86f1fcffff         jbe 0x59bce1
// 0059bff0  8b442448             mov eax, dword ptr [esp + 0x48]
// 0059bff4  8bd1                 mov edx, ecx
// 0059bff6  8d0c90               lea ecx, [eax + edx*4]
// 0059bff9  8b442450             mov eax, dword ptr [esp + 0x50]
// 0059bffd  40                   inc eax
// 0059bffe  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0059c002  894c2448             mov dword ptr [esp + 0x48], ecx
// 0059c006  89442450             mov dword ptr [esp + 0x50], eax
// 0059c00a  0f8c50fcffff         jl 0x59bc60
// 0059c010  8b442458             mov eax, dword ptr [esp + 0x58]
// 0059c014  8b942414010000       mov edx, dword ptr [esp + 0x114]
// 0059c01b  8344246018           add dword ptr [esp + 0x60], 0x18
// 0059c020  8344242c04           add dword ptr [esp + 0x2c], 4
// 0059c025  40                   inc eax
// 0059c026  83c354               add ebx, 0x54
// 0059c029  3b4224               cmp eax, dword ptr [edx + 0x24]
// 0059c02c  89442458             mov dword ptr [esp + 0x58], eax
// 0059c030  895c2434             mov dword ptr [esp + 0x34], ebx
// 0059c034  0f8cf6faffff         jl 0x59bb30
// 0059c03a  5f                   pop edi
// 0059c03b  5d                   pop ebp
// 0059c03c  8b8c240c010000       mov ecx, dword ptr [esp + 0x10c]
// 0059c043  ff8188000000         inc dword ptr [ecx + 0x88]
// 0059c049  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0059c04f  3b811c010000         cmp eax, dword ptr [ecx + 0x11c]
// 0059c055  5b                   pop ebx
// 0059c056  1bc0                 sbb eax, eax
// 0059c058  83c004               add eax, 4
// 0059c05b  5e                   pop esi
// 0059c05c  81c400010000         add esp, 0x100
// 0059c062  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_smooth_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
