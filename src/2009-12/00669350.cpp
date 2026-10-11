// roc 2009-12 00669350  unit: RBX::VInstance::?$NonFactoryProduct  size: 765 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00669350
//
// 00669350  64a100000000         mov eax, dword ptr fs:[0]
// 00669356  6aff                 push -1
// 00669358  6812699500           push 0x956912
// 0066935d  50                   push eax
// 0066935e  64892500000000       mov dword ptr fs:[0], esp
// 00669365  8b442418             mov eax, dword ptr [esp + 0x18]
// 00669369  83ec48               sub esp, 0x48
// 0066936c  80781900             cmp byte ptr [eax + 0x19], 0
// 00669370  55                   push ebp
// 00669371  8be9                 mov ebp, ecx
// 00669373  7459                 je 0x6693ce
// 00669375  68e4f49900           push 0x99f4e4
// 0066937a  8d4c240c             lea ecx, [esp + 0xc]
// 0066937e  ff15f4b69800         call dword ptr [0x98b6f4]
// 00669384  8d4c2424             lea ecx, [esp + 0x24]
// 00669388  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00669390  ff1554b79800         call dword ptr [0x98b754]
// 00669396  8d442408             lea eax, [esp + 8]
// 0066939a  50                   push eax
// 0066939b  8d4c2434             lea ecx, [esp + 0x34]
// 0066939f  c644245801           mov byte ptr [esp + 0x58], 1
// 006693a4  c744242884f49900     mov dword ptr [esp + 0x28], 0x99f484
// 006693ac  ff15f0b69800         call dword ptr [0x98b6f0]
// 006693b2  688cefa800           push 0xa8ef8c
// 006693b7  8d4c2428             lea ecx, [esp + 0x28]
// 006693bb  51                   push ecx
// 006693bc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 006693c1  c744242c9cf49900     mov dword ptr [esp + 0x2c], 0x99f49c
// 006693c9  e8aab41800           call 0x7f4878
// 006693ce  53                   push ebx
// 006693cf  56                   push esi
// 006693d0  8bd8                 mov ebx, eax
// 006693d2  57                   push edi
// 006693d3  8d4c246c             lea ecx, [esp + 0x6c]
// 006693d7  895c2410             mov dword ptr [esp + 0x10], ebx
// 006693db  e8a0f1ecff           call 0x538580
// 006693e0  8b0b                 mov ecx, dword ptr [ebx]
// 006693e2  80791900             cmp byte ptr [ecx + 0x19], 0
// 006693e6  7405                 je 0x6693ed
// 006693e8  8b7b08               mov edi, dword ptr [ebx + 8]
// 006693eb  eb1b                 jmp 0x669408
// 006693ed  8b5308               mov edx, dword ptr [ebx + 8]
// 006693f0  807a1900             cmp byte ptr [edx + 0x19], 0
// 006693f4  7404                 je 0x6693fa
// 006693f6  8bf9                 mov edi, ecx
// 006693f8  eb0e                 jmp 0x669408
// 006693fa  8b442470             mov eax, dword ptr [esp + 0x70]
// 006693fe  8b7808               mov edi, dword ptr [eax + 8]
// 00669401  8d5008               lea edx, [eax + 8]
// 00669404  3bc3                 cmp eax, ebx
// 00669406  756b                 jne 0x669473
// 00669408  807f1900             cmp byte ptr [edi + 0x19], 0
// 0066940c  8b7304               mov esi, dword ptr [ebx + 4]
// 0066940f  7503                 jne 0x669414
// 00669411  897704               mov dword ptr [edi + 4], esi
// 00669414  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00669417  395804               cmp dword ptr [eax + 4], ebx
// 0066941a  7505                 jne 0x669421
// 0066941c  897804               mov dword ptr [eax + 4], edi
// 0066941f  eb0b                 jmp 0x66942c
// 00669421  391e                 cmp dword ptr [esi], ebx
// 00669423  7504                 jne 0x669429
// 00669425  893e                 mov dword ptr [esi], edi
// 00669427  eb03                 jmp 0x66942c
// 00669429  897e08               mov dword ptr [esi + 8], edi
// 0066942c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0066942f  8b03                 mov eax, dword ptr [ebx]
// 00669431  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00669435  7515                 jne 0x66944c
// 00669437  807f1900             cmp byte ptr [edi + 0x19], 0
// 0066943b  7404                 je 0x669441
// 0066943d  8bc6                 mov eax, esi
// 0066943f  eb09                 jmp 0x66944a
// 00669441  57                   push edi
// 00669442  e8c9e2ecff           call 0x537710
// 00669447  83c404               add esp, 4
// 0066944a  8903                 mov dword ptr [ebx], eax
// 0066944c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0066944f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00669453  394b08               cmp dword ptr [ebx + 8], ecx
// 00669456  7577                 jne 0x6694cf
// 00669458  807f1900             cmp byte ptr [edi + 0x19], 0
// 0066945c  7407                 je 0x669465
// 0066945e  8bc6                 mov eax, esi
// 00669460  894308               mov dword ptr [ebx + 8], eax
// 00669463  eb6a                 jmp 0x6694cf
// 00669465  57                   push edi
// 00669466  e885e2ecff           call 0x5376f0
// 0066946b  83c404               add esp, 4
// 0066946e  894308               mov dword ptr [ebx + 8], eax
// 00669471  eb5c                 jmp 0x6694cf
// 00669473  894104               mov dword ptr [ecx + 4], eax
// 00669476  8b0b                 mov ecx, dword ptr [ebx]
// 00669478  8908                 mov dword ptr [eax], ecx
// 0066947a  3b4308               cmp eax, dword ptr [ebx + 8]
// 0066947d  7504                 jne 0x669483
// 0066947f  8bf0                 mov esi, eax
// 00669481  eb19                 jmp 0x66949c
// 00669483  807f1900             cmp byte ptr [edi + 0x19], 0
// 00669487  8b7004               mov esi, dword ptr [eax + 4]
// 0066948a  7503                 jne 0x66948f
// 0066948c  897704               mov dword ptr [edi + 4], esi
// 0066948f  893e                 mov dword ptr [esi], edi
// 00669491  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00669494  890a                 mov dword ptr [edx], ecx
// 00669496  8b5308               mov edx, dword ptr [ebx + 8]
// 00669499  894204               mov dword ptr [edx + 4], eax
// 0066949c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0066949f  395904               cmp dword ptr [ecx + 4], ebx
// 006694a2  7505                 jne 0x6694a9
// 006694a4  894104               mov dword ptr [ecx + 4], eax
// 006694a7  eb0e                 jmp 0x6694b7
// 006694a9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006694ac  3919                 cmp dword ptr [ecx], ebx
// 006694ae  7504                 jne 0x6694b4
// 006694b0  8901                 mov dword ptr [ecx], eax
// 006694b2  eb03                 jmp 0x6694b7
// 006694b4  894108               mov dword ptr [ecx + 8], eax
// 006694b7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006694ba  894804               mov dword ptr [eax + 4], ecx
// 006694bd  8d4b18               lea ecx, [ebx + 0x18]
// 006694c0  83c018               add eax, 0x18
// 006694c3  3bc1                 cmp eax, ecx
// 006694c5  7408                 je 0x6694cf
// 006694c7  8a19                 mov bl, byte ptr [ecx]
// 006694c9  8a10                 mov dl, byte ptr [eax]
// 006694cb  8818                 mov byte ptr [eax], bl
// 006694cd  8811                 mov byte ptr [ecx], dl
// 006694cf  8b542410             mov edx, dword ptr [esp + 0x10]
// 006694d3  b301                 mov bl, 1
// 006694d5  385a18               cmp byte ptr [edx + 0x18], bl
// 006694d8  0f85fd000000         jne 0x6695db
// 006694de  8b4518               mov eax, dword ptr [ebp + 0x18]
// 006694e1  3b7804               cmp edi, dword ptr [eax + 4]
// 006694e4  0f84ee000000         je 0x6695d8
// 006694ea  8d9b00000000         lea ebx, [ebx]
// 006694f0  385f18               cmp byte ptr [edi + 0x18], bl
// 006694f3  0f85df000000         jne 0x6695d8
// 006694f9  8b06                 mov eax, dword ptr [esi]
// 006694fb  3bf8                 cmp edi, eax
// 006694fd  7565                 jne 0x669564
// 006694ff  8b4608               mov eax, dword ptr [esi + 8]
// 00669502  80781800             cmp byte ptr [eax + 0x18], 0
// 00669506  7512                 jne 0x66951a
// 00669508  885818               mov byte ptr [eax + 0x18], bl
// 0066950b  56                   push esi
// 0066950c  8bcd                 mov ecx, ebp
// 0066950e  c6461800             mov byte ptr [esi + 0x18], 0
// 00669512  e8f9ceffff           call 0x666410
// 00669517  8b4608               mov eax, dword ptr [esi + 8]
// 0066951a  80781900             cmp byte ptr [eax + 0x19], 0
// 0066951e  7574                 jne 0x669594
// 00669520  8b08                 mov ecx, dword ptr [eax]
// 00669522  385918               cmp byte ptr [ecx + 0x18], bl
// 00669525  7508                 jne 0x66952f
// 00669527  8b5008               mov edx, dword ptr [eax + 8]
// 0066952a  385a18               cmp byte ptr [edx + 0x18], bl
// 0066952d  7461                 je 0x669590
// 0066952f  8b4808               mov ecx, dword ptr [eax + 8]
// 00669532  385918               cmp byte ptr [ecx + 0x18], bl
// 00669535  7514                 jne 0x66954b
// 00669537  8b10                 mov edx, dword ptr [eax]
// 00669539  885a18               mov byte ptr [edx + 0x18], bl
// 0066953c  50                   push eax
// 0066953d  8bcd                 mov ecx, ebp
// 0066953f  c6401800             mov byte ptr [eax + 0x18], 0
// 00669543  e8f898dcff           call 0x432e40
// 00669548  8b4608               mov eax, dword ptr [esi + 8]
// 0066954b  8a4e18               mov cl, byte ptr [esi + 0x18]
// 0066954e  884818               mov byte ptr [eax + 0x18], cl
// 00669551  885e18               mov byte ptr [esi + 0x18], bl
// 00669554  8b5008               mov edx, dword ptr [eax + 8]
// 00669557  56                   push esi
// 00669558  8bcd                 mov ecx, ebp
// 0066955a  885a18               mov byte ptr [edx + 0x18], bl
// 0066955d  e8aeceffff           call 0x666410
// 00669562  eb74                 jmp 0x6695d8
// 00669564  80781800             cmp byte ptr [eax + 0x18], 0
// 00669568  7511                 jne 0x66957b
// 0066956a  885818               mov byte ptr [eax + 0x18], bl
// 0066956d  56                   push esi
// 0066956e  8bcd                 mov ecx, ebp
// 00669570  c6461800             mov byte ptr [esi + 0x18], 0
// 00669574  e8c798dcff           call 0x432e40
// 00669579  8b06                 mov eax, dword ptr [esi]
// 0066957b  80781900             cmp byte ptr [eax + 0x19], 0
// 0066957f  7513                 jne 0x669594
// 00669581  8b4808               mov ecx, dword ptr [eax + 8]
// 00669584  385918               cmp byte ptr [ecx + 0x18], bl
// 00669587  751e                 jne 0x6695a7
// 00669589  8b10                 mov edx, dword ptr [eax]
// 0066958b  385a18               cmp byte ptr [edx + 0x18], bl
// 0066958e  7517                 jne 0x6695a7
// 00669590  c6401800             mov byte ptr [eax + 0x18], 0
// 00669594  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00669597  8bfe                 mov edi, esi
// 00669599  8b7604               mov esi, dword ptr [esi + 4]
// 0066959c  3b7804               cmp edi, dword ptr [eax + 4]
// 0066959f  0f854bffffff         jne 0x6694f0
// 006695a5  eb31                 jmp 0x6695d8
// 006695a7  8b08                 mov ecx, dword ptr [eax]
// 006695a9  385918               cmp byte ptr [ecx + 0x18], bl
// 006695ac  7514                 jne 0x6695c2
// 006695ae  8b5008               mov edx, dword ptr [eax + 8]
// 006695b1  885a18               mov byte ptr [edx + 0x18], bl
// 006695b4  50                   push eax
// 006695b5  8bcd                 mov ecx, ebp
// 006695b7  c6401800             mov byte ptr [eax + 0x18], 0
// 006695bb  e850ceffff           call 0x666410
// 006695c0  8b06                 mov eax, dword ptr [esi]
// 006695c2  8a4e18               mov cl, byte ptr [esi + 0x18]
// 006695c5  884818               mov byte ptr [eax + 0x18], cl
// 006695c8  885e18               mov byte ptr [esi + 0x18], bl
// 006695cb  8b10                 mov edx, dword ptr [eax]
// 006695cd  56                   push esi
// 006695ce  8bcd                 mov ecx, ebp
// 006695d0  885a18               mov byte ptr [edx + 0x18], bl
// 006695d3  e86898dcff           call 0x432e40
// 006695d8  885f18               mov byte ptr [edi + 0x18], bl
// 006695db  8b442410             mov eax, dword ptr [esp + 0x10]
// 006695df  8b7014               mov esi, dword ptr [eax + 0x14]
// 006695e2  85f6                 test esi, esi
// 006695e4  742a                 je 0x669610
// 006695e6  8d4e04               lea ecx, [esi + 4]
// 006695e9  83caff               or edx, 0xffffffff
// 006695ec  f00fc111             lock xadd dword ptr [ecx], edx
// 006695f0  751e                 jne 0x669610
// 006695f2  8b06                 mov eax, dword ptr [esi]
// 006695f4  8b5004               mov edx, dword ptr [eax + 4]
// 006695f7  8bce                 mov ecx, esi
// 006695f9  ffd2                 call edx
// 006695fb  8d4608               lea eax, [esi + 8]
// 006695fe  83c9ff               or ecx, 0xffffffff
// 00669601  f00fc108             lock xadd dword ptr [eax], ecx
// 00669605  7509                 jne 0x669610
// 00669607  8b16                 mov edx, dword ptr [esi]
// 00669609  8b4208               mov eax, dword ptr [edx + 8]
// 0066960c  8bce                 mov ecx, esi
// 0066960e  ffd0                 call eax
// 00669610  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00669614  51                   push ecx
// 00669615  e840a21800           call 0x7f385a
// 0066961a  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0066961d  83c404               add esp, 4
// 00669620  5f                   pop edi
// 00669621  5e                   pop esi
// 00669622  5b                   pop ebx
// 00669623  85c0                 test eax, eax
// 00669625  7604                 jbe 0x66962b
// 00669627  48                   dec eax
// 00669628  89451c               mov dword ptr [ebp + 0x1c], eax
// 0066962b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0066962f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00669633  8b5500               mov edx, dword ptr [ebp]
// 00669636  894804               mov dword ptr [eax + 4], ecx
// 00669639  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0066963d  8910                 mov dword ptr [eax], edx
// 0066963f  5d                   pop ebp
// 00669640  64890d00000000       mov dword ptr fs:[0], ecx
// 00669647  83c454               add esp, 0x54
// 0066964a  c20c00               ret 0xc
// library openrbx-client/App\reflection\signal.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/signal.cpp
