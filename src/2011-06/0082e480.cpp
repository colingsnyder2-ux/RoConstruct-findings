// roc 2011-06 0082e480  unit: CRobloxReportView  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082e480
//
// 0082e480  83ec1c               sub esp, 0x1c
// 0082e483  53                   push ebx
// 0082e484  55                   push ebp
// 0082e485  56                   push esi
// 0082e486  57                   push edi
// 0082e487  8bf1                 mov esi, ecx
// 0082e489  e852f8ffff           call 0x82dce0
// 0082e48e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0082e492  8b38                 mov edi, dword ptr [eax]
// 0082e494  83ec10               sub esp, 0x10
// 0082e497  8bd4                 mov edx, esp
// 0082e499  890a                 mov dword ptr [edx], ecx
// 0082e49b  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0082e49f  894a04               mov dword ptr [edx + 4], ecx
// 0082e4a2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0082e4a6  894a08               mov dword ptr [edx + 8], ecx
// 0082e4a9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0082e4ad  894a0c               mov dword ptr [edx + 0xc], ecx
// 0082e4b0  8b542440             mov edx, dword ptr [esp + 0x40]
// 0082e4b4  8bc8                 mov ecx, eax
// 0082e4b6  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 0082e4bc  52                   push edx
// 0082e4bd  ffd0                 call eax
// 0082e4bf  8b16                 mov edx, dword ptr [esi]
// 0082e4c1  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0082e4c7  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0082e4cb  8bce                 mov ecx, esi
// 0082e4cd  ffd0                 call eax
// 0082e4cf  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 0082e4d5  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0082e4d8  33ff                 xor edi, edi
// 0082e4da  894c2418             mov dword ptr [esp + 0x18], ecx
// 0082e4de  897c2414             mov dword ptr [esp + 0x14], edi
// 0082e4e2  85c0                 test eax, eax
// 0082e4e4  7f0e                 jg 0x82e4f4
// 0082e4e6  5f                   pop edi
// 0082e4e7  5e                   pop esi
// 0082e4e8  5d                   pop ebp
// 0082e4e9  5b                   pop ebx
// 0082e4ea  83c41c               add esp, 0x1c
// 0082e4ed  c21400               ret 0x14
// 0082e4f0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082e4f4  85ff                 test edi, edi
// 0082e4f6  7c19                 jl 0x82e511
// 0082e4f8  3bf8                 cmp edi, eax
// 0082e4fa  7d15                 jge 0x82e511
// 0082e4fc  3b7930               cmp edi, dword ptr [ecx + 0x30]
// 0082e4ff  0f8db7000000         jge 0x82e5bc
// 0082e505  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 0082e508  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 0082e50b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0082e50f  eb0c                 jmp 0x82e51d
// 0082e511  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0082e519  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0082e51d  8bcb                 mov ecx, ebx
// 0082e51f  e84c170000           call 0x82fc70
// 0082e524  85c0                 test eax, eax
// 0082e526  7476                 je 0x82e59e
// 0082e528  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0082e52c  2b442434             sub eax, dword ptr [esp + 0x34]
// 0082e530  8bce                 mov ecx, esi
// 0082e532  50                   push eax
// 0082e533  53                   push ebx
// 0082e534  e8c7f7ffff           call 0x82dd00
// 0082e539  8b542438             mov edx, dword ptr [esp + 0x38]
// 0082e53d  8d3c28               lea edi, [eax + ebp]
// 0082e540  8b442440             mov eax, dword ptr [esp + 0x40]
// 0082e544  8bce                 mov ecx, esi
// 0082e546  89542420             mov dword ptr [esp + 0x20], edx
// 0082e54a  89442428             mov dword ptr [esp + 0x28], eax
// 0082e54e  e88df7ffff           call 0x82dce0
// 0082e553  8b16                 mov edx, dword ptr [esi]
// 0082e555  8bd8                 mov ebx, eax
// 0082e557  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0082e55d  8bce                 mov ecx, esi
// 0082e55f  ffd0                 call eax
// 0082e561  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 0082e567  8b13                 mov edx, dword ptr [ebx]
// 0082e569  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 0082e56f  6a00                 push 0
// 0082e571  83ec10               sub esp, 0x10
// 0082e574  8bcc                 mov ecx, esp
// 0082e576  8929                 mov dword ptr [ecx], ebp
// 0082e578  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0082e57c  896904               mov dword ptr [ecx + 4], ebp
// 0082e57f  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0082e583  897908               mov dword ptr [ecx + 8], edi
// 0082e586  89690c               mov dword ptr [ecx + 0xc], ebp
// 0082e589  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0082e58d  50                   push eax
// 0082e58e  8b442448             mov eax, dword ptr [esp + 0x48]
// 0082e592  51                   push ecx
// 0082e593  50                   push eax
// 0082e594  8bcb                 mov ecx, ebx
// 0082e596  ffd2                 call edx
// 0082e598  8bef                 mov ebp, edi
// 0082e59a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0082e59e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0082e5a2  8b4030               mov eax, dword ptr [eax + 0x30]
// 0082e5a5  47                   inc edi
// 0082e5a6  3bf8                 cmp edi, eax
// 0082e5a8  897c2414             mov dword ptr [esp + 0x14], edi
// 0082e5ac  0f8c3effffff         jl 0x82e4f0
// 0082e5b2  5f                   pop edi
// 0082e5b3  5e                   pop esi
// 0082e5b4  5d                   pop ebp
// 0082e5b5  5b                   pop ebx
// 0082e5b6  83c41c               add esp, 0x1c
// 0082e5b9  c21400               ret 0x14
// 0082e5bc  e849bdfdff           call 0x80a30a
// copied from an identical function in another client (function ?PrintHeader@CXTPReportView@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp