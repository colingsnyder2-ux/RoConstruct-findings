// roc 2011-06 00815020  unit: CXTPPaintManager  size: 1041 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00815020
//
// 00815020  6aff                 push -1
// 00815022  68a826a000           push 0xa026a8
// 00815027  64a100000000         mov eax, dword ptr fs:[0]
// 0081502d  50                   push eax
// 0081502e  83ec5c               sub esp, 0x5c
// 00815031  53                   push ebx
// 00815032  55                   push ebp
// 00815033  56                   push esi
// 00815034  57                   push edi
// 00815035  a12058c900           mov eax, dword ptr [0xc95820]
// 0081503a  33c4                 xor eax, esp
// 0081503c  50                   push eax
// 0081503d  8d442470             lea eax, [esp + 0x70]
// 00815041  64a300000000         mov dword ptr fs:[0], eax
// 00815047  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0081504b  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 00815051  8bb158010000         mov esi, dword ptr [ecx + 0x158]
// 00815057  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0081505e  83e902               sub ecx, 2
// 00815061  8944241c             mov dword ptr [esp + 0x1c], eax
// 00815065  0f841a030000         je 0x815385
// 0081506b  83e901               sub ecx, 1
// 0081506e  0f849b020000         je 0x81530f
// 00815074  83e901               sub ecx, 1
// 00815077  0f859e030000         jne 0x81541b
// 0081507d  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 00815084  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 0081508b  2bbc2488000000       sub edi, dword ptr [esp + 0x88]
// 00815092  2b9c248c000000       sub ebx, dword ptr [esp + 0x8c]
// 00815099  8b2d7801a400         mov ebp, dword ptr [0xa40178]
// 0081509f  33c0                 xor eax, eax
// 008150a1  50                   push eax
// 008150a2  89442458             mov dword ptr [esp + 0x58], eax
// 008150a6  b901000000           mov ecx, 1
// 008150ab  50                   push eax
// 008150ac  66894c245c           mov word ptr [esp + 0x5c], cx
// 008150b1  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 008150b8  51                   push ecx
// 008150b9  ba20000000           mov edx, 0x20
// 008150be  6689542462           mov word ptr [esp + 0x62], dx
// 008150c3  50                   push eax
// 008150c4  8d542458             lea edx, [esp + 0x58]
// 008150c8  52                   push edx
// 008150c9  8944245c             mov dword ptr [esp + 0x5c], eax
// 008150cd  89442460             mov dword ptr [esp + 0x60], eax
// 008150d1  89442464             mov dword ptr [esp + 0x64], eax
// 008150d5  8944246c             mov dword ptr [esp + 0x6c], eax
// 008150d9  50                   push eax
// 008150da  89442474             mov dword ptr [esp + 0x74], eax
// 008150de  89442478             mov dword ptr [esp + 0x78], eax
// 008150e2  8944247c             mov dword ptr [esp + 0x7c], eax
// 008150e6  89842480000000       mov dword ptr [esp + 0x80], eax
// 008150ed  89842484000000       mov dword ptr [esp + 0x84], eax
// 008150f4  c744246028000000     mov dword ptr [esp + 0x60], 0x28
// 008150fc  897c2464             mov dword ptr [esp + 0x64], edi
// 00815100  895c2468             mov dword ptr [esp + 0x68], ebx
// 00815104  89442470             mov dword ptr [esp + 0x70], eax
// 00815108  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 0081510f  ffd5                 call ebp
// 00815111  6a00                 push 0
// 00815113  6a00                 push 0
// 00815115  89442428             mov dword ptr [esp + 0x28], eax
// 00815119  8d44241c             lea eax, [esp + 0x1c]
// 0081511d  50                   push eax
// 0081511e  6a00                 push 0
// 00815120  8d4c2458             lea ecx, [esp + 0x58]
// 00815124  51                   push ecx
// 00815125  6a00                 push 0
// 00815127  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0081512f  ffd5                 call ebp
// 00815131  6a00                 push 0
// 00815133  6a00                 push 0
// 00815135  8d542420             lea edx, [esp + 0x20]
// 00815139  52                   push edx
// 0081513a  89442430             mov dword ptr [esp + 0x30], eax
// 0081513e  6a00                 push 0
// 00815140  8d442458             lea eax, [esp + 0x58]
// 00815144  50                   push eax
// 00815145  6a00                 push 0
// 00815147  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0081514f  ffd5                 call ebp
// 00815151  8d4c2438             lea ecx, [esp + 0x38]
// 00815155  89442428             mov dword ptr [esp + 0x28], eax
// 00815159  e8b65cffff           call 0x80ae14
// 0081515e  6a00                 push 0
// 00815160  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 00815168  ff158401a400         call dword ptr [0xa40184]
// 0081516e  50                   push eax
// 0081516f  8d4c243c             lea ecx, [esp + 0x3c]
// 00815173  e87e5cffff           call 0x80adf6
// 00815178  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0081517c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00815180  8b2d8c01a400         mov ebp, dword ptr [0xa4018c]
// 00815186  51                   push ecx
// 00815187  52                   push edx
// 00815188  ffd5                 call ebp
// 0081518a  89442434             mov dword ptr [esp + 0x34], eax
// 0081518e  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00815195  85c0                 test eax, eax
// 00815197  7403                 je 0x81519c
// 00815199  8b4004               mov eax, dword ptr [eax + 4]
// 0081519c  682000cc00           push 0xcc0020
// 008151a1  6a00                 push 0
// 008151a3  6a00                 push 0
// 008151a5  50                   push eax
// 008151a6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008151aa  53                   push ebx
// 008151ab  57                   push edi
// 008151ac  6a00                 push 0
// 008151ae  6a00                 push 0
// 008151b0  50                   push eax
// 008151b1  ff159001a400         call dword ptr [0xa40190]
// 008151b7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008151bb  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008151bf  51                   push ecx
// 008151c0  52                   push edx
// 008151c1  ffd5                 call ebp
// 008151c3  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008151ca  85c0                 test eax, eax
// 008151cc  7403                 je 0x8151d1
// 008151ce  8b4004               mov eax, dword ptr [eax + 4]
// 008151d1  682000cc00           push 0xcc0020
// 008151d6  6a00                 push 0
// 008151d8  6a00                 push 0
// 008151da  50                   push eax
// 008151db  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008151df  53                   push ebx
// 008151e0  57                   push edi
// 008151e1  6a00                 push 0
// 008151e3  6a00                 push 0
// 008151e5  50                   push eax
// 008151e6  ff159001a400         call dword ptr [0xa40190]
// 008151ec  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008151f0  99                   cdq 
// 008151f1  f7fe                 idiv esi
// 008151f3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008151f7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008151fb  51                   push ecx
// 008151fc  52                   push edx
// 008151fd  89442438             mov dword ptr [esp + 0x38], eax
// 00815201  ffd5                 call ebp
// 00815203  83fe01               cmp esi, 1
// 00815206  0f8ec6000000         jle 0x8152d2
// 0081520c  8d46ff               lea eax, [esi - 1]
// 0081520f  c7842484000000ff000000 mov dword ptr [esp + 0x84], 0xff
// 0081521a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081521e  8bff                 mov edi, edi
// 00815220  ff15f802a400         call dword ptr [0xa402f8]
// 00815226  8be8                 mov ebp, eax
// 00815228  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0081522f  99                   cdq 
// 00815230  f7fe                 idiv esi
// 00815232  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00815239  8b542414             mov edx, dword ptr [esp + 0x14]
// 0081523d  50                   push eax
// 0081523e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00815242  51                   push ecx
// 00815243  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00815247  53                   push ebx
// 00815248  57                   push edi
// 00815249  52                   push edx
// 0081524a  50                   push eax
// 0081524b  e8c0acffff           call 0x80ff10
// 00815250  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00815257  2b84248c000000       sub eax, dword ptr [esp + 0x8c]
// 0081525e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00815262  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00815269  2b8c2488000000       sub ecx, dword ptr [esp + 0x88]
// 00815270  682000cc00           push 0xcc0020
// 00815275  6a00                 push 0
// 00815277  6a00                 push 0
// 00815279  52                   push edx
// 0081527a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 00815281  50                   push eax
// 00815282  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00815289  51                   push ecx
// 0081528a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00815291  50                   push eax
// 00815292  8b4204               mov eax, dword ptr [edx + 4]
// 00815295  51                   push ecx
// 00815296  50                   push eax
// 00815297  ff159001a400         call dword ptr [0xa40190]
// 0081529d  ff15f802a400         call dword ptr [0xa402f8]
// 008152a3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008152a7  2bc5                 sub eax, ebp
// 008152a9  3bc1                 cmp eax, ecx
// 008152ab  7309                 jae 0x8152b6
// 008152ad  2bc8                 sub ecx, eax
// 008152af  51                   push ecx
// 008152b0  ff15f002a400         call dword ptr [0xa402f0]
// 008152b6  81842484000000ff000000 add dword ptr [esp + 0x84], 0xff
// 008152c1  836c241c01           sub dword ptr [esp + 0x1c], 1
// 008152c6  0f8554ffffff         jne 0x815220
// 008152cc  8b2d8c01a400         mov ebp, dword ptr [0xa4018c]
// 008152d2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008152d6  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008152da  51                   push ecx
// 008152db  52                   push edx
// 008152dc  ffd5                 call ebp
// 008152de  8b442420             mov eax, dword ptr [esp + 0x20]
// 008152e2  8b359c01a400         mov esi, dword ptr [0xa4019c]
// 008152e8  50                   push eax
// 008152e9  ffd6                 call esi
// 008152eb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008152ef  51                   push ecx
// 008152f0  ffd6                 call esi
// 008152f2  8b542428             mov edx, dword ptr [esp + 0x28]
// 008152f6  52                   push edx
// 008152f7  ffd6                 call esi
// 008152f9  8d4c2438             lea ecx, [esp + 0x38]
// 008152fd  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00815305  e8f85affff           call 0x80ae02
// 0081530a  e90c010000           jmp 0x81541b
// 0081530f  33ff                 xor edi, edi
// 00815311  85f6                 test esi, esi
// 00815313  0f8e02010000         jle 0x81541b
// 00815319  99                   cdq 
// 0081531a  f7fe                 idiv esi
// 0081531c  8be8                 mov ebp, eax
// 0081531e  8bff                 mov edi, edi
// 00815320  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00815327  2b8c248c000000       sub ecx, dword ptr [esp + 0x8c]
// 0081532e  47                   inc edi
// 0081532f  8bc7                 mov eax, edi
// 00815331  0fafc1               imul eax, ecx
// 00815334  99                   cdq 
// 00815335  f7fe                 idiv esi
// 00815337  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0081533e  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 00815345  2b942488000000       sub edx, dword ptr [esp + 0x88]
// 0081534c  2bc8                 sub ecx, eax
// 0081534e  85db                 test ebx, ebx
// 00815350  7403                 je 0x815355
// 00815352  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00815355  682000cc00           push 0xcc0020
// 0081535a  51                   push ecx
// 0081535b  6a00                 push 0
// 0081535d  53                   push ebx
// 0081535e  50                   push eax
// 0081535f  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00815366  8b4804               mov ecx, dword ptr [eax + 4]
// 00815369  52                   push edx
// 0081536a  6a00                 push 0
// 0081536c  6a00                 push 0
// 0081536e  51                   push ecx
// 0081536f  ff159001a400         call dword ptr [0xa40190]
// 00815375  55                   push ebp
// 00815376  ff15f002a400         call dword ptr [0xa402f0]
// 0081537c  3bfe                 cmp edi, esi
// 0081537e  7ca0                 jl 0x815320
// 00815380  e996000000           jmp 0x81541b
// 00815385  85f6                 test esi, esi
// 00815387  0f8e8e000000         jle 0x81541b
// 0081538d  99                   cdq 
// 0081538e  f7fe                 idiv esi
// 00815390  bd01000000           mov ebp, 1
// 00815395  89b42498000000       mov dword ptr [esp + 0x98], esi
// 0081539c  89442434             mov dword ptr [esp + 0x34], eax
// 008153a0  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 008153a7  8bc7                 mov eax, edi
// 008153a9  2b842488000000       sub eax, dword ptr [esp + 0x88]
// 008153b0  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 008153b7  0fafc5               imul eax, ebp
// 008153ba  99                   cdq 
// 008153bb  f7fe                 idiv esi
// 008153bd  8bcf                 mov ecx, edi
// 008153bf  2bc8                 sub ecx, eax
// 008153c1  8bc3                 mov eax, ebx
// 008153c3  2b84248c000000       sub eax, dword ptr [esp + 0x8c]
// 008153ca  2bf9                 sub edi, ecx
// 008153cc  0fafc5               imul eax, ebp
// 008153cf  99                   cdq 
// 008153d0  f7fe                 idiv esi
// 008153d2  8bd3                 mov edx, ebx
// 008153d4  2bd0                 sub edx, eax
// 008153d6  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008153dd  2bda                 sub ebx, edx
// 008153df  85c0                 test eax, eax
// 008153e1  7403                 je 0x8153e6
// 008153e3  8b4004               mov eax, dword ptr [eax + 4]
// 008153e6  682000cc00           push 0xcc0020
// 008153eb  52                   push edx
// 008153ec  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008153f3  51                   push ecx
// 008153f4  50                   push eax
// 008153f5  8b4204               mov eax, dword ptr [edx + 4]
// 008153f8  53                   push ebx
// 008153f9  57                   push edi
// 008153fa  6a00                 push 0
// 008153fc  6a00                 push 0
// 008153fe  50                   push eax
// 008153ff  ff159001a400         call dword ptr [0xa40190]
// 00815405  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00815409  51                   push ecx
// 0081540a  ff15f002a400         call dword ptr [0xa402f0]
// 00815410  45                   inc ebp
// 00815411  83ac249800000001     sub dword ptr [esp + 0x98], 1
// 00815419  7585                 jne 0x8153a0
// 0081541b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0081541f  64890d00000000       mov dword ptr fs:[0], ecx
// 00815426  59                   pop ecx
// 00815427  5f                   pop edi
// 00815428  5e                   pop esi
// 00815429  5d                   pop ebp
// 0081542a  5b                   pop ebx
// 0081542b  83c468               add esp, 0x68
// 0081542e  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Animate@CXTPPaintManager@@UAEXPAVCDC@@0VCRect@@W4XTPAnimationType@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp