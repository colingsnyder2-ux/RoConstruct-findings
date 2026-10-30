// roc 2010-06 0084f640  unit: CXTPReportPaintManager  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084f640
//
// 0084f640  83ec08               sub esp, 8
// 0084f643  53                   push ebx
// 0084f644  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0084f648  55                   push ebp
// 0084f649  56                   push esi
// 0084f64a  57                   push edi
// 0084f64b  8bf9                 mov edi, ecx
// 0084f64d  8d442410             lea eax, [esp + 0x10]
// 0084f651  8db71c020000         lea esi, [edi + 0x21c]
// 0084f657  50                   push eax
// 0084f658  8bce                 mov ecx, esi
// 0084f65a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084f660  50                   push eax
// 0084f661  8bce                 mov ecx, esi
// 0084f663  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0084f669  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0084f66c  8b2d94a19e00         mov ebp, dword ptr [0x9ea194]
// 0084f672  50                   push eax
// 0084f673  51                   push ecx
// 0084f674  ffd5                 call ebp
// 0084f676  8b542410             mov edx, dword ptr [esp + 0x10]
// 0084f67a  83c208               add edx, 8
// 0084f67d  83fa37               cmp edx, 0x37
// 0084f680  7d07                 jge 0x84f689
// 0084f682  b837000000           mov eax, 0x37
// 0084f687  eb24                 jmp 0x84f6ad
// 0084f689  8d442410             lea eax, [esp + 0x10]
// 0084f68d  50                   push eax
// 0084f68e  8bce                 mov ecx, esi
// 0084f690  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084f696  50                   push eax
// 0084f697  8bce                 mov ecx, esi
// 0084f699  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0084f69f  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0084f6a2  50                   push eax
// 0084f6a3  51                   push ecx
// 0084f6a4  ffd5                 call ebp
// 0084f6a6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0084f6aa  83c008               add eax, 8
// 0084f6ad  8b542420             mov edx, dword ptr [esp + 0x20]
// 0084f6b1  03d0                 add edx, eax
// 0084f6b3  8b87d4010000         mov eax, dword ptr [edi + 0x1d4]
// 0084f6b9  89542428             mov dword ptr [esp + 0x28], edx
// 0084f6bd  83f8ff               cmp eax, -1
// 0084f6c0  7506                 jne 0x84f6c8
// 0084f6c2  8b87d0010000         mov eax, dword ptr [edi + 0x1d0]
// 0084f6c8  8b13                 mov edx, dword ptr [ebx]
// 0084f6ca  50                   push eax
// 0084f6cb  8b4238               mov eax, dword ptr [edx + 0x38]
// 0084f6ce  8bcb                 mov ecx, ebx
// 0084f6d0  ffd0                 call eax
// 0084f6d2  83bfbc02000004       cmp dword ptr [edi + 0x2bc], 4
// 0084f6d9  742d                 je 0x84f708
// 0084f6db  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0084f6df  8b17                 mov edx, dword ptr [edi]
// 0084f6e1  8b9290000000         mov edx, dword ptr [edx + 0x90]
// 0084f6e7  83ec10               sub esp, 0x10
// 0084f6ea  8bc4                 mov eax, esp
// 0084f6ec  8908                 mov dword ptr [eax], ecx
// 0084f6ee  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0084f6f2  894804               mov dword ptr [eax + 4], ecx
// 0084f6f5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0084f6f9  894808               mov dword ptr [eax + 8], ecx
// 0084f6fc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0084f700  89480c               mov dword ptr [eax + 0xc], ecx
// 0084f703  53                   push ebx
// 0084f704  8bcf                 mov ecx, edi
// 0084f706  ffd2                 call edx
// 0084f708  8b3b                 mov edi, dword ptr [ebx]
// 0084f70a  6801880000           push 0x8801
// 0084f70f  8d442424             lea eax, [esp + 0x24]
// 0084f713  50                   push eax
// 0084f714  8bce                 mov ecx, esi
// 0084f716  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084f71c  50                   push eax
// 0084f71d  8bce                 mov ecx, esi
// 0084f71f  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0084f725  8b5770               mov edx, dword ptr [edi + 0x70]
// 0084f728  50                   push eax
// 0084f729  8bcb                 mov ecx, ebx
// 0084f72b  ffd2                 call edx
// 0084f72d  5f                   pop edi
// 0084f72e  5e                   pop esi
// 0084f72f  5d                   pop ebp
// 0084f730  5b                   pop ebx
// 0084f731  83c408               add esp, 8
// 0084f734  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawNoGroupByText@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp