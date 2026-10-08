// roc 2007-03 00469500  unit: seg_00460000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00469500
//
// 00469500  83ec0c               sub esp, 0xc
// 00469503  55                   push ebp
// 00469504  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00469508  56                   push esi
// 00469509  57                   push edi
// 0046950a  8bf9                 mov edi, ecx
// 0046950c  8b7704               mov esi, dword ptr [edi + 4]
// 0046950f  8b4604               mov eax, dword ptr [esi + 4]
// 00469512  80781500             cmp byte ptr [eax + 0x15], 0
// 00469516  b101                 mov cl, 1
// 00469518  884c240c             mov byte ptr [esp + 0xc], cl
// 0046951c  7520                 jne 0x46953e
// 0046951e  8b5500               mov edx, dword ptr [ebp]
// 00469521  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00469524  8bf0                 mov esi, eax
// 00469526  0f9cc1               setl cl
// 00469529  84c9                 test cl, cl
// 0046952b  884c240c             mov byte ptr [esp + 0xc], cl
// 0046952f  7404                 je 0x469535
// 00469531  8b00                 mov eax, dword ptr [eax]
// 00469533  eb03                 jmp 0x469538
// 00469535  8b4008               mov eax, dword ptr [eax + 8]
// 00469538  80781500             cmp byte ptr [eax + 0x15], 0
// 0046953c  74e3                 je 0x469521
// 0046953e  84c9                 test cl, cl
// 00469540  8bd6                 mov edx, esi
// 00469542  89542414             mov dword ptr [esp + 0x14], edx
// 00469546  897c2410             mov dword ptr [esp + 0x10], edi
// 0046954a  743d                 je 0x469589
// 0046954c  8b4704               mov eax, dword ptr [edi + 4]
// 0046954f  3b30                 cmp esi, dword ptr [eax]
// 00469551  8d4c2410             lea ecx, [esp + 0x10]
// 00469555  7529                 jne 0x469580
// 00469557  55                   push ebp
// 00469558  56                   push esi
// 00469559  6a01                 push 1
// 0046955b  51                   push ecx
// 0046955c  8bcf                 mov ecx, edi
// 0046955e  e80ddafaff           call 0x416f70
// 00469563  8bc8                 mov ecx, eax
// 00469565  8b11                 mov edx, dword ptr [ecx]
// 00469567  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0046956b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0046956e  5f                   pop edi
// 0046956f  5e                   pop esi
// 00469570  8910                 mov dword ptr [eax], edx
// 00469572  894804               mov dword ptr [eax + 4], ecx
// 00469575  c6400801             mov byte ptr [eax + 8], 1
// 00469579  5d                   pop ebp
// 0046957a  83c40c               add esp, 0xc
// 0046957d  c20800               ret 8
// 00469580  e8fb650c00           call 0x52fb80
// 00469585  8b542414             mov edx, dword ptr [esp + 0x14]
// 00469589  8b420c               mov eax, dword ptr [edx + 0xc]
// 0046958c  3b4500               cmp eax, dword ptr [ebp]
// 0046958f  7d0e                 jge 0x46959f
// 00469591  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00469595  55                   push ebp
// 00469596  56                   push esi
// 00469597  51                   push ecx
// 00469598  8d54241c             lea edx, [esp + 0x1c]
// 0046959c  52                   push edx
// 0046959d  ebbd                 jmp 0x46955c
// 0046959f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004695a3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004695a7  5f                   pop edi
// 004695a8  5e                   pop esi
// 004695a9  8908                 mov dword ptr [eax], ecx
// 004695ab  895004               mov dword ptr [eax + 4], edx
// 004695ae  c6400800             mov byte ptr [eax + 8], 0
// 004695b2  5d                   pop ebp
// 004695b3  83c40c               add esp, 0xc
// 004695b6  c20800               ret 8
// library rbxgs/util\Name.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@HPAVName@RBX@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVName@RBX@@@std@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@HPAVName@RBX@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHPAVName@RBX@@@std@@@4@$0A@@std@@@std@@_N@2@ABU?$pair@$$CBHPAVName@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
