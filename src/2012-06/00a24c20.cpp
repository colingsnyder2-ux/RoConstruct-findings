// roc 2012-06 00a24c20  unit: CXTPReportPaintManager  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a24c20
//
// 00a24c20  83ec08               sub esp, 8
// 00a24c23  53                   push ebx
// 00a24c24  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00a24c28  55                   push ebp
// 00a24c29  56                   push esi
// 00a24c2a  57                   push edi
// 00a24c2b  8bf9                 mov edi, ecx
// 00a24c2d  8d442410             lea eax, [esp + 0x10]
// 00a24c31  8db71c020000         lea esi, [edi + 0x21c]
// 00a24c37  50                   push eax
// 00a24c38  8bce                 mov ecx, esi
// 00a24c3a  ff155846b200         call dword ptr [0xb24658]
// 00a24c40  50                   push eax
// 00a24c41  8bce                 mov ecx, esi
// 00a24c43  ff159847b200         call dword ptr [0xb24798]
// 00a24c49  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00a24c4c  8b2d4021b200         mov ebp, dword ptr [0xb22140]
// 00a24c52  50                   push eax
// 00a24c53  51                   push ecx
// 00a24c54  ffd5                 call ebp
// 00a24c56  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a24c5a  83c208               add edx, 8
// 00a24c5d  83fa37               cmp edx, 0x37
// 00a24c60  7d07                 jge 0xa24c69
// 00a24c62  b837000000           mov eax, 0x37
// 00a24c67  eb24                 jmp 0xa24c8d
// 00a24c69  8d442410             lea eax, [esp + 0x10]
// 00a24c6d  50                   push eax
// 00a24c6e  8bce                 mov ecx, esi
// 00a24c70  ff155846b200         call dword ptr [0xb24658]
// 00a24c76  50                   push eax
// 00a24c77  8bce                 mov ecx, esi
// 00a24c79  ff159847b200         call dword ptr [0xb24798]
// 00a24c7f  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00a24c82  50                   push eax
// 00a24c83  51                   push ecx
// 00a24c84  ffd5                 call ebp
// 00a24c86  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a24c8a  83c008               add eax, 8
// 00a24c8d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a24c91  03d0                 add edx, eax
// 00a24c93  8b87d4010000         mov eax, dword ptr [edi + 0x1d4]
// 00a24c99  89542428             mov dword ptr [esp + 0x28], edx
// 00a24c9d  83f8ff               cmp eax, -1
// 00a24ca0  7506                 jne 0xa24ca8
// 00a24ca2  8b87d0010000         mov eax, dword ptr [edi + 0x1d0]
// 00a24ca8  8b13                 mov edx, dword ptr [ebx]
// 00a24caa  50                   push eax
// 00a24cab  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a24cae  8bcb                 mov ecx, ebx
// 00a24cb0  ffd0                 call eax
// 00a24cb2  83bfbc02000004       cmp dword ptr [edi + 0x2bc], 4
// 00a24cb9  742d                 je 0xa24ce8
// 00a24cbb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a24cbf  8b17                 mov edx, dword ptr [edi]
// 00a24cc1  8b9290000000         mov edx, dword ptr [edx + 0x90]
// 00a24cc7  83ec10               sub esp, 0x10
// 00a24cca  8bc4                 mov eax, esp
// 00a24ccc  8908                 mov dword ptr [eax], ecx
// 00a24cce  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a24cd2  894804               mov dword ptr [eax + 4], ecx
// 00a24cd5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a24cd9  894808               mov dword ptr [eax + 8], ecx
// 00a24cdc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a24ce0  89480c               mov dword ptr [eax + 0xc], ecx
// 00a24ce3  53                   push ebx
// 00a24ce4  8bcf                 mov ecx, edi
// 00a24ce6  ffd2                 call edx
// 00a24ce8  8b3b                 mov edi, dword ptr [ebx]
// 00a24cea  6801880000           push 0x8801
// 00a24cef  8d442424             lea eax, [esp + 0x24]
// 00a24cf3  50                   push eax
// 00a24cf4  8bce                 mov ecx, esi
// 00a24cf6  ff155846b200         call dword ptr [0xb24658]
// 00a24cfc  50                   push eax
// 00a24cfd  8bce                 mov ecx, esi
// 00a24cff  ff159847b200         call dword ptr [0xb24798]
// 00a24d05  8b5770               mov edx, dword ptr [edi + 0x70]
// 00a24d08  50                   push eax
// 00a24d09  8bcb                 mov ecx, ebx
// 00a24d0b  ffd2                 call edx
// 00a24d0d  5f                   pop edi
// 00a24d0e  5e                   pop esi
// 00a24d0f  5d                   pop ebp
// 00a24d10  5b                   pop ebx
// 00a24d11  83c408               add esp, 8
// 00a24d14  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawNoGroupByText@CXTPReportPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp