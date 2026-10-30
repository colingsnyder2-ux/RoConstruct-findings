// roc 2009-12 00803100  unit: CXTPPaintManager  size: 1041 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00803100
//
// 00803100  6aff                 push -1
// 00803102  68e8939500           push 0x9593e8
// 00803107  64a100000000         mov eax, dword ptr fs:[0]
// 0080310d  50                   push eax
// 0080310e  83ec5c               sub esp, 0x5c
// 00803111  53                   push ebx
// 00803112  55                   push ebp
// 00803113  56                   push esi
// 00803114  57                   push edi
// 00803115  a10052b600           mov eax, dword ptr [0xb65200]
// 0080311a  33c4                 xor eax, esp
// 0080311c  50                   push eax
// 0080311d  8d442470             lea eax, [esp + 0x70]
// 00803121  64a300000000         mov dword ptr fs:[0], eax
// 00803127  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0080312b  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 00803131  8bb158010000         mov esi, dword ptr [ecx + 0x158]
// 00803137  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0080313e  83e902               sub ecx, 2
// 00803141  8944241c             mov dword ptr [esp + 0x1c], eax
// 00803145  0f841a030000         je 0x803465
// 0080314b  83e901               sub ecx, 1
// 0080314e  0f849b020000         je 0x8033ef
// 00803154  83e901               sub ecx, 1
// 00803157  0f859e030000         jne 0x8034fb
// 0080315d  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 00803164  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 0080316b  2bbc2488000000       sub edi, dword ptr [esp + 0x88]
// 00803172  2b9c248c000000       sub ebx, dword ptr [esp + 0x8c]
// 00803179  8b2d60b19800         mov ebp, dword ptr [0x98b160]
// 0080317f  33c0                 xor eax, eax
// 00803181  50                   push eax
// 00803182  89442458             mov dword ptr [esp + 0x58], eax
// 00803186  b901000000           mov ecx, 1
// 0080318b  50                   push eax
// 0080318c  66894c245c           mov word ptr [esp + 0x5c], cx
// 00803191  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00803198  51                   push ecx
// 00803199  ba20000000           mov edx, 0x20
// 0080319e  6689542462           mov word ptr [esp + 0x62], dx
// 008031a3  50                   push eax
// 008031a4  8d542458             lea edx, [esp + 0x58]
// 008031a8  52                   push edx
// 008031a9  8944245c             mov dword ptr [esp + 0x5c], eax
// 008031ad  89442460             mov dword ptr [esp + 0x60], eax
// 008031b1  89442464             mov dword ptr [esp + 0x64], eax
// 008031b5  8944246c             mov dword ptr [esp + 0x6c], eax
// 008031b9  50                   push eax
// 008031ba  89442474             mov dword ptr [esp + 0x74], eax
// 008031be  89442478             mov dword ptr [esp + 0x78], eax
// 008031c2  8944247c             mov dword ptr [esp + 0x7c], eax
// 008031c6  89842480000000       mov dword ptr [esp + 0x80], eax
// 008031cd  89842484000000       mov dword ptr [esp + 0x84], eax
// 008031d4  c744246028000000     mov dword ptr [esp + 0x60], 0x28
// 008031dc  897c2464             mov dword ptr [esp + 0x64], edi
// 008031e0  895c2468             mov dword ptr [esp + 0x68], ebx
// 008031e4  89442470             mov dword ptr [esp + 0x70], eax
// 008031e8  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 008031ef  ffd5                 call ebp
// 008031f1  6a00                 push 0
// 008031f3  6a00                 push 0
// 008031f5  89442428             mov dword ptr [esp + 0x28], eax
// 008031f9  8d44241c             lea eax, [esp + 0x1c]
// 008031fd  50                   push eax
// 008031fe  6a00                 push 0
// 00803200  8d4c2458             lea ecx, [esp + 0x58]
// 00803204  51                   push ecx
// 00803205  6a00                 push 0
// 00803207  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0080320f  ffd5                 call ebp
// 00803211  6a00                 push 0
// 00803213  6a00                 push 0
// 00803215  8d542420             lea edx, [esp + 0x20]
// 00803219  52                   push edx
// 0080321a  89442430             mov dword ptr [esp + 0x30], eax
// 0080321e  6a00                 push 0
// 00803220  8d442458             lea eax, [esp + 0x58]
// 00803224  50                   push eax
// 00803225  6a00                 push 0
// 00803227  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0080322f  ffd5                 call ebp
// 00803231  8d4c2438             lea ecx, [esp + 0x38]
// 00803235  89442428             mov dword ptr [esp + 0x28], eax
// 00803239  e870321200           call 0x9264ae
// 0080323e  6a00                 push 0
// 00803240  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00803248  ff1554b19800         call dword ptr [0x98b154]
// 0080324e  50                   push eax
// 0080324f  8d4c243c             lea ecx, [esp + 0x3c]
// 00803253  e844321200           call 0x92649c
// 00803258  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080325c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00803260  8b2d4cb19800         mov ebp, dword ptr [0x98b14c]
// 00803266  51                   push ecx
// 00803267  52                   push edx
// 00803268  ffd5                 call ebp
// 0080326a  89442434             mov dword ptr [esp + 0x34], eax
// 0080326e  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00803275  85c0                 test eax, eax
// 00803277  7403                 je 0x80327c
// 00803279  8b4004               mov eax, dword ptr [eax + 4]
// 0080327c  682000cc00           push 0xcc0020
// 00803281  6a00                 push 0
// 00803283  6a00                 push 0
// 00803285  50                   push eax
// 00803286  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0080328a  53                   push ebx
// 0080328b  57                   push edi
// 0080328c  6a00                 push 0
// 0080328e  6a00                 push 0
// 00803290  50                   push eax
// 00803291  ff1548b19800         call dword ptr [0x98b148]
// 00803297  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080329b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0080329f  51                   push ecx
// 008032a0  52                   push edx
// 008032a1  ffd5                 call ebp
// 008032a3  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008032aa  85c0                 test eax, eax
// 008032ac  7403                 je 0x8032b1
// 008032ae  8b4004               mov eax, dword ptr [eax + 4]
// 008032b1  682000cc00           push 0xcc0020
// 008032b6  6a00                 push 0
// 008032b8  6a00                 push 0
// 008032ba  50                   push eax
// 008032bb  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008032bf  53                   push ebx
// 008032c0  57                   push edi
// 008032c1  6a00                 push 0
// 008032c3  6a00                 push 0
// 008032c5  50                   push eax
// 008032c6  ff1548b19800         call dword ptr [0x98b148]
// 008032cc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008032d0  99                   cdq 
// 008032d1  f7fe                 idiv esi
// 008032d3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008032d7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008032db  51                   push ecx
// 008032dc  52                   push edx
// 008032dd  89442438             mov dword ptr [esp + 0x38], eax
// 008032e1  ffd5                 call ebp
// 008032e3  83fe01               cmp esi, 1
// 008032e6  0f8ec6000000         jle 0x8033b2
// 008032ec  8d46ff               lea eax, [esi - 1]
// 008032ef  c7842484000000ff000000 mov dword ptr [esp + 0x84], 0xff
// 008032fa  8944241c             mov dword ptr [esp + 0x1c], eax
// 008032fe  8bff                 mov edi, edi
// 00803300  ff15fcb29800         call dword ptr [0x98b2fc]
// 00803306  8be8                 mov ebp, eax
// 00803308  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0080330f  99                   cdq 
// 00803310  f7fe                 idiv esi
// 00803312  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00803319  8b542414             mov edx, dword ptr [esp + 0x14]
// 0080331d  50                   push eax
// 0080331e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00803322  51                   push ecx
// 00803323  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00803327  53                   push ebx
// 00803328  57                   push edi
// 00803329  52                   push edx
// 0080332a  50                   push eax
// 0080332b  e870acffff           call 0x7fdfa0
// 00803330  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00803337  2b84248c000000       sub eax, dword ptr [esp + 0x8c]
// 0080333e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00803342  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00803349  2b8c2488000000       sub ecx, dword ptr [esp + 0x88]
// 00803350  682000cc00           push 0xcc0020
// 00803355  6a00                 push 0
// 00803357  6a00                 push 0
// 00803359  52                   push edx
// 0080335a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 00803361  50                   push eax
// 00803362  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00803369  51                   push ecx
// 0080336a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00803371  50                   push eax
// 00803372  8b4204               mov eax, dword ptr [edx + 4]
// 00803375  51                   push ecx
// 00803376  50                   push eax
// 00803377  ff1548b19800         call dword ptr [0x98b148]
// 0080337d  ff15fcb29800         call dword ptr [0x98b2fc]
// 00803383  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00803387  2bc5                 sub eax, ebp
// 00803389  3bc1                 cmp eax, ecx
// 0080338b  7309                 jae 0x803396
// 0080338d  2bc8                 sub ecx, eax
// 0080338f  51                   push ecx
// 00803390  ff15ecb29800         call dword ptr [0x98b2ec]
// 00803396  81842484000000ff000000 add dword ptr [esp + 0x84], 0xff
// 008033a1  836c241c01           sub dword ptr [esp + 0x1c], 1
// 008033a6  0f8554ffffff         jne 0x803300
// 008033ac  8b2d4cb19800         mov ebp, dword ptr [0x98b14c]
// 008033b2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008033b6  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008033ba  51                   push ecx
// 008033bb  52                   push edx
// 008033bc  ffd5                 call ebp
// 008033be  8b442420             mov eax, dword ptr [esp + 0x20]
// 008033c2  8b353cb19800         mov esi, dword ptr [0x98b13c]
// 008033c8  50                   push eax
// 008033c9  ffd6                 call esi
// 008033cb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008033cf  51                   push ecx
// 008033d0  ffd6                 call esi
// 008033d2  8b542428             mov edx, dword ptr [esp + 0x28]
// 008033d6  52                   push edx
// 008033d7  ffd6                 call esi
// 008033d9  8d4c2438             lea ecx, [esp + 0x38]
// 008033dd  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 008033e5  e8be301200           call 0x9264a8
// 008033ea  e90c010000           jmp 0x8034fb
// 008033ef  33ff                 xor edi, edi
// 008033f1  85f6                 test esi, esi
// 008033f3  0f8e02010000         jle 0x8034fb
// 008033f9  99                   cdq 
// 008033fa  f7fe                 idiv esi
// 008033fc  8be8                 mov ebp, eax
// 008033fe  8bff                 mov edi, edi
// 00803400  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00803407  2b8c248c000000       sub ecx, dword ptr [esp + 0x8c]
// 0080340e  47                   inc edi
// 0080340f  8bc7                 mov eax, edi
// 00803411  0fafc1               imul eax, ecx
// 00803414  99                   cdq 
// 00803415  f7fe                 idiv esi
// 00803417  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0080341e  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 00803425  2b942488000000       sub edx, dword ptr [esp + 0x88]
// 0080342c  2bc8                 sub ecx, eax
// 0080342e  85db                 test ebx, ebx
// 00803430  7403                 je 0x803435
// 00803432  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00803435  682000cc00           push 0xcc0020
// 0080343a  51                   push ecx
// 0080343b  6a00                 push 0
// 0080343d  53                   push ebx
// 0080343e  50                   push eax
// 0080343f  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00803446  8b4804               mov ecx, dword ptr [eax + 4]
// 00803449  52                   push edx
// 0080344a  6a00                 push 0
// 0080344c  6a00                 push 0
// 0080344e  51                   push ecx
// 0080344f  ff1548b19800         call dword ptr [0x98b148]
// 00803455  55                   push ebp
// 00803456  ff15ecb29800         call dword ptr [0x98b2ec]
// 0080345c  3bfe                 cmp edi, esi
// 0080345e  7ca0                 jl 0x803400
// 00803460  e996000000           jmp 0x8034fb
// 00803465  85f6                 test esi, esi
// 00803467  0f8e8e000000         jle 0x8034fb
// 0080346d  99                   cdq 
// 0080346e  f7fe                 idiv esi
// 00803470  bd01000000           mov ebp, 1
// 00803475  89b42498000000       mov dword ptr [esp + 0x98], esi
// 0080347c  89442434             mov dword ptr [esp + 0x34], eax
// 00803480  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 00803487  8bc7                 mov eax, edi
// 00803489  2b842488000000       sub eax, dword ptr [esp + 0x88]
// 00803490  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 00803497  0fafc5               imul eax, ebp
// 0080349a  99                   cdq 
// 0080349b  f7fe                 idiv esi
// 0080349d  8bcf                 mov ecx, edi
// 0080349f  2bc8                 sub ecx, eax
// 008034a1  8bc3                 mov eax, ebx
// 008034a3  2b84248c000000       sub eax, dword ptr [esp + 0x8c]
// 008034aa  2bf9                 sub edi, ecx
// 008034ac  0fafc5               imul eax, ebp
// 008034af  99                   cdq 
// 008034b0  f7fe                 idiv esi
// 008034b2  8bd3                 mov edx, ebx
// 008034b4  2bd0                 sub edx, eax
// 008034b6  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008034bd  2bda                 sub ebx, edx
// 008034bf  85c0                 test eax, eax
// 008034c1  7403                 je 0x8034c6
// 008034c3  8b4004               mov eax, dword ptr [eax + 4]
// 008034c6  682000cc00           push 0xcc0020
// 008034cb  52                   push edx
// 008034cc  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008034d3  51                   push ecx
// 008034d4  50                   push eax
// 008034d5  8b4204               mov eax, dword ptr [edx + 4]
// 008034d8  53                   push ebx
// 008034d9  57                   push edi
// 008034da  6a00                 push 0
// 008034dc  6a00                 push 0
// 008034de  50                   push eax
// 008034df  ff1548b19800         call dword ptr [0x98b148]
// 008034e5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008034e9  51                   push ecx
// 008034ea  ff15ecb29800         call dword ptr [0x98b2ec]
// 008034f0  45                   inc ebp
// 008034f1  83ac249800000001     sub dword ptr [esp + 0x98], 1
// 008034f9  7585                 jne 0x803480
// 008034fb  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008034ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00803506  59                   pop ecx
// 00803507  5f                   pop edi
// 00803508  5e                   pop esi
// 00803509  5d                   pop ebp
// 0080350a  5b                   pop ebx
// 0080350b  83c468               add esp, 0x68
// 0080350e  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Animate@CXTPPaintManager@@UAEXPAVCDC@@0VCRect@@W4XTPAnimationType@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp