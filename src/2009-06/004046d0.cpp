// roc 2009-06 004046d0  unit: VCApp::?$CComObject  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004046d0
//
// 004046d0  55                   push ebp
// 004046d1  8bec                 mov ebp, esp
// 004046d3  6aff                 push -1
// 004046d5  6848cb8400           push 0x84cb48
// 004046da  64a100000000         mov eax, dword ptr fs:[0]
// 004046e0  50                   push eax
// 004046e1  64892500000000       mov dword ptr fs:[0], esp
// 004046e8  51                   push ecx
// 004046e9  56                   push esi
// 004046ea  57                   push edi
// 004046eb  8b7d08               mov edi, dword ptr [ebp + 8]
// 004046ee  894df0               mov dword ptr [ebp - 0x10], ecx
// 004046f1  85ff                 test edi, edi
// 004046f3  7478                 je 0x40476d
// 004046f5  c7450800000000       mov dword ptr [ebp + 8], 0
// 004046fc  57                   push edi
// 004046fd  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00404704  ff1500e28900         call dword ptr [0x89e200]
// 0040470a  6a00                 push 0
// 0040470c  40                   inc eax
// 0040470d  99                   cdq 
// 0040470e  6a02                 push 2
// 00404710  52                   push edx
// 00404711  50                   push eax
// 00404712  e829553100           call 0x719c40
// 00404717  8bf0                 mov esi, eax
// 00404719  0500000080           add eax, 0x80000000
// 0040471e  83d200               adc edx, 0
// 00404721  85d2                 test edx, edx
// 00404723  7740                 ja 0x404765
// 00404725  7205                 jb 0x40472c
// 00404727  83f8ff               cmp eax, -1
// 0040472a  7739                 ja 0x404765
// 0040472c  81fe00040000         cmp esi, 0x400
// 00404732  7f18                 jg 0x40474c
// 00404734  56                   push esi
// 00404735  e8f6f6ffff           call 0x403e30
// 0040473a  83c404               add esp, 4
// 0040473d  84c0                 test al, al
// 0040473f  740b                 je 0x40474c
// 00404741  8bc6                 mov eax, esi
// 00404743  e8c8543100           call 0x719c10
// 00404748  8bc4                 mov eax, esp
// 0040474a  eb09                 jmp 0x404755
// 0040474c  56                   push esi
// 0040474d  8d4d08               lea ecx, [ebp + 8]
// 00404750  e87bfcffff           call 0x4043d0
// 00404755  6a03                 push 3
// 00404757  56                   push esi
// 00404758  57                   push edi
// 00404759  50                   push eax
// 0040475a  e8e1e6ffff           call 0x402e40
// 0040475f  8bf0                 mov esi, eax
// 00404761  85f6                 test esi, esi
// 00404763  750c                 jne 0x404771
// 00404765  8d4d08               lea ecx, [ebp + 8]
// 00404768  e843f4ffff           call 0x403bb0
// 0040476d  33c0                 xor eax, eax
// 0040476f  eb1d                 jmp 0x40478e
// 00404771  56                   push esi
// 00404772  ff15e0e18900         call dword ptr [0x89e1e0]
// 00404778  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0040477b  50                   push eax
// 0040477c  56                   push esi
// 0040477d  e87eebffff           call 0x403300
// 00404782  8d4d08               lea ecx, [ebp + 8]
// 00404785  8bf0                 mov esi, eax
// 00404787  e824f4ffff           call 0x403bb0
// 0040478c  8bc6                 mov eax, esi
// 0040478e  8d65e8               lea esp, [ebp - 0x18]
// 00404791  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00404794  64890d00000000       mov dword ptr fs:[0], ecx
// 0040479b  5f                   pop edi
// 0040479c  5e                   pop esi
// 0040479d  8be5                 mov esp, ebp
// 0040479f  5d                   pop ebp
// 004047a0  c20400               ret 4
// copied from an identical function in another client (function ?AddString@CParseBuffer@CRegParser@ATL@@QAEHPB_W@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp