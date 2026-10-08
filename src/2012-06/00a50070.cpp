// roc 2012-06 00a50070  unit: CXTPTabPaintManager  size: 1384 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a50070
//
// 00a50070  83ec5c               sub esp, 0x5c
// 00a50073  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00a50077  53                   push ebx
// 00a50078  55                   push ebp
// 00a50079  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 00a5007d  56                   push esi
// 00a5007e  57                   push edi
// 00a5007f  8bf9                 mov edi, ecx
// 00a50081  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00a50085  83ec10               sub esp, 0x10
// 00a50088  8bc4                 mov eax, esp
// 00a5008a  8908                 mov dword ptr [eax], ecx
// 00a5008c  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00a50093  895004               mov dword ptr [eax + 4], edx
// 00a50096  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00a5009d  894808               mov dword ptr [eax + 8], ecx
// 00a500a0  89500c               mov dword ptr [eax + 0xc], edx
// 00a500a3  55                   push ebp
// 00a500a4  8d442470             lea eax, [esp + 0x70]
// 00a500a8  50                   push eax
// 00a500a9  8bcf                 mov ecx, edi
// 00a500ab  897c2454             mov dword ptr [esp + 0x54], edi
// 00a500af  e83cfcffff           call 0xa4fcf0
// 00a500b4  837d5c00             cmp dword ptr [ebp + 0x5c], 0
// 00a500b8  8b08                 mov ecx, dword ptr [eax]
// 00a500ba  894d24               mov dword ptr [ebp + 0x24], ecx
// 00a500bd  8b5004               mov edx, dword ptr [eax + 4]
// 00a500c0  895528               mov dword ptr [ebp + 0x28], edx
// 00a500c3  8b4808               mov ecx, dword ptr [eax + 8]
// 00a500c6  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 00a500c9  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a500cc  895530               mov dword ptr [ebp + 0x30], edx
// 00a500cf  c7451400000000       mov dword ptr [ebp + 0x14], 0
// 00a500d6  0f84f2040000         je 0xa505ce
// 00a500dc  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 00a500e2  8b01                 mov eax, dword ptr [ecx]
// 00a500e4  8b4010               mov eax, dword ptr [eax + 0x10]
// 00a500e7  8d54244c             lea edx, [esp + 0x4c]
// 00a500eb  52                   push edx
// 00a500ec  ffd0                 call eax
// 00a500ee  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 00a500f4  8b11                 mov edx, dword ptr [ecx]
// 00a500f6  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00a500f9  55                   push ebp
// 00a500fa  ffd0                 call eax
// 00a500fc  8b5500               mov edx, dword ptr [ebp]
// 00a500ff  8bf0                 mov esi, eax
// 00a50101  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a50104  8bcd                 mov ecx, ebp
// 00a50106  ffd0                 call eax
// 00a50108  83f802               cmp eax, 2
// 00a5010b  7412                 je 0xa5011f
// 00a5010d  8b5500               mov edx, dword ptr [ebp]
// 00a50110  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a50113  8bcd                 mov ecx, ebp
// 00a50115  ffd0                 call eax
// 00a50117  85c0                 test eax, eax
// 00a50119  0f8536020000         jne 0xa50355
// 00a5011f  8b5d2c               mov ebx, dword ptr [ebp + 0x2c]
// 00a50122  2b5d24               sub ebx, dword ptr [ebp + 0x24]
// 00a50125  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00a50129  2b5c2454             sub ebx, dword ptr [esp + 0x54]
// 00a5012d  2b5c244c             sub ebx, dword ptr [esp + 0x4c]
// 00a50131  53                   push ebx
// 00a50132  51                   push ecx
// 00a50133  55                   push ebp
// 00a50134  8bcf                 mov ecx, edi
// 00a50136  895c2438             mov dword ptr [esp + 0x38], ebx
// 00a5013a  e821feffff           call 0xa4ff60
// 00a5013f  8b9588000000         mov edx, dword ptr [ebp + 0x88]
// 00a50145  8b4204               mov eax, dword ptr [edx + 4]
// 00a50148  8b5500               mov edx, dword ptr [ebp]
// 00a5014b  89442410             mov dword ptr [esp + 0x10], eax
// 00a5014f  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a50152  8bcd                 mov ecx, ebp
// 00a50154  ffd0                 call eax
// 00a50156  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5015a  83f802               cmp eax, 2
// 00a5015d  7523                 jne 0xa50182
// 00a5015f  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 00a50165  8d41ff               lea eax, [ecx - 1]
// 00a50168  0fafce               imul ecx, esi
// 00a5016b  0faf4214             imul eax, dword ptr [edx + 0x14]
// 00a5016f  8bd0                 mov edx, eax
// 00a50171  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00a50178  2bc2                 sub eax, edx
// 00a5017a  2bc1                 sub eax, ecx
// 00a5017c  2b442450             sub eax, dword ptr [esp + 0x50]
// 00a50180  eb17                 jmp 0xa50199
// 00a50182  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 00a50188  8b4014               mov eax, dword ptr [eax + 0x14]
// 00a5018b  03c6                 add eax, esi
// 00a5018d  49                   dec ecx
// 00a5018e  0fafc1               imul eax, ecx
// 00a50191  0344247c             add eax, dword ptr [esp + 0x7c]
// 00a50195  03442450             add eax, dword ptr [esp + 0x50]
// 00a50199  8b5500               mov edx, dword ptr [ebp]
// 00a5019c  89442474             mov dword ptr [esp + 0x74], eax
// 00a501a0  03c6                 add eax, esi
// 00a501a2  89442424             mov dword ptr [esp + 0x24], eax
// 00a501a6  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a501a9  8bcd                 mov ecx, ebp
// 00a501ab  ffd0                 call eax
// 00a501ad  83f802               cmp eax, 2
// 00a501b0  750d                 jne 0xa501bf
// 00a501b2  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 00a501b8  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00a501bb  03c6                 add eax, esi
// 00a501bd  eb0d                 jmp 0xa501cc
// 00a501bf  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 00a501c5  8b4214               mov eax, dword ptr [edx + 0x14]
// 00a501c8  03c6                 add eax, esi
// 00a501ca  f7d8                 neg eax
// 00a501cc  89442438             mov dword ptr [esp + 0x38], eax
// 00a501d0  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 00a501d6  8b30                 mov esi, dword ptr [eax]
// 00a501d8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a501dc  83f801               cmp eax, 1
// 00a501df  89742440             mov dword ptr [esp + 0x40], esi
// 00a501e3  7e11                 jle 0xa501f6
// 00a501e5  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 00a501ec  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00a501f4  7508                 jne 0xa501fe
// 00a501f6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a501fe  33d2                 xor edx, edx
// 00a50200  89542428             mov dword ptr [esp + 0x28], edx
// 00a50204  85c0                 test eax, eax
// 00a50206  0f8e78030000         jle 0xa50584
// 00a5020c  eb0a                 jmp 0xa50218
// 00a5020e  8bff                 mov edi, edi
// 00a50210  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00a50214  8b742440             mov esi, dword ptr [esp + 0x40]
// 00a50218  8b0cd6               mov ecx, dword ptr [esi + edx*8]
// 00a5021b  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 00a5021f  2bc1                 sub eax, ecx
// 00a50221  33ff                 xor edi, edi
// 00a50223  40                   inc eax
// 00a50224  897c2470             mov dword ptr [esp + 0x70], edi
// 00a50228  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a5022c  89442444             mov dword ptr [esp + 0x44], eax
// 00a50230  397c2414             cmp dword ptr [esp + 0x14], edi
// 00a50234  7438                 je 0xa5026e
// 00a50236  33f6                 xor esi, esi
// 00a50238  85c0                 test eax, eax
// 00a5023a  7e32                 jle 0xa5026e
// 00a5023c  8d1c8d00000000       lea ebx, [ecx*4]
// 00a50243  85c9                 test ecx, ecx
// 00a50245  7c0d                 jl 0xa50254
// 00a50247  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 00a5024a  7d08                 jge 0xa50254
// 00a5024c  8b5558               mov edx, dword ptr [ebp + 0x58]
// 00a5024f  8b1413               mov edx, dword ptr [ebx + edx]
// 00a50252  eb02                 jmp 0xa50256
// 00a50254  33d2                 xor edx, edx
// 00a50256  037a20               add edi, dword ptr [edx + 0x20]
// 00a50259  46                   inc esi
// 00a5025a  83c304               add ebx, 4
// 00a5025d  41                   inc ecx
// 00a5025e  3bf0                 cmp esi, eax
// 00a50260  897c2470             mov dword ptr [esp + 0x70], edi
// 00a50264  7cdd                 jl 0xa50243
// 00a50266  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a5026a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00a5026e  895c2418             mov dword ptr [esp + 0x18], ebx
// 00a50272  8b5d24               mov ebx, dword ptr [ebp + 0x24]
// 00a50275  035c244c             add ebx, dword ptr [esp + 0x4c]
// 00a50279  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00a50281  85c0                 test eax, eax
// 00a50283  0f8ea8000000         jle 0xa50331
// 00a50289  8d148d00000000       lea edx, [ecx*4]
// 00a50290  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a50294  89442420             mov dword ptr [esp + 0x20], eax
// 00a50298  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a5029c  8d642400             lea esp, [esp]
// 00a502a0  85c9                 test ecx, ecx
// 00a502a2  7c6e                 jl 0xa50312
// 00a502a4  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 00a502a7  7d69                 jge 0xa50312
// 00a502a9  8b5558               mov edx, dword ptr [ebp + 0x58]
// 00a502ac  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a502b0  8b3416               mov esi, dword ptr [esi + edx]
// 00a502b3  85f6                 test esi, esi
// 00a502b5  745b                 je 0xa50312
// 00a502b7  837c241400           cmp dword ptr [esp + 0x14], 0
// 00a502bc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a502bf  741a                 je 0xa502db
// 00a502c1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a502c5  2bc7                 sub eax, edi
// 00a502c7  99                   cdq 
// 00a502c8  f77c2420             idiv dword ptr [esp + 0x20]
// 00a502cc  03c1                 add eax, ecx
// 00a502ce  29442418             sub dword ptr [esp + 0x18], eax
// 00a502d2  294c2470             sub dword ptr [esp + 0x70], ecx
// 00a502d6  8bc8                 mov ecx, eax
// 00a502d8  894620               mov dword ptr [esi + 0x20], eax
// 00a502db  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a502df  8d3c19               lea edi, [ecx + ebx]
// 00a502e2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00a502e6  83ec10               sub esp, 0x10
// 00a502e9  8bc4                 mov eax, esp
// 00a502eb  8918                 mov dword ptr [eax], ebx
// 00a502ed  894804               mov dword ptr [eax + 4], ecx
// 00a502f0  897808               mov dword ptr [eax + 8], edi
// 00a502f3  8bce                 mov ecx, esi
// 00a502f5  89500c               mov dword ptr [eax + 0xc], edx
// 00a502f8  e823b9ffff           call 0xa4bc20
// 00a502fd  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a50301  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a50305  894664               mov dword ptr [esi + 0x64], eax
// 00a50308  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a5030c  8bdf                 mov ebx, edi
// 00a5030e  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 00a50312  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a50316  8344241c04           add dword ptr [esp + 0x1c], 4
// 00a5031b  ff4c2420             dec dword ptr [esp + 0x20]
// 00a5031f  42                   inc edx
// 00a50320  41                   inc ecx
// 00a50321  3bd0                 cmp edx, eax
// 00a50323  89542430             mov dword ptr [esp + 0x30], edx
// 00a50327  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a5032b  0f8c6fffffff         jl 0xa502a0
// 00a50331  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a50335  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a50339  01442474             add dword ptr [esp + 0x74], eax
// 00a5033d  01442424             add dword ptr [esp + 0x24], eax
// 00a50341  42                   inc edx
// 00a50342  3b542410             cmp edx, dword ptr [esp + 0x10]
// 00a50346  89542428             mov dword ptr [esp + 0x28], edx
// 00a5034a  0f8cc0feffff         jl 0xa50210
// 00a50350  e92b020000           jmp 0xa50580
// 00a50355  8b5d30               mov ebx, dword ptr [ebp + 0x30]
// 00a50358  2b5d28               sub ebx, dword ptr [ebp + 0x28]
// 00a5035b  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00a5035f  2b5c2454             sub ebx, dword ptr [esp + 0x54]
// 00a50363  2b5c244c             sub ebx, dword ptr [esp + 0x4c]
// 00a50367  53                   push ebx
// 00a50368  51                   push ecx
// 00a50369  55                   push ebp
// 00a5036a  8bcf                 mov ecx, edi
// 00a5036c  895c2444             mov dword ptr [esp + 0x44], ebx
// 00a50370  e8ebfbffff           call 0xa4ff60
// 00a50375  8b9588000000         mov edx, dword ptr [ebp + 0x88]
// 00a5037b  8b4204               mov eax, dword ptr [edx + 4]
// 00a5037e  8b5500               mov edx, dword ptr [ebp]
// 00a50381  89442410             mov dword ptr [esp + 0x10], eax
// 00a50385  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a50388  8bcd                 mov ecx, ebp
// 00a5038a  ffd0                 call eax
// 00a5038c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a50390  83f803               cmp eax, 3
// 00a50393  7523                 jne 0xa503b8
// 00a50395  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 00a5039b  8d41ff               lea eax, [ecx - 1]
// 00a5039e  0fafce               imul ecx, esi
// 00a503a1  0faf4214             imul eax, dword ptr [edx + 0x14]
// 00a503a5  8bd0                 mov edx, eax
// 00a503a7  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00a503ae  2bc2                 sub eax, edx
// 00a503b0  2bc1                 sub eax, ecx
// 00a503b2  2b442450             sub eax, dword ptr [esp + 0x50]
// 00a503b6  eb17                 jmp 0xa503cf
// 00a503b8  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 00a503be  8b4014               mov eax, dword ptr [eax + 0x14]
// 00a503c1  03c6                 add eax, esi
// 00a503c3  49                   dec ecx
// 00a503c4  0fafc1               imul eax, ecx
// 00a503c7  03442478             add eax, dword ptr [esp + 0x78]
// 00a503cb  03442450             add eax, dword ptr [esp + 0x50]
// 00a503cf  8b5500               mov edx, dword ptr [ebp]
// 00a503d2  89442474             mov dword ptr [esp + 0x74], eax
// 00a503d6  03c6                 add eax, esi
// 00a503d8  89442418             mov dword ptr [esp + 0x18], eax
// 00a503dc  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a503df  8bcd                 mov ecx, ebp
// 00a503e1  ffd0                 call eax
// 00a503e3  83f803               cmp eax, 3
// 00a503e6  750d                 jne 0xa503f5
// 00a503e8  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 00a503ee  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00a503f1  03c6                 add eax, esi
// 00a503f3  eb0d                 jmp 0xa50402
// 00a503f5  8b97e0000000         mov edx, dword ptr [edi + 0xe0]
// 00a503fb  8b4214               mov eax, dword ptr [edx + 0x14]
// 00a503fe  03c6                 add eax, esi
// 00a50400  f7d8                 neg eax
// 00a50402  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a50406  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 00a5040c  8b30                 mov esi, dword ptr [eax]
// 00a5040e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a50412  83f801               cmp eax, 1
// 00a50415  89742444             mov dword ptr [esp + 0x44], esi
// 00a50419  7e11                 jle 0xa5042c
// 00a5041b  83bfa800000000       cmp dword ptr [edi + 0xa8], 0
// 00a50422  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00a5042a  7508                 jne 0xa50434
// 00a5042c  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00a50434  33d2                 xor edx, edx
// 00a50436  89542414             mov dword ptr [esp + 0x14], edx
// 00a5043a  85c0                 test eax, eax
// 00a5043c  0f8e42010000         jle 0xa50584
// 00a50442  eb08                 jmp 0xa5044c
// 00a50444  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00a50448  8b742444             mov esi, dword ptr [esp + 0x44]
// 00a5044c  8b0cd6               mov ecx, dword ptr [esi + edx*8]
// 00a5044f  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 00a50453  2bc1                 sub eax, ecx
// 00a50455  33ff                 xor edi, edi
// 00a50457  40                   inc eax
// 00a50458  897c2470             mov dword ptr [esp + 0x70], edi
// 00a5045c  894c2440             mov dword ptr [esp + 0x40], ecx
// 00a50460  89442448             mov dword ptr [esp + 0x48], eax
// 00a50464  397c2428             cmp dword ptr [esp + 0x28], edi
// 00a50468  7438                 je 0xa504a2
// 00a5046a  33f6                 xor esi, esi
// 00a5046c  85c0                 test eax, eax
// 00a5046e  7e32                 jle 0xa504a2
// 00a50470  8d1c8d00000000       lea ebx, [ecx*4]
// 00a50477  85c9                 test ecx, ecx
// 00a50479  7c0d                 jl 0xa50488
// 00a5047b  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 00a5047e  7d08                 jge 0xa50488
// 00a50480  8b5558               mov edx, dword ptr [ebp + 0x58]
// 00a50483  8b1413               mov edx, dword ptr [ebx + edx]
// 00a50486  eb02                 jmp 0xa5048a
// 00a50488  33d2                 xor edx, edx
// 00a5048a  037a20               add edi, dword ptr [edx + 0x20]
// 00a5048d  46                   inc esi
// 00a5048e  83c304               add ebx, 4
// 00a50491  41                   inc ecx
// 00a50492  3bf0                 cmp esi, eax
// 00a50494  897c2470             mov dword ptr [esp + 0x70], edi
// 00a50498  7cdd                 jl 0xa50477
// 00a5049a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a5049e  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00a504a2  895c2424             mov dword ptr [esp + 0x24], ebx
// 00a504a6  8b5d28               mov ebx, dword ptr [ebp + 0x28]
// 00a504a9  035c244c             add ebx, dword ptr [esp + 0x4c]
// 00a504ad  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00a504b5  85c0                 test eax, eax
// 00a504b7  0f8ea4000000         jle 0xa50561
// 00a504bd  8d148d00000000       lea edx, [ecx*4]
// 00a504c4  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a504c8  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a504cc  89542420             mov dword ptr [esp + 0x20], edx
// 00a504d0  85c9                 test ecx, ecx
// 00a504d2  7c6e                 jl 0xa50542
// 00a504d4  3b4d5c               cmp ecx, dword ptr [ebp + 0x5c]
// 00a504d7  7d69                 jge 0xa50542
// 00a504d9  8b5558               mov edx, dword ptr [ebp + 0x58]
// 00a504dc  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a504e0  8b3416               mov esi, dword ptr [esi + edx]
// 00a504e3  85f6                 test esi, esi
// 00a504e5  745b                 je 0xa50542
// 00a504e7  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a504ec  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a504ef  741a                 je 0xa5050b
// 00a504f1  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a504f5  2bc7                 sub eax, edi
// 00a504f7  99                   cdq 
// 00a504f8  f77c241c             idiv dword ptr [esp + 0x1c]
// 00a504fc  03c1                 add eax, ecx
// 00a504fe  29442424             sub dword ptr [esp + 0x24], eax
// 00a50502  294c2470             sub dword ptr [esp + 0x70], ecx
// 00a50506  8bc8                 mov ecx, eax
// 00a50508  894620               mov dword ptr [esi + 0x20], eax
// 00a5050b  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a5050f  8d3c19               lea edi, [ecx + ebx]
// 00a50512  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00a50516  83ec10               sub esp, 0x10
// 00a50519  8bc4                 mov eax, esp
// 00a5051b  8908                 mov dword ptr [eax], ecx
// 00a5051d  895804               mov dword ptr [eax + 4], ebx
// 00a50520  895008               mov dword ptr [eax + 8], edx
// 00a50523  8bce                 mov ecx, esi
// 00a50525  89780c               mov dword ptr [eax + 0xc], edi
// 00a50528  e8f3b6ffff           call 0xa4bc20
// 00a5052d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a50531  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a50535  894664               mov dword ptr [esi + 0x64], eax
// 00a50538  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a5053c  8bdf                 mov ebx, edi
// 00a5053e  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 00a50542  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a50546  8344242004           add dword ptr [esp + 0x20], 4
// 00a5054b  ff4c241c             dec dword ptr [esp + 0x1c]
// 00a5054f  42                   inc edx
// 00a50550  41                   inc ecx
// 00a50551  3bd0                 cmp edx, eax
// 00a50553  89542434             mov dword ptr [esp + 0x34], edx
// 00a50557  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a5055b  0f8c6fffffff         jl 0xa504d0
// 00a50561  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a50565  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a50569  01442474             add dword ptr [esp + 0x74], eax
// 00a5056d  01442418             add dword ptr [esp + 0x18], eax
// 00a50571  42                   inc edx
// 00a50572  3b542410             cmp edx, dword ptr [esp + 0x10]
// 00a50576  89542414             mov dword ptr [esp + 0x14], edx
// 00a5057a  0f8cc4feffff         jl 0xa50444
// 00a50580  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00a50584  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00a50588  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00a5058c  83ec10               sub esp, 0x10
// 00a5058f  8bc4                 mov eax, esp
// 00a50591  8908                 mov dword ptr [eax], ecx
// 00a50593  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00a5059a  895004               mov dword ptr [eax + 4], edx
// 00a5059d  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00a505a4  894808               mov dword ptr [eax + 8], ecx
// 00a505a7  89500c               mov dword ptr [eax + 0xc], edx
// 00a505aa  55                   push ebp
// 00a505ab  8d442470             lea eax, [esp + 0x70]
// 00a505af  50                   push eax
// 00a505b0  8bcf                 mov ecx, edi
// 00a505b2  e839f7ffff           call 0xa4fcf0
// 00a505b7  8b08                 mov ecx, dword ptr [eax]
// 00a505b9  894d24               mov dword ptr [ebp + 0x24], ecx
// 00a505bc  8b5004               mov edx, dword ptr [eax + 4]
// 00a505bf  895528               mov dword ptr [ebp + 0x28], edx
// 00a505c2  8b4808               mov ecx, dword ptr [eax + 8]
// 00a505c5  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 00a505c8  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a505cb  895530               mov dword ptr [ebp + 0x30], edx
// 00a505ce  5f                   pop edi
// 00a505cf  5e                   pop esi
// 00a505d0  5d                   pop ebp
// 00a505d1  5b                   pop ebx
// 00a505d2  83c45c               add esp, 0x5c
// 00a505d5  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControlMultiRow@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
