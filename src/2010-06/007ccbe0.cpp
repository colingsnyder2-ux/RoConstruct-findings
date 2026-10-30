// roc 2010-06 007ccbe0  unit: CRobloxReportView  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ccbe0
//
// 007ccbe0  83ec1c               sub esp, 0x1c
// 007ccbe3  53                   push ebx
// 007ccbe4  55                   push ebp
// 007ccbe5  56                   push esi
// 007ccbe6  57                   push edi
// 007ccbe7  8bf1                 mov esi, ecx
// 007ccbe9  e8e2f6ffff           call 0x7cc2d0
// 007ccbee  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007ccbf2  8b38                 mov edi, dword ptr [eax]
// 007ccbf4  83ec10               sub esp, 0x10
// 007ccbf7  8bd4                 mov edx, esp
// 007ccbf9  890a                 mov dword ptr [edx], ecx
// 007ccbfb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007ccbff  894a04               mov dword ptr [edx + 4], ecx
// 007ccc02  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007ccc06  894a08               mov dword ptr [edx + 8], ecx
// 007ccc09  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007ccc0d  894a0c               mov dword ptr [edx + 0xc], ecx
// 007ccc10  8b542440             mov edx, dword ptr [esp + 0x40]
// 007ccc14  8bc8                 mov ecx, eax
// 007ccc16  8b8794000000         mov eax, dword ptr [edi + 0x94]
// 007ccc1c  52                   push edx
// 007ccc1d  ffd0                 call eax
// 007ccc1f  8b16                 mov edx, dword ptr [esi]
// 007ccc21  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 007ccc27  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007ccc2b  8bce                 mov ecx, esi
// 007ccc2d  ffd0                 call eax
// 007ccc2f  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 007ccc35  8b4130               mov eax, dword ptr [ecx + 0x30]
// 007ccc38  33ff                 xor edi, edi
// 007ccc3a  894c2418             mov dword ptr [esp + 0x18], ecx
// 007ccc3e  897c2414             mov dword ptr [esp + 0x14], edi
// 007ccc42  85c0                 test eax, eax
// 007ccc44  7f0e                 jg 0x7ccc54
// 007ccc46  5f                   pop edi
// 007ccc47  5e                   pop esi
// 007ccc48  5d                   pop ebp
// 007ccc49  5b                   pop ebx
// 007ccc4a  83c41c               add esp, 0x1c
// 007ccc4d  c21400               ret 0x14
// 007ccc50  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ccc54  85ff                 test edi, edi
// 007ccc56  7c19                 jl 0x7ccc71
// 007ccc58  3bf8                 cmp edi, eax
// 007ccc5a  7d15                 jge 0x7ccc71
// 007ccc5c  3b7930               cmp edi, dword ptr [ecx + 0x30]
// 007ccc5f  0f8db5000000         jge 0x7ccd1a
// 007ccc65  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 007ccc68  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 007ccc6b  895c2410             mov dword ptr [esp + 0x10], ebx
// 007ccc6f  eb0c                 jmp 0x7ccc7d
// 007ccc71  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007ccc79  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007ccc7d  8bcb                 mov ecx, ebx
// 007ccc7f  e81cef0000           call 0x7dbba0
// 007ccc84  85c0                 test eax, eax
// 007ccc86  7474                 je 0x7cccfc
// 007ccc88  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007ccc8c  2b442434             sub eax, dword ptr [esp + 0x34]
// 007ccc90  8bce                 mov ecx, esi
// 007ccc92  50                   push eax
// 007ccc93  53                   push ebx
// 007ccc94  e857f6ffff           call 0x7cc2f0
// 007ccc99  8b542438             mov edx, dword ptr [esp + 0x38]
// 007ccc9d  8d3c28               lea edi, [eax + ebp]
// 007ccca0  8b442440             mov eax, dword ptr [esp + 0x40]
// 007ccca4  8bce                 mov ecx, esi
// 007ccca6  89542420             mov dword ptr [esp + 0x20], edx
// 007cccaa  89442428             mov dword ptr [esp + 0x28], eax
// 007cccae  e81df6ffff           call 0x7cc2d0
// 007cccb3  8b16                 mov edx, dword ptr [esi]
// 007cccb5  8bd8                 mov ebx, eax
// 007cccb7  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 007cccbd  8bce                 mov ecx, esi
// 007cccbf  ffd0                 call eax
// 007cccc1  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 007cccc7  8b13                 mov edx, dword ptr [ebx]
// 007cccc9  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 007ccccf  83ec10               sub esp, 0x10
// 007cccd2  8bcc                 mov ecx, esp
// 007cccd4  8929                 mov dword ptr [ecx], ebp
// 007cccd6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007cccda  896904               mov dword ptr [ecx + 4], ebp
// 007cccdd  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 007ccce1  897908               mov dword ptr [ecx + 8], edi
// 007ccce4  89690c               mov dword ptr [ecx + 0xc], ebp
// 007ccce7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007ccceb  50                   push eax
// 007cccec  8b442444             mov eax, dword ptr [esp + 0x44]
// 007cccf0  51                   push ecx
// 007cccf1  50                   push eax
// 007cccf2  8bcb                 mov ecx, ebx
// 007cccf4  ffd2                 call edx
// 007cccf6  8bef                 mov ebp, edi
// 007cccf8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007cccfc  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ccd00  8b4030               mov eax, dword ptr [eax + 0x30]
// 007ccd03  47                   inc edi
// 007ccd04  3bf8                 cmp edi, eax
// 007ccd06  897c2414             mov dword ptr [esp + 0x14], edi
// 007ccd0a  0f8c40ffffff         jl 0x7ccc50
// 007ccd10  5f                   pop edi
// 007ccd11  5e                   pop esi
// 007ccd12  5d                   pop ebp
// 007ccd13  5b                   pop ebx
// 007ccd14  83c41c               add esp, 0x1c
// 007ccd17  c21400               ret 0x14
// 007ccd1a  e82daffdff           call 0x7a7c4c
// copied from an identical function in another client (function ?PrintFooter@CXTPReportView@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp