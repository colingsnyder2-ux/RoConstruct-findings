// roc 2012-06 00a27630  unit: CXTPReportPaintManager  size: 746 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a27630
//
// 00a27630  6aff                 push -1
// 00a27632  68684aae00           push 0xae4a68
// 00a27637  64a100000000         mov eax, dword ptr fs:[0]
// 00a2763d  50                   push eax
// 00a2763e  83ec50               sub esp, 0x50
// 00a27641  53                   push ebx
// 00a27642  55                   push ebp
// 00a27643  56                   push esi
// 00a27644  57                   push edi
// 00a27645  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2764a  33c4                 xor eax, esp
// 00a2764c  50                   push eax
// 00a2764d  8d442464             lea eax, [esp + 0x64]
// 00a27651  64a300000000         mov dword ptr fs:[0], eax
// 00a27657  8bf9                 mov edi, ecx
// 00a27659  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 00a2765d  53                   push ebx
// 00a2765e  8d4c2418             lea ecx, [esp + 0x18]
// 00a27662  e839dbfaff           call 0x9d51a0
// 00a27667  83bf5c02000000       cmp dword ptr [edi + 0x25c], 0
// 00a2766e  0f8452010000         je 0xa277c6
// 00a27674  837b7865             cmp dword ptr [ebx + 0x78], 0x65
// 00a27678  7559                 jne 0xa276d3
// 00a2767a  8db7d8020000         lea esi, [edi + 0x2d8]
// 00a27680  8bce                 mov ecx, esi
// 00a27682  e8e9e1fcff           call 0x9f5870
// 00a27687  85c0                 test eax, eax
// 00a27689  7448                 je 0xa276d3
// 00a2768b  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 00a27692  7410                 je 0xa276a4
// 00a27694  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 00a2769b  7407                 je 0xa276a4
// 00a2769d  b901000000           mov ecx, 1
// 00a276a2  eb02                 jmp 0xa276a6
// 00a276a4  33c9                 xor ecx, ecx
// 00a276a6  8b442474             mov eax, dword ptr [esp + 0x74]
// 00a276aa  85c0                 test eax, eax
// 00a276ac  7403                 je 0xa276b1
// 00a276ae  8b4004               mov eax, dword ptr [eax + 4]
// 00a276b1  6a00                 push 0
// 00a276b3  8d542418             lea edx, [esp + 0x18]
// 00a276b7  52                   push edx
// 00a276b8  33d2                 xor edx, edx
// 00a276ba  85c9                 test ecx, ecx
// 00a276bc  0f95c2               setne dl
// 00a276bf  8bce                 mov ecx, esi
// 00a276c1  8d541201             lea edx, [edx + edx + 1]
// 00a276c5  52                   push edx
// 00a276c6  6a01                 push 1
// 00a276c8  50                   push eax
// 00a276c9  e8d2defcff           call 0x9f55a0
// 00a276ce  e931020000           jmp 0xa27904
// 00a276d3  837b7864             cmp dword ptr [ebx + 0x78], 0x64
// 00a276d7  0f85e9000000         jne 0xa277c6
// 00a276dd  8dafcc020000         lea ebp, [edi + 0x2cc]
// 00a276e3  8bcd                 mov ecx, ebp
// 00a276e5  e886e1fcff           call 0x9f5870
// 00a276ea  85c0                 test eax, eax
// 00a276ec  0f84d4000000         je 0xa277c6
// 00a276f2  e86961f9ff           call 0x9bd860
// 00a276f7  6a0f                 push 0xf
// 00a276f9  8bc8                 mov ecx, eax
// 00a276fb  e8e058f9ff           call 0x9bcfe0
// 00a27700  8b742474             mov esi, dword ptr [esp + 0x74]
// 00a27704  50                   push eax
// 00a27705  8d442418             lea eax, [esp + 0x18]
// 00a27709  50                   push eax
// 00a2770a  8bce                 mov ecx, esi
// 00a2770c  e89bb7f5ff           call 0x982eac
// 00a27711  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 00a27718  7410                 je 0xa2772a
// 00a2771a  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 00a27721  7407                 je 0xa2772a
// 00a27723  b903000000           mov ecx, 3
// 00a27728  eb1a                 jmp 0xa27744
// 00a2772a  ff15e83bb200         call dword ptr [0xb23be8]
// 00a27730  50                   push eax
// 00a27731  e830aff5ff           call 0x982666
// 00a27736  33c9                 xor ecx, ecx
// 00a27738  3bc3                 cmp eax, ebx
// 00a2773a  0f94c1               sete cl
// 00a2773d  8d0c8d01000000       lea ecx, [ecx*4 + 1]
// 00a27744  85f6                 test esi, esi
// 00a27746  7504                 jne 0xa2774c
// 00a27748  33c0                 xor eax, eax
// 00a2774a  eb03                 jmp 0xa2774f
// 00a2774c  8b4604               mov eax, dword ptr [esi + 4]
// 00a2774f  6a00                 push 0
// 00a27751  8d542418             lea edx, [esp + 0x18]
// 00a27755  52                   push edx
// 00a27756  51                   push ecx
// 00a27757  6a01                 push 1
// 00a27759  50                   push eax
// 00a2775a  8bcd                 mov ecx, ebp
// 00a2775c  e83fdefcff           call 0x9f55a0
// 00a27761  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a27765  8b3d7421b200         mov edi, dword ptr [0xb22174]
// 00a2776b  8d48fd               lea ecx, [eax - 3]
// 00a2776e  51                   push ecx
// 00a2776f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a27773  8d5105               lea edx, [ecx + 5]
// 00a27776  52                   push edx
// 00a27777  83c0fb               add eax, -5
// 00a2777a  50                   push eax
// 00a2777b  8b4604               mov eax, dword ptr [esi + 4]
// 00a2777e  83c103               add ecx, 3
// 00a27781  51                   push ecx
// 00a27782  50                   push eax
// 00a27783  ffd7                 call edi
// 00a27785  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a27789  8d48fd               lea ecx, [eax - 3]
// 00a2778c  51                   push ecx
// 00a2778d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a27791  8d5109               lea edx, [ecx + 9]
// 00a27794  52                   push edx
// 00a27795  83c0fb               add eax, -5
// 00a27798  50                   push eax
// 00a27799  8b4604               mov eax, dword ptr [esi + 4]
// 00a2779c  83c107               add ecx, 7
// 00a2779f  51                   push ecx
// 00a277a0  50                   push eax
// 00a277a1  ffd7                 call edi
// 00a277a3  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a277a7  8d48fd               lea ecx, [eax - 3]
// 00a277aa  51                   push ecx
// 00a277ab  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a277af  8d510d               lea edx, [ecx + 0xd]
// 00a277b2  52                   push edx
// 00a277b3  83c0fb               add eax, -5
// 00a277b6  50                   push eax
// 00a277b7  8b4604               mov eax, dword ptr [esi + 4]
// 00a277ba  83c10b               add ecx, 0xb
// 00a277bd  51                   push ecx
// 00a277be  50                   push eax
// 00a277bf  ffd7                 call edi
// 00a277c1  e93e010000           jmp 0xa27904
// 00a277c6  8b17                 mov edx, dword ptr [edi]
// 00a277c8  8b742474             mov esi, dword ptr [esp + 0x74]
// 00a277cc  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 00a277d2  53                   push ebx
// 00a277d3  56                   push esi
// 00a277d4  8bcf                 mov ecx, edi
// 00a277d6  ffd0                 call eax
// 00a277d8  e88360f9ff           call 0x9bd860
// 00a277dd  6a12                 push 0x12
// 00a277df  8bc8                 mov ecx, eax
// 00a277e1  e8fa57f9ff           call 0x9bcfe0
// 00a277e6  85f6                 test esi, esi
// 00a277e8  7504                 jne 0xa277ee
// 00a277ea  33c9                 xor ecx, ecx
// 00a277ec  eb03                 jmp 0xa277f1
// 00a277ee  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a277f1  50                   push eax
// 00a277f2  51                   push ecx
// 00a277f3  8d4c2440             lea ecx, [esp + 0x40]
// 00a277f7  e8d4ddfaff           call 0x9d55d0
// 00a277fc  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 00a27804  e85760f9ff           call 0x9bd860
// 00a27809  6a12                 push 0x12
// 00a2780b  8bc8                 mov ecx, eax
// 00a2780d  e8ce57f9ff           call 0x9bcfe0
// 00a27812  85f6                 test esi, esi
// 00a27814  7504                 jne 0xa2781a
// 00a27816  33c9                 xor ecx, ecx
// 00a27818  eb03                 jmp 0xa2781d
// 00a2781a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a2781d  50                   push eax
// 00a2781e  51                   push ecx
// 00a2781f  8d4c242c             lea ecx, [esp + 0x2c]
// 00a27823  e868defaff           call 0x9d5690
// 00a27828  837b7865             cmp dword ptr [ebx + 0x78], 0x65
// 00a2782c  7556                 jne 0xa27884
// 00a2782e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a27832  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a27836  8d040a               lea eax, [edx + ecx]
// 00a27839  99                   cdq 
// 00a2783a  2bc2                 sub eax, edx
// 00a2783c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a27840  8bc8                 mov ecx, eax
// 00a27842  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a27846  03c2                 add eax, edx
// 00a27848  99                   cdq 
// 00a27849  2bc2                 sub eax, edx
// 00a2784b  d1f8                 sar eax, 1
// 00a2784d  d1f9                 sar ecx, 1
// 00a2784f  8d78fd               lea edi, [eax - 3]
// 00a27852  8d51ff               lea edx, [ecx - 1]
// 00a27855  897c244c             mov dword ptr [esp + 0x4c], edi
// 00a27859  8d7803               lea edi, [eax + 3]
// 00a2785c  83c102               add ecx, 2
// 00a2785f  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a27863  6a03                 push 3
// 00a27865  8d442450             lea eax, [esp + 0x50]
// 00a27869  894c2464             mov dword ptr [esp + 0x64], ecx
// 00a2786d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a27870  50                   push eax
// 00a27871  51                   push ecx
// 00a27872  8954245c             mov dword ptr [esp + 0x5c], edx
// 00a27876  897c2460             mov dword ptr [esp + 0x60], edi
// 00a2787a  89542464             mov dword ptr [esp + 0x64], edx
// 00a2787e  ff15b020b200         call dword ptr [0xb220b0]
// 00a27884  837b7864             cmp dword ptr [ebx + 0x78], 0x64
// 00a27888  7560                 jne 0xa278ea
// 00a2788a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a2788e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a27892  8d48fd               lea ecx, [eax - 3]
// 00a27895  8d7a05               lea edi, [edx + 5]
// 00a27898  51                   push ecx
// 00a27899  57                   push edi
// 00a2789a  8b3d7421b200         mov edi, dword ptr [0xb22174]
// 00a278a0  83c0fb               add eax, -5
// 00a278a3  83c203               add edx, 3
// 00a278a6  50                   push eax
// 00a278a7  52                   push edx
// 00a278a8  8b5604               mov edx, dword ptr [esi + 4]
// 00a278ab  52                   push edx
// 00a278ac  ffd7                 call edi
// 00a278ae  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a278b2  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a278b6  8d48fd               lea ecx, [eax - 3]
// 00a278b9  51                   push ecx
// 00a278ba  8d5a09               lea ebx, [edx + 9]
// 00a278bd  53                   push ebx
// 00a278be  83c0fb               add eax, -5
// 00a278c1  50                   push eax
// 00a278c2  8b4604               mov eax, dword ptr [esi + 4]
// 00a278c5  83c207               add edx, 7
// 00a278c8  52                   push edx
// 00a278c9  50                   push eax
// 00a278ca  ffd7                 call edi
// 00a278cc  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a278d0  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a278d4  8d48fd               lea ecx, [eax - 3]
// 00a278d7  51                   push ecx
// 00a278d8  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a278db  8d5a0d               lea ebx, [edx + 0xd]
// 00a278de  53                   push ebx
// 00a278df  83c0fb               add eax, -5
// 00a278e2  50                   push eax
// 00a278e3  83c20b               add edx, 0xb
// 00a278e6  52                   push edx
// 00a278e7  51                   push ecx
// 00a278e8  ffd7                 call edi
// 00a278ea  8d4c2424             lea ecx, [esp + 0x24]
// 00a278ee  e82ddefaff           call 0x9d5720
// 00a278f3  8d4c2438             lea ecx, [esp + 0x38]
// 00a278f7  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 00a278ff  e85cddfaff           call 0x9d5660
// 00a27904  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a27908  64890d00000000       mov dword ptr fs:[0], ecx
// 00a2790f  59                   pop ecx
// 00a27910  5f                   pop edi
// 00a27911  5e                   pop esi
// 00a27912  5d                   pop ebp
// 00a27913  5b                   pop ebx
// 00a27914  83c45c               add esp, 0x5c
// 00a27917  c20800               ret 8
// copied from an identical function in another client (function ?DrawInplaceButton@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp