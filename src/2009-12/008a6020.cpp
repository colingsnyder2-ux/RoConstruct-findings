// roc 2009-12 008a6020  unit: CXTPReportTip  size: 455 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6020
//
// 008a6020  6aff                 push -1
// 008a6022  6879269600           push 0x962679
// 008a6027  64a100000000         mov eax, dword ptr fs:[0]
// 008a602d  50                   push eax
// 008a602e  83ec4c               sub esp, 0x4c
// 008a6031  55                   push ebp
// 008a6032  56                   push esi
// 008a6033  57                   push edi
// 008a6034  a10052b600           mov eax, dword ptr [0xb65200]
// 008a6039  33c4                 xor eax, esp
// 008a603b  50                   push eax
// 008a603c  8d44245c             lea eax, [esp + 0x5c]
// 008a6040  64a300000000         mov dword ptr fs:[0], eax
// 008a6046  8bf1                 mov esi, ecx
// 008a6048  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 008a604c  85ed                 test ebp, ebp
// 008a604e  0f8454010000         je 0x8a61a8
// 008a6054  8d4668               lea eax, [esi + 0x68]
// 008a6057  50                   push eax
// 008a6058  8d4c2470             lea ecx, [esp + 0x70]
// 008a605c  ff1594de9800         call dword ptr [0x98de94]
// 008a6062  56                   push esi
// 008a6063  8d4c244c             lea ecx, [esp + 0x4c]
// 008a6067  c744246800000000     mov dword ptr [esp + 0x68], 0
// 008a606f  e816040800           call 0x92648a
// 008a6074  8d4e74               lea ecx, [esi + 0x74]
// 008a6077  51                   push ecx
// 008a6078  8d54244c             lea edx, [esp + 0x4c]
// 008a607c  52                   push edx
// 008a607d  8d4c2440             lea ecx, [esp + 0x40]
// 008a6081  c644246c01           mov byte ptr [esp + 0x6c], 1
// 008a6086  e8d555faff           call 0x84b660
// 008a608b  56                   push esi
// 008a608c  8d4c241c             lea ecx, [esp + 0x1c]
// 008a6090  c644246802           mov byte ptr [esp + 0x68], 2
// 008a6095  e8d651faff           call 0x84b270
// 008a609a  8d442410             lea eax, [esp + 0x10]
// 008a609e  50                   push eax
// 008a609f  8d4c2470             lea ecx, [esp + 0x70]
// 008a60a3  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008a60a9  50                   push eax
// 008a60aa  8d4c2474             lea ecx, [esp + 0x74]
// 008a60ae  ff1580de9800         call dword ptr [0x98de80]
// 008a60b4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008a60b8  50                   push eax
// 008a60b9  51                   push ecx
// 008a60ba  ff156cb19800         call dword ptr [0x98b16c]
// 008a60c0  8b542418             mov edx, dword ptr [esp + 0x18]
// 008a60c4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008a60c8  8d4c1006             lea ecx, [eax + edx + 6]
// 008a60cc  894c2420             mov dword ptr [esp + 0x20], ecx
// 008a60d0  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a60d3  e8a0030800           call 0x926478
// 008a60d8  8b3d6ccc9800         mov edi, dword ptr [0x98cc6c]
// 008a60de  a900200000           test eax, 0x2000
// 008a60e3  750f                 jne 0x8a60f4
// 008a60e5  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a60e8  e88b030800           call 0x926478
// 008a60ed  a900004000           test eax, 0x400000
// 008a60f2  7412                 je 0x8a6106
// 008a60f4  8b465c               mov eax, dword ptr [esi + 0x5c]
// 008a60f7  2b442420             sub eax, dword ptr [esp + 0x20]
// 008a60fb  6a00                 push 0
// 008a60fd  40                   inc eax
// 008a60fe  50                   push eax
// 008a60ff  8d542420             lea edx, [esp + 0x20]
// 008a6103  52                   push edx
// 008a6104  ffd7                 call edi
// 008a6106  8d442428             lea eax, [esp + 0x28]
// 008a610a  50                   push eax
// 008a610b  e86066f9ff           call 0x83c770
// 008a6110  8bc8                 mov ecx, eax
// 008a6112  e82962f9ff           call 0x83c340
// 008a6117  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a611b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a611f  3bc1                 cmp eax, ecx
// 008a6121  7e10                 jle 0x8a6133
// 008a6123  2bc8                 sub ecx, eax
// 008a6125  6a00                 push 0
// 008a6127  51                   push ecx
// 008a6128  8d4c2420             lea ecx, [esp + 0x20]
// 008a612c  51                   push ecx
// 008a612d  ffd7                 call edi
// 008a612f  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a6133  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a6137  8b542428             mov edx, dword ptr [esp + 0x28]
// 008a613b  3bca                 cmp ecx, edx
// 008a613d  7d14                 jge 0x8a6153
// 008a613f  2bd1                 sub edx, ecx
// 008a6141  6a00                 push 0
// 008a6143  52                   push edx
// 008a6144  8d542420             lea edx, [esp + 0x20]
// 008a6148  52                   push edx
// 008a6149  ffd7                 call edi
// 008a614b  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a614f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a6153  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008a6157  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008a615b  6a01                 push 1
// 008a615d  2bfa                 sub edi, edx
// 008a615f  57                   push edi
// 008a6160  2bc1                 sub eax, ecx
// 008a6162  50                   push eax
// 008a6163  52                   push edx
// 008a6164  51                   push ecx
// 008a6165  8bce                 mov ecx, esi
// 008a6167  e8c6daf4ff           call 0x7f3c32
// 008a616c  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a616f  6a00                 push 0
// 008a6171  6a00                 push 0
// 008a6173  50                   push eax
// 008a6174  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008a617a  8d4c2438             lea ecx, [esp + 0x38]
// 008a617e  c644246401           mov byte ptr [esp + 0x64], 1
// 008a6183  e85855faff           call 0x84b6e0
// 008a6188  8d4c2448             lea ecx, [esp + 0x48]
// 008a618c  c644246400           mov byte ptr [esp + 0x64], 0
// 008a6191  e8ee020800           call 0x926484
// 008a6196  8d4c246c             lea ecx, [esp + 0x6c]
// 008a619a  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008a61a2  ff15c0de9800         call dword ptr [0x98dec0]
// 008a61a8  8b0d80d79800         mov ecx, dword ptr [0x98d780]
// 008a61ae  f7dd                 neg ebp
// 008a61b0  1bed                 sbb ebp, ebp
// 008a61b2  83e5bc               and ebp, 0xffffffbc
// 008a61b5  81c584000000         add ebp, 0x84
// 008a61bb  81cd13020000         or ebp, 0x213
// 008a61c1  55                   push ebp
// 008a61c2  6a00                 push 0
// 008a61c4  6a00                 push 0
// 008a61c6  6a00                 push 0
// 008a61c8  6a00                 push 0
// 008a61ca  51                   push ecx
// 008a61cb  8bce                 mov ecx, esi
// 008a61cd  e85adaf4ff           call 0x7f3c2c
// 008a61d2  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008a61d6  64890d00000000       mov dword ptr fs:[0], ecx
// 008a61dd  59                   pop ecx
// 008a61de  5f                   pop edi
// 008a61df  5e                   pop esi
// 008a61e0  5d                   pop ebp
// 008a61e1  83c458               add esp, 0x58
// 008a61e4  c20400               ret 4
// copied from an identical function in another client (function ?Activate@CXTPReportTip@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportTip.cpp