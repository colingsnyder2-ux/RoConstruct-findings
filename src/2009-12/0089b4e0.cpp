// roc 2009-12 0089b4e0  unit: CXTPReportPaintManager  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089b4e0
//
// 0089b4e0  83ec08               sub esp, 8
// 0089b4e3  53                   push ebx
// 0089b4e4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0089b4e8  55                   push ebp
// 0089b4e9  56                   push esi
// 0089b4ea  57                   push edi
// 0089b4eb  8bf9                 mov edi, ecx
// 0089b4ed  8d442410             lea eax, [esp + 0x10]
// 0089b4f1  8db71c020000         lea esi, [edi + 0x21c]
// 0089b4f7  50                   push eax
// 0089b4f8  8bce                 mov ecx, esi
// 0089b4fa  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089b500  50                   push eax
// 0089b501  8bce                 mov ecx, esi
// 0089b503  ff1580de9800         call dword ptr [0x98de80]
// 0089b509  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0089b50c  8b2d6cb19800         mov ebp, dword ptr [0x98b16c]
// 0089b512  50                   push eax
// 0089b513  51                   push ecx
// 0089b514  ffd5                 call ebp
// 0089b516  8b542410             mov edx, dword ptr [esp + 0x10]
// 0089b51a  83c208               add edx, 8
// 0089b51d  83fa37               cmp edx, 0x37
// 0089b520  7d07                 jge 0x89b529
// 0089b522  b837000000           mov eax, 0x37
// 0089b527  eb24                 jmp 0x89b54d
// 0089b529  8d442410             lea eax, [esp + 0x10]
// 0089b52d  50                   push eax
// 0089b52e  8bce                 mov ecx, esi
// 0089b530  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089b536  50                   push eax
// 0089b537  8bce                 mov ecx, esi
// 0089b539  ff1580de9800         call dword ptr [0x98de80]
// 0089b53f  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0089b542  50                   push eax
// 0089b543  51                   push ecx
// 0089b544  ffd5                 call ebp
// 0089b546  8b442410             mov eax, dword ptr [esp + 0x10]
// 0089b54a  83c008               add eax, 8
// 0089b54d  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089b551  03d0                 add edx, eax
// 0089b553  8b87d4010000         mov eax, dword ptr [edi + 0x1d4]
// 0089b559  89542428             mov dword ptr [esp + 0x28], edx
// 0089b55d  83f8ff               cmp eax, -1
// 0089b560  7506                 jne 0x89b568
// 0089b562  8b87d0010000         mov eax, dword ptr [edi + 0x1d0]
// 0089b568  8b13                 mov edx, dword ptr [ebx]
// 0089b56a  50                   push eax
// 0089b56b  8b4238               mov eax, dword ptr [edx + 0x38]
// 0089b56e  8bcb                 mov ecx, ebx
// 0089b570  ffd0                 call eax
// 0089b572  83bfbc02000004       cmp dword ptr [edi + 0x2bc], 4
// 0089b579  742d                 je 0x89b5a8
// 0089b57b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089b57f  8b17                 mov edx, dword ptr [edi]
// 0089b581  8b9290000000         mov edx, dword ptr [edx + 0x90]
// 0089b587  83ec10               sub esp, 0x10
// 0089b58a  8bc4                 mov eax, esp
// 0089b58c  8908                 mov dword ptr [eax], ecx
// 0089b58e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089b592  894804               mov dword ptr [eax + 4], ecx
// 0089b595  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089b599  894808               mov dword ptr [eax + 8], ecx
// 0089b59c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089b5a0  89480c               mov dword ptr [eax + 0xc], ecx
// 0089b5a3  53                   push ebx
// 0089b5a4  8bcf                 mov ecx, edi
// 0089b5a6  ffd2                 call edx
// 0089b5a8  8b3b                 mov edi, dword ptr [ebx]
// 0089b5aa  6801880000           push 0x8801
// 0089b5af  8d442424             lea eax, [esp + 0x24]
// 0089b5b3  50                   push eax
// 0089b5b4  8bce                 mov ecx, esi
// 0089b5b6  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089b5bc  50                   push eax
// 0089b5bd  8bce                 mov ecx, esi
// 0089b5bf  ff1580de9800         call dword ptr [0x98de80]
// 0089b5c5  8b5770               mov edx, dword ptr [edi + 0x70]
// 0089b5c8  50                   push eax
// 0089b5c9  8bcb                 mov ecx, ebx
// 0089b5cb  ffd2                 call edx
// 0089b5cd  5f                   pop edi
// 0089b5ce  5e                   pop esi
// 0089b5cf  5d                   pop ebp
// 0089b5d0  5b                   pop ebx
// 0089b5d1  83c408               add esp, 8
// 0089b5d4  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawNoGroupByText@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp