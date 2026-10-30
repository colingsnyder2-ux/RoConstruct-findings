// roc 2011-06 008b6220  unit: CXTPReportInplaceList  size: 1117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b6220
//
// 008b6220  6aff                 push -1
// 008b6222  6852b7a000           push 0xa0b752
// 008b6227  64a100000000         mov eax, dword ptr fs:[0]
// 008b622d  50                   push eax
// 008b622e  83ec74               sub esp, 0x74
// 008b6231  53                   push ebx
// 008b6232  55                   push ebp
// 008b6233  56                   push esi
// 008b6234  57                   push edi
// 008b6235  a12058c900           mov eax, dword ptr [0xc95820]
// 008b623a  33c4                 xor eax, esp
// 008b623c  50                   push eax
// 008b623d  8d842488000000       lea eax, [esp + 0x88]
// 008b6244  64a300000000         mov dword ptr fs:[0], eax
// 008b624a  8bf1                 mov esi, ecx
// 008b624c  8b4654               mov eax, dword ptr [esi + 0x54]
// 008b624f  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 008b6256  8b5004               mov edx, dword ptr [eax + 4]
// 008b6259  8d4e54               lea ecx, [esi + 0x54]
// 008b625c  53                   push ebx
// 008b625d  ffd2                 call edx
// 008b625f  8b4314               mov eax, dword ptr [ebx + 0x14]
// 008b6262  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 008b6265  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 008b6268  89442444             mov dword ptr [esp + 0x44], eax
// 008b626c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008b626f  33ed                 xor ebp, ebp
// 008b6271  894c2448             mov dword ptr [esp + 0x48], ecx
// 008b6275  8954244c             mov dword ptr [esp + 0x4c], edx
// 008b6279  89442450             mov dword ptr [esp + 0x50], eax
// 008b627d  396e20               cmp dword ptr [esi + 0x20], ebp
// 008b6280  7552                 jne 0x8b62d4
// 008b6282  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008b6285  55                   push ebp
// 008b6286  55                   push ebp
// 008b6287  51                   push ecx
// 008b6288  8d542438             lea edx, [esp + 0x38]
// 008b628c  52                   push edx
// 008b628d  680100a040           push 0x40a00001
// 008b6292  68cabea500           push 0xa5beca
// 008b6297  686827ac00           push 0xac2768
// 008b629c  896c2448             mov dword ptr [esp + 0x48], ebp
// 008b62a0  896c244c             mov dword ptr [esp + 0x4c], ebp
// 008b62a4  896c2450             mov dword ptr [esp + 0x50], ebp
// 008b62a8  896c2454             mov dword ptr [esp + 0x54], ebp
// 008b62ac  e86d631100           call 0x9cc61e
// 008b62b1  2500004000           and eax, 0x400000
// 008b62b6  0d80000000           or eax, 0x80
// 008b62bb  50                   push eax
// 008b62bc  8bce                 mov ecx, esi
// 008b62be  e80d3ef5ff           call 0x80a0d0
// 008b62c3  8b4658               mov eax, dword ptr [esi + 0x58]
// 008b62c6  3bc5                 cmp eax, ebp
// 008b62c8  7405                 je 0x8b62cf
// 008b62ca  8b4020               mov eax, dword ptr [eax + 0x20]
// 008b62cd  eb02                 jmp 0x8b62d1
// 008b62cf  33c0                 xor eax, eax
// 008b62d1  894638               mov dword ptr [esi + 0x38], eax
// 008b62d4  8b4658               mov eax, dword ptr [esi + 0x58]
// 008b62d7  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008b62dd  83c020               add eax, 0x20
// 008b62e0  3bc5                 cmp eax, ebp
// 008b62e2  7504                 jne 0x8b62e8
// 008b62e4  33c0                 xor eax, eax
// 008b62e6  eb03                 jmp 0x8b62eb
// 008b62e8  8b4004               mov eax, dword ptr [eax + 4]
// 008b62eb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b62ee  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 008b62f4  6a01                 push 1
// 008b62f6  50                   push eax
// 008b62f7  6a30                 push 0x30
// 008b62f9  51                   push ecx
// 008b62fa  ffd7                 call edi
// 008b62fc  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b62ff  55                   push ebp
// 008b6300  55                   push ebp
// 008b6301  6884010000           push 0x184
// 008b6306  52                   push edx
// 008b6307  ffd7                 call edi
// 008b6309  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 008b630d  2b6c2444             sub ebp, dword ptr [esp + 0x44]
// 008b6311  8b4658               mov eax, dword ptr [esi + 0x58]
// 008b6314  50                   push eax
// 008b6315  8d4c2478             lea ecx, [esp + 0x78]
// 008b6319  45                   inc ebp
// 008b631a  e8c3621100           call 0x9cc5e2
// 008b631f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b6322  6a00                 push 0
// 008b6324  6a00                 push 0
// 008b6326  6a31                 push 0x31
// 008b6328  51                   push ecx
// 008b6329  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 008b6334  ffd7                 call edi
// 008b6336  50                   push eax
// 008b6337  e82c48f5ff           call 0x80ab68
// 008b633c  50                   push eax
// 008b633d  8d542478             lea edx, [esp + 0x78]
// 008b6341  52                   push edx
// 008b6342  8d4c246c             lea ecx, [esp + 0x6c]
// 008b6346  e8d56dfaff           call 0x85d120
// 008b634b  6a0a                 push 0xa
// 008b634d  c684249400000001     mov byte ptr [esp + 0x94], 1
// 008b6355  ff15e019a400         call dword ptr [0xa419e0]
// 008b635b  8b5660               mov edx, dword ptr [esi + 0x60]
// 008b635e  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008b6361  89442420             mov dword ptr [esp + 0x20], eax
// 008b6365  8b01                 mov eax, dword ptr [ecx]
// 008b6367  8b406c               mov eax, dword ptr [eax + 0x6c]
// 008b636a  52                   push edx
// 008b636b  8d542420             lea edx, [esp + 0x20]
// 008b636f  52                   push edx
// 008b6370  ffd0                 call eax
// 008b6372  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008b6375  8b11                 mov edx, dword ptr [ecx]
// 008b6377  8b8238010000         mov eax, dword ptr [edx + 0x138]
// 008b637d  53                   push ebx
// 008b637e  c684249400000002     mov byte ptr [esp + 0x94], 2
// 008b6386  ffd0                 call eax
// 008b6388  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008b638f  89442424             mov dword ptr [esp + 0x24], eax
// 008b6393  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008b639b  e8f02ffbff           call 0x869390
// 008b63a0  85c0                 test eax, eax
// 008b63a2  0f8e2e010000         jle 0x8b64d6
// 008b63a8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b63ac  51                   push ecx
// 008b63ad  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008b63b4  e8c768f5ff           call 0x80cc80
// 008b63b9  8bd8                 mov ebx, eax
// 008b63bb  8d5320               lea edx, [ebx + 0x20]
// 008b63be  52                   push edx
// 008b63bf  8d4c2418             lea ecx, [esp + 0x18]
// 008b63c3  ff15e42da400         call dword ptr [0xa42de4]
// 008b63c9  8d4c2414             lea ecx, [esp + 0x14]
// 008b63cd  c684249000000003     mov byte ptr [esp + 0x90], 3
// 008b63d5  ff15c82da400         call dword ptr [0xa42dc8]
// 008b63db  50                   push eax
// 008b63dc  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b63df  6a00                 push 0
// 008b63e1  6880010000           push 0x180
// 008b63e6  50                   push eax
// 008b63e7  ffd7                 call edi
// 008b63e9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b63ec  53                   push ebx
// 008b63ed  50                   push eax
// 008b63ee  689a010000           push 0x19a
// 008b63f3  51                   push ecx
// 008b63f4  89442438             mov dword ptr [esp + 0x38], eax
// 008b63f8  ffd7                 call edi
// 008b63fa  8d54242c             lea edx, [esp + 0x2c]
// 008b63fe  52                   push edx
// 008b63ff  8d4c2418             lea ecx, [esp + 0x18]
// 008b6403  ff15a826a400         call dword ptr [0xa426a8]
// 008b6409  50                   push eax
// 008b640a  8d4c241c             lea ecx, [esp + 0x1c]
// 008b640e  ff15c82da400         call dword ptr [0xa42dc8]
// 008b6414  50                   push eax
// 008b6415  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008b641c  50                   push eax
// 008b641d  ff153801a400         call dword ptr [0xa40138]
// 008b6423  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008b6427  8b542420             mov edx, dword ptr [esp + 0x20]
// 008b642b  03ca                 add ecx, edx
// 008b642d  3be9                 cmp ebp, ecx
// 008b642f  7f34                 jg 0x8b6465
// 008b6431  8d44243c             lea eax, [esp + 0x3c]
// 008b6435  50                   push eax
// 008b6436  8d4c2418             lea ecx, [esp + 0x18]
// 008b643a  ff15a826a400         call dword ptr [0xa426a8]
// 008b6440  50                   push eax
// 008b6441  8d4c241c             lea ecx, [esp + 0x1c]
// 008b6445  ff15c82da400         call dword ptr [0xa42dc8]
// 008b644b  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008b6452  50                   push eax
// 008b6453  51                   push ecx
// 008b6454  ff153801a400         call dword ptr [0xa40138]
// 008b645a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008b645e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b6462  8d2c02               lea ebp, [edx + eax]
// 008b6465  837c2424ff           cmp dword ptr [esp + 0x24], -1
// 008b646a  7519                 jne 0x8b6485
// 008b646c  8d4c2414             lea ecx, [esp + 0x14]
// 008b6470  ff15c82da400         call dword ptr [0xa42dc8]
// 008b6476  50                   push eax
// 008b6477  8d4c2420             lea ecx, [esp + 0x20]
// 008b647b  ff15cc2da400         call dword ptr [0xa42dcc]
// 008b6481  85c0                 test eax, eax
// 008b6483  7409                 je 0x8b648e
// 008b6485  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b6489  3b4b24               cmp ecx, dword ptr [ebx + 0x24]
// 008b648c  7512                 jne 0x8b64a0
// 008b648e  8b542428             mov edx, dword ptr [esp + 0x28]
// 008b6492  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b6495  6a00                 push 0
// 008b6497  52                   push edx
// 008b6498  6886010000           push 0x186
// 008b649d  50                   push eax
// 008b649e  ffd7                 call edi
// 008b64a0  8d4c2414             lea ecx, [esp + 0x14]
// 008b64a4  c684249000000002     mov byte ptr [esp + 0x90], 2
// 008b64ac  ff15082ea400         call dword ptr [0xa42e08]
// 008b64b2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008b64b6  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008b64bd  43                   inc ebx
// 008b64be  895c2418             mov dword ptr [esp + 0x18], ebx
// 008b64c2  e8c92efbff           call 0x869390
// 008b64c7  3bd8                 cmp ebx, eax
// 008b64c9  0f8cd9feffff         jl 0x8b63a8
// 008b64cf  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 008b64d6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b64d9  6a00                 push 0
// 008b64db  6a00                 push 0
// 008b64dd  68a1010000           push 0x1a1
// 008b64e2  51                   push ecx
// 008b64e3  ffd7                 call edi
// 008b64e5  8b542450             mov edx, dword ptr [esp + 0x50]
// 008b64e9  6a00                 push 0
// 008b64eb  6a00                 push 0
// 008b64ed  89442430             mov dword ptr [esp + 0x30], eax
// 008b64f1  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b64f4  688b010000           push 0x18b
// 008b64f9  50                   push eax
// 008b64fa  89542458             mov dword ptr [esp + 0x58], edx
// 008b64fe  ffd7                 call edi
// 008b6500  83f80a               cmp eax, 0xa
// 008b6503  7e07                 jle 0x8b650c
// 008b6505  b80a000000           mov eax, 0xa
// 008b650a  eb0f                 jmp 0x8b651b
// 008b650c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b650f  6a00                 push 0
// 008b6511  6a00                 push 0
// 008b6513  688b010000           push 0x18b
// 008b6518  51                   push ecx
// 008b6519  ffd7                 call edi
// 008b651b  0faf442428           imul eax, dword ptr [esp + 0x28]
// 008b6520  8b542450             mov edx, dword ptr [esp + 0x50]
// 008b6524  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008b6528  8d440202             lea eax, [edx + eax + 2]
// 008b652c  2bcd                 sub ecx, ebp
// 008b652e  8d542444             lea edx, [esp + 0x44]
// 008b6532  894c2444             mov dword ptr [esp + 0x44], ecx
// 008b6536  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008b6539  52                   push edx
// 008b653a  89442454             mov dword ptr [esp + 0x54], eax
// 008b653e  e8bb40f5ff           call 0x80a5fe
// 008b6543  8d442444             lea eax, [esp + 0x44]
// 008b6547  50                   push eax
// 008b6548  8d4c2458             lea ecx, [esp + 0x58]
// 008b654c  51                   push ecx
// 008b654d  e8bebbf9ff           call 0x852110
// 008b6552  8bc8                 mov ecx, eax
// 008b6554  e817b7f9ff           call 0x851c70
// 008b6559  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008b655d  8b442460             mov eax, dword ptr [esp + 0x60]
// 008b6561  3bc8                 cmp ecx, eax
// 008b6563  8b3d601ca400         mov edi, dword ptr [0xa41c60]
// 008b6569  7e27                 jle 0x8b6592
// 008b656b  8b542458             mov edx, dword ptr [esp + 0x58]
// 008b656f  03c2                 add eax, edx
// 008b6571  99                   cdq 
// 008b6572  2bc2                 sub eax, edx
// 008b6574  8b542448             mov edx, dword ptr [esp + 0x48]
// 008b6578  d1f8                 sar eax, 1
// 008b657a  3bd0                 cmp edx, eax
// 008b657c  7e14                 jle 0x8b6592
// 008b657e  8b4318               mov eax, dword ptr [ebx + 0x18]
// 008b6581  2b4320               sub eax, dword ptr [ebx + 0x20]
// 008b6584  2bc1                 sub eax, ecx
// 008b6586  03c2                 add eax, edx
// 008b6588  50                   push eax
// 008b6589  6a00                 push 0
// 008b658b  8d44244c             lea eax, [esp + 0x4c]
// 008b658f  50                   push eax
// 008b6590  ffd7                 call edi
// 008b6592  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008b6596  8b442454             mov eax, dword ptr [esp + 0x54]
// 008b659a  3bc8                 cmp ecx, eax
// 008b659c  7d0c                 jge 0x8b65aa
// 008b659e  2bc1                 sub eax, ecx
// 008b65a0  6a00                 push 0
// 008b65a2  50                   push eax
// 008b65a3  8d4c244c             lea ecx, [esp + 0x4c]
// 008b65a7  51                   push ecx
// 008b65a8  ffd7                 call edi
// 008b65aa  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008b65ae  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008b65b2  3bc8                 cmp ecx, eax
// 008b65b4  7e0c                 jle 0x8b65c2
// 008b65b6  6a00                 push 0
// 008b65b8  2bc1                 sub eax, ecx
// 008b65ba  50                   push eax
// 008b65bb  8d54244c             lea edx, [esp + 0x4c]
// 008b65bf  52                   push edx
// 008b65c0  ffd7                 call edi
// 008b65c2  8bce                 mov ecx, esi
// 008b65c4  e8373ef5ff           call 0x80a400
// 008b65c9  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b65cc  85c0                 test eax, eax
// 008b65ce  7462                 je 0x8b6632
// 008b65d0  8b3d001aa400         mov edi, dword ptr [0xa41a00]
// 008b65d6  6a00                 push 0
// 008b65d8  6af8                 push -8
// 008b65da  50                   push eax
// 008b65db  ffd7                 call edi
// 008b65dd  6a00                 push 0
// 008b65df  6800000080           push 0x80000000
// 008b65e4  6800000040           push 0x40000000
// 008b65e9  8bce                 mov ecx, esi
// 008b65eb  e8e841f5ff           call 0x80a7d8
// 008b65f0  8b4658               mov eax, dword ptr [esi + 0x58]
// 008b65f3  8b4020               mov eax, dword ptr [eax + 0x20]
// 008b65f6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b65f9  50                   push eax
// 008b65fa  6af8                 push -8
// 008b65fc  51                   push ecx
// 008b65fd  ffd7                 call edi
// 008b65ff  8b442448             mov eax, dword ptr [esp + 0x48]
// 008b6603  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008b6607  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008b660b  6850020000           push 0x250
// 008b6610  2bc8                 sub ecx, eax
// 008b6612  51                   push ecx
// 008b6613  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008b6617  2bd1                 sub edx, ecx
// 008b6619  52                   push edx
// 008b661a  50                   push eax
// 008b661b  a1b829a400           mov eax, dword ptr [0xa429b8]
// 008b6620  51                   push ecx
// 008b6621  50                   push eax
// 008b6622  8bce                 mov ecx, esi
// 008b6624  e8013ef5ff           call 0x80a42a
// 008b6629  56                   push esi
// 008b662a  e8518cfaff           call 0x85f280
// 008b662f  83c404               add esp, 4
// 008b6632  8d4c241c             lea ecx, [esp + 0x1c]
// 008b6636  ff15082ea400         call dword ptr [0xa42e08]
// 008b663c  8d4c2464             lea ecx, [esp + 0x64]
// 008b6640  c684249000000000     mov byte ptr [esp + 0x90], 0
// 008b6648  e8536bfaff           call 0x85d1a0
// 008b664d  8d4c2474             lea ecx, [esp + 0x74]
// 008b6651  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 008b665c  e87b5f1100           call 0x9cc5dc
// 008b6661  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008b6668  64890d00000000       mov dword ptr fs:[0], ecx
// 008b666f  59                   pop ecx
// 008b6670  5f                   pop edi
// 008b6671  5e                   pop esi
// 008b6672  5d                   pop ebp
// 008b6673  5b                   pop ebx
// 008b6674  81c480000000         add esp, 0x80
// 008b667a  c20800               ret 8
// copied from an identical function in another client (function ?Create@CXTPReportInplaceList@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@PAVCXTPReportRecordItemConstraints@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportInplaceControls.cpp