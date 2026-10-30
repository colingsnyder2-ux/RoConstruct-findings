// roc 2009-12 0081fa20  unit: CXTPReportControl  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081fa20
//
// 0081fa20  83ec20               sub esp, 0x20
// 0081fa23  53                   push ebx
// 0081fa24  55                   push ebp
// 0081fa25  56                   push esi
// 0081fa26  57                   push edi
// 0081fa27  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0081fa2b  8bf1                 mov esi, ecx
// 0081fa2d  39be18020000         cmp dword ptr [esi + 0x218], edi
// 0081fa33  0f8444010000         je 0x81fb7d
// 0081fa39  33db                 xor ebx, ebx
// 0081fa3b  399ed8010000         cmp dword ptr [esi + 0x1d8], ebx
// 0081fa41  741a                 je 0x81fa5d
// 0081fa43  8b06                 mov eax, dword ptr [esi]
// 0081fa45  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 0081fa4b  57                   push edi
// 0081fa4c  53                   push ebx
// 0081fa4d  ffd2                 call edx
// 0081fa4f  85c0                 test eax, eax
// 0081fa51  750a                 jne 0x81fa5d
// 0081fa53  5f                   pop edi
// 0081fa54  5e                   pop esi
// 0081fa55  5d                   pop ebp
// 0081fa56  5b                   pop ebx
// 0081fa57  83c420               add esp, 0x20
// 0081fa5a  c20400               ret 4
// 0081fa5d  89be18020000         mov dword ptr [esi + 0x218], edi
// 0081fa63  3bfb                 cmp edi, ebx
// 0081fa65  0f84fd000000         je 0x81fb68
// 0081fa6b  399ed8010000         cmp dword ptr [esi + 0x1d8], ebx
// 0081fa71  0f84f1000000         je 0x81fb68
// 0081fa77  8d442410             lea eax, [esp + 0x10]
// 0081fa7b  50                   push eax
// 0081fa7c  8bcf                 mov ecx, edi
// 0081fa7e  e84d800000           call 0x827ad0
// 0081fa83  8b9698000000         mov edx, dword ptr [esi + 0x98]
// 0081fa89  2b9690000000         sub edx, dword ptr [esi + 0x90]
// 0081fa8f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081fa93  3bca                 cmp ecx, edx
// 0081fa95  7c32                 jl 0x81fac9
// 0081fa97  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 0081fa9d  2b9698000000         sub edx, dword ptr [esi + 0x98]
// 0081faa3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0081faa7  03d1                 add edx, ecx
// 0081faa9  3bc2                 cmp eax, edx
// 0081faab  7c0e                 jl 0x81fabb
// 0081faad  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0081fab3  2b8698000000         sub eax, dword ptr [esi + 0x98]
// 0081fab9  03c1                 add eax, ecx
// 0081fabb  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 0081fac1  03c8                 add ecx, eax
// 0081fac3  51                   push ecx
// 0081fac4  e998000000           jmp 0x81fb61
// 0081fac9  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0081facf  3bc3                 cmp eax, ebx
// 0081fad1  895c2434             mov dword ptr [esp + 0x34], ebx
// 0081fad5  7e6b                 jle 0x81fb42
// 0081fad7  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 0081fadd  395a30               cmp dword ptr [edx + 0x30], ebx
// 0081fae0  8be8                 mov ebp, eax
// 0081fae2  7e5e                 jle 0x81fb42
// 0081fae4  85ed                 test ebp, ebp
// 0081fae6  7e5a                 jle 0x81fb42
// 0081fae8  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 0081faee  85db                 test ebx, ebx
// 0081faf0  7c0d                 jl 0x81faff
// 0081faf2  3b5830               cmp ebx, dword ptr [eax + 0x30]
// 0081faf5  7d08                 jge 0x81faff
// 0081faf7  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0081fafa  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 0081fafd  eb02                 jmp 0x81fb01
// 0081faff  33ff                 xor edi, edi
// 0081fb01  3bbe18020000         cmp edi, dword ptr [esi + 0x218]
// 0081fb07  7431                 je 0x81fb3a
// 0081fb09  85ff                 test edi, edi
// 0081fb0b  741f                 je 0x81fb2c
// 0081fb0d  8bcf                 mov ecx, edi
// 0081fb0f  e8ac3f0900           call 0x8b3ac0
// 0081fb14  85c0                 test eax, eax
// 0081fb16  7414                 je 0x81fb2c
// 0081fb18  8d4c2420             lea ecx, [esp + 0x20]
// 0081fb1c  51                   push ecx
// 0081fb1d  8bcf                 mov ecx, edi
// 0081fb1f  4d                   dec ebp
// 0081fb20  e8ab7f0000           call 0x827ad0
// 0081fb25  8b5008               mov edx, dword ptr [eax + 8]
// 0081fb28  89542434             mov dword ptr [esp + 0x34], edx
// 0081fb2c  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 0081fb32  43                   inc ebx
// 0081fb33  3b5830               cmp ebx, dword ptr [eax + 0x30]
// 0081fb36  7cac                 jl 0x81fae4
// 0081fb38  eb08                 jmp 0x81fb42
// 0081fb3a  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0081fb42  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081fb46  8b542434             mov edx, dword ptr [esp + 0x34]
// 0081fb4a  8bc1                 mov eax, ecx
// 0081fb4c  2bc2                 sub eax, edx
// 0081fb4e  85c0                 test eax, eax
// 0081fb50  7f16                 jg 0x81fb68
// 0081fb52  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 0081fb58  85c0                 test eax, eax
// 0081fb5a  740c                 je 0x81fb68
// 0081fb5c  2bc2                 sub eax, edx
// 0081fb5e  03c1                 add eax, ecx
// 0081fb60  50                   push eax
// 0081fb61  8bce                 mov ecx, esi
// 0081fb63  e8f8d9ffff           call 0x81d560
// 0081fb68  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 0081fb6f  740c                 je 0x81fb7d
// 0081fb71  8b16                 mov edx, dword ptr [esi]
// 0081fb73  8b82dc010000         mov eax, dword ptr [edx + 0x1dc]
// 0081fb79  8bce                 mov ecx, esi
// 0081fb7b  ffd0                 call eax
// 0081fb7d  5f                   pop edi
// 0081fb7e  5e                   pop esi
// 0081fb7f  5d                   pop ebp
// 0081fb80  b801000000           mov eax, 1
// 0081fb85  5b                   pop ebx
// 0081fb86  83c420               add esp, 0x20
// 0081fb89  c20400               ret 4
// copied from an identical function in another client (function ?SetFocusedColumn@CXTPReportControl@@QAEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp