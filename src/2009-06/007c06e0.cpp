// roc 2009-06 007c06e0  unit: CXTPReportPaintManager  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c06e0
//
// 007c06e0  83ec08               sub esp, 8
// 007c06e3  53                   push ebx
// 007c06e4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007c06e8  55                   push ebp
// 007c06e9  56                   push esi
// 007c06ea  57                   push edi
// 007c06eb  8bf9                 mov edi, ecx
// 007c06ed  8d442410             lea eax, [esp + 0x10]
// 007c06f1  8db71c020000         lea esi, [edi + 0x21c]
// 007c06f7  50                   push eax
// 007c06f8  8bce                 mov ecx, esi
// 007c06fa  ff1554fb8900         call dword ptr [0x89fb54]
// 007c0700  50                   push eax
// 007c0701  8bce                 mov ecx, esi
// 007c0703  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c0709  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007c070c  8b2d50e18900         mov ebp, dword ptr [0x89e150]
// 007c0712  50                   push eax
// 007c0713  51                   push ecx
// 007c0714  ffd5                 call ebp
// 007c0716  8b542410             mov edx, dword ptr [esp + 0x10]
// 007c071a  83c208               add edx, 8
// 007c071d  83fa37               cmp edx, 0x37
// 007c0720  7d07                 jge 0x7c0729
// 007c0722  b837000000           mov eax, 0x37
// 007c0727  eb24                 jmp 0x7c074d
// 007c0729  8d442410             lea eax, [esp + 0x10]
// 007c072d  50                   push eax
// 007c072e  8bce                 mov ecx, esi
// 007c0730  ff1554fb8900         call dword ptr [0x89fb54]
// 007c0736  50                   push eax
// 007c0737  8bce                 mov ecx, esi
// 007c0739  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c073f  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007c0742  50                   push eax
// 007c0743  51                   push ecx
// 007c0744  ffd5                 call ebp
// 007c0746  8b442410             mov eax, dword ptr [esp + 0x10]
// 007c074a  83c008               add eax, 8
// 007c074d  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c0751  03d0                 add edx, eax
// 007c0753  8b87d4010000         mov eax, dword ptr [edi + 0x1d4]
// 007c0759  89542428             mov dword ptr [esp + 0x28], edx
// 007c075d  83f8ff               cmp eax, -1
// 007c0760  7506                 jne 0x7c0768
// 007c0762  8b87d0010000         mov eax, dword ptr [edi + 0x1d0]
// 007c0768  8b13                 mov edx, dword ptr [ebx]
// 007c076a  50                   push eax
// 007c076b  8b4238               mov eax, dword ptr [edx + 0x38]
// 007c076e  8bcb                 mov ecx, ebx
// 007c0770  ffd0                 call eax
// 007c0772  83bfbc02000004       cmp dword ptr [edi + 0x2bc], 4
// 007c0779  742d                 je 0x7c07a8
// 007c077b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007c077f  8b17                 mov edx, dword ptr [edi]
// 007c0781  8b9290000000         mov edx, dword ptr [edx + 0x90]
// 007c0787  83ec10               sub esp, 0x10
// 007c078a  8bc4                 mov eax, esp
// 007c078c  8908                 mov dword ptr [eax], ecx
// 007c078e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007c0792  894804               mov dword ptr [eax + 4], ecx
// 007c0795  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007c0799  894808               mov dword ptr [eax + 8], ecx
// 007c079c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007c07a0  89480c               mov dword ptr [eax + 0xc], ecx
// 007c07a3  53                   push ebx
// 007c07a4  8bcf                 mov ecx, edi
// 007c07a6  ffd2                 call edx
// 007c07a8  8b3b                 mov edi, dword ptr [ebx]
// 007c07aa  6801880000           push 0x8801
// 007c07af  8d442424             lea eax, [esp + 0x24]
// 007c07b3  50                   push eax
// 007c07b4  8bce                 mov ecx, esi
// 007c07b6  ff1554fb8900         call dword ptr [0x89fb54]
// 007c07bc  50                   push eax
// 007c07bd  8bce                 mov ecx, esi
// 007c07bf  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c07c5  8b5770               mov edx, dword ptr [edi + 0x70]
// 007c07c8  50                   push eax
// 007c07c9  8bcb                 mov ecx, ebx
// 007c07cb  ffd2                 call edx
// 007c07cd  5f                   pop edi
// 007c07ce  5e                   pop esi
// 007c07cf  5d                   pop ebp
// 007c07d0  5b                   pop ebx
// 007c07d1  83c408               add esp, 8
// 007c07d4  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawNoGroupByText@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp