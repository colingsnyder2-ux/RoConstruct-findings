// roc 2009-12 00845fe0  unit: CXTPControls  size: 748 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845fe0
//
// 00845fe0  83ec1c               sub esp, 0x1c
// 00845fe3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00845fe7  8bd1                 mov edx, ecx
// 00845fe9  83e010               and eax, 0x10
// 00845fec  891424               mov dword ptr [esp], edx
// 00845fef  89442404             mov dword ptr [esp + 4], eax
// 00845ff3  740a                 je 0x845fff
// 00845ff5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00845ff9  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 00845ffd  eb08                 jmp 0x846007
// 00845fff  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00846003  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 00846007  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0084600a  53                   push ebx
// 0084600b  55                   push ebp
// 0084600c  56                   push esi
// 0084600d  83e801               sub eax, 1
// 00846010  57                   push edi
// 00846011  8944241c             mov dword ptr [esp + 0x1c], eax
// 00846015  0f888c000000         js 0x8460a7
// 0084601b  8bf0                 mov esi, eax
// 0084601d  c1e606               shl esi, 6
// 00846020  03742430             add esi, dword ptr [esp + 0x30]
// 00846024  837e2800             cmp dword ptr [esi + 0x28], 0
// 00846028  746b                 je 0x846095
// 0084602a  837e3000             cmp dword ptr [esi + 0x30], 0
// 0084602e  7565                 jne 0x846095
// 00846030  85c0                 test eax, eax
// 00846032  7c0d                 jl 0x846041
// 00846034  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 00846037  7d08                 jge 0x846041
// 00846039  8b7a28               mov edi, dword ptr [edx + 0x28]
// 0084603c  8b0487               mov eax, dword ptr [edi + eax*4]
// 0084603f  eb02                 jmp 0x846043
// 00846041  33c0                 xor eax, eax
// 00846043  f680d400000001       test byte ptr [eax + 0xd4], 1
// 0084604a  745b                 je 0x8460a7
// 0084604c  837c241400           cmp dword ptr [esp + 0x14], 0
// 00846051  8b06                 mov eax, dword ptr [esi]
// 00846053  8b5604               mov edx, dword ptr [esi + 4]
// 00846056  8b6e08               mov ebp, dword ptr [esi + 8]
// 00846059  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0084605c  7511                 jne 0x84606f
// 0084605e  2bc5                 sub eax, ebp
// 00846060  8d3c08               lea edi, [eax + ecx]
// 00846063  3b7c2444             cmp edi, dword ptr [esp + 0x44]
// 00846067  7c3a                 jl 0x8460a3
// 00846069  53                   push ebx
// 0084606a  51                   push ecx
// 0084606b  52                   push edx
// 0084606c  57                   push edi
// 0084606d  eb0f                 jmp 0x84607e
// 0084606f  2bd3                 sub edx, ebx
// 00846071  8d3c0a               lea edi, [edx + ecx]
// 00846074  3b7c2440             cmp edi, dword ptr [esp + 0x40]
// 00846078  7c29                 jl 0x8460a3
// 0084607a  51                   push ecx
// 0084607b  55                   push ebp
// 0084607c  57                   push edi
// 0084607d  50                   push eax
// 0084607e  56                   push esi
// 0084607f  ff1538ca9800         call dword ptr [0x98ca38]
// 00846085  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 00846089  8b542410             mov edx, dword ptr [esp + 0x10]
// 0084608d  8bcf                 mov ecx, edi
// 0084608f  7516                 jne 0x8460a7
// 00846091  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00846095  48                   dec eax
// 00846096  83ee40               sub esi, 0x40
// 00846099  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084609d  85c0                 test eax, eax
// 0084609f  7d83                 jge 0x846024
// 008460a1  eb04                 jmp 0x8460a7
// 008460a3  8b542410             mov edx, dword ptr [esp + 0x10]
// 008460a7  33c9                 xor ecx, ecx
// 008460a9  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 008460b1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008460b9  394c2414             cmp dword ptr [esp + 0x14], ecx
// 008460bd  740a                 je 0x8460c9
// 008460bf  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008460c3  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 008460c7  eb08                 jmp 0x8460d1
// 008460c9  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008460cd  2b5c2444             sub ebx, dword ptr [esp + 0x44]
// 008460d1  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008460d4  48                   dec eax
// 008460d5  8bd0                 mov edx, eax
// 008460d7  89442420             mov dword ptr [esp + 0x20], eax
// 008460db  8954241c             mov dword ptr [esp + 0x1c], edx
// 008460df  85d2                 test edx, edx
// 008460e1  0f8cdb010000         jl 0x8462c2
// 008460e7  8b742430             mov esi, dword ptr [esp + 0x30]
// 008460eb  8d42ff               lea eax, [edx - 1]
// 008460ee  89442424             mov dword ptr [esp + 0x24], eax
// 008460f2  8bc2                 mov eax, edx
// 008460f4  c1e006               shl eax, 6
// 008460f7  8d7c3028             lea edi, [eax + esi + 0x28]
// 008460fb  897c2428             mov dword ptr [esp + 0x28], edi
// 008460ff  90                   nop 
// 00846100  833f00               cmp dword ptr [edi], 0
// 00846103  0f848e000000         je 0x846197
// 00846109  8b6f08               mov ebp, dword ptr [edi + 8]
// 0084610c  85ed                 test ebp, ebp
// 0084610e  0f8583000000         jne 0x846197
// 00846114  8b742410             mov esi, dword ptr [esp + 0x10]
// 00846118  85c9                 test ecx, ecx
// 0084611a  7529                 jne 0x846145
// 0084611c  85d2                 test edx, edx
// 0084611e  7c0d                 jl 0x84612d
// 00846120  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 00846123  7d08                 jge 0x84612d
// 00846125  8b4628               mov eax, dword ptr [esi + 0x28]
// 00846128  8b0490               mov eax, dword ptr [eax + edx*4]
// 0084612b  eb02                 jmp 0x84612f
// 0084612d  33c0                 xor eax, eax
// 0084612f  f680d400000001       test byte ptr [eax + 0xd4], 1
// 00846136  740d                 je 0x846145
// 00846138  8b442424             mov eax, dword ptr [esp + 0x24]
// 0084613c  8b5fd8               mov ebx, dword ptr [edi - 0x28]
// 0084613f  89442420             mov dword ptr [esp + 0x20], eax
// 00846143  eb25                 jmp 0x84616a
// 00846145  85d2                 test edx, edx
// 00846147  7c0d                 jl 0x846156
// 00846149  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 0084614c  7d08                 jge 0x846156
// 0084614e  8b4628               mov eax, dword ptr [esi + 0x28]
// 00846151  8b0490               mov eax, dword ptr [eax + edx*4]
// 00846154  eb02                 jmp 0x846158
// 00846156  33c0                 xor eax, eax
// 00846158  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 0084615f  7409                 je 0x84616a
// 00846161  b901000000           mov ecx, 1
// 00846166  014c2418             add dword ptr [esp + 0x18], ecx
// 0084616a  837c244cff           cmp dword ptr [esp + 0x4c], -1
// 0084616f  751d                 jne 0x84618e
// 00846171  39542420             cmp dword ptr [esp + 0x20], edx
// 00846175  7c17                 jl 0x84618e
// 00846177  837c241400           cmp dword ptr [esp + 0x14], 0
// 0084617c  7505                 jne 0x846183
// 0084617e  8b77e0               mov esi, dword ptr [edi - 0x20]
// 00846181  eb03                 jmp 0x846186
// 00846183  8b77e4               mov esi, dword ptr [edi - 0x1c]
// 00846186  8bc3                 mov eax, ebx
// 00846188  2bc6                 sub eax, esi
// 0084618a  8944244c             mov dword ptr [esp + 0x4c], eax
// 0084618e  85ed                 test ebp, ebp
// 00846190  7505                 jne 0x846197
// 00846192  396f04               cmp dword ptr [edi + 4], ebp
// 00846195  7508                 jne 0x84619f
// 00846197  85d2                 test edx, edx
// 00846199  0f850b010000         jne 0x8462aa
// 0084619f  837c241800           cmp dword ptr [esp + 0x18], 0
// 008461a4  0f8eca000000         jle 0x846274
// 008461aa  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 008461af  0f8ebf000000         jle 0x846274
// 008461b5  33ed                 xor ebp, ebp
// 008461b7  3b542420             cmp edx, dword ptr [esp + 0x20]
// 008461bb  89542430             mov dword ptr [esp + 0x30], edx
// 008461bf  0f8faf000000         jg 0x846274
// 008461c5  8d5fe0               lea ebx, [edi - 0x20]
// 008461c8  eb06                 jmp 0x8461d0
// 008461ca  8d9b00000000         lea ebx, [ebx]
// 008461d0  837b2000             cmp dword ptr [ebx + 0x20], 0
// 008461d4  0f8484000000         je 0x84625e
// 008461da  837b2800             cmp dword ptr [ebx + 0x28], 0
// 008461de  757e                 jne 0x84625e
// 008461e0  837c241400           cmp dword ptr [esp + 0x14], 0
// 008461e5  8b4bf8               mov ecx, dword ptr [ebx - 8]
// 008461e8  8b53fc               mov edx, dword ptr [ebx - 4]
// 008461eb  8b33                 mov esi, dword ptr [ebx]
// 008461ed  8b7b04               mov edi, dword ptr [ebx + 4]
// 008461f0  8d43f8               lea eax, [ebx - 8]
// 008461f3  7506                 jne 0x8461fb
// 008461f5  03f5                 add esi, ebp
// 008461f7  03cd                 add ecx, ebp
// 008461f9  eb04                 jmp 0x8461ff
// 008461fb  03fd                 add edi, ebp
// 008461fd  03d5                 add edx, ebp
// 008461ff  57                   push edi
// 00846200  56                   push esi
// 00846201  52                   push edx
// 00846202  51                   push ecx
// 00846203  50                   push eax
// 00846204  ff1538ca9800         call dword ptr [0x98ca38]
// 0084620a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0084620e  85c9                 test ecx, ecx
// 00846210  7c11                 jl 0x846223
// 00846212  8b442410             mov eax, dword ptr [esp + 0x10]
// 00846216  3b482c               cmp ecx, dword ptr [eax + 0x2c]
// 00846219  7d08                 jge 0x846223
// 0084621b  8b5028               mov edx, dword ptr [eax + 0x28]
// 0084621e  8b048a               mov eax, dword ptr [edx + ecx*4]
// 00846221  eb02                 jmp 0x846225
// 00846223  33c0                 xor eax, eax
// 00846225  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 0084622c  7428                 je 0x846256
// 0084622e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00846232  85f6                 test esi, esi
// 00846234  7e20                 jle 0x846256
// 00846236  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0084623a  99                   cdq 
// 0084623b  f7fe                 idiv esi
// 0084623d  837c241400           cmp dword ptr [esp + 0x14], 0
// 00846242  7504                 jne 0x846248
// 00846244  0103                 add dword ptr [ebx], eax
// 00846246  eb03                 jmp 0x84624b
// 00846248  014304               add dword ptr [ebx + 4], eax
// 0084624b  2944244c             sub dword ptr [esp + 0x4c], eax
// 0084624f  4e                   dec esi
// 00846250  89742418             mov dword ptr [esp + 0x18], esi
// 00846254  03e8                 add ebp, eax
// 00846256  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0084625a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0084625e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00846262  40                   inc eax
// 00846263  83c340               add ebx, 0x40
// 00846266  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0084626a  89442430             mov dword ptr [esp + 0x30], eax
// 0084626e  0f8e5cffffff         jle 0x8461d0
// 00846274  837c241400           cmp dword ptr [esp + 0x14], 0
// 00846279  740a                 je 0x846285
// 0084627b  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0084627f  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 00846283  eb08                 jmp 0x84628d
// 00846285  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00846289  2b5c2444             sub ebx, dword ptr [esp + 0x44]
// 0084628d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00846291  b901000000           mov ecx, 1
// 00846296  89442420             mov dword ptr [esp + 0x20], eax
// 0084629a  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 008462a2  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008462aa  ff4c2424             dec dword ptr [esp + 0x24]
// 008462ae  4a                   dec edx
// 008462af  83ef40               sub edi, 0x40
// 008462b2  8954241c             mov dword ptr [esp + 0x1c], edx
// 008462b6  897c2428             mov dword ptr [esp + 0x28], edi
// 008462ba  85d2                 test edx, edx
// 008462bc  0f8d3efeffff         jge 0x846100
// 008462c2  5f                   pop edi
// 008462c3  5e                   pop esi
// 008462c4  5d                   pop ebp
// 008462c5  5b                   pop ebx
// 008462c6  83c41c               add esp, 0x1c
// 008462c9  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_MoveRightAlligned@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@VCSize@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
