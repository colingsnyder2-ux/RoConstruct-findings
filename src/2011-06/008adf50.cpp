// roc 2011-06 008adf50  unit: CXTPReportPaintManager  size: 658 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008adf50
//
// 008adf50  6aff                 push -1
// 008adf52  6851aea000           push 0xa0ae51
// 008adf57  64a100000000         mov eax, dword ptr fs:[0]
// 008adf5d  50                   push eax
// 008adf5e  83ec30               sub esp, 0x30
// 008adf61  53                   push ebx
// 008adf62  55                   push ebp
// 008adf63  56                   push esi
// 008adf64  57                   push edi
// 008adf65  a12058c900           mov eax, dword ptr [0xc95820]
// 008adf6a  33c4                 xor eax, esp
// 008adf6c  50                   push eax
// 008adf6d  8d442444             lea eax, [esp + 0x44]
// 008adf71  64a300000000         mov dword ptr fs:[0], eax
// 008adf77  8bf9                 mov edi, ecx
// 008adf79  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 008adf7d  8b453c               mov eax, dword ptr [ebp + 0x3c]
// 008adf80  8b742454             mov esi, dword ptr [esp + 0x54]
// 008adf84  85c0                 test eax, eax
// 008adf86  7479                 je 0x8ae001
// 008adf88  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 008adf8e  83f8ff               cmp eax, -1
// 008adf91  7506                 jne 0x8adf99
// 008adf93  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 008adf99  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008adf9d  8b542468             mov edx, dword ptr [esp + 0x68]
// 008adfa1  50                   push eax
// 008adfa2  8b442468             mov eax, dword ptr [esp + 0x68]
// 008adfa6  2bc8                 sub ecx, eax
// 008adfa8  83e909               sub ecx, 9
// 008adfab  51                   push ecx
// 008adfac  83c006               add eax, 6
// 008adfaf  50                   push eax
// 008adfb0  52                   push edx
// 008adfb1  56                   push esi
// 008adfb2  8bcf                 mov ecx, edi
// 008adfb4  e877daffff           call 0x8aba30
// 008adfb9  8b87bc020000         mov eax, dword ptr [edi + 0x2bc]
// 008adfbf  83f803               cmp eax, 3
// 008adfc2  740b                 je 0x8adfcf
// 008adfc4  8d8fd0000000         lea ecx, [edi + 0xd0]
// 008adfca  83f804               cmp eax, 4
// 008adfcd  7506                 jne 0x8adfd5
// 008adfcf  8d8fc0010000         lea ecx, [edi + 0x1c0]
// 008adfd5  8b4108               mov eax, dword ptr [ecx + 8]
// 008adfd8  83f8ff               cmp eax, -1
// 008adfdb  7503                 jne 0x8adfe0
// 008adfdd  8b4104               mov eax, dword ptr [ecx + 4]
// 008adfe0  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008adfe4  8b542468             mov edx, dword ptr [esp + 0x68]
// 008adfe8  50                   push eax
// 008adfe9  8b442468             mov eax, dword ptr [esp + 0x68]
// 008adfed  2bc8                 sub ecx, eax
// 008adfef  83e909               sub ecx, 9
// 008adff2  51                   push ecx
// 008adff3  83c005               add eax, 5
// 008adff6  50                   push eax
// 008adff7  4a                   dec edx
// 008adff8  52                   push edx
// 008adff9  56                   push esi
// 008adffa  8bcf                 mov ecx, edi
// 008adffc  e82fdaffff           call 0x8aba30
// 008ae001  6a01                 push 1
// 008ae003  8bce                 mov ecx, esi
// 008ae005  e8e4e51100           call 0x9cc5ee
// 008ae00a  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 008ae010  83f8ff               cmp eax, -1
// 008ae013  7506                 jne 0x8ae01b
// 008ae015  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 008ae01b  50                   push eax
// 008ae01c  8bcd                 mov ecx, ebp
// 008ae01e  e8fd1af8ff           call 0x82fb20
// 008ae023  50                   push eax
// 008ae024  56                   push esi
// 008ae025  8d4c2440             lea ecx, [esp + 0x40]
// 008ae029  e832f1faff           call 0x85d160
// 008ae02e  8d442458             lea eax, [esp + 0x58]
// 008ae032  50                   push eax
// 008ae033  8bcd                 mov ecx, ebp
// 008ae035  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008ae03d  e8bed7ffff           call 0x8ab800
// 008ae042  8d4c2414             lea ecx, [esp + 0x14]
// 008ae046  51                   push ecx
// 008ae047  8d4c245c             lea ecx, [esp + 0x5c]
// 008ae04b  c644245001           mov byte ptr [esp + 0x50], 1
// 008ae050  ff15a826a400         call dword ptr [0xa426a8]
// 008ae056  50                   push eax
// 008ae057  8d4c2460             lea ecx, [esp + 0x60]
// 008ae05b  ff15c82da400         call dword ptr [0xa42dc8]
// 008ae061  8b5608               mov edx, dword ptr [esi + 8]
// 008ae064  50                   push eax
// 008ae065  52                   push edx
// 008ae066  ff153801a400         call dword ptr [0xa40138]
// 008ae06c  8b442460             mov eax, dword ptr [esp + 0x60]
// 008ae070  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008ae074  8b542468             mov edx, dword ptr [esp + 0x68]
// 008ae078  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 008ae07c  83c102               add ecx, 2
// 008ae07f  89442424             mov dword ptr [esp + 0x24], eax
// 008ae083  83c003               add eax, 3
// 008ae086  894c2428             mov dword ptr [esp + 0x28], ecx
// 008ae08a  83ea03               sub edx, 3
// 008ae08d  83eb02               sub ebx, 2
// 008ae090  8bcd                 mov ecx, ebp
// 008ae092  89442424             mov dword ptr [esp + 0x24], eax
// 008ae096  8954242c             mov dword ptr [esp + 0x2c], edx
// 008ae09a  895c2430             mov dword ptr [esp + 0x30], ebx
// 008ae09e  e81d1bf8ff           call 0x82fbc0
// 008ae0a3  85c0                 test eax, eax
// 008ae0a5  7446                 je 0x8ae0ed
// 008ae0a7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008ae0ab  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008ae0af  2b442424             sub eax, dword ptr [esp + 0x24]
// 008ae0b3  83c306               add ebx, 6
// 008ae0b6  3bc3                 cmp eax, ebx
// 008ae0b8  7e33                 jle 0x8ae0ed
// 008ae0ba  8bcd                 mov ecx, ebp
// 008ae0bc  e8ff1af8ff           call 0x82fbc0
// 008ae0c1  a802                 test al, 2
// 008ae0c3  740a                 je 0x8ae0cf
// 008ae0c5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008ae0c9  2bcb                 sub ecx, ebx
// 008ae0cb  894c2424             mov dword ptr [esp + 0x24], ecx
// 008ae0cf  8bcd                 mov ecx, ebp
// 008ae0d1  e8ea1af8ff           call 0x82fbc0
// 008ae0d6  a801                 test al, 1
// 008ae0d8  7413                 je 0x8ae0ed
// 008ae0da  8b442424             mov eax, dword ptr [esp + 0x24]
// 008ae0de  2bc3                 sub eax, ebx
// 008ae0e0  0344242c             add eax, dword ptr [esp + 0x2c]
// 008ae0e4  99                   cdq 
// 008ae0e5  2bc2                 sub eax, edx
// 008ae0e7  d1f8                 sar eax, 1
// 008ae0e9  89442424             mov dword ptr [esp + 0x24], eax
// 008ae0ed  83bfa802000000       cmp dword ptr [edi + 0x2a8], 0
// 008ae0f4  7579                 jne 0x8ae16f
// 008ae0f6  8bcd                 mov ecx, ebp
// 008ae0f8  e8c31af8ff           call 0x82fbc0
// 008ae0fd  a810                 test al, 0x10
// 008ae0ff  746e                 je 0x8ae16f
// 008ae101  8b442428             mov eax, dword ptr [esp + 0x28]
// 008ae105  8b542424             mov edx, dword ptr [esp + 0x24]
// 008ae109  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008ae10d  8b3e                 mov edi, dword ptr [esi]
// 008ae10f  89442418             mov dword ptr [esp + 0x18], eax
// 008ae113  89542414             mov dword ptr [esp + 0x14], edx
// 008ae117  8b542430             mov edx, dword ptr [esp + 0x30]
// 008ae11b  68108c0000           push 0x8c10
// 008ae120  8d442418             lea eax, [esp + 0x18]
// 008ae124  894c2420             mov dword ptr [esp + 0x20], ecx
// 008ae128  50                   push eax
// 008ae129  8d4c2460             lea ecx, [esp + 0x60]
// 008ae12d  bb10880000           mov ebx, 0x8810
// 008ae132  89542428             mov dword ptr [esp + 0x28], edx
// 008ae136  ff15a826a400         call dword ptr [0xa426a8]
// 008ae13c  50                   push eax
// 008ae13d  8d4c2464             lea ecx, [esp + 0x64]
// 008ae141  ff15c82da400         call dword ptr [0xa42dc8]
// 008ae147  8b5770               mov edx, dword ptr [edi + 0x70]
// 008ae14a  50                   push eax
// 008ae14b  8bce                 mov ecx, esi
// 008ae14d  ffd2                 call edx
// 008ae14f  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ae153  2b442420             sub eax, dword ptr [esp + 0x20]
// 008ae157  2b442428             sub eax, dword ptr [esp + 0x28]
// 008ae15b  03442430             add eax, dword ptr [esp + 0x30]
// 008ae15f  83f801               cmp eax, 1
// 008ae162  7e10                 jle 0x8ae174
// 008ae164  99                   cdq 
// 008ae165  2bc2                 sub eax, edx
// 008ae167  d1f8                 sar eax, 1
// 008ae169  01442428             add dword ptr [esp + 0x28], eax
// 008ae16d  eb05                 jmp 0x8ae174
// 008ae16f  bb24880000           mov ebx, 0x8824
// 008ae174  8d4c2458             lea ecx, [esp + 0x58]
// 008ae178  ff15a826a400         call dword ptr [0xa426a8]
// 008ae17e  85c0                 test eax, eax
// 008ae180  7e2f                 jle 0x8ae1b1
// 008ae182  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008ae186  3b442424             cmp eax, dword ptr [esp + 0x24]
// 008ae18a  7e25                 jle 0x8ae1b1
// 008ae18c  8b3e                 mov edi, dword ptr [esi]
// 008ae18e  53                   push ebx
// 008ae18f  8d4c2428             lea ecx, [esp + 0x28]
// 008ae193  51                   push ecx
// 008ae194  8d4c2460             lea ecx, [esp + 0x60]
// 008ae198  ff15a826a400         call dword ptr [0xa426a8]
// 008ae19e  50                   push eax
// 008ae19f  8d4c2464             lea ecx, [esp + 0x64]
// 008ae1a3  ff15c82da400         call dword ptr [0xa42dc8]
// 008ae1a9  8b5770               mov edx, dword ptr [edi + 0x70]
// 008ae1ac  50                   push eax
// 008ae1ad  8bce                 mov ecx, esi
// 008ae1af  ffd2                 call edx
// 008ae1b1  8d4c2458             lea ecx, [esp + 0x58]
// 008ae1b5  ff15082ea400         call dword ptr [0xa42e08]
// 008ae1bb  8d4c2434             lea ecx, [esp + 0x34]
// 008ae1bf  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 008ae1c7  e8d4effaff           call 0x85d1a0
// 008ae1cc  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008ae1d0  64890d00000000       mov dword ptr fs:[0], ecx
// 008ae1d7  59                   pop ecx
// 008ae1d8  5f                   pop edi
// 008ae1d9  5e                   pop esi
// 008ae1da  5d                   pop ebp
// 008ae1db  5b                   pop ebx
// 008ae1dc  83c43c               add esp, 0x3c
// 008ae1df  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawColumnFooter@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportColumn@@PAVCXTPReportHeader@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp