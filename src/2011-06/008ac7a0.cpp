// roc 2011-06 008ac7a0  unit: CXTPReportPaintManager  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ac7a0
//
// 008ac7a0  83ec08               sub esp, 8
// 008ac7a3  53                   push ebx
// 008ac7a4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008ac7a8  55                   push ebp
// 008ac7a9  56                   push esi
// 008ac7aa  57                   push edi
// 008ac7ab  8bf9                 mov edi, ecx
// 008ac7ad  8d442410             lea eax, [esp + 0x10]
// 008ac7b1  8db71c020000         lea esi, [edi + 0x21c]
// 008ac7b7  50                   push eax
// 008ac7b8  8bce                 mov ecx, esi
// 008ac7ba  ff15a826a400         call dword ptr [0xa426a8]
// 008ac7c0  50                   push eax
// 008ac7c1  8bce                 mov ecx, esi
// 008ac7c3  ff15c82da400         call dword ptr [0xa42dc8]
// 008ac7c9  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008ac7cc  8b2d3801a400         mov ebp, dword ptr [0xa40138]
// 008ac7d2  50                   push eax
// 008ac7d3  51                   push ecx
// 008ac7d4  ffd5                 call ebp
// 008ac7d6  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ac7da  83c208               add edx, 8
// 008ac7dd  83fa37               cmp edx, 0x37
// 008ac7e0  7d07                 jge 0x8ac7e9
// 008ac7e2  b837000000           mov eax, 0x37
// 008ac7e7  eb24                 jmp 0x8ac80d
// 008ac7e9  8d442410             lea eax, [esp + 0x10]
// 008ac7ed  50                   push eax
// 008ac7ee  8bce                 mov ecx, esi
// 008ac7f0  ff15a826a400         call dword ptr [0xa426a8]
// 008ac7f6  50                   push eax
// 008ac7f7  8bce                 mov ecx, esi
// 008ac7f9  ff15c82da400         call dword ptr [0xa42dc8]
// 008ac7ff  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008ac802  50                   push eax
// 008ac803  51                   push ecx
// 008ac804  ffd5                 call ebp
// 008ac806  8b442410             mov eax, dword ptr [esp + 0x10]
// 008ac80a  83c008               add eax, 8
// 008ac80d  8b542420             mov edx, dword ptr [esp + 0x20]
// 008ac811  03d0                 add edx, eax
// 008ac813  8b87d4010000         mov eax, dword ptr [edi + 0x1d4]
// 008ac819  89542428             mov dword ptr [esp + 0x28], edx
// 008ac81d  83f8ff               cmp eax, -1
// 008ac820  7506                 jne 0x8ac828
// 008ac822  8b87d0010000         mov eax, dword ptr [edi + 0x1d0]
// 008ac828  8b13                 mov edx, dword ptr [ebx]
// 008ac82a  50                   push eax
// 008ac82b  8b4238               mov eax, dword ptr [edx + 0x38]
// 008ac82e  8bcb                 mov ecx, ebx
// 008ac830  ffd0                 call eax
// 008ac832  83bfbc02000004       cmp dword ptr [edi + 0x2bc], 4
// 008ac839  742d                 je 0x8ac868
// 008ac83b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ac83f  8b17                 mov edx, dword ptr [edi]
// 008ac841  8b9290000000         mov edx, dword ptr [edx + 0x90]
// 008ac847  83ec10               sub esp, 0x10
// 008ac84a  8bc4                 mov eax, esp
// 008ac84c  8908                 mov dword ptr [eax], ecx
// 008ac84e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ac852  894804               mov dword ptr [eax + 4], ecx
// 008ac855  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008ac859  894808               mov dword ptr [eax + 8], ecx
// 008ac85c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008ac860  89480c               mov dword ptr [eax + 0xc], ecx
// 008ac863  53                   push ebx
// 008ac864  8bcf                 mov ecx, edi
// 008ac866  ffd2                 call edx
// 008ac868  8b3b                 mov edi, dword ptr [ebx]
// 008ac86a  6801880000           push 0x8801
// 008ac86f  8d442424             lea eax, [esp + 0x24]
// 008ac873  50                   push eax
// 008ac874  8bce                 mov ecx, esi
// 008ac876  ff15a826a400         call dword ptr [0xa426a8]
// 008ac87c  50                   push eax
// 008ac87d  8bce                 mov ecx, esi
// 008ac87f  ff15c82da400         call dword ptr [0xa42dc8]
// 008ac885  8b5770               mov edx, dword ptr [edi + 0x70]
// 008ac888  50                   push eax
// 008ac889  8bcb                 mov ecx, ebx
// 008ac88b  ffd2                 call edx
// 008ac88d  5f                   pop edi
// 008ac88e  5e                   pop esi
// 008ac88f  5d                   pop ebp
// 008ac890  5b                   pop ebx
// 008ac891  83c408               add esp, 8
// 008ac894  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawNoGroupByText@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp