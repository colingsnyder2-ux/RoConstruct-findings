// roc 2010-06 0082fee0  unit: CXTPRibbonTheme  size: 1500 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082fee0
//
// 0082fee0  6aff                 push -1
// 0082fee2  6801609b00           push 0x9b6001
// 0082fee7  64a100000000         mov eax, dword ptr fs:[0]
// 0082feed  50                   push eax
// 0082feee  81ec84000000         sub esp, 0x84
// 0082fef4  53                   push ebx
// 0082fef5  55                   push ebp
// 0082fef6  56                   push esi
// 0082fef7  57                   push edi
// 0082fef8  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0082fefd  33c4                 xor eax, esp
// 0082feff  50                   push eax
// 0082ff00  8d842498000000       lea eax, [esp + 0x98]
// 0082ff07  64a300000000         mov dword ptr fs:[0], eax
// 0082ff0d  8be9                 mov ebp, ecx
// 0082ff0f  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0082ff13  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 0082ff1a  8bcf                 mov ecx, edi
// 0082ff1c  e8dfb2f8ff           call 0x7bb200
// 0082ff21  8b8f00020000         mov ecx, dword ptr [edi + 0x200]
// 0082ff27  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 0082ff2d  89442428             mov dword ptr [esp + 0x28], eax
// 0082ff31  8b87fc010000         mov eax, dword ptr [edi + 0x1fc]
// 0082ff37  89442430             mov dword ptr [esp + 0x30], eax
// 0082ff3b  8b8708020000         mov eax, dword ptr [edi + 0x208]
// 0082ff41  894c2434             mov dword ptr [esp + 0x34], ecx
// 0082ff45  8bcf                 mov ecx, edi
// 0082ff47  89542438             mov dword ptr [esp + 0x38], edx
// 0082ff4b  8944243c             mov dword ptr [esp + 0x3c], eax
// 0082ff4f  e8fc950100           call 0x849550
// 0082ff54  85c0                 test eax, eax
// 0082ff56  0f85e8010000         jne 0x830144
// 0082ff5c  68d05fa600           push 0xa65fd0
// 0082ff61  8bcd                 mov ecx, ebp
// 0082ff63  e898220000           call 0x832200
// 0082ff68  8bd8                 mov ebx, eax
// 0082ff6a  85db                 test ebx, ebx
// 0082ff6c  0f842e050000         je 0x8304a0
// 0082ff72  33c9                 xor ecx, ecx
// 0082ff74  398c24b0000000       cmp dword ptr [esp + 0xb0], ecx
// 0082ff7b  6a02                 push 2
// 0082ff7d  0f94c1               sete cl
// 0082ff80  8d542418             lea edx, [esp + 0x18]
// 0082ff84  8bf9                 mov edi, ecx
// 0082ff86  57                   push edi
// 0082ff87  52                   push edx
// 0082ff88  8bcb                 mov ecx, ebx
// 0082ff8a  e8a14b0600           call 0x894b30
// 0082ff8f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082ff93  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082ff97  8b742430             mov esi, dword ptr [esp + 0x30]
// 0082ff9b  8bc1                 mov eax, ecx
// 0082ff9d  2bc2                 sub eax, edx
// 0082ff9f  03c6                 add eax, esi
// 0082ffa1  89442448             mov dword ptr [esp + 0x48], eax
// 0082ffa5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0082ffa9  8944244c             mov dword ptr [esp + 0x4c], eax
// 0082ffad  33c0                 xor eax, eax
// 0082ffaf  68ff00ff00           push 0xff00ff
// 0082ffb4  89442464             mov dword ptr [esp + 0x64], eax
// 0082ffb8  8944246c             mov dword ptr [esp + 0x6c], eax
// 0082ffbc  8d442464             lea eax, [esp + 0x64]
// 0082ffc0  50                   push eax
// 0082ffc1  83ec10               sub esp, 0x10
// 0082ffc4  8bc4                 mov eax, esp
// 0082ffc6  8910                 mov dword ptr [eax], edx
// 0082ffc8  8b542430             mov edx, dword ptr [esp + 0x30]
// 0082ffcc  89742458             mov dword ptr [esp + 0x58], esi
// 0082ffd0  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0082ffd4  895004               mov dword ptr [eax + 4], edx
// 0082ffd7  894808               mov dword ptr [eax + 8], ecx
// 0082ffda  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0082ffde  8d542458             lea edx, [esp + 0x58]
// 0082ffe2  8974245c             mov dword ptr [esp + 0x5c], esi
// 0082ffe6  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 0082ffed  52                   push edx
// 0082ffee  89480c               mov dword ptr [eax + 0xc], ecx
// 0082fff1  56                   push esi
// 0082fff2  8bcb                 mov ecx, ebx
// 0082fff4  c784248400000005000000 mov dword ptr [esp + 0x84], 5
// 0082ffff  c784248c00000003000000 mov dword ptr [esp + 0x8c], 3
// 0083000a  e861500600           call 0x895070
// 0083000f  68c05fa600           push 0xa65fc0
// 00830014  8bcd                 mov ecx, ebp
// 00830016  e8e5210000           call 0x832200
// 0083001b  6a02                 push 2
// 0083001d  8bd8                 mov ebx, eax
// 0083001f  57                   push edi
// 00830020  8d442468             lea eax, [esp + 0x68]
// 00830024  50                   push eax
// 00830025  8bcb                 mov ecx, ebx
// 00830027  e8044b0600           call 0x894b30
// 0083002c  8b10                 mov edx, dword ptr [eax]
// 0083002e  89542414             mov dword ptr [esp + 0x14], edx
// 00830032  8b4804               mov ecx, dword ptr [eax + 4]
// 00830035  894c2418             mov dword ptr [esp + 0x18], ecx
// 00830039  8b6808               mov ebp, dword ptr [eax + 8]
// 0083003c  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00830040  8b400c               mov eax, dword ptr [eax + 0xc]
// 00830043  89442420             mov dword ptr [esp + 0x20], eax
// 00830047  8b442438             mov eax, dword ptr [esp + 0x38]
// 0083004b  8bca                 mov ecx, edx
// 0083004d  2bcd                 sub ecx, ebp
// 0083004f  03c8                 add ecx, eax
// 00830051  89442478             mov dword ptr [esp + 0x78], eax
// 00830055  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00830059  894c2470             mov dword ptr [esp + 0x70], ecx
// 0083005d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00830061  8944247c             mov dword ptr [esp + 0x7c], eax
// 00830065  33c0                 xor eax, eax
// 00830067  83ec10               sub esp, 0x10
// 0083006a  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00830071  8bcc                 mov ecx, esp
// 00830073  8901                 mov dword ptr [ecx], eax
// 00830075  b805000000           mov eax, 5
// 0083007a  894104               mov dword ptr [ecx + 4], eax
// 0083007d  33c0                 xor eax, eax
// 0083007f  894108               mov dword ptr [ecx + 8], eax
// 00830082  b803000000           mov eax, 3
// 00830087  89410c               mov dword ptr [ecx + 0xc], eax
// 0083008a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0083008e  83ec10               sub esp, 0x10
// 00830091  8bcc                 mov ecx, esp
// 00830093  8911                 mov dword ptr [ecx], edx
// 00830095  8b542438             mov edx, dword ptr [esp + 0x38]
// 00830099  895104               mov dword ptr [ecx + 4], edx
// 0083009c  896908               mov dword ptr [ecx + 8], ebp
// 0083009f  89410c               mov dword ptr [ecx + 0xc], eax
// 008300a2  8d8c2490000000       lea ecx, [esp + 0x90]
// 008300a9  51                   push ecx
// 008300aa  56                   push esi
// 008300ab  8bcb                 mov ecx, ebx
// 008300ad  e84e430600           call 0x894400
// 008300b2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008300b6  68945fa600           push 0xa65f94
// 008300bb  e840210000           call 0x832200
// 008300c0  8b542448             mov edx, dword ptr [esp + 0x48]
// 008300c4  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008300c8  8bd8                 mov ebx, eax
// 008300ca  8b442434             mov eax, dword ptr [esp + 0x34]
// 008300ce  6a02                 push 2
// 008300d0  89442458             mov dword ptr [esp + 0x58], eax
// 008300d4  89542454             mov dword ptr [esp + 0x54], edx
// 008300d8  8b542440             mov edx, dword ptr [esp + 0x40]
// 008300dc  57                   push edi
// 008300dd  8d442468             lea eax, [esp + 0x68]
// 008300e1  894c2460             mov dword ptr [esp + 0x60], ecx
// 008300e5  50                   push eax
// 008300e6  8bcb                 mov ecx, ebx
// 008300e8  89542468             mov dword ptr [esp + 0x68], edx
// 008300ec  33ed                 xor ebp, ebp
// 008300ee  e83d4a0600           call 0x894b30
// 008300f3  83ec10               sub esp, 0x10
// 008300f6  8bcc                 mov ecx, esp
// 008300f8  8929                 mov dword ptr [ecx], ebp
// 008300fa  ba05000000           mov edx, 5
// 008300ff  895104               mov dword ptr [ecx + 4], edx
// 00830102  33d2                 xor edx, edx
// 00830104  895108               mov dword ptr [ecx + 8], edx
// 00830107  83ec10               sub esp, 0x10
// 0083010a  ba03000000           mov edx, 3
// 0083010f  89510c               mov dword ptr [ecx + 0xc], edx
// 00830112  8b10                 mov edx, dword ptr [eax]
// 00830114  8bcc                 mov ecx, esp
// 00830116  8911                 mov dword ptr [ecx], edx
// 00830118  8b5004               mov edx, dword ptr [eax + 4]
// 0083011b  895104               mov dword ptr [ecx + 4], edx
// 0083011e  8b5008               mov edx, dword ptr [eax + 8]
// 00830121  8b400c               mov eax, dword ptr [eax + 0xc]
// 00830124  895108               mov dword ptr [ecx + 8], edx
// 00830127  89410c               mov dword ptr [ecx + 0xc], eax
// 0083012a  8d4c2470             lea ecx, [esp + 0x70]
// 0083012e  51                   push ecx
// 0083012f  56                   push esi
// 00830130  8bcb                 mov ecx, ebx
// 00830132  e8c9420600           call 0x894400
// 00830137  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0083013b  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 00830142  eb15                 jmp 0x830159
// 00830144  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 0083014b  6a00                 push 0
// 0083014d  8d542434             lea edx, [esp + 0x34]
// 00830151  52                   push edx
// 00830152  8bce                 mov ecx, esi
// 00830154  e8e585f7ff           call 0x7a873e
// 00830159  8bcf                 mov ecx, edi
// 0083015b  e850960100           call 0x8497b0
// 00830160  85c0                 test eax, eax
// 00830162  0f8509010000         jne 0x830271
// 00830168  39874c020000         cmp dword ptr [edi + 0x24c], eax
// 0083016e  0f84fd000000         je 0x830271
// 00830174  8b8f64020000         mov ecx, dword ptr [edi + 0x264]
// 0083017a  50                   push eax
// 0083017b  e8f0a1fcff           call 0x7fa370
// 00830180  85c0                 test eax, eax
// 00830182  0f8ee9000000         jle 0x830271
// 00830188  8b872c020000         mov eax, dword ptr [edi + 0x22c]
// 0083018e  8b8f30020000         mov ecx, dword ptr [edi + 0x230]
// 00830194  8b9734020000         mov edx, dword ptr [edi + 0x234]
// 0083019a  89442414             mov dword ptr [esp + 0x14], eax
// 0083019e  8b8738020000         mov eax, dword ptr [edi + 0x238]
// 008301a4  89442420             mov dword ptr [esp + 0x20], eax
// 008301a8  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 008301ae  894c2418             mov dword ptr [esp + 0x18], ecx
// 008301b2  8954241c             mov dword ptr [esp + 0x1c], edx
// 008301b6  8b5840               mov ebx, dword ptr [eax + 0x40]
// 008301b9  8bcf                 mov ecx, edi
// 008301bb  e8d08d0100           call 0x848f90
// 008301c0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008301c4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008301c8  03c3                 add eax, ebx
// 008301ca  8944245c             mov dword ptr [esp + 0x5c], eax
// 008301ce  8d442414             lea eax, [esp + 0x14]
// 008301d2  50                   push eax
// 008301d3  83c1f1               add ecx, -0xf
// 008301d6  57                   push edi
// 008301d7  894c2458             mov dword ptr [esp + 0x58], ecx
// 008301db  895c245c             mov dword ptr [esp + 0x5c], ebx
// 008301df  89542460             mov dword ptr [esp + 0x60], edx
// 008301e3  e898caffff           call 0x82cc80
// 008301e8  83c408               add esp, 8
// 008301eb  85c0                 test eax, eax
// 008301ed  b8a45fa600           mov eax, 0xa65fa4
// 008301f2  7505                 jne 0x8301f9
// 008301f4  b87c5fa600           mov eax, 0xa65f7c
// 008301f9  50                   push eax
// 008301fa  8bcd                 mov ecx, ebp
// 008301fc  e8ff1f0000           call 0x832200
// 00830201  8bd8                 mov ebx, eax
// 00830203  85db                 test ebx, ebx
// 00830205  746a                 je 0x830271
// 00830207  6a01                 push 1
// 00830209  6a00                 push 0
// 0083020b  8d4c2478             lea ecx, [esp + 0x78]
// 0083020f  51                   push ecx
// 00830210  8bcb                 mov ecx, ebx
// 00830212  c7432c01000000       mov dword ptr [ebx + 0x2c], 1
// 00830219  c744247410000000     mov dword ptr [esp + 0x74], 0x10
// 00830221  e80a490600           call 0x894b30
// 00830226  83ec10               sub esp, 0x10
// 00830229  8bcc                 mov ecx, esp
// 0083022b  ba10000000           mov edx, 0x10
// 00830230  8911                 mov dword ptr [ecx], edx
// 00830232  ba03000000           mov edx, 3
// 00830237  895104               mov dword ptr [ecx + 4], edx
// 0083023a  8b542478             mov edx, dword ptr [esp + 0x78]
// 0083023e  895108               mov dword ptr [ecx + 8], edx
// 00830241  83ec10               sub esp, 0x10
// 00830244  ba03000000           mov edx, 3
// 00830249  89510c               mov dword ptr [ecx + 0xc], edx
// 0083024c  8b10                 mov edx, dword ptr [eax]
// 0083024e  8bcc                 mov ecx, esp
// 00830250  8911                 mov dword ptr [ecx], edx
// 00830252  8b5004               mov edx, dword ptr [eax + 4]
// 00830255  895104               mov dword ptr [ecx + 4], edx
// 00830258  8b5008               mov edx, dword ptr [eax + 8]
// 0083025b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0083025e  895108               mov dword ptr [ecx + 8], edx
// 00830261  89410c               mov dword ptr [ecx + 0xc], eax
// 00830264  8d4c2470             lea ecx, [esp + 0x70]
// 00830268  51                   push ecx
// 00830269  56                   push esi
// 0083026a  8bcb                 mov ecx, ebx
// 0083026c  e88f410600           call 0x894400
// 00830271  83bf7402000000       cmp dword ptr [edi + 0x274], 0
// 00830278  7567                 jne 0x8302e1
// 0083027a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0083027e  52                   push edx
// 0083027f  8bcd                 mov ecx, ebp
// 00830281  e88a390000           call 0x833c10
// 00830286  8944242c             mov dword ptr [esp + 0x2c], eax
// 0083028a  85c0                 test eax, eax
// 0083028c  7453                 je 0x8302e1
// 0083028e  6a32                 push 0x32
// 00830290  ff156cba9e00         call dword ptr [0x9eba6c]
// 00830296  6a31                 push 0x31
// 00830298  8bd8                 mov ebx, eax
// 0083029a  ff156cba9e00         call dword ptr [0x9eba6c]
// 008302a0  8bc8                 mov ecx, eax
// 008302a2  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008302a6  2bc3                 sub eax, ebx
// 008302a8  2b442434             sub eax, dword ptr [esp + 0x34]
// 008302ac  99                   cdq 
// 008302ad  2bc2                 sub eax, edx
// 008302af  8b542430             mov edx, dword ptr [esp + 0x30]
// 008302b3  83c20a               add edx, 0xa
// 008302b6  d1f8                 sar eax, 1
// 008302b8  89542440             mov dword ptr [esp + 0x40], edx
// 008302bc  85f6                 test esi, esi
// 008302be  7504                 jne 0x8302c4
// 008302c0  33d2                 xor edx, edx
// 008302c2  eb03                 jmp 0x8302c7
// 008302c4  8b5604               mov edx, dword ptr [esi + 4]
// 008302c7  6a03                 push 3
// 008302c9  6a00                 push 0
// 008302cb  6a00                 push 0
// 008302cd  53                   push ebx
// 008302ce  51                   push ecx
// 008302cf  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008302d3  51                   push ecx
// 008302d4  50                   push eax
// 008302d5  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008302d9  50                   push eax
// 008302da  52                   push edx
// 008302db  ff15ccb99e00         call dword ptr [0x9eb9cc]
// 008302e1  8b8f0c020000         mov ecx, dword ptr [edi + 0x20c]
// 008302e7  8b9f84020000         mov ebx, dword ptr [edi + 0x284]
// 008302ed  8b9710020000         mov edx, dword ptr [edi + 0x210]
// 008302f3  8b8714020000         mov eax, dword ptr [edi + 0x214]
// 008302f9  894c2414             mov dword ptr [esp + 0x14], ecx
// 008302fd  8b8f18020000         mov ecx, dword ptr [edi + 0x218]
// 00830303  894c2420             mov dword ptr [esp + 0x20], ecx
// 00830307  8bcb                 mov ecx, ebx
// 00830309  89542418             mov dword ptr [esp + 0x18], edx
// 0083030d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00830311  e84af10600           call 0x89f460
// 00830316  85c0                 test eax, eax
// 00830318  7410                 je 0x83032a
// 0083031a  8b5500               mov edx, dword ptr [ebp]
// 0083031d  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 00830323  53                   push ebx
// 00830324  57                   push edi
// 00830325  56                   push esi
// 00830326  8bcd                 mov ecx, ebp
// 00830328  ffd0                 call eax
// 0083032a  8d8db4050000         lea ecx, [ebp + 0x5b4]
// 00830330  51                   push ecx
// 00830331  56                   push esi
// 00830332  8d8c2490000000       lea ecx, [esp + 0x90]
// 00830339  e862f3fcff           call 0x7ff6a0
// 0083033e  8d4c2424             lea ecx, [esp + 0x24]
// 00830342  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 0083034d  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00830353  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00830357  8d542424             lea edx, [esp + 0x24]
// 0083035b  52                   push edx
// 0083035c  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 00830364  e81f7cf7ff           call 0x7a7f88
// 00830369  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0083036d  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 00830371  8d442440             lea eax, [esp + 0x40]
// 00830375  50                   push eax
// 00830376  8d4c2428             lea ecx, [esp + 0x28]
// 0083037a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00830380  50                   push eax
// 00830381  8d4c242c             lea ecx, [esp + 0x2c]
// 00830385  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0083038b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0083038e  50                   push eax
// 0083038f  51                   push ecx
// 00830390  ff1594a19e00         call dword ptr [0x9ea194]
// 00830396  8bc3                 mov eax, ebx
// 00830398  2b442440             sub eax, dword ptr [esp + 0x40]
// 0083039c  99                   cdq 
// 0083039d  2bc2                 sub eax, edx
// 0083039f  d1f8                 sar eax, 1
// 008303a1  7904                 jns 0x8303a7
// 008303a3  33c0                 xor eax, eax
// 008303a5  eb36                 jmp 0x8303dd
// 008303a7  8d942480000000       lea edx, [esp + 0x80]
// 008303ae  52                   push edx
// 008303af  8d4c2428             lea ecx, [esp + 0x28]
// 008303b3  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008303b9  50                   push eax
// 008303ba  8d4c242c             lea ecx, [esp + 0x2c]
// 008303be  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008303c4  50                   push eax
// 008303c5  8b4608               mov eax, dword ptr [esi + 8]
// 008303c8  50                   push eax
// 008303c9  ff1594a19e00         call dword ptr [0x9ea194]
// 008303cf  8bc3                 mov eax, ebx
// 008303d1  2b842480000000       sub eax, dword ptr [esp + 0x80]
// 008303d8  99                   cdq 
// 008303d9  2bc2                 sub eax, edx
// 008303db  d1f8                 sar eax, 1
// 008303dd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008303e1  01442414             add dword ptr [esp + 0x14], eax
// 008303e5  e8f4c91400           call 0x97cdde
// 008303ea  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008303ee  a900000001           test eax, 0x1000000
// 008303f3  7410                 je 0x830405
// 008303f5  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 008303fb  8b4040               mov eax, dword ptr [eax + 0x40]
// 008303fe  99                   cdq 
// 008303ff  2bc2                 sub eax, edx
// 00830401  d1f8                 sar eax, 1
// 00830403  03d8                 add ebx, eax
// 00830405  8bcf                 mov ecx, edi
// 00830407  e844910100           call 0x849550
// 0083040c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00830410  85c0                 test eax, eax
// 00830412  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00830419  50                   push eax
// 0083041a  51                   push ecx
// 0083041b  752c                 jne 0x830449
// 0083041d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00830421  8b5500               mov edx, dword ptr [ebp]
// 00830424  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 0083042a  83ec10               sub esp, 0x10
// 0083042d  8bc4                 mov eax, esp
// 0083042f  8908                 mov dword ptr [eax], ecx
// 00830431  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00830435  895804               mov dword ptr [eax + 4], ebx
// 00830438  894808               mov dword ptr [eax + 8], ecx
// 0083043b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0083043f  89480c               mov dword ptr [eax + 0xc], ecx
// 00830442  56                   push esi
// 00830443  8bcd                 mov ecx, ebp
// 00830445  ffd2                 call edx
// 00830447  eb36                 jmp 0x83047f
// 00830449  51                   push ecx
// 0083044a  8d542430             lea edx, [esp + 0x30]
// 0083044e  8bcc                 mov ecx, esp
// 00830450  8964244c             mov dword ptr [esp + 0x4c], esp
// 00830454  52                   push edx
// 00830455  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 0083045b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0083045f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00830463  83ec10               sub esp, 0x10
// 00830466  8bc4                 mov eax, esp
// 00830468  8908                 mov dword ptr [eax], ecx
// 0083046a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0083046e  895804               mov dword ptr [eax + 4], ebx
// 00830471  895008               mov dword ptr [eax + 8], edx
// 00830474  89480c               mov dword ptr [eax + 0xc], ecx
// 00830477  56                   push esi
// 00830478  8bcd                 mov ecx, ebp
// 0083047a  e8b1f5ffff           call 0x82fa30
// 0083047f  8d4c2424             lea ecx, [esp + 0x24]
// 00830483  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00830489  8d8c2488000000       lea ecx, [esp + 0x88]
// 00830490  c78424a0000000ffffffff mov dword ptr [esp + 0xa0], 0xffffffff
// 0083049b  e880f2fcff           call 0x7ff720
// 008304a0  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008304a7  64890d00000000       mov dword ptr fs:[0], ecx
// 008304ae  59                   pop ecx
// 008304af  5f                   pop edi
// 008304b0  5e                   pop esi
// 008304b1  5d                   pop ebp
// 008304b2  5b                   pop ebx
// 008304b3  81c490000000         add esp, 0x90
// 008304b9  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonFrameCaption@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp