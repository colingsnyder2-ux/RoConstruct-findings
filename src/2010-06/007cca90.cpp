// roc 2010-06 007cca90  unit: CRobloxReportView  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cca90
//
// 007cca90  83ec1c               sub esp, 0x1c
// 007cca93  53                   push ebx
// 007cca94  55                   push ebp
// 007cca95  56                   push esi
// 007cca96  57                   push edi
// 007cca97  8bf1                 mov esi, ecx
// 007cca99  e832f8ffff           call 0x7cc2d0
// 007cca9e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007ccaa2  8b38                 mov edi, dword ptr [eax]
// 007ccaa4  83ec10               sub esp, 0x10
// 007ccaa7  8bd4                 mov edx, esp
// 007ccaa9  890a                 mov dword ptr [edx], ecx
// 007ccaab  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007ccaaf  894a04               mov dword ptr [edx + 4], ecx
// 007ccab2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007ccab6  894a08               mov dword ptr [edx + 8], ecx
// 007ccab9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007ccabd  894a0c               mov dword ptr [edx + 0xc], ecx
// 007ccac0  8b542440             mov edx, dword ptr [esp + 0x40]
// 007ccac4  8bc8                 mov ecx, eax
// 007ccac6  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 007ccacc  52                   push edx
// 007ccacd  ffd0                 call eax
// 007ccacf  8b16                 mov edx, dword ptr [esi]
// 007ccad1  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 007ccad7  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007ccadb  8bce                 mov ecx, esi
// 007ccadd  ffd0                 call eax
// 007ccadf  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 007ccae5  8b4130               mov eax, dword ptr [ecx + 0x30]
// 007ccae8  33ff                 xor edi, edi
// 007ccaea  894c2418             mov dword ptr [esp + 0x18], ecx
// 007ccaee  897c2414             mov dword ptr [esp + 0x14], edi
// 007ccaf2  85c0                 test eax, eax
// 007ccaf4  7f0e                 jg 0x7ccb04
// 007ccaf6  5f                   pop edi
// 007ccaf7  5e                   pop esi
// 007ccaf8  5d                   pop ebp
// 007ccaf9  5b                   pop ebx
// 007ccafa  83c41c               add esp, 0x1c
// 007ccafd  c21400               ret 0x14
// 007ccb00  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ccb04  85ff                 test edi, edi
// 007ccb06  7c19                 jl 0x7ccb21
// 007ccb08  3bf8                 cmp edi, eax
// 007ccb0a  7d15                 jge 0x7ccb21
// 007ccb0c  3b7930               cmp edi, dword ptr [ecx + 0x30]
// 007ccb0f  0f8db7000000         jge 0x7ccbcc
// 007ccb15  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 007ccb18  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 007ccb1b  895c2410             mov dword ptr [esp + 0x10], ebx
// 007ccb1f  eb0c                 jmp 0x7ccb2d
// 007ccb21  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007ccb29  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007ccb2d  8bcb                 mov ecx, ebx
// 007ccb2f  e86cf00000           call 0x7dbba0
// 007ccb34  85c0                 test eax, eax
// 007ccb36  7476                 je 0x7ccbae
// 007ccb38  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007ccb3c  2b442434             sub eax, dword ptr [esp + 0x34]
// 007ccb40  8bce                 mov ecx, esi
// 007ccb42  50                   push eax
// 007ccb43  53                   push ebx
// 007ccb44  e8a7f7ffff           call 0x7cc2f0
// 007ccb49  8b542438             mov edx, dword ptr [esp + 0x38]
// 007ccb4d  8d3c28               lea edi, [eax + ebp]
// 007ccb50  8b442440             mov eax, dword ptr [esp + 0x40]
// 007ccb54  8bce                 mov ecx, esi
// 007ccb56  89542420             mov dword ptr [esp + 0x20], edx
// 007ccb5a  89442428             mov dword ptr [esp + 0x28], eax
// 007ccb5e  e86df7ffff           call 0x7cc2d0
// 007ccb63  8b16                 mov edx, dword ptr [esi]
// 007ccb65  8bd8                 mov ebx, eax
// 007ccb67  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 007ccb6d  8bce                 mov ecx, esi
// 007ccb6f  ffd0                 call eax
// 007ccb71  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 007ccb77  8b13                 mov edx, dword ptr [ebx]
// 007ccb79  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 007ccb7f  6a00                 push 0
// 007ccb81  83ec10               sub esp, 0x10
// 007ccb84  8bcc                 mov ecx, esp
// 007ccb86  8929                 mov dword ptr [ecx], ebp
// 007ccb88  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007ccb8c  896904               mov dword ptr [ecx + 4], ebp
// 007ccb8f  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 007ccb93  897908               mov dword ptr [ecx + 8], edi
// 007ccb96  89690c               mov dword ptr [ecx + 0xc], ebp
// 007ccb99  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007ccb9d  50                   push eax
// 007ccb9e  8b442448             mov eax, dword ptr [esp + 0x48]
// 007ccba2  51                   push ecx
// 007ccba3  50                   push eax
// 007ccba4  8bcb                 mov ecx, ebx
// 007ccba6  ffd2                 call edx
// 007ccba8  8bef                 mov ebp, edi
// 007ccbaa  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007ccbae  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ccbb2  8b4030               mov eax, dword ptr [eax + 0x30]
// 007ccbb5  47                   inc edi
// 007ccbb6  3bf8                 cmp edi, eax
// 007ccbb8  897c2414             mov dword ptr [esp + 0x14], edi
// 007ccbbc  0f8c3effffff         jl 0x7ccb00
// 007ccbc2  5f                   pop edi
// 007ccbc3  5e                   pop esi
// 007ccbc4  5d                   pop ebp
// 007ccbc5  5b                   pop ebx
// 007ccbc6  83c41c               add esp, 0x1c
// 007ccbc9  c21400               ret 0x14
// 007ccbcc  e87bb0fdff           call 0x7a7c4c
// copied from an identical function in another client (function ?PrintHeader@CXTPReportView@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp