// roc 2012-06 00a6f780  unit: CXTPRibbonGroup  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6f780
//
// 00a6f780  83ec1c               sub esp, 0x1c
// 00a6f783  53                   push ebx
// 00a6f784  55                   push ebp
// 00a6f785  56                   push esi
// 00a6f786  8be9                 mov ebp, ecx
// 00a6f788  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 00a6f78b  57                   push edi
// 00a6f78c  e85fecfaff           call 0xa1e3f0
// 00a6f791  8b9860060000         mov ebx, dword ptr [eax + 0x660]
// 00a6f797  8b7d34               mov edi, dword ptr [ebp + 0x34]
// 00a6f79a  8b454c               mov eax, dword ptr [ebp + 0x4c]
// 00a6f79d  035d38               add ebx, dword ptr [ebp + 0x38]
// 00a6f7a0  33c9                 xor ecx, ecx
// 00a6f7a2  83c704               add edi, 4
// 00a6f7a5  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a6f7a9  85c0                 test eax, eax
// 00a6f7ab  7f0e                 jg 0xa6f7bb
// 00a6f7ad  5f                   pop edi
// 00a6f7ae  5e                   pop esi
// 00a6f7af  5d                   pop ebp
// 00a6f7b0  5b                   pop ebx
// 00a6f7b1  83c41c               add esp, 0x1c
// 00a6f7b4  c20400               ret 4
// 00a6f7b7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6f7bb  85c9                 test ecx, ecx
// 00a6f7bd  7c15                 jl 0xa6f7d4
// 00a6f7bf  3bc8                 cmp ecx, eax
// 00a6f7c1  7d11                 jge 0xa6f7d4
// 00a6f7c3  3b4d4c               cmp ecx, dword ptr [ebp + 0x4c]
// 00a6f7c6  0f8d82000000         jge 0xa6f84e
// 00a6f7cc  8b4548               mov eax, dword ptr [ebp + 0x48]
// 00a6f7cf  8b3488               mov esi, dword ptr [eax + ecx*4]
// 00a6f7d2  eb02                 jmp 0xa6f7d6
// 00a6f7d4  33f6                 xor esi, esi
// 00a6f7d6  8b16                 mov edx, dword ptr [esi]
// 00a6f7d8  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00a6f7de  6a00                 push 0
// 00a6f7e0  8bce                 mov ecx, esi
// 00a6f7e2  ffd0                 call eax
// 00a6f7e4  85c0                 test eax, eax
// 00a6f7e6  7448                 je 0xa6f830
// 00a6f7e8  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a6f7ec  8b16                 mov edx, dword ptr [esi]
// 00a6f7ee  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 00a6f7f4  50                   push eax
// 00a6f7f5  8d4c2418             lea ecx, [esp + 0x18]
// 00a6f7f9  51                   push ecx
// 00a6f7fa  8bce                 mov ecx, esi
// 00a6f7fc  ffd2                 call edx
// 00a6f7fe  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a6f802  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a6f806  8d0c38               lea ecx, [eax + edi]
// 00a6f809  83ec10               sub esp, 0x10
// 00a6f80c  8bc4                 mov eax, esp
// 00a6f80e  03d3                 add edx, ebx
// 00a6f810  8938                 mov dword ptr [eax], edi
// 00a6f812  89542438             mov dword ptr [esp + 0x38], edx
// 00a6f816  8b16                 mov edx, dword ptr [esi]
// 00a6f818  8b527c               mov edx, dword ptr [edx + 0x7c]
// 00a6f81b  895804               mov dword ptr [eax + 4], ebx
// 00a6f81e  894808               mov dword ptr [eax + 8], ecx
// 00a6f821  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a6f825  89480c               mov dword ptr [eax + 0xc], ecx
// 00a6f828  8bce                 mov ecx, esi
// 00a6f82a  ffd2                 call edx
// 00a6f82c  037c2414             add edi, dword ptr [esp + 0x14]
// 00a6f830  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6f834  8b454c               mov eax, dword ptr [ebp + 0x4c]
// 00a6f837  41                   inc ecx
// 00a6f838  3bc8                 cmp ecx, eax
// 00a6f83a  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a6f83e  0f8c73ffffff         jl 0xa6f7b7
// 00a6f844  5f                   pop edi
// 00a6f845  5e                   pop esi
// 00a6f846  5d                   pop ebp
// 00a6f847  5b                   pop ebx
// 00a6f848  83c41c               add esp, 0x1c
// 00a6f84b  c20400               ret 4
// 00a6f84e  e86d2bf1ff           call 0x9823c0
// copied from an identical function in another client (function ?RepositionControls@CXTPRibbonGroup@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp