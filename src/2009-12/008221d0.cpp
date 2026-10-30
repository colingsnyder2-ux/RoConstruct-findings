// roc 2009-12 008221d0  unit: CXTPReportControl  size: 938 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008221d0
//
// 008221d0  6aff                 push -1
// 008221d2  68fbb19500           push 0x95b1fb
// 008221d7  64a100000000         mov eax, dword ptr fs:[0]
// 008221dd  50                   push eax
// 008221de  81ecfc000000         sub esp, 0xfc
// 008221e4  53                   push ebx
// 008221e5  55                   push ebp
// 008221e6  56                   push esi
// 008221e7  57                   push edi
// 008221e8  a10052b600           mov eax, dword ptr [0xb65200]
// 008221ed  33c4                 xor eax, esp
// 008221ef  50                   push eax
// 008221f0  8d842410010000       lea eax, [esp + 0x110]
// 008221f7  64a300000000         mov dword ptr fs:[0], eax
// 008221fd  8bf9                 mov edi, ecx
// 008221ff  897c2444             mov dword ptr [esp + 0x44], edi
// 00822203  8bb42434010000       mov esi, dword ptr [esp + 0x134]
// 0082220a  85f6                 test esi, esi
// 0082220c  0f8e4c030000         jle 0x82255e
// 00822212  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 00822218  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 0082221e  8b9798000000         mov edx, dword ptr [edi + 0x98]
// 00822224  8bac242c010000       mov ebp, dword ptr [esp + 0x12c]
// 0082222b  8b9f10010000         mov ebx, dword ptr [edi + 0x110]
// 00822231  8944247c             mov dword ptr [esp + 0x7c], eax
// 00822235  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 0082223b  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00822242  8b8c2428010000       mov ecx, dword ptr [esp + 0x128]
// 00822249  89942484000000       mov dword ptr [esp + 0x84], edx
// 00822250  8b942430010000       mov edx, dword ptr [esp + 0x130]
// 00822257  89842488000000       mov dword ptr [esp + 0x88], eax
// 0082225e  8b842424010000       mov eax, dword ptr [esp + 0x124]
// 00822265  894c2420             mov dword ptr [esp + 0x20], ecx
// 00822269  89542428             mov dword ptr [esp + 0x28], edx
// 0082226d  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 00822274  03ce                 add ecx, esi
// 00822276  8944241c             mov dword ptr [esp + 0x1c], eax
// 0082227a  2bc2                 sub eax, edx
// 0082227c  2bea                 sub ebp, edx
// 0082227e  894c2428             mov dword ptr [esp + 0x28], ecx
// 00822282  8bcf                 mov ecx, edi
// 00822284  895c2418             mov dword ptr [esp + 0x18], ebx
// 00822288  8944241c             mov dword ptr [esp + 0x1c], eax
// 0082228c  896c2424             mov dword ptr [esp + 0x24], ebp
// 00822290  e82bc2ffff           call 0x81e4c0
// 00822295  8bb700010000         mov esi, dword ptr [edi + 0x100]
// 0082229b  57                   push edi
// 0082229c  8d8c2490000000       lea ecx, [esp + 0x90]
// 008222a3  8944244c             mov dword ptr [esp + 0x4c], eax
// 008222a7  e8f4bb0400           call 0x86dea0
// 008222ac  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 008222b2  8d84248c000000       lea eax, [esp + 0x8c]
// 008222b9  50                   push eax
// 008222ba  c784241c01000000000000 mov dword ptr [esp + 0x11c], 0
// 008222c5  e896b40400           call 0x86d760
// 008222ca  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 008222d1  3bd8                 cmp ebx, eax
// 008222d3  7c04                 jl 0x8222d9
// 008222d5  89442418             mov dword ptr [esp + 0x18], eax
// 008222d9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008222dd  3b8c2430010000       cmp ecx, dword ptr [esp + 0x130]
// 008222e4  0f8d5d020000         jge 0x822547
// 008222ea  8b542448             mov edx, dword ptr [esp + 0x48]
// 008222ee  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008222f2  8b9c2420010000       mov ebx, dword ptr [esp + 0x120]
// 008222f9  03d1                 add edx, ecx
// 008222fb  48                   dec eax
// 008222fc  8954244c             mov dword ptr [esp + 0x4c], edx
// 00822300  89442464             mov dword ptr [esp + 0x64], eax
// 00822304  eb0e                 jmp 0x822314
// 00822306  eb08                 jmp 0x822310
// 00822308  8da42400000000       lea esp, [esp]
// 0082230f  90                   nop 
// 00822310  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00822314  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00822318  8b442420             mov eax, dword ptr [esp + 0x20]
// 0082231c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00822320  896c2438             mov dword ptr [esp + 0x38], ebp
// 00822324  89ac24d8000000       mov dword ptr [esp + 0xd8], ebp
// 0082232b  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 0082232f  89542430             mov dword ptr [esp + 0x30], edx
// 00822333  89442434             mov dword ptr [esp + 0x34], eax
// 00822337  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0082233b  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0082233f  85ed                 test ebp, ebp
// 00822341  0f8caa010000         jl 0x8224f1
// 00822347  8b542418             mov edx, dword ptr [esp + 0x18]
// 0082234b  2bd5                 sub edx, ebp
// 0082234d  4a                   dec edx
// 0082234e  89542440             mov dword ptr [esp + 0x40], edx
// 00822352  33c0                 xor eax, eax
// 00822354  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00822358  0f9cc0               setl al
// 0082235b  89442460             mov dword ptr [esp + 0x60], eax
// 0082235f  85c0                 test eax, eax
// 00822361  7408                 je 0x82236b
// 00822363  8bc2                 mov eax, edx
// 00822365  89442414             mov dword ptr [esp + 0x14], eax
// 00822369  eb06                 jmp 0x822371
// 0082236b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0082236f  8bc5                 mov eax, ebp
// 00822371  85c0                 test eax, eax
// 00822373  0f8c66010000         jl 0x8224df
// 00822379  3b8424bc000000       cmp eax, dword ptr [esp + 0xbc]
// 00822380  0f8d59010000         jge 0x8224df
// 00822386  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0082238d  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00822390  894c2468             mov dword ptr [esp + 0x68], ecx
// 00822394  85c9                 test ecx, ecx
// 00822396  0f8443010000         je 0x8224df
// 0082239c  8d942400010000       lea edx, [esp + 0x100]
// 008223a3  52                   push edx
// 008223a4  e827570000           call 0x827ad0
// 008223a9  837c241400           cmp dword ptr [esp + 0x14], 0
// 008223ae  8b00                 mov eax, dword ptr [eax]
// 008223b0  89442430             mov dword ptr [esp + 0x30], eax
// 008223b4  750c                 jne 0x8223c2
// 008223b6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008223ba  3bc8                 cmp ecx, eax
// 008223bc  7e04                 jle 0x8223c2
// 008223be  894c2430             mov dword ptr [esp + 0x30], ecx
// 008223c2  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008223c6  8d8424f0000000       lea eax, [esp + 0xf0]
// 008223cd  50                   push eax
// 008223ce  e8fd560000           call 0x827ad0
// 008223d3  8b4808               mov ecx, dword ptr [eax + 8]
// 008223d6  8d542430             lea edx, [esp + 0x30]
// 008223da  52                   push edx
// 008223db  8d842480000000       lea eax, [esp + 0x80]
// 008223e2  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008223e6  50                   push eax
// 008223e7  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 008223ee  51                   push ecx
// 008223ef  ff15dcca9800         call dword ptr [0x98cadc]
// 008223f5  85c0                 test eax, eax
// 008223f7  0f84de000000         je 0x8224db
// 008223fd  837c246000           cmp dword ptr [esp + 0x60], 0
// 00822402  743c                 je 0x822440
// 00822404  8b442434             mov eax, dword ptr [esp + 0x34]
// 00822408  8b542430             mov edx, dword ptr [esp + 0x30]
// 0082240c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00822410  89442470             mov dword ptr [esp + 0x70], eax
// 00822414  40                   inc eax
// 00822415  8954246c             mov dword ptr [esp + 0x6c], edx
// 00822419  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0082241d  89442470             mov dword ptr [esp + 0x70], eax
// 00822421  8b06                 mov eax, dword ptr [esi]
// 00822423  894c2474             mov dword ptr [esp + 0x74], ecx
// 00822427  89542478             mov dword ptr [esp + 0x78], edx
// 0082242b  8b5070               mov edx, dword ptr [eax + 0x70]
// 0082242e  57                   push edi
// 0082242f  8bce                 mov ecx, esi
// 00822431  ffd2                 call edx
// 00822433  50                   push eax
// 00822434  8d442470             lea eax, [esp + 0x70]
// 00822438  50                   push eax
// 00822439  8bcb                 mov ecx, ebx
// 0082243b  e8be21fdff           call 0x7f45fe
// 00822440  8b442430             mov eax, dword ptr [esp + 0x30]
// 00822444  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00822448  8b542438             mov edx, dword ptr [esp + 0x38]
// 0082244c  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00822450  8b2e                 mov ebp, dword ptr [esi]
// 00822452  8d58ff               lea ebx, [eax - 1]
// 00822455  83ec10               sub esp, 0x10
// 00822458  89442460             mov dword ptr [esp + 0x60], eax
// 0082245c  8bc4                 mov eax, esp
// 0082245e  8918                 mov dword ptr [eax], ebx
// 00822460  894804               mov dword ptr [eax + 4], ecx
// 00822463  895c2460             mov dword ptr [esp + 0x60], ebx
// 00822467  8b9c2430010000       mov ebx, dword ptr [esp + 0x130]
// 0082246e  895008               mov dword ptr [eax + 8], edx
// 00822471  6a00                 push 0
// 00822473  894c2468             mov dword ptr [esp + 0x68], ecx
// 00822477  8954246c             mov dword ptr [esp + 0x6c], edx
// 0082247b  8b5578               mov edx, dword ptr [ebp + 0x78]
// 0082247e  53                   push ebx
// 0082247f  8bce                 mov ecx, esi
// 00822481  897c2474             mov dword ptr [esp + 0x74], edi
// 00822485  89780c               mov dword ptr [eax + 0xc], edi
// 00822488  ffd2                 call edx
// 0082248a  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0082248e  8b16                 mov edx, dword ptr [esi]
// 00822490  8b5278               mov edx, dword ptr [edx + 0x78]
// 00822493  83ec10               sub esp, 0x10
// 00822496  8bc4                 mov eax, esp
// 00822498  8908                 mov dword ptr [eax], ecx
// 0082249a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0082249e  894804               mov dword ptr [eax + 4], ecx
// 008224a1  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008224a5  894808               mov dword ptr [eax + 8], ecx
// 008224a8  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008224ac  6a01                 push 1
// 008224ae  89480c               mov dword ptr [eax + 0xc], ecx
// 008224b1  53                   push ebx
// 008224b2  8bce                 mov ecx, esi
// 008224b4  ffd2                 call edx
// 008224b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 008224ba  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008224be  48                   dec eax
// 008224bf  39442414             cmp dword ptr [esp + 0x14], eax
// 008224c3  7512                 jne 0x8224d7
// 008224c5  8b16                 mov edx, dword ptr [esi]
// 008224c7  8b527c               mov edx, dword ptr [edx + 0x7c]
// 008224ca  6a00                 push 0
// 008224cc  57                   push edi
// 008224cd  8d442458             lea eax, [esp + 0x58]
// 008224d1  50                   push eax
// 008224d2  53                   push ebx
// 008224d3  8bce                 mov ecx, esi
// 008224d5  ffd2                 call edx
// 008224d7  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008224db  8b542440             mov edx, dword ptr [esp + 0x40]
// 008224df  4d                   dec ebp
// 008224e0  42                   inc edx
// 008224e1  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008224e5  89542440             mov dword ptr [esp + 0x40], edx
// 008224e9  85ed                 test ebp, ebp
// 008224eb  0f8d61feffff         jge 0x822352
// 008224f1  837c244800           cmp dword ptr [esp + 0x48], 0
// 008224f6  7e2d                 jle 0x822525
// 008224f8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008224fc  8b16                 mov edx, dword ptr [esi]
// 008224fe  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 00822504  83ec10               sub esp, 0x10
// 00822507  8bc4                 mov eax, esp
// 00822509  8908                 mov dword ptr [eax], ecx
// 0082250b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0082250f  894804               mov dword ptr [eax + 4], ecx
// 00822512  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00822516  894808               mov dword ptr [eax + 8], ecx
// 00822519  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0082251d  89480c               mov dword ptr [eax + 0xc], ecx
// 00822520  53                   push ebx
// 00822521  8bce                 mov ecx, esi
// 00822523  ffd2                 call edx
// 00822525  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 0082252c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00822530  01442428             add dword ptr [esp + 0x28], eax
// 00822534  03c8                 add ecx, eax
// 00822536  3b8c2430010000       cmp ecx, dword ptr [esp + 0x130]
// 0082253d  894c2420             mov dword ptr [esp + 0x20], ecx
// 00822541  0f8cc9fdffff         jl 0x822310
// 00822547  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0082254e  c7842418010000ffffffff mov dword ptr [esp + 0x118], 0xffffffff
// 00822559  e872ba0400           call 0x86dfd0
// 0082255e  8b8c2410010000       mov ecx, dword ptr [esp + 0x110]
// 00822565  64890d00000000       mov dword ptr fs:[0], ecx
// 0082256c  59                   pop ecx
// 0082256d  5f                   pop edi
// 0082256e  5e                   pop esi
// 0082256f  5d                   pop ebp
// 00822570  5b                   pop ebx
// 00822571  81c408010000         add esp, 0x108
// 00822577  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawDefaultGrid@CXTPReportControl@@AAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp