// roc 2009-12 008992f0  unit: CXTPRibbonBar  size: 968 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008992f0
//
// 008992f0  6aff                 push -1
// 008992f2  68e5199600           push 0x9619e5
// 008992f7  64a100000000         mov eax, dword ptr fs:[0]
// 008992fd  50                   push eax
// 008992fe  83ec58               sub esp, 0x58
// 00899301  53                   push ebx
// 00899302  55                   push ebp
// 00899303  56                   push esi
// 00899304  57                   push edi
// 00899305  a10052b600           mov eax, dword ptr [0xb65200]
// 0089930a  33c4                 xor eax, esp
// 0089930c  50                   push eax
// 0089930d  8d44246c             lea eax, [esp + 0x6c]
// 00899311  64a300000000         mov dword ptr fs:[0], eax
// 00899317  8bf9                 mov edi, ecx
// 00899319  33ed                 xor ebp, ebp
// 0089931b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0089931f  8b8f84020000         mov ecx, dword ptr [edi + 0x284]
// 00899325  e836170500           call 0x8eaa60
// 0089932a  8bcf                 mov ecx, edi
// 0089932c  e81fbcffff           call 0x894f50
// 00899331  85c0                 test eax, eax
// 00899333  0f846b030000         je 0x8996a4
// 00899339  e862e0ffff           call 0x8973a0
// 0089933e  8bf0                 mov esi, eax
// 00899340  89742424             mov dword ptr [esp + 0x24], esi
// 00899344  3bf5                 cmp esi, ebp
// 00899346  0f8458030000         je 0x8996a4
// 0089934c  e8cfc2ffff           call 0x895620
// 00899351  85c0                 test eax, eax
// 00899353  7541                 jne 0x899396
// 00899355  39af4c020000         cmp dword ptr [edi + 0x24c], ebp
// 0089935b  7439                 je 0x899396
// 0089935d  39af80020000         cmp dword ptr [edi + 0x280], ebp
// 00899363  7531                 jne 0x899396
// 00899365  8b8f6c020000         mov ecx, dword ptr [edi + 0x26c]
// 0089936b  3bcd                 cmp ecx, ebp
// 0089936d  7414                 je 0x899383
// 0089936f  8d44244c             lea eax, [esp + 0x4c]
// 00899373  50                   push eax
// 00899374  e837c8f5ff           call 0x7f5bb0
// 00899379  8b4808               mov ecx, dword ptr [eax + 8]
// 0089937c  2b08                 sub ecx, dword ptr [eax]
// 0089937e  83c102               add ecx, 2
// 00899381  eb05                 jmp 0x899388
// 00899383  b90c000000           mov ecx, 0xc
// 00899388  8b9734020000         mov edx, dword ptr [edi + 0x234]
// 0089938e  03d1                 add edx, ecx
// 00899390  89971c020000         mov dword ptr [edi + 0x21c], edx
// 00899396  33c0                 xor eax, eax
// 00899398  3bf5                 cmp esi, ebp
// 0089939a  89442418             mov dword ptr [esp + 0x18], eax
// 0089939e  0f8e9c010000         jle 0x899540
// 008993a4  50                   push eax
// 008993a5  8bcf                 mov ecx, edi
// 008993a7  e874f2ffff           call 0x898620
// 008993ac  8bf0                 mov esi, eax
// 008993ae  8bce                 mov ecx, esi
// 008993b0  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 008993ba  e831a0edff           call 0x7733f0
// 008993bf  85c0                 test eax, eax
// 008993c1  0f8466010000         je 0x89952d
// 008993c7  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 008993ce  7421                 je 0x8993f1
// 008993d0  8d44241c             lea eax, [esp + 0x1c]
// 008993d4  50                   push eax
// 008993d5  8bce                 mov ecx, esi
// 008993d7  e864b5ffff           call 0x894940
// 008993dc  834c241401           or dword ptr [esp + 0x14], 1
// 008993e1  8bc8                 mov ecx, eax
// 008993e3  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008993e9  84c0                 test al, al
// 008993eb  7504                 jne 0x8993f1
// 008993ed  32db                 xor bl, bl
// 008993ef  eb02                 jmp 0x8993f3
// 008993f1  b301                 mov bl, 1
// 008993f3  f644241401           test byte ptr [esp + 0x14], 1
// 008993f8  740f                 je 0x899409
// 008993fa  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 008993ff  8d4c241c             lea ecx, [esp + 0x1c]
// 00899403  ff15c0de9800         call dword ptr [0x98dec0]
// 00899409  84db                 test bl, bl
// 0089940b  7407                 je 0x899414
// 0089940d  33ed                 xor ebp, ebp
// 0089940f  e919010000           jmp 0x89952d
// 00899414  85ed                 test ebp, ebp
// 00899416  743e                 je 0x899456
// 00899418  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0089941e  39450c               cmp dword ptr [ebp + 0xc], eax
// 00899421  7533                 jne 0x899456
// 00899423  8d4c2420             lea ecx, [esp + 0x20]
// 00899427  51                   push ecx
// 00899428  8bce                 mov ecx, esi
// 0089942a  e811b5ffff           call 0x894940
// 0089942f  834c241402           or dword ptr [esp + 0x14], 2
// 00899434  8bc8                 mov ecx, eax
// 00899436  c744247400000000     mov dword ptr [esp + 0x74], 0
// 0089943e  ff1580de9800         call dword ptr [0x98de80]
// 00899444  50                   push eax
// 00899445  8d4d08               lea ecx, [ebp + 8]
// 00899448  ff1584de9800         call dword ptr [0x98de84]
// 0089944e  85c0                 test eax, eax
// 00899450  7504                 jne 0x899456
// 00899452  b301                 mov bl, 1
// 00899454  eb02                 jmp 0x899458
// 00899456  32db                 xor bl, bl
// 00899458  f644241402           test byte ptr [esp + 0x14], 2
// 0089945d  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 00899465  740f                 je 0x899476
// 00899467  83642414fd           and dword ptr [esp + 0x14], 0xfffffffd
// 0089946c  8d4c2420             lea ecx, [esp + 0x20]
// 00899470  ff15c0de9800         call dword ptr [0x98dec0]
// 00899476  84db                 test bl, bl
// 00899478  7429                 je 0x8994a3
// 0089947a  8b4648               mov eax, dword ptr [esi + 0x48]
// 0089947d  8b5644               mov edx, dword ptr [esi + 0x44]
// 00899480  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 00899483  89442450             mov dword ptr [esp + 0x50], eax
// 00899487  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0089948a  894518               mov dword ptr [ebp + 0x18], eax
// 0089948d  897504               mov dword ptr [ebp + 4], esi
// 00899490  8954244c             mov dword ptr [esp + 0x4c], edx
// 00899494  894c2458             mov dword ptr [esp + 0x58], ecx
// 00899498  89ae9c000000         mov dword ptr [esi + 0x9c], ebp
// 0089949e  e98a000000           jmp 0x89952d
// 008994a3  6a20                 push 0x20
// 008994a5  e8b6a3f5ff           call 0x7f3860
// 008994aa  83c404               add esp, 4
// 008994ad  89442428             mov dword ptr [esp + 0x28], eax
// 008994b1  c744247401000000     mov dword ptr [esp + 0x74], 1
// 008994b9  85c0                 test eax, eax
// 008994bb  740c                 je 0x8994c9
// 008994bd  56                   push esi
// 008994be  8bc8                 mov ecx, eax
// 008994c0  e8bb100500           call 0x8ea580
// 008994c5  8be8                 mov ebp, eax
// 008994c7  eb02                 jmp 0x8994cb
// 008994c9  33ed                 xor ebp, ebp
// 008994cb  8b5644               mov edx, dword ptr [esi + 0x44]
// 008994ce  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 008994d1  8b4648               mov eax, dword ptr [esi + 0x48]
// 008994d4  8954244c             mov dword ptr [esp + 0x4c], edx
// 008994d8  894c2458             mov dword ptr [esp + 0x58], ecx
// 008994dc  8bca                 mov ecx, edx
// 008994de  8b5648               mov edx, dword ptr [esi + 0x48]
// 008994e1  89442450             mov dword ptr [esp + 0x50], eax
// 008994e5  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008994e8  89542450             mov dword ptr [esp + 0x50], edx
// 008994ec  8bd0                 mov edx, eax
// 008994ee  89542454             mov dword ptr [esp + 0x54], edx
// 008994f2  8b5650               mov edx, dword ptr [esi + 0x50]
// 008994f5  89542458             mov dword ptr [esp + 0x58], edx
// 008994f9  8b9708020000         mov edx, dword ptr [edi + 0x208]
// 008994ff  52                   push edx
// 00899500  50                   push eax
// 00899501  8b8700020000         mov eax, dword ptr [edi + 0x200]
// 00899507  83c004               add eax, 4
// 0089950a  50                   push eax
// 0089950b  51                   push ecx
// 0089950c  8d4d10               lea ecx, [ebp + 0x10]
// 0089950f  51                   push ecx
// 00899510  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 0089951b  ff1538ca9800         call dword ptr [0x98ca38]
// 00899521  8b8f84020000         mov ecx, dword ptr [edi + 0x284]
// 00899527  55                   push ebp
// 00899528  e893150500           call 0x8eaac0
// 0089952d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00899531  40                   inc eax
// 00899532  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00899536  89442418             mov dword ptr [esp + 0x18], eax
// 0089953a  0f8c64feffff         jl 0x8993a4
// 00899540  8b8f84020000         mov ecx, dword ptr [edi + 0x284]
// 00899546  e8e51cf1ff           call 0x7ab230
// 0089954b  8bf0                 mov esi, eax
// 0089954d  85f6                 test esi, esi
// 0089954f  0f844f010000         je 0x8996a4
// 00899555  8b9724020000         mov edx, dword ptr [edi + 0x224]
// 0089955b  8b871c020000         mov eax, dword ptr [edi + 0x21c]
// 00899561  52                   push edx
// 00899562  50                   push eax
// 00899563  8bcf                 mov ecx, edi
// 00899565  e836b9ffff           call 0x894ea0
// 0089956a  8b8f84020000         mov ecx, dword ptr [edi + 0x284]
// 00899570  85c0                 test eax, eax
// 00899572  7519                 jne 0x89958d
// 00899574  e8e7140500           call 0x8eaa60
// 00899579  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0089957d  64890d00000000       mov dword ptr fs:[0], ecx
// 00899584  59                   pop ecx
// 00899585  5f                   pop edi
// 00899586  5e                   pop esi
// 00899587  5d                   pop ebp
// 00899588  5b                   pop ebx
// 00899589  83c464               add esp, 0x64
// 0089958c  c3                   ret 
// 0089958d  8baf08020000         mov ebp, dword ptr [edi + 0x208]
// 00899593  4e                   dec esi
// 00899594  56                   push esi
// 00899595  e8b6e40200           call 0x8c7a50
// 0089959a  8bb700020000         mov esi, dword ptr [edi + 0x200]
// 008995a0  8b8f84020000         mov ecx, dword ptr [edi + 0x284]
// 008995a6  8b5818               mov ebx, dword ptr [eax + 0x18]
// 008995a9  6a00                 push 0
// 008995ab  83c606               add esi, 6
// 008995ae  e89de40200           call 0x8c7a50
// 008995b3  8b4810               mov ecx, dword ptr [eax + 0x10]
// 008995b6  8b8710020000         mov eax, dword ptr [edi + 0x210]
// 008995bc  8b970c020000         mov edx, dword ptr [edi + 0x20c]
// 008995c2  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008995c6  8b8f14020000         mov ecx, dword ptr [edi + 0x214]
// 008995cc  8954242c             mov dword ptr [esp + 0x2c], edx
// 008995d0  8b9718020000         mov edx, dword ptr [edi + 0x218]
// 008995d6  89442430             mov dword ptr [esp + 0x30], eax
// 008995da  8d44243c             lea eax, [esp + 0x3c]
// 008995de  894c2434             mov dword ptr [esp + 0x34], ecx
// 008995e2  50                   push eax
// 008995e3  8d4c2430             lea ecx, [esp + 0x30]
// 008995e7  89742444             mov dword ptr [esp + 0x44], esi
// 008995eb  8bb714020000         mov esi, dword ptr [edi + 0x214]
// 008995f1  2bb70c020000         sub esi, dword ptr [edi + 0x20c]
// 008995f7  8954243c             mov dword ptr [esp + 0x3c], edx
// 008995fb  51                   push ecx
// 008995fc  8d542464             lea edx, [esp + 0x64]
// 00899600  52                   push edx
// 00899601  895c2450             mov dword ptr [esp + 0x50], ebx
// 00899605  896c2454             mov dword ptr [esp + 0x54], ebp
// 00899609  ff15dcca9800         call dword ptr [0x98cadc]
// 0089960f  85c0                 test eax, eax
// 00899611  0f848d000000         je 0x8996a4
// 00899617  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089961b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089961f  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00899623  03c1                 add eax, ecx
// 00899625  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00899629  99                   cdq 
// 0089962a  2bc2                 sub eax, edx
// 0089962c  8be8                 mov ebp, eax
// 0089962e  8d0419               lea eax, [ecx + ebx]
// 00899631  99                   cdq 
// 00899632  2bc2                 sub eax, edx
// 00899634  d1fd                 sar ebp, 1
// 00899636  d1f8                 sar eax, 1
// 00899638  3be8                 cmp ebp, eax
// 0089963a  7e4a                 jle 0x899686
// 0089963c  8b8724020000         mov eax, dword ptr [edi + 0x224]
// 00899642  8bd0                 mov edx, eax
// 00899644  2bd3                 sub edx, ebx
// 00899646  3bd6                 cmp edx, esi
// 00899648  899f0c020000         mov dword ptr [edi + 0x20c], ebx
// 0089964e  7d1a                 jge 0x89966a
// 00899650  898714020000         mov dword ptr [edi + 0x214], eax
// 00899656  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0089965a  64890d00000000       mov dword ptr fs:[0], ecx
// 00899661  59                   pop ecx
// 00899662  5f                   pop edi
// 00899663  5e                   pop esi
// 00899664  5d                   pop ebp
// 00899665  5b                   pop ebx
// 00899666  83c464               add esp, 0x64
// 00899669  c3                   ret 
// 0089966a  03de                 add ebx, esi
// 0089966c  899f14020000         mov dword ptr [edi + 0x214], ebx
// 00899672  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00899676  64890d00000000       mov dword ptr fs:[0], ecx
// 0089967d  59                   pop ecx
// 0089967e  5f                   pop edi
// 0089967f  5e                   pop esi
// 00899680  5d                   pop ebp
// 00899681  5b                   pop ebx
// 00899682  83c464               add esp, 0x64
// 00899685  c3                   ret 
// 00899686  8b871c020000         mov eax, dword ptr [edi + 0x21c]
// 0089968c  8bd1                 mov edx, ecx
// 0089968e  2bd0                 sub edx, eax
// 00899690  3bd6                 cmp edx, esi
// 00899692  898f14020000         mov dword ptr [edi + 0x214], ecx
// 00899698  7c04                 jl 0x89969e
// 0089969a  8bc1                 mov eax, ecx
// 0089969c  2bc6                 sub eax, esi
// 0089969e  89870c020000         mov dword ptr [edi + 0x20c], eax
// 008996a4  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008996a8  64890d00000000       mov dword ptr fs:[0], ecx
// 008996af  59                   pop ecx
// 008996b0  5f                   pop edi
// 008996b1  5e                   pop esi
// 008996b2  5d                   pop ebp
// 008996b3  5b                   pop ebx
// 008996b4  83c464               add esp, 0x64
// 008996b7  c3                   ret 
// copied from an identical function in another client (function ?RepositionContextHeaders@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonBar.cpp