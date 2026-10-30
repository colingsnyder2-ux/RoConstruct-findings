// roc 2010-06 00851090  unit: CXTPReportPaintManager  size: 1759 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00851090
//
// 00851090  6aff                 push -1
// 00851092  68b17c9b00           push 0x9b7cb1
// 00851097  64a100000000         mov eax, dword ptr fs:[0]
// 0085109d  50                   push eax
// 0085109e  83ec64               sub esp, 0x64
// 008510a1  53                   push ebx
// 008510a2  55                   push ebp
// 008510a3  56                   push esi
// 008510a4  57                   push edi
// 008510a5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008510aa  33c4                 xor eax, esp
// 008510ac  50                   push eax
// 008510ad  8d442478             lea eax, [esp + 0x78]
// 008510b1  64a300000000         mov dword ptr fs:[0], eax
// 008510b7  8bf9                 mov edi, ecx
// 008510b9  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 008510c0  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 008510c7  85f6                 test esi, esi
// 008510c9  7431                 je 0x8510fc
// 008510cb  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008510d2  e8c9abf8ff           call 0x7dbca0
// 008510d7  85c0                 test eax, eax
// 008510d9  7421                 je 0x8510fc
// 008510db  83bc249400000000     cmp dword ptr [esp + 0x94], 0
// 008510e3  7517                 jne 0x8510fc
// 008510e5  83bc249800000000     cmp dword ptr [esp + 0x98], 0
// 008510ed  750d                 jne 0x8510fc
// 008510ef  837d4000             cmp dword ptr [ebp + 0x40], 0
// 008510f3  7407                 je 0x8510fc
// 008510f5  b801000000           mov eax, 1
// 008510fa  eb02                 jmp 0x8510fe
// 008510fc  33c0                 xor eax, eax
// 008510fe  85f6                 test esi, esi
// 00851100  7412                 je 0x851114
// 00851102  85c0                 test eax, eax
// 00851104  750e                 jne 0x851114
// 00851106  bb01000000           mov ebx, 1
// 0085110b  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 00851112  eb12                 jmp 0x851126
// 00851114  c784249000000000000000 mov dword ptr [esp + 0x90], 0
// 0085111f  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 00851126  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0085112d  e86eabf8ff           call 0x7dbca0
// 00851132  85c0                 test eax, eax
// 00851134  7411                 je 0x851147
// 00851136  85f6                 test esi, esi
// 00851138  750d                 jne 0x851147
// 0085113a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00851142  397540               cmp dword ptr [ebp + 0x40], esi
// 00851145  7508                 jne 0x85114f
// 00851147  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0085114f  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00851156  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 0085115d  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00851164  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 0085116b  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0085116f  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 00851172  89542450             mov dword ptr [esp + 0x50], edx
// 00851176  89442448             mov dword ptr [esp + 0x48], eax
// 0085117a  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00851181  8d9424a4000000       lea edx, [esp + 0xa4]
// 00851188  894c2414             mov dword ptr [esp + 0x14], ecx
// 0085118c  52                   push edx
// 0085118d  8bcd                 mov ecx, ebp
// 0085118f  89442458             mov dword ptr [esp + 0x58], eax
// 00851193  e898cff7ff           call 0x7ce130
// 00851198  33c0                 xor eax, eax
// 0085119a  89842480000000       mov dword ptr [esp + 0x80], eax
// 008511a1  3bd8                 cmp ebx, eax
// 008511a3  0f8511020000         jne 0x8513ba
// 008511a9  3987bc020000         cmp dword ptr [edi + 0x2bc], eax
// 008511af  0f8505020000         jne 0x8513ba
// 008511b5  c744241804000000     mov dword ptr [esp + 0x18], 4
// 008511bd  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008511c4  8b17                 mov edx, dword ptr [edi]
// 008511c6  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 008511cd  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 008511d3  8d44241c             lea eax, [esp + 0x1c]
// 008511d7  50                   push eax
// 008511d8  83ec10               sub esp, 0x10
// 008511db  8bc4                 mov eax, esp
// 008511dd  8908                 mov dword ptr [eax], ecx
// 008511df  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 008511e6  894804               mov dword ptr [eax + 4], ecx
// 008511e9  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 008511f0  894808               mov dword ptr [eax + 8], ecx
// 008511f3  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008511fa  55                   push ebp
// 008511fb  89480c               mov dword ptr [eax + 0xc], ecx
// 008511fe  56                   push esi
// 008511ff  8bcf                 mov ecx, edi
// 00851201  ffd2                 call edx
// 00851203  8b4778               mov eax, dword ptr [edi + 0x78]
// 00851206  83f8ff               cmp eax, -1
// 00851209  7503                 jne 0x85120e
// 0085120b  8b4774               mov eax, dword ptr [edi + 0x74]
// 0085120e  8b16                 mov edx, dword ptr [esi]
// 00851210  50                   push eax
// 00851211  8b4234               mov eax, dword ptr [edx + 0x34]
// 00851214  8bce                 mov ecx, esi
// 00851216  ffd0                 call eax
// 00851218  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0085121f  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00851226  83c9ff               or ecx, 0xffffffff
// 00851229  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 0085122d  89542438             mov dword ptr [esp + 0x38], edx
// 00851231  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 00851238  03c1                 add eax, ecx
// 0085123a  83bda800000000       cmp dword ptr [ebp + 0xa8], 0
// 00851241  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00851248  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 0085124f  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00851253  89542440             mov dword ptr [esp + 0x40], edx
// 00851257  89442444             mov dword ptr [esp + 0x44], eax
// 0085125b  750f                 jne 0x85126c
// 0085125d  85db                 test ebx, ebx
// 0085125f  750b                 jne 0x85126c
// 00851261  8bcd                 mov ecx, ebp
// 00851263  e838adf8ff           call 0x7dbfa0
// 00851268  01442438             add dword ptr [esp + 0x38], eax
// 0085126c  8bcd                 mov ecx, ebp
// 0085126e  e8eda9f8ff           call 0x7dbc60
// 00851273  85c0                 test eax, eax
// 00851275  7411                 je 0x851288
// 00851277  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0085127b  c784248800000001000000 mov dword ptr [esp + 0x88], 1
// 00851286  740b                 je 0x851293
// 00851288  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 00851293  8d4730               lea eax, [edi + 0x30]
// 00851296  50                   push eax
// 00851297  56                   push esi
// 00851298  8d4c2470             lea ecx, [esp + 0x70]
// 0085129c  e8ffe3faff           call 0x7ff6a0
// 008512a1  8d4c2428             lea ecx, [esp + 0x28]
// 008512a5  51                   push ecx
// 008512a6  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 008512ad  c684248400000001     mov byte ptr [esp + 0x84], 1
// 008512b5  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008512bb  50                   push eax
// 008512bc  8d8c24ac000000       lea ecx, [esp + 0xac]
// 008512c3  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008512c9  8b5608               mov edx, dword ptr [esi + 8]
// 008512cc  50                   push eax
// 008512cd  52                   push edx
// 008512ce  ff1594a19e00         call dword ptr [0x9ea194]
// 008512d4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008512d8  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008512dc  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008512e3  896c2420             mov dword ptr [esp + 0x20], ebp
// 008512e7  89442424             mov dword ptr [esp + 0x24], eax
// 008512eb  e8d0a7f8ff           call 0x7dbac0
// 008512f0  85c0                 test eax, eax
// 008512f2  0f84c2010000         je 0x8514ba
// 008512f8  85db                 test ebx, ebx
// 008512fa  0f85ba010000         jne 0x8514ba
// 00851300  83c506               add ebp, 6
// 00851303  837c2414ff           cmp dword ptr [esp + 0x14], -1
// 00851308  744b                 je 0x851355
// 0085130a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085130e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00851312  8b1f                 mov ebx, dword ptr [edi]
// 00851314  51                   push ecx
// 00851315  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00851319  83ec10               sub esp, 0x10
// 0085131c  8bc4                 mov eax, esp
// 0085131e  8910                 mov dword ptr [eax], edx
// 00851320  8b542454             mov edx, dword ptr [esp + 0x54]
// 00851324  894804               mov dword ptr [eax + 4], ecx
// 00851327  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0085132b  895008               mov dword ptr [eax + 8], edx
// 0085132e  89480c               mov dword ptr [eax + 0xc], ecx
// 00851331  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00851338  e8d3a9f8ff           call 0x7dbd10
// 0085133d  8b93a8000000         mov edx, dword ptr [ebx + 0xa8]
// 00851343  50                   push eax
// 00851344  6a00                 push 0
// 00851346  8bcf                 mov ecx, edi
// 00851348  ffd2                 call edx
// 0085134a  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 00851351  8d6c2802             lea ebp, [eax + ebp + 2]
// 00851355  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 0085135d  7403                 je 0x851362
// 0085135f  83c51b               add ebp, 0x1b
// 00851362  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00851366  8b442438             mov eax, dword ptr [esp + 0x38]
// 0085136a  2bc8                 sub ecx, eax
// 0085136c  3bcd                 cmp ecx, ebp
// 0085136e  0f8e4a010000         jle 0x8514be
// 00851374  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0085137b  e840a7f8ff           call 0x7dbac0
// 00851380  a802                 test al, 2
// 00851382  740a                 je 0x85138e
// 00851384  8b542440             mov edx, dword ptr [esp + 0x40]
// 00851388  2bd5                 sub edx, ebp
// 0085138a  89542438             mov dword ptr [esp + 0x38], edx
// 0085138e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00851395  e826a7f8ff           call 0x7dbac0
// 0085139a  a801                 test al, 1
// 0085139c  0f8418010000         je 0x8514ba
// 008513a2  8b442440             mov eax, dword ptr [esp + 0x40]
// 008513a6  2bc5                 sub eax, ebp
// 008513a8  03442438             add eax, dword ptr [esp + 0x38]
// 008513ac  99                   cdq 
// 008513ad  2bc2                 sub eax, edx
// 008513af  d1f8                 sar eax, 1
// 008513b1  89442438             mov dword ptr [esp + 0x38], eax
// 008513b5  e904010000           jmp 0x8514be
// 008513ba  89442418             mov dword ptr [esp + 0x18], eax
// 008513be  3bd8                 cmp ebx, eax
// 008513c0  0f84f7fdffff         je 0x8511bd
// 008513c6  83bfbc02000004       cmp dword ptr [edi + 0x2bc], 4
// 008513cd  755d                 jne 0x85142c
// 008513cf  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 008513d6  50                   push eax
// 008513d7  50                   push eax
// 008513d8  8d8754010000         lea eax, [edi + 0x154]
// 008513de  50                   push eax
// 008513df  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 008513e6  51                   push ecx
// 008513e7  56                   push esi
// 008513e8  e813fffaff           call 0x801300
// 008513ed  8bc8                 mov ecx, eax
// 008513ef  e82c02fbff           call 0x801620
// 008513f4  8b87bc010000         mov eax, dword ptr [edi + 0x1bc]
// 008513fa  83f8ff               cmp eax, -1
// 008513fd  7506                 jne 0x851405
// 008513ff  8b87b8010000         mov eax, dword ptr [edi + 0x1b8]
// 00851405  8b8fbc010000         mov ecx, dword ptr [edi + 0x1bc]
// 0085140b  83f9ff               cmp ecx, -1
// 0085140e  7506                 jne 0x851416
// 00851410  8b8fb8010000         mov ecx, dword ptr [edi + 0x1b8]
// 00851416  50                   push eax
// 00851417  51                   push ecx
// 00851418  8d94249c000000       lea edx, [esp + 0x9c]
// 0085141f  52                   push edx
// 00851420  8bce                 mov ecx, esi
// 00851422  e81173f5ff           call 0x7a8738
// 00851427  e9d7fdffff           jmp 0x851203
// 0085142c  8b87d8000000         mov eax, dword ptr [edi + 0xd8]
// 00851432  83f8ff               cmp eax, -1
// 00851435  7508                 jne 0x85143f
// 00851437  8b8fd4000000         mov ecx, dword ptr [edi + 0xd4]
// 0085143d  eb02                 jmp 0x851441
// 0085143f  8bc8                 mov ecx, eax
// 00851441  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 00851447  83f8ff               cmp eax, -1
// 0085144a  7506                 jne 0x851452
// 0085144c  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 00851452  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 00851459  51                   push ecx
// 0085145a  50                   push eax
// 0085145b  8d84249c000000       lea eax, [esp + 0x9c]
// 00851462  50                   push eax
// 00851463  8bce                 mov ecx, esi
// 00851465  e8ce72f5ff           call 0x7a8738
// 0085146a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00851471  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00851478  51                   push ecx
// 00851479  52                   push edx
// 0085147a  8d442430             lea eax, [esp + 0x30]
// 0085147e  50                   push eax
// 0085147f  8bce                 mov ecx, esi
// 00851481  e8f673f5ff           call 0x7a887c
// 00851486  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0085148d  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 00851494  51                   push ecx
// 00851495  52                   push edx
// 00851496  8bce                 mov ecx, esi
// 00851498  e8d973f5ff           call 0x7a8876
// 0085149d  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 008514a4  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008514ab  48                   dec eax
// 008514ac  50                   push eax
// 008514ad  51                   push ecx
// 008514ae  8bce                 mov ecx, esi
// 008514b0  e8c173f5ff           call 0x7a8876
// 008514b5  e949fdffff           jmp 0x851203
// 008514ba  8b442438             mov eax, dword ptr [esp + 0x38]
// 008514be  837c2414ff           cmp dword ptr [esp + 0x14], -1
// 008514c3  0f8481000000         je 0x85154a
// 008514c9  85db                 test ebx, ebx
// 008514cb  757d                 jne 0x85154a
// 008514cd  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008514d1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008514d5  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008514d9  8bc8                 mov ecx, eax
// 008514db  8b442444             mov eax, dword ptr [esp + 0x44]
// 008514df  89442464             mov dword ptr [esp + 0x64], eax
// 008514e3  03c3                 add eax, ebx
// 008514e5  8b1f                 mov ebx, dword ptr [edi]
// 008514e7  89442464             mov dword ptr [esp + 0x64], eax
// 008514eb  8b442414             mov eax, dword ptr [esp + 0x14]
// 008514ef  50                   push eax
// 008514f0  83ec10               sub esp, 0x10
// 008514f3  8bc4                 mov eax, esp
// 008514f5  8908                 mov dword ptr [eax], ecx
// 008514f7  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008514fb  895004               mov dword ptr [eax + 4], edx
// 008514fe  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00851502  896808               mov dword ptr [eax + 8], ebp
// 00851505  89480c               mov dword ptr [eax + 0xc], ecx
// 00851508  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0085150c  83ec10               sub esp, 0x10
// 0085150f  8bc4                 mov eax, esp
// 00851511  8910                 mov dword ptr [eax], edx
// 00851513  8b542474             mov edx, dword ptr [esp + 0x74]
// 00851517  894804               mov dword ptr [eax + 4], ecx
// 0085151a  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0085151e  895008               mov dword ptr [eax + 8], edx
// 00851521  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 00851528  89480c               mov dword ptr [eax + 0xc], ecx
// 0085152b  8b83ac000000         mov eax, dword ptr [ebx + 0xac]
// 00851531  52                   push edx
// 00851532  56                   push esi
// 00851533  8bcf                 mov ecx, edi
// 00851535  ffd0                 call eax
// 00851537  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0085153b  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 00851542  8d540102             lea edx, [ecx + eax + 2]
// 00851546  89542438             mov dword ptr [esp + 0x38], edx
// 0085154a  6a01                 push 1
// 0085154c  8bce                 mov ecx, esi
// 0085154e  e861b81200           call 0x97cdb4
// 00851553  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00851557  8b442438             mov eax, dword ptr [esp + 0x38]
// 0085155b  83e903               sub ecx, 3
// 0085155e  83c003               add eax, 3
// 00851561  894c2440             mov dword ptr [esp + 0x40], ecx
// 00851565  894c2450             mov dword ptr [esp + 0x50], ecx
// 00851569  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0085156d  8be8                 mov ebp, eax
// 0085156f  89442438             mov dword ptr [esp + 0x38], eax
// 00851573  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00851577  894c2454             mov dword ptr [esp + 0x54], ecx
// 0085157b  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00851582  896c2448             mov dword ptr [esp + 0x48], ebp
// 00851586  8944244c             mov dword ptr [esp + 0x4c], eax
// 0085158a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00851590  85c0                 test eax, eax
// 00851592  0f8e2f010000         jle 0x8516c7
// 00851598  8b542440             mov edx, dword ptr [esp + 0x40]
// 0085159c  3b542438             cmp edx, dword ptr [esp + 0x38]
// 008515a0  0f8e21010000         jle 0x8516c7
// 008515a6  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 008515ac  83f8ff               cmp eax, -1
// 008515af  7506                 jne 0x8515b7
// 008515b1  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008515b7  8b16                 mov edx, dword ptr [esi]
// 008515b9  50                   push eax
// 008515ba  8b4238               mov eax, dword ptr [edx + 0x38]
// 008515bd  8bce                 mov ecx, esi
// 008515bf  ffd0                 call eax
// 008515c1  83bf2802000000       cmp dword ptr [edi + 0x228], 0
// 008515c8  744c                 je 0x851616
// 008515ca  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 008515d2  7442                 je 0x851616
// 008515d4  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008515d8  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 008515dc  8b542428             mov edx, dword ptr [esp + 0x28]
// 008515e0  8bcb                 mov ecx, ebx
// 008515e2  2bcd                 sub ecx, ebp
// 008515e4  8d41e5               lea eax, [ecx - 0x1b]
// 008515e7  3bd0                 cmp edx, eax
// 008515e9  8bca                 mov ecx, edx
// 008515eb  7c02                 jl 0x8515ef
// 008515ed  8bc8                 mov ecx, eax
// 008515ef  83f9fb               cmp ecx, -5
// 008515f2  7d0a                 jge 0x8515fe
// 008515f4  c7442420fbffffff     mov dword ptr [esp + 0x20], 0xfffffffb
// 008515fc  eb08                 jmp 0x851606
// 008515fe  3bd0                 cmp edx, eax
// 00851600  7c04                 jl 0x851606
// 00851602  89442420             mov dword ptr [esp + 0x20], eax
// 00851606  8b542420             mov edx, dword ptr [esp + 0x20]
// 0085160a  8d442a08             lea eax, [edx + ebp + 8]
// 0085160e  3bd8                 cmp ebx, eax
// 00851610  7c04                 jl 0x851616
// 00851612  89442440             mov dword ptr [esp + 0x40], eax
// 00851616  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0085161d  e89ea4f8ff           call 0x7dbac0
// 00851622  a810                 test al, 0x10
// 00851624  745e                 je 0x851684
// 00851626  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0085162a  8b542440             mov edx, dword ptr [esp + 0x40]
// 0085162e  8b442438             mov eax, dword ptr [esp + 0x38]
// 00851632  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00851636  68108c0000           push 0x8c10
// 0085163b  8d4c242c             lea ecx, [esp + 0x2c]
// 0085163f  89542434             mov dword ptr [esp + 0x34], edx
// 00851643  51                   push ecx
// 00851644  89442430             mov dword ptr [esp + 0x30], eax
// 00851648  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0085164c  8d9424ac000000       lea edx, [esp + 0xac]
// 00851653  52                   push edx
// 00851654  8bce                 mov ecx, esi
// 00851656  bb10880000           mov ebx, 0x8810
// 0085165b  89442440             mov dword ptr [esp + 0x40], eax
// 0085165f  e87cc6f5ff           call 0x7adce0
// 00851664  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00851668  2b442434             sub eax, dword ptr [esp + 0x34]
// 0085166c  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 00851670  03442444             add eax, dword ptr [esp + 0x44]
// 00851674  83f801               cmp eax, 1
// 00851677  7e10                 jle 0x851689
// 00851679  99                   cdq 
// 0085167a  2bc2                 sub eax, edx
// 0085167c  d1f8                 sar eax, 1
// 0085167e  0144243c             add dword ptr [esp + 0x3c], eax
// 00851682  eb05                 jmp 0x851689
// 00851684  bb24880000           mov ebx, 0x8824
// 00851689  8b2e                 mov ebp, dword ptr [esi]
// 0085168b  53                   push ebx
// 0085168c  8d44243c             lea eax, [esp + 0x3c]
// 00851690  50                   push eax
// 00851691  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00851698  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0085169e  50                   push eax
// 0085169f  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 008516a6  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008516ac  8b5570               mov edx, dword ptr [ebp + 0x70]
// 008516af  50                   push eax
// 008516b0  8bce                 mov ecx, esi
// 008516b2  ffd2                 call edx
// 008516b4  8b442420             mov eax, dword ptr [esp + 0x20]
// 008516b8  01442448             add dword ptr [esp + 0x48], eax
// 008516bc  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 008516c3  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 008516c7  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 008516cf  743d                 je 0x85170e
// 008516d1  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008516d8  f7db                 neg ebx
// 008516da  1bdb                 sbb ebx, ebx
// 008516dc  83e307               and ebx, 7
// 008516df  83c30a               add ebx, 0xa
// 008516e2  03eb                 add ebp, ebx
// 008516e4  e877a4f8ff           call 0x7dbb60
// 008516e9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008516ed  8b542450             mov edx, dword ptr [esp + 0x50]
// 008516f1  50                   push eax
// 008516f2  83ec10               sub esp, 0x10
// 008516f5  8bc4                 mov eax, esp
// 008516f7  8928                 mov dword ptr [eax], ebp
// 008516f9  894804               mov dword ptr [eax + 4], ecx
// 008516fc  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00851700  895008               mov dword ptr [eax + 8], edx
// 00851703  89480c               mov dword ptr [eax + 0xc], ecx
// 00851706  56                   push esi
// 00851707  8bcf                 mov ecx, edi
// 00851709  e842e4ffff           call 0x84fb50
// 0085170e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00851713  7426                 je 0x85173b
// 00851715  83bf1002000000       cmp dword ptr [edi + 0x210], 0
// 0085171c  741d                 je 0x85173b
// 0085171e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00851721  8b542418             mov edx, dword ptr [esp + 0x18]
// 00851725  019424a0000000       add dword ptr [esp + 0xa0], edx
// 0085172c  8d842494000000       lea eax, [esp + 0x94]
// 00851733  50                   push eax
// 00851734  51                   push ecx
// 00851735  ff15dcba9e00         call dword ptr [0x9ebadc]
// 0085173b  8d4c2468             lea ecx, [esp + 0x68]
// 0085173f  c684248000000000     mov byte ptr [esp + 0x80], 0
// 00851747  e8d4dffaff           call 0x7ff720
// 0085174c  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00851753  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00851759  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0085175d  64890d00000000       mov dword ptr fs:[0], ecx
// 00851764  59                   pop ecx
// 00851765  5f                   pop edi
// 00851766  5e                   pop esi
// 00851767  5d                   pop ebp
// 00851768  5b                   pop ebx
// 00851769  83c470               add esp, 0x70
// 0085176c  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawColumn@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportColumn@@PAVCXTPReportHeader@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp