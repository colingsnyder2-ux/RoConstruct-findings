// roc 2009-12 00844590  unit: CXTPPopupBar  size: 1209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00844590
//
// 00844590  83ec48               sub esp, 0x48
// 00844593  53                   push ebx
// 00844594  8b1d68cc9800         mov ebx, dword ptr [0x98cc68]
// 0084459a  56                   push esi
// 0084459b  57                   push edi
// 0084459c  8bf1                 mov esi, ecx
// 0084459e  8dbe8c010000         lea edi, [esi + 0x18c]
// 008445a4  57                   push edi
// 008445a5  ffd3                 call ebx
// 008445a7  85c0                 test eax, eax
// 008445a9  741a                 je 0x8445c5
// 008445ab  8d8684010000         lea eax, [esi + 0x184]
// 008445b1  50                   push eax
// 008445b2  8d4c2418             lea ecx, [esp + 0x18]
// 008445b6  51                   push ecx
// 008445b7  e8b481ffff           call 0x83c770
// 008445bc  8bc8                 mov ecx, eax
// 008445be  e8bd7cffff           call 0x83c280
// 008445c3  eb12                 jmp 0x8445d7
// 008445c5  8d542444             lea edx, [esp + 0x44]
// 008445c9  57                   push edi
// 008445ca  52                   push edx
// 008445cb  e8a081ffff           call 0x83c770
// 008445d0  8bc8                 mov ecx, eax
// 008445d2  e8f97cffff           call 0x83c2d0
// 008445d7  8b08                 mov ecx, dword ptr [eax]
// 008445d9  894c2424             mov dword ptr [esp + 0x24], ecx
// 008445dd  8b5004               mov edx, dword ptr [eax + 4]
// 008445e0  89542428             mov dword ptr [esp + 0x28], edx
// 008445e4  8b4808               mov ecx, dword ptr [eax + 8]
// 008445e7  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008445eb  8b500c               mov edx, dword ptr [eax + 0xc]
// 008445ee  57                   push edi
// 008445ef  89542434             mov dword ptr [esp + 0x34], edx
// 008445f3  ffd3                 call ebx
// 008445f5  85c0                 test eax, eax
// 008445f7  741a                 je 0x844613
// 008445f9  8d8684010000         lea eax, [esi + 0x184]
// 008445ff  50                   push eax
// 00844600  8d4c2448             lea ecx, [esp + 0x48]
// 00844604  51                   push ecx
// 00844605  e86681ffff           call 0x83c770
// 0084460a  8bc8                 mov ecx, eax
// 0084460c  e89f7bffff           call 0x83c1b0
// 00844611  eb12                 jmp 0x844625
// 00844613  8d542414             lea edx, [esp + 0x14]
// 00844617  57                   push edi
// 00844618  52                   push edx
// 00844619  e85281ffff           call 0x83c770
// 0084461e  8bc8                 mov ecx, eax
// 00844620  e8db7bffff           call 0x83c200
// 00844625  8b08                 mov ecx, dword ptr [eax]
// 00844627  894c2434             mov dword ptr [esp + 0x34], ecx
// 0084462b  8b5004               mov edx, dword ptr [eax + 4]
// 0084462e  89542438             mov dword ptr [esp + 0x38], edx
// 00844632  8b4808               mov ecx, dword ptr [eax + 8]
// 00844635  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00844639  8b500c               mov edx, dword ptr [eax + 0xc]
// 0084463c  57                   push edi
// 0084463d  89542444             mov dword ptr [esp + 0x44], edx
// 00844641  ffd3                 call ebx
// 00844643  85c0                 test eax, eax
// 00844645  7458                 je 0x84469f
// 00844647  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 0084464d  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00844653  8b1d5cca9800         mov ebx, dword ptr [0x98ca5c]
// 00844659  50                   push eax
// 0084465a  51                   push ecx
// 0084465b  8d54243c             lea edx, [esp + 0x3c]
// 0084465f  52                   push edx
// 00844660  ffd3                 call ebx
// 00844662  85c0                 test eax, eax
// 00844664  7439                 je 0x84469f
// 00844666  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 0084466c  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00844672  50                   push eax
// 00844673  51                   push ecx
// 00844674  8d54242c             lea edx, [esp + 0x2c]
// 00844678  52                   push edx
// 00844679  ffd3                 call ebx
// 0084467b  85c0                 test eax, eax
// 0084467d  7520                 jne 0x84469f
// 0084467f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00844683  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00844687  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0084468b  89442424             mov dword ptr [esp + 0x24], eax
// 0084468f  8b442440             mov eax, dword ptr [esp + 0x40]
// 00844693  894c2428             mov dword ptr [esp + 0x28], ecx
// 00844697  8954242c             mov dword ptr [esp + 0x2c], edx
// 0084469b  89442430             mov dword ptr [esp + 0x30], eax
// 0084469f  8b470c               mov eax, dword ptr [edi + 0xc]
// 008446a2  034704               add eax, dword ptr [edi + 4]
// 008446a5  836c243005           sub dword ptr [esp + 0x30], 5
// 008446aa  99                   cdq 
// 008446ab  2bc2                 sub eax, edx
// 008446ad  55                   push ebp
// 008446ae  8bd8                 mov ebx, eax
// 008446b0  33ed                 xor ebp, ebp
// 008446b2  8bce                 mov ecx, esi
// 008446b4  d1fb                 sar ebx, 1
// 008446b6  896c2414             mov dword ptr [esp + 0x14], ebp
// 008446ba  e811fefbff           call 0x8044d0
// 008446bf  3bc5                 cmp eax, ebp
// 008446c1  740b                 je 0x8446ce
// 008446c3  8b4874               mov ecx, dword ptr [eax + 0x74]
// 008446c6  39a988000000         cmp dword ptr [ecx + 0x88], ebp
// 008446cc  750c                 jne 0x8446da
// 008446ce  896c2410             mov dword ptr [esp + 0x10], ebp
// 008446d2  39ae6c010000         cmp dword ptr [esi + 0x16c], ebp
// 008446d8  7408                 je 0x8446e2
// 008446da  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008446e2  8b570c               mov edx, dword ptr [edi + 0xc]
// 008446e5  2b5704               sub edx, dword ptr [edi + 4]
// 008446e8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008446ec  7545                 jne 0x844733
// 008446ee  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 008446f4  3bc1                 cmp eax, ecx
// 008446f6  7e3b                 jle 0x844733
// 008446f8  2b442464             sub eax, dword ptr [esp + 0x64]
// 008446fc  898688010000         mov dword ptr [esi + 0x188], eax
// 00844702  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 00844706  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 0084470c  83f803               cmp eax, 3
// 0084470f  0f85f6010000         jne 0x84490b
// 00844715  8b4f08               mov ecx, dword ptr [edi + 8]
// 00844718  2b0f                 sub ecx, dword ptr [edi]
// 0084471a  0f84eb010000         je 0x84490b
// 00844720  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 00844726  2bd3                 sub edx, ebx
// 00844728  899684010000         mov dword ptr [esi + 0x184], edx
// 0084472e  e903020000           jmp 0x844936
// 00844733  8bae88010000         mov ebp, dword ptr [esi + 0x188]
// 00844739  8b542464             mov edx, dword ptr [esp + 0x64]
// 0084473d  8d042a               lea eax, [edx + ebp]
// 00844740  3bc1                 cmp eax, ecx
// 00844742  7ebe                 jle 0x844702
// 00844744  8b470c               mov eax, dword ptr [edi + 0xc]
// 00844747  2b4704               sub eax, dword ptr [edi + 4]
// 0084474a  751c                 jne 0x844768
// 0084474c  8bc1                 mov eax, ecx
// 0084474e  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 00844752  99                   cdq 
// 00844753  2bc2                 sub eax, edx
// 00844755  d1f8                 sar eax, 1
// 00844757  3be8                 cmp ebp, eax
// 00844759  8bc1                 mov eax, ecx
// 0084475b  7c02                 jl 0x84475f
// 0084475d  8bc5                 mov eax, ebp
// 0084475f  2b442464             sub eax, dword ptr [esp + 0x64]
// 00844763  e91b010000           jmp 0x844883
// 00844768  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 0084476e  89442418             mov dword ptr [esp + 0x18], eax
// 00844772  a802                 test al, 2
// 00844774  0f8405010000         je 0x84487f
// 0084477a  8bae90010000         mov ebp, dword ptr [esi + 0x190]
// 00844780  8bc5                 mov eax, ebp
// 00844782  2b442464             sub eax, dword ptr [esp + 0x64]
// 00844786  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 0084478a  898688010000         mov dword ptr [esi + 0x188], eax
// 00844790  0f8df3000000         jge 0x844889
// 00844796  837c241000           cmp dword ptr [esp + 0x10], 0
// 0084479b  0f84a5000000         je 0x844846
// 008447a1  8b442418             mov eax, dword ptr [esp + 0x18]
// 008447a5  83e0fd               and eax, 0xfffffffd
// 008447a8  89869c010000         mov dword ptr [esi + 0x19c], eax
// 008447ae  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008447b4  85c0                 test eax, eax
// 008447b6  746b                 je 0x844823
// 008447b8  83b8fc00000005       cmp dword ptr [eax + 0xfc], 5
// 008447bf  7515                 jne 0x8447d6
// 008447c1  8b16                 mov edx, dword ptr [esi]
// 008447c3  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 008447c9  8bce                 mov ecx, esi
// 008447cb  ffd0                 call eax
// 008447cd  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 008447d4  7549                 jne 0x84481f
// 008447d6  8d4c2448             lea ecx, [esp + 0x48]
// 008447da  51                   push ecx
// 008447db  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 008447e1  e8ca13fbff           call 0x7f5bb0
// 008447e6  8b10                 mov edx, dword ptr [eax]
// 008447e8  8917                 mov dword ptr [edi], edx
// 008447ea  8b4804               mov ecx, dword ptr [eax + 4]
// 008447ed  894f04               mov dword ptr [edi + 4], ecx
// 008447f0  8b5008               mov edx, dword ptr [eax + 8]
// 008447f3  895708               mov dword ptr [edi + 8], edx
// 008447f6  8b400c               mov eax, dword ptr [eax + 0xc]
// 008447f9  8b16                 mov edx, dword ptr [esi]
// 008447fb  6a01                 push 1
// 008447fd  89470c               mov dword ptr [edi + 0xc], eax
// 00844800  8b820c020000         mov eax, dword ptr [edx + 0x20c]
// 00844806  57                   push edi
// 00844807  8bce                 mov ecx, esi
// 00844809  ffd0                 call eax
// 0084480b  8b16                 mov edx, dword ptr [esi]
// 0084480d  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00844813  57                   push edi
// 00844814  8bce                 mov ecx, esi
// 00844816  ffd0                 call eax
// 00844818  8bc8                 mov ecx, eax
// 0084481a  e8dbf5faff           call 0x7f3dfa
// 0084481f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00844823  8bd1                 mov edx, ecx
// 00844825  2b542464             sub edx, dword ptr [esp + 0x64]
// 00844829  f6869c01000001       test byte ptr [esi + 0x19c], 1
// 00844830  899688010000         mov dword ptr [esi + 0x188], edx
// 00844836  7551                 jne 0x844889
// 00844838  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0084483e  898684010000         mov dword ptr [esi + 0x184], eax
// 00844844  eb43                 jmp 0x844889
// 00844846  8bc1                 mov eax, ecx
// 00844848  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0084484c  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00844854  99                   cdq 
// 00844855  2bc2                 sub eax, edx
// 00844857  d1f8                 sar eax, 1
// 00844859  3bd8                 cmp ebx, eax
// 0084485b  7e0c                 jle 0x844869
// 0084485d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00844861  2be8                 sub ebp, eax
// 00844863  896c2464             mov dword ptr [esp + 0x64], ebp
// 00844867  eb1a                 jmp 0x844883
// 00844869  8b9698010000         mov edx, dword ptr [esi + 0x198]
// 0084486f  8bc1                 mov eax, ecx
// 00844871  2bc2                 sub eax, edx
// 00844873  899688010000         mov dword ptr [esi + 0x188], edx
// 00844879  89442464             mov dword ptr [esp + 0x64], eax
// 0084487d  eb0a                 jmp 0x844889
// 0084487f  8bc1                 mov eax, ecx
// 00844881  2bc2                 sub eax, edx
// 00844883  898688010000         mov dword ptr [esi + 0x188], eax
// 00844889  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0084488d  399688010000         cmp dword ptr [esi + 0x188], edx
// 00844893  7d06                 jge 0x84489b
// 00844895  899688010000         mov dword ptr [esi + 0x188], edx
// 0084489b  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 008448a1  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 008448a5  03d8                 add ebx, eax
// 008448a7  3bd9                 cmp ebx, ecx
// 008448a9  0f8e53feffff         jle 0x844702
// 008448af  837c241000           cmp dword ptr [esp + 0x10], 0
// 008448b4  7513                 jne 0x8448c9
// 008448b6  2bc8                 sub ecx, eax
// 008448b8  894c2464             mov dword ptr [esp + 0x64], ecx
// 008448bc  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008448c4  e939feffff           jmp 0x844702
// 008448c9  83be6c01000000       cmp dword ptr [esi + 0x16c], 0
// 008448d0  0f852cfeffff         jne 0x844702
// 008448d6  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 008448dd  0f851ffeffff         jne 0x844702
// 008448e3  8b06                 mov eax, dword ptr [esi]
// 008448e5  2bca                 sub ecx, edx
// 008448e7  8b90d0010000         mov edx, dword ptr [eax + 0x1d0]
// 008448ed  6a00                 push 0
// 008448ef  51                   push ecx
// 008448f0  8d4c2420             lea ecx, [esp + 0x20]
// 008448f4  51                   push ecx
// 008448f5  8bce                 mov ecx, esi
// 008448f7  ffd2                 call edx
// 008448f9  8b18                 mov ebx, dword ptr [eax]
// 008448fb  895c2460             mov dword ptr [esp + 0x60], ebx
// 008448ff  8b4004               mov eax, dword ptr [eax + 4]
// 00844902  89442464             mov dword ptr [esp + 0x64], eax
// 00844906  e9fbfdffff           jmp 0x844706
// 0084490b  8bc8                 mov ecx, eax
// 0084490d  83e101               and ecx, 1
// 00844910  7413                 je 0x844925
// 00844912  8b5708               mov edx, dword ptr [edi + 8]
// 00844915  2b17                 sub edx, dword ptr [edi]
// 00844917  740c                 je 0x844925
// 00844919  8b0f                 mov ecx, dword ptr [edi]
// 0084491b  2bcb                 sub ecx, ebx
// 0084491d  898e84010000         mov dword ptr [esi + 0x184], ecx
// 00844923  eb11                 jmp 0x844936
// 00844925  85c9                 test ecx, ecx
// 00844927  740d                 je 0x844936
// 00844929  8b5708               mov edx, dword ptr [edi + 8]
// 0084492c  2b17                 sub edx, dword ptr [edi]
// 0084492e  7506                 jne 0x844936
// 00844930  299e84010000         sub dword ptr [esi + 0x184], ebx
// 00844936  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0084493c  8b542430             mov edx, dword ptr [esp + 0x30]
// 00844940  8d2c19               lea ebp, [ecx + ebx]
// 00844943  3bea                 cmp ebp, edx
// 00844945  7e55                 jle 0x84499c
// 00844947  8b6f08               mov ebp, dword ptr [edi + 8]
// 0084494a  2b2f                 sub ebp, dword ptr [edi]
// 0084494c  750e                 jne 0x84495c
// 0084494e  3bca                 cmp ecx, edx
// 00844950  7e0a                 jle 0x84495c
// 00844952  2bcb                 sub ecx, ebx
// 00844954  898e84010000         mov dword ptr [esi + 0x184], ecx
// 0084495a  eb2c                 jmp 0x844988
// 0084495c  8b4f08               mov ecx, dword ptr [edi + 8]
// 0084495f  2b0f                 sub ecx, dword ptr [edi]
// 00844961  750a                 jne 0x84496d
// 00844963  2bd3                 sub edx, ebx
// 00844965  899684010000         mov dword ptr [esi + 0x184], edx
// 0084496b  eb1b                 jmp 0x844988
// 0084496d  a802                 test al, 2
// 0084496f  7404                 je 0x844975
// 00844971  8bfa                 mov edi, edx
// 00844973  eb02                 jmp 0x844977
// 00844975  8b3f                 mov edi, dword ptr [edi]
// 00844977  2bfb                 sub edi, ebx
// 00844979  83c801               or eax, 1
// 0084497c  89be84010000         mov dword ptr [esi + 0x184], edi
// 00844982  89869c010000         mov dword ptr [esi + 0x19c], eax
// 00844988  8b442428             mov eax, dword ptr [esp + 0x28]
// 0084498c  398684010000         cmp dword ptr [esi + 0x184], eax
// 00844992  7d3e                 jge 0x8449d2
// 00844994  898684010000         mov dword ptr [esi + 0x184], eax
// 0084499a  eb36                 jmp 0x8449d2
// 0084499c  8b542428             mov edx, dword ptr [esp + 0x28]
// 008449a0  3bca                 cmp ecx, edx
// 008449a2  7d2e                 jge 0x8449d2
// 008449a4  8b4f08               mov ecx, dword ptr [edi + 8]
// 008449a7  2b0f                 sub ecx, dword ptr [edi]
// 008449a9  7414                 je 0x8449bf
// 008449ab  8bca                 mov ecx, edx
// 008449ad  a802                 test al, 2
// 008449af  7506                 jne 0x8449b7
// 008449b1  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 008449b7  898e84010000         mov dword ptr [esi + 0x184], ecx
// 008449bd  eb0a                 jmp 0x8449c9
// 008449bf  a801                 test al, 1
// 008449c1  740f                 je 0x8449d2
// 008449c3  899684010000         mov dword ptr [esi + 0x184], edx
// 008449c9  83e0fe               and eax, 0xfffffffe
// 008449cc  89869c010000         mov dword ptr [esi + 0x19c], eax
// 008449d2  837c241400           cmp dword ptr [esp + 0x14], 0
// 008449d7  5d                   pop ebp
// 008449d8  7419                 je 0x8449f3
// 008449da  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 008449e1  7510                 jne 0x8449f3
// 008449e3  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 008449ea  7507                 jne 0x8449f3
// 008449ec  b801000000           mov eax, 1
// 008449f1  eb02                 jmp 0x8449f5
// 008449f3  33c0                 xor eax, eax
// 008449f5  898618020000         mov dword ptr [esi + 0x218], eax
// 008449fb  85c0                 test eax, eax
// 008449fd  741e                 je 0x844a1d
// 008449ff  6a00                 push 0
// 00844a01  6a00                 push 0
// 00844a03  8d542464             lea edx, [esp + 0x64]
// 00844a07  52                   push edx
// 00844a08  8bce                 mov ecx, esi
// 00844a0a  c7861c02000000000000 mov dword ptr [esi + 0x21c], 0
// 00844a14  e817e1ffff           call 0x842b30
// 00844a19  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 00844a1d  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00844a23  8b442458             mov eax, dword ptr [esp + 0x58]
// 00844a27  8bb688010000         mov esi, dword ptr [esi + 0x188]
// 00844a2d  8908                 mov dword ptr [eax], ecx
// 00844a2f  03cb                 add ecx, ebx
// 00844a31  894808               mov dword ptr [eax + 8], ecx
// 00844a34  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00844a38  897004               mov dword ptr [eax + 4], esi
// 00844a3b  03f1                 add esi, ecx
// 00844a3d  5f                   pop edi
// 00844a3e  89700c               mov dword ptr [eax + 0xc], esi
// 00844a41  5e                   pop esi
// 00844a42  5b                   pop ebx
// 00844a43  83c448               add esp, 0x48
// 00844a46  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalculatePopupRect@CXTPPopupBar@@MAE?AVCRect@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp