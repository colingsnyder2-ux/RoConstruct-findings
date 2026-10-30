// roc 2009-06 007cb220  unit: CXTPReportTip  size: 455 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cb220
//
// 007cb220  6aff                 push -1
// 007cb222  6809e58700           push 0x87e509
// 007cb227  64a100000000         mov eax, dword ptr fs:[0]
// 007cb22d  50                   push eax
// 007cb22e  83ec4c               sub esp, 0x4c
// 007cb231  55                   push ebp
// 007cb232  56                   push esi
// 007cb233  57                   push edi
// 007cb234  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007cb239  33c4                 xor eax, esp
// 007cb23b  50                   push eax
// 007cb23c  8d44245c             lea eax, [esp + 0x5c]
// 007cb240  64a300000000         mov dword ptr fs:[0], eax
// 007cb246  8bf1                 mov esi, ecx
// 007cb248  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 007cb24c  85ed                 test ebp, ebp
// 007cb24e  0f8454010000         je 0x7cb3a8
// 007cb254  8d4668               lea eax, [esi + 0x68]
// 007cb257  50                   push eax
// 007cb258  8d4c2470             lea ecx, [esp + 0x70]
// 007cb25c  ff15e4fc8900         call dword ptr [0x89fce4]
// 007cb262  56                   push esi
// 007cb263  8d4c244c             lea ecx, [esp + 0x4c]
// 007cb267  c744246800000000     mov dword ptr [esp + 0x68], 0
// 007cb26f  e8860c0800           call 0x84befa
// 007cb274  8d4e74               lea ecx, [esi + 0x74]
// 007cb277  51                   push ecx
// 007cb278  8d54244c             lea edx, [esp + 0x4c]
// 007cb27c  52                   push edx
// 007cb27d  8d4c2440             lea ecx, [esp + 0x40]
// 007cb281  c644246c01           mov byte ptr [esp + 0x6c], 1
// 007cb286  e8d555faff           call 0x770860
// 007cb28b  56                   push esi
// 007cb28c  8d4c241c             lea ecx, [esp + 0x1c]
// 007cb290  c644246802           mov byte ptr [esp + 0x68], 2
// 007cb295  e8d651faff           call 0x770470
// 007cb29a  8d442410             lea eax, [esp + 0x10]
// 007cb29e  50                   push eax
// 007cb29f  8d4c2470             lea ecx, [esp + 0x70]
// 007cb2a3  ff1554fb8900         call dword ptr [0x89fb54]
// 007cb2a9  50                   push eax
// 007cb2aa  8d4c2474             lea ecx, [esp + 0x74]
// 007cb2ae  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007cb2b4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007cb2b8  50                   push eax
// 007cb2b9  51                   push ecx
// 007cb2ba  ff1550e18900         call dword ptr [0x89e150]
// 007cb2c0  8b542418             mov edx, dword ptr [esp + 0x18]
// 007cb2c4  8b442410             mov eax, dword ptr [esp + 0x10]
// 007cb2c8  8d4c1006             lea ecx, [eax + edx + 6]
// 007cb2cc  894c2420             mov dword ptr [esp + 0x20], ecx
// 007cb2d0  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 007cb2d3  e80a0c0800           call 0x84bee2
// 007cb2d8  8b3df8ed8900         mov edi, dword ptr [0x89edf8]
// 007cb2de  a900200000           test eax, 0x2000
// 007cb2e3  750f                 jne 0x7cb2f4
// 007cb2e5  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 007cb2e8  e8f50b0800           call 0x84bee2
// 007cb2ed  a900004000           test eax, 0x400000
// 007cb2f2  7412                 je 0x7cb306
// 007cb2f4  8b465c               mov eax, dword ptr [esi + 0x5c]
// 007cb2f7  2b442420             sub eax, dword ptr [esp + 0x20]
// 007cb2fb  6a00                 push 0
// 007cb2fd  40                   inc eax
// 007cb2fe  50                   push eax
// 007cb2ff  8d542420             lea edx, [esp + 0x20]
// 007cb303  52                   push edx
// 007cb304  ffd7                 call edi
// 007cb306  8d442428             lea eax, [esp + 0x28]
// 007cb30a  50                   push eax
// 007cb30b  e89066f9ff           call 0x7619a0
// 007cb310  8bc8                 mov ecx, eax
// 007cb312  e85962f9ff           call 0x761570
// 007cb317  8b442420             mov eax, dword ptr [esp + 0x20]
// 007cb31b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007cb31f  3bc1                 cmp eax, ecx
// 007cb321  7e10                 jle 0x7cb333
// 007cb323  2bc8                 sub ecx, eax
// 007cb325  6a00                 push 0
// 007cb327  51                   push ecx
// 007cb328  8d4c2420             lea ecx, [esp + 0x20]
// 007cb32c  51                   push ecx
// 007cb32d  ffd7                 call edi
// 007cb32f  8b442420             mov eax, dword ptr [esp + 0x20]
// 007cb333  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007cb337  8b542428             mov edx, dword ptr [esp + 0x28]
// 007cb33b  3bca                 cmp ecx, edx
// 007cb33d  7d14                 jge 0x7cb353
// 007cb33f  2bd1                 sub edx, ecx
// 007cb341  6a00                 push 0
// 007cb343  52                   push edx
// 007cb344  8d542420             lea edx, [esp + 0x20]
// 007cb348  52                   push edx
// 007cb349  ffd7                 call edi
// 007cb34b  8b442420             mov eax, dword ptr [esp + 0x20]
// 007cb34f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007cb353  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007cb357  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007cb35b  6a01                 push 1
// 007cb35d  2bfa                 sub edi, edx
// 007cb35f  57                   push edi
// 007cb360  2bc1                 sub eax, ecx
// 007cb362  50                   push eax
// 007cb363  52                   push edx
// 007cb364  51                   push ecx
// 007cb365  8bce                 mov ecx, esi
// 007cb367  e89edaf4ff           call 0x718e0a
// 007cb36c  8b4620               mov eax, dword ptr [esi + 0x20]
// 007cb36f  6a00                 push 0
// 007cb371  6a00                 push 0
// 007cb373  50                   push eax
// 007cb374  ff157cee8900         call dword ptr [0x89ee7c]
// 007cb37a  8d4c2438             lea ecx, [esp + 0x38]
// 007cb37e  c644246401           mov byte ptr [esp + 0x64], 1
// 007cb383  e85855faff           call 0x7708e0
// 007cb388  8d4c2448             lea ecx, [esp + 0x48]
// 007cb38c  c644246400           mov byte ptr [esp + 0x64], 0
// 007cb391  e85e0b0800           call 0x84bef4
// 007cb396  8d4c246c             lea ecx, [esp + 0x6c]
// 007cb39a  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 007cb3a2  ff1510fd8900         call dword ptr [0x89fd10]
// 007cb3a8  8b0db8ff8900         mov ecx, dword ptr [0x89ffb8]
// 007cb3ae  f7dd                 neg ebp
// 007cb3b0  1bed                 sbb ebp, ebp
// 007cb3b2  83e5bc               and ebp, 0xffffffbc
// 007cb3b5  81c584000000         add ebp, 0x84
// 007cb3bb  81cd13020000         or ebp, 0x213
// 007cb3c1  55                   push ebp
// 007cb3c2  6a00                 push 0
// 007cb3c4  6a00                 push 0
// 007cb3c6  6a00                 push 0
// 007cb3c8  6a00                 push 0
// 007cb3ca  51                   push ecx
// 007cb3cb  8bce                 mov ecx, esi
// 007cb3cd  e832daf4ff           call 0x718e04
// 007cb3d2  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007cb3d6  64890d00000000       mov dword ptr fs:[0], ecx
// 007cb3dd  59                   pop ecx
// 007cb3de  5f                   pop edi
// 007cb3df  5e                   pop esi
// 007cb3e0  5d                   pop ebp
// 007cb3e1  83c458               add esp, 0x58
// 007cb3e4  c20400               ret 4
// copied from an identical function in another client (function ?Activate@CXTPReportTip@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportTip.cpp