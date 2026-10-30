// roc 2009-06 00798610  unit: CXTPRibbonTheme  size: 1500 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00798610
//
// 00798610  6aff                 push -1
// 00798612  68e1bb8700           push 0x87bbe1
// 00798617  64a100000000         mov eax, dword ptr fs:[0]
// 0079861d  50                   push eax
// 0079861e  81ec84000000         sub esp, 0x84
// 00798624  53                   push ebx
// 00798625  55                   push ebp
// 00798626  56                   push esi
// 00798627  57                   push edi
// 00798628  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0079862d  33c4                 xor eax, esp
// 0079862f  50                   push eax
// 00798630  8d842498000000       lea eax, [esp + 0x98]
// 00798637  64a300000000         mov dword ptr fs:[0], eax
// 0079863d  8be9                 mov ebp, ecx
// 0079863f  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00798643  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 0079864a  8bcf                 mov ecx, edi
// 0079864c  e8df78f9ff           call 0x72ff30
// 00798651  8b8f00020000         mov ecx, dword ptr [edi + 0x200]
// 00798657  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 0079865d  89442428             mov dword ptr [esp + 0x28], eax
// 00798661  8b87fc010000         mov eax, dword ptr [edi + 0x1fc]
// 00798667  89442430             mov dword ptr [esp + 0x30], eax
// 0079866b  8b8708020000         mov eax, dword ptr [edi + 0x208]
// 00798671  894c2434             mov dword ptr [esp + 0x34], ecx
// 00798675  8bcf                 mov ecx, edi
// 00798677  89542438             mov dword ptr [esp + 0x38], edx
// 0079867b  8944243c             mov dword ptr [esp + 0x3c], eax
// 0079867f  e8ecfa0100           call 0x7b8170
// 00798684  85c0                 test eax, eax
// 00798686  0f85e8010000         jne 0x798874
// 0079868c  68b00a9000           push 0x900ab0
// 00798691  8bcd                 mov ecx, ebp
// 00798693  e828b70000           call 0x7a3dc0
// 00798698  8bd8                 mov ebx, eax
// 0079869a  85db                 test ebx, ebx
// 0079869c  0f842e050000         je 0x798bd0
// 007986a2  33c9                 xor ecx, ecx
// 007986a4  398c24b0000000       cmp dword ptr [esp + 0xb0], ecx
// 007986ab  6a02                 push 2
// 007986ad  0f94c1               sete cl
// 007986b0  8d542418             lea edx, [esp + 0x18]
// 007986b4  8bf9                 mov edi, ecx
// 007986b6  57                   push edi
// 007986b7  52                   push edx
// 007986b8  8bcb                 mov ecx, ebx
// 007986ba  e801d70600           call 0x805dc0
// 007986bf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007986c3  8b542414             mov edx, dword ptr [esp + 0x14]
// 007986c7  8b742430             mov esi, dword ptr [esp + 0x30]
// 007986cb  8bc1                 mov eax, ecx
// 007986cd  2bc2                 sub eax, edx
// 007986cf  03c6                 add eax, esi
// 007986d1  89442448             mov dword ptr [esp + 0x48], eax
// 007986d5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007986d9  8944244c             mov dword ptr [esp + 0x4c], eax
// 007986dd  33c0                 xor eax, eax
// 007986df  68ff00ff00           push 0xff00ff
// 007986e4  89442464             mov dword ptr [esp + 0x64], eax
// 007986e8  8944246c             mov dword ptr [esp + 0x6c], eax
// 007986ec  8d442464             lea eax, [esp + 0x64]
// 007986f0  50                   push eax
// 007986f1  83ec10               sub esp, 0x10
// 007986f4  8bc4                 mov eax, esp
// 007986f6  8910                 mov dword ptr [eax], edx
// 007986f8  8b542430             mov edx, dword ptr [esp + 0x30]
// 007986fc  89742458             mov dword ptr [esp + 0x58], esi
// 00798700  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00798704  895004               mov dword ptr [eax + 4], edx
// 00798707  894808               mov dword ptr [eax + 8], ecx
// 0079870a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0079870e  8d542458             lea edx, [esp + 0x58]
// 00798712  8974245c             mov dword ptr [esp + 0x5c], esi
// 00798716  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 0079871d  52                   push edx
// 0079871e  89480c               mov dword ptr [eax + 0xc], ecx
// 00798721  56                   push esi
// 00798722  8bcb                 mov ecx, ebx
// 00798724  c784248400000005000000 mov dword ptr [esp + 0x84], 5
// 0079872f  c784248c00000003000000 mov dword ptr [esp + 0x8c], 3
// 0079873a  e8c1db0600           call 0x806300
// 0079873f  68a00a9000           push 0x900aa0
// 00798744  8bcd                 mov ecx, ebp
// 00798746  e875b60000           call 0x7a3dc0
// 0079874b  6a02                 push 2
// 0079874d  8bd8                 mov ebx, eax
// 0079874f  57                   push edi
// 00798750  8d442468             lea eax, [esp + 0x68]
// 00798754  50                   push eax
// 00798755  8bcb                 mov ecx, ebx
// 00798757  e864d60600           call 0x805dc0
// 0079875c  8b10                 mov edx, dword ptr [eax]
// 0079875e  89542414             mov dword ptr [esp + 0x14], edx
// 00798762  8b4804               mov ecx, dword ptr [eax + 4]
// 00798765  894c2418             mov dword ptr [esp + 0x18], ecx
// 00798769  8b6808               mov ebp, dword ptr [eax + 8]
// 0079876c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00798770  8b400c               mov eax, dword ptr [eax + 0xc]
// 00798773  89442420             mov dword ptr [esp + 0x20], eax
// 00798777  8b442438             mov eax, dword ptr [esp + 0x38]
// 0079877b  8bca                 mov ecx, edx
// 0079877d  2bcd                 sub ecx, ebp
// 0079877f  03c8                 add ecx, eax
// 00798781  89442478             mov dword ptr [esp + 0x78], eax
// 00798785  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00798789  894c2470             mov dword ptr [esp + 0x70], ecx
// 0079878d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00798791  8944247c             mov dword ptr [esp + 0x7c], eax
// 00798795  33c0                 xor eax, eax
// 00798797  83ec10               sub esp, 0x10
// 0079879a  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 007987a1  8bcc                 mov ecx, esp
// 007987a3  8901                 mov dword ptr [ecx], eax
// 007987a5  b805000000           mov eax, 5
// 007987aa  894104               mov dword ptr [ecx + 4], eax
// 007987ad  33c0                 xor eax, eax
// 007987af  894108               mov dword ptr [ecx + 8], eax
// 007987b2  b803000000           mov eax, 3
// 007987b7  89410c               mov dword ptr [ecx + 0xc], eax
// 007987ba  8b442430             mov eax, dword ptr [esp + 0x30]
// 007987be  83ec10               sub esp, 0x10
// 007987c1  8bcc                 mov ecx, esp
// 007987c3  8911                 mov dword ptr [ecx], edx
// 007987c5  8b542438             mov edx, dword ptr [esp + 0x38]
// 007987c9  895104               mov dword ptr [ecx + 4], edx
// 007987cc  896908               mov dword ptr [ecx + 8], ebp
// 007987cf  89410c               mov dword ptr [ecx + 0xc], eax
// 007987d2  8d8c2490000000       lea ecx, [esp + 0x90]
// 007987d9  51                   push ecx
// 007987da  56                   push esi
// 007987db  8bcb                 mov ecx, ebx
// 007987dd  e8aece0600           call 0x805690
// 007987e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007987e6  68740a9000           push 0x900a74
// 007987eb  e8d0b50000           call 0x7a3dc0
// 007987f0  8b542448             mov edx, dword ptr [esp + 0x48]
// 007987f4  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007987f8  8bd8                 mov ebx, eax
// 007987fa  8b442434             mov eax, dword ptr [esp + 0x34]
// 007987fe  6a02                 push 2
// 00798800  89442458             mov dword ptr [esp + 0x58], eax
// 00798804  89542454             mov dword ptr [esp + 0x54], edx
// 00798808  8b542440             mov edx, dword ptr [esp + 0x40]
// 0079880c  57                   push edi
// 0079880d  8d442468             lea eax, [esp + 0x68]
// 00798811  894c2460             mov dword ptr [esp + 0x60], ecx
// 00798815  50                   push eax
// 00798816  8bcb                 mov ecx, ebx
// 00798818  89542468             mov dword ptr [esp + 0x68], edx
// 0079881c  33ed                 xor ebp, ebp
// 0079881e  e89dd50600           call 0x805dc0
// 00798823  83ec10               sub esp, 0x10
// 00798826  8bcc                 mov ecx, esp
// 00798828  8929                 mov dword ptr [ecx], ebp
// 0079882a  ba05000000           mov edx, 5
// 0079882f  895104               mov dword ptr [ecx + 4], edx
// 00798832  33d2                 xor edx, edx
// 00798834  895108               mov dword ptr [ecx + 8], edx
// 00798837  83ec10               sub esp, 0x10
// 0079883a  ba03000000           mov edx, 3
// 0079883f  89510c               mov dword ptr [ecx + 0xc], edx
// 00798842  8b10                 mov edx, dword ptr [eax]
// 00798844  8bcc                 mov ecx, esp
// 00798846  8911                 mov dword ptr [ecx], edx
// 00798848  8b5004               mov edx, dword ptr [eax + 4]
// 0079884b  895104               mov dword ptr [ecx + 4], edx
// 0079884e  8b5008               mov edx, dword ptr [eax + 8]
// 00798851  8b400c               mov eax, dword ptr [eax + 0xc]
// 00798854  895108               mov dword ptr [ecx + 8], edx
// 00798857  89410c               mov dword ptr [ecx + 0xc], eax
// 0079885a  8d4c2470             lea ecx, [esp + 0x70]
// 0079885e  51                   push ecx
// 0079885f  56                   push esi
// 00798860  8bcb                 mov ecx, ebx
// 00798862  e829ce0600           call 0x805690
// 00798867  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0079886b  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 00798872  eb15                 jmp 0x798889
// 00798874  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 0079887b  6a00                 push 0
// 0079887d  8d542434             lea edx, [esp + 0x34]
// 00798881  52                   push edx
// 00798882  8bce                 mov ecx, esi
// 00798884  e8470ff8ff           call 0x7197d0
// 00798889  8bcf                 mov ecx, edi
// 0079888b  e840fb0100           call 0x7b83d0
// 00798890  85c0                 test eax, eax
// 00798892  0f8509010000         jne 0x7989a1
// 00798898  39874c020000         cmp dword ptr [edi + 0x24c], eax
// 0079889e  0f84fd000000         je 0x7989a1
// 007988a4  8b8f64020000         mov ecx, dword ptr [edi + 0x264]
// 007988aa  50                   push eax
// 007988ab  e8402cfdff           call 0x76b4f0
// 007988b0  85c0                 test eax, eax
// 007988b2  0f8ee9000000         jle 0x7989a1
// 007988b8  8b872c020000         mov eax, dword ptr [edi + 0x22c]
// 007988be  8b8f30020000         mov ecx, dword ptr [edi + 0x230]
// 007988c4  8b9734020000         mov edx, dword ptr [edi + 0x234]
// 007988ca  89442414             mov dword ptr [esp + 0x14], eax
// 007988ce  8b8738020000         mov eax, dword ptr [edi + 0x238]
// 007988d4  89442420             mov dword ptr [esp + 0x20], eax
// 007988d8  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 007988de  894c2418             mov dword ptr [esp + 0x18], ecx
// 007988e2  8954241c             mov dword ptr [esp + 0x1c], edx
// 007988e6  8b5840               mov ebx, dword ptr [eax + 0x40]
// 007988e9  8bcf                 mov ecx, edi
// 007988eb  e8c0f20100           call 0x7b7bb0
// 007988f0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007988f4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007988f8  03c3                 add eax, ebx
// 007988fa  8944245c             mov dword ptr [esp + 0x5c], eax
// 007988fe  8d442414             lea eax, [esp + 0x14]
// 00798902  50                   push eax
// 00798903  83c1f1               add ecx, -0xf
// 00798906  57                   push edi
// 00798907  894c2458             mov dword ptr [esp + 0x58], ecx
// 0079890b  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0079890f  89542460             mov dword ptr [esp + 0x60], edx
// 00798913  e898caffff           call 0x7953b0
// 00798918  83c408               add esp, 8
// 0079891b  85c0                 test eax, eax
// 0079891d  b8840a9000           mov eax, 0x900a84
// 00798922  7505                 jne 0x798929
// 00798924  b85c0a9000           mov eax, 0x900a5c
// 00798929  50                   push eax
// 0079892a  8bcd                 mov ecx, ebp
// 0079892c  e88fb40000           call 0x7a3dc0
// 00798931  8bd8                 mov ebx, eax
// 00798933  85db                 test ebx, ebx
// 00798935  746a                 je 0x7989a1
// 00798937  6a01                 push 1
// 00798939  6a00                 push 0
// 0079893b  8d4c2478             lea ecx, [esp + 0x78]
// 0079893f  51                   push ecx
// 00798940  8bcb                 mov ecx, ebx
// 00798942  c7432c01000000       mov dword ptr [ebx + 0x2c], 1
// 00798949  c744247410000000     mov dword ptr [esp + 0x74], 0x10
// 00798951  e86ad40600           call 0x805dc0
// 00798956  83ec10               sub esp, 0x10
// 00798959  8bcc                 mov ecx, esp
// 0079895b  ba10000000           mov edx, 0x10
// 00798960  8911                 mov dword ptr [ecx], edx
// 00798962  ba03000000           mov edx, 3
// 00798967  895104               mov dword ptr [ecx + 4], edx
// 0079896a  8b542478             mov edx, dword ptr [esp + 0x78]
// 0079896e  895108               mov dword ptr [ecx + 8], edx
// 00798971  83ec10               sub esp, 0x10
// 00798974  ba03000000           mov edx, 3
// 00798979  89510c               mov dword ptr [ecx + 0xc], edx
// 0079897c  8b10                 mov edx, dword ptr [eax]
// 0079897e  8bcc                 mov ecx, esp
// 00798980  8911                 mov dword ptr [ecx], edx
// 00798982  8b5004               mov edx, dword ptr [eax + 4]
// 00798985  895104               mov dword ptr [ecx + 4], edx
// 00798988  8b5008               mov edx, dword ptr [eax + 8]
// 0079898b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0079898e  895108               mov dword ptr [ecx + 8], edx
// 00798991  89410c               mov dword ptr [ecx + 0xc], eax
// 00798994  8d4c2470             lea ecx, [esp + 0x70]
// 00798998  51                   push ecx
// 00798999  56                   push esi
// 0079899a  8bcb                 mov ecx, ebx
// 0079899c  e8efcc0600           call 0x805690
// 007989a1  83bf7402000000       cmp dword ptr [edi + 0x274], 0
// 007989a8  7567                 jne 0x798a11
// 007989aa  8b542428             mov edx, dword ptr [esp + 0x28]
// 007989ae  52                   push edx
// 007989af  8bcd                 mov ecx, ebp
// 007989b1  e82ace0000           call 0x7a57e0
// 007989b6  8944242c             mov dword ptr [esp + 0x2c], eax
// 007989ba  85c0                 test eax, eax
// 007989bc  7453                 je 0x798a11
// 007989be  6a32                 push 0x32
// 007989c0  ff15dced8900         call dword ptr [0x89eddc]
// 007989c6  6a31                 push 0x31
// 007989c8  8bd8                 mov ebx, eax
// 007989ca  ff15dced8900         call dword ptr [0x89eddc]
// 007989d0  8bc8                 mov ecx, eax
// 007989d2  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007989d6  2bc3                 sub eax, ebx
// 007989d8  2b442434             sub eax, dword ptr [esp + 0x34]
// 007989dc  99                   cdq 
// 007989dd  2bc2                 sub eax, edx
// 007989df  8b542430             mov edx, dword ptr [esp + 0x30]
// 007989e3  83c20a               add edx, 0xa
// 007989e6  d1f8                 sar eax, 1
// 007989e8  89542440             mov dword ptr [esp + 0x40], edx
// 007989ec  85f6                 test esi, esi
// 007989ee  7504                 jne 0x7989f4
// 007989f0  33d2                 xor edx, edx
// 007989f2  eb03                 jmp 0x7989f7
// 007989f4  8b5604               mov edx, dword ptr [esi + 4]
// 007989f7  6a03                 push 3
// 007989f9  6a00                 push 0
// 007989fb  6a00                 push 0
// 007989fd  53                   push ebx
// 007989fe  51                   push ecx
// 007989ff  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00798a03  51                   push ecx
// 00798a04  50                   push eax
// 00798a05  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00798a09  50                   push eax
// 00798a0a  52                   push edx
// 00798a0b  ff1528ef8900         call dword ptr [0x89ef28]
// 00798a11  8b8f0c020000         mov ecx, dword ptr [edi + 0x20c]
// 00798a17  8b9f84020000         mov ebx, dword ptr [edi + 0x284]
// 00798a1d  8b9710020000         mov edx, dword ptr [edi + 0x210]
// 00798a23  8b8714020000         mov eax, dword ptr [edi + 0x214]
// 00798a29  894c2414             mov dword ptr [esp + 0x14], ecx
// 00798a2d  8b8f18020000         mov ecx, dword ptr [edi + 0x218]
// 00798a33  894c2420             mov dword ptr [esp + 0x20], ecx
// 00798a37  8bcb                 mov ecx, ebx
// 00798a39  89542418             mov dword ptr [esp + 0x18], edx
// 00798a3d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00798a41  e87a3c0500           call 0x7ec6c0
// 00798a46  85c0                 test eax, eax
// 00798a48  7410                 je 0x798a5a
// 00798a4a  8b5500               mov edx, dword ptr [ebp]
// 00798a4d  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 00798a53  53                   push ebx
// 00798a54  57                   push edi
// 00798a55  56                   push esi
// 00798a56  8bcd                 mov ecx, ebp
// 00798a58  ffd0                 call eax
// 00798a5a  8d8db4050000         lea ecx, [ebp + 0x5b4]
// 00798a60  51                   push ecx
// 00798a61  56                   push esi
// 00798a62  8d8c2490000000       lea ecx, [esp + 0x90]
// 00798a69  e8f27dfdff           call 0x770860
// 00798a6e  8d4c2424             lea ecx, [esp + 0x24]
// 00798a72  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 00798a7d  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00798a83  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00798a87  8d542424             lea edx, [esp + 0x24]
// 00798a8b  52                   push edx
// 00798a8c  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 00798a94  e88705f8ff           call 0x719020
// 00798a99  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00798a9d  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 00798aa1  8d442440             lea eax, [esp + 0x40]
// 00798aa5  50                   push eax
// 00798aa6  8d4c2428             lea ecx, [esp + 0x28]
// 00798aaa  ff1554fb8900         call dword ptr [0x89fb54]
// 00798ab0  50                   push eax
// 00798ab1  8d4c242c             lea ecx, [esp + 0x2c]
// 00798ab5  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00798abb  8b4e08               mov ecx, dword ptr [esi + 8]
// 00798abe  50                   push eax
// 00798abf  51                   push ecx
// 00798ac0  ff1550e18900         call dword ptr [0x89e150]
// 00798ac6  8bc3                 mov eax, ebx
// 00798ac8  2b442440             sub eax, dword ptr [esp + 0x40]
// 00798acc  99                   cdq 
// 00798acd  2bc2                 sub eax, edx
// 00798acf  d1f8                 sar eax, 1
// 00798ad1  7904                 jns 0x798ad7
// 00798ad3  33c0                 xor eax, eax
// 00798ad5  eb36                 jmp 0x798b0d
// 00798ad7  8d942480000000       lea edx, [esp + 0x80]
// 00798ade  52                   push edx
// 00798adf  8d4c2428             lea ecx, [esp + 0x28]
// 00798ae3  ff1554fb8900         call dword ptr [0x89fb54]
// 00798ae9  50                   push eax
// 00798aea  8d4c242c             lea ecx, [esp + 0x2c]
// 00798aee  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00798af4  50                   push eax
// 00798af5  8b4608               mov eax, dword ptr [esi + 8]
// 00798af8  50                   push eax
// 00798af9  ff1550e18900         call dword ptr [0x89e150]
// 00798aff  8bc3                 mov eax, ebx
// 00798b01  2b842480000000       sub eax, dword ptr [esp + 0x80]
// 00798b08  99                   cdq 
// 00798b09  2bc2                 sub eax, edx
// 00798b0b  d1f8                 sar eax, 1
// 00798b0d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00798b11  01442414             add dword ptr [esp + 0x14], eax
// 00798b15  e8c2330b00           call 0x84bedc
// 00798b1a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00798b1e  a900000001           test eax, 0x1000000
// 00798b23  7410                 je 0x798b35
// 00798b25  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 00798b2b  8b4040               mov eax, dword ptr [eax + 0x40]
// 00798b2e  99                   cdq 
// 00798b2f  2bc2                 sub eax, edx
// 00798b31  d1f8                 sar eax, 1
// 00798b33  03d8                 add ebx, eax
// 00798b35  8bcf                 mov ecx, edi
// 00798b37  e834f60100           call 0x7b8170
// 00798b3c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00798b40  85c0                 test eax, eax
// 00798b42  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00798b49  50                   push eax
// 00798b4a  51                   push ecx
// 00798b4b  752c                 jne 0x798b79
// 00798b4d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00798b51  8b5500               mov edx, dword ptr [ebp]
// 00798b54  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 00798b5a  83ec10               sub esp, 0x10
// 00798b5d  8bc4                 mov eax, esp
// 00798b5f  8908                 mov dword ptr [eax], ecx
// 00798b61  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00798b65  895804               mov dword ptr [eax + 4], ebx
// 00798b68  894808               mov dword ptr [eax + 8], ecx
// 00798b6b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00798b6f  89480c               mov dword ptr [eax + 0xc], ecx
// 00798b72  56                   push esi
// 00798b73  8bcd                 mov ecx, ebp
// 00798b75  ffd2                 call edx
// 00798b77  eb36                 jmp 0x798baf
// 00798b79  51                   push ecx
// 00798b7a  8d542430             lea edx, [esp + 0x30]
// 00798b7e  8bcc                 mov ecx, esp
// 00798b80  8964244c             mov dword ptr [esp + 0x4c], esp
// 00798b84  52                   push edx
// 00798b85  ff15e4fc8900         call dword ptr [0x89fce4]
// 00798b8b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00798b8f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00798b93  83ec10               sub esp, 0x10
// 00798b96  8bc4                 mov eax, esp
// 00798b98  8908                 mov dword ptr [eax], ecx
// 00798b9a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00798b9e  895804               mov dword ptr [eax + 4], ebx
// 00798ba1  895008               mov dword ptr [eax + 8], edx
// 00798ba4  89480c               mov dword ptr [eax + 0xc], ecx
// 00798ba7  56                   push esi
// 00798ba8  8bcd                 mov ecx, ebp
// 00798baa  e8b1f5ffff           call 0x798160
// 00798baf  8d4c2424             lea ecx, [esp + 0x24]
// 00798bb3  ff1510fd8900         call dword ptr [0x89fd10]
// 00798bb9  8d8c2488000000       lea ecx, [esp + 0x88]
// 00798bc0  c78424a0000000ffffffff mov dword ptr [esp + 0xa0], 0xffffffff
// 00798bcb  e8107dfdff           call 0x7708e0
// 00798bd0  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00798bd7  64890d00000000       mov dword ptr fs:[0], ecx
// 00798bde  59                   pop ecx
// 00798bdf  5f                   pop edi
// 00798be0  5e                   pop esi
// 00798be1  5d                   pop ebp
// 00798be2  5b                   pop ebx
// 00798be3  81c490000000         add esp, 0x90
// 00798be9  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonFrameCaption@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp