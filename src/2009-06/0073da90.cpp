// roc 2009-06 0073da90  unit: CRobloxReportView  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073da90
//
// 0073da90  83ec1c               sub esp, 0x1c
// 0073da93  53                   push ebx
// 0073da94  55                   push ebp
// 0073da95  56                   push esi
// 0073da96  57                   push edi
// 0073da97  8bf1                 mov esi, ecx
// 0073da99  e862f8ffff           call 0x73d300
// 0073da9e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0073daa2  8b38                 mov edi, dword ptr [eax]
// 0073daa4  83ec10               sub esp, 0x10
// 0073daa7  8bd4                 mov edx, esp
// 0073daa9  890a                 mov dword ptr [edx], ecx
// 0073daab  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0073daaf  894a04               mov dword ptr [edx + 4], ecx
// 0073dab2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0073dab6  894a08               mov dword ptr [edx + 8], ecx
// 0073dab9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0073dabd  894a0c               mov dword ptr [edx + 0xc], ecx
// 0073dac0  8b542440             mov edx, dword ptr [esp + 0x40]
// 0073dac4  8bc8                 mov ecx, eax
// 0073dac6  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 0073dacc  52                   push edx
// 0073dacd  ffd0                 call eax
// 0073dacf  8b16                 mov edx, dword ptr [esi]
// 0073dad1  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0073dad7  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0073dadb  8bce                 mov ecx, esi
// 0073dadd  ffd0                 call eax
// 0073dadf  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 0073dae5  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0073dae8  33ff                 xor edi, edi
// 0073daea  894c2418             mov dword ptr [esp + 0x18], ecx
// 0073daee  897c2414             mov dword ptr [esp + 0x14], edi
// 0073daf2  85c0                 test eax, eax
// 0073daf4  7f0e                 jg 0x73db04
// 0073daf6  5f                   pop edi
// 0073daf7  5e                   pop esi
// 0073daf8  5d                   pop ebp
// 0073daf9  5b                   pop ebx
// 0073dafa  83c41c               add esp, 0x1c
// 0073dafd  c21400               ret 0x14
// 0073db00  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073db04  85ff                 test edi, edi
// 0073db06  7c19                 jl 0x73db21
// 0073db08  3bf8                 cmp edi, eax
// 0073db0a  7d15                 jge 0x73db21
// 0073db0c  3b7930               cmp edi, dword ptr [ecx + 0x30]
// 0073db0f  0f8db7000000         jge 0x73dbcc
// 0073db15  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 0073db18  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 0073db1b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0073db1f  eb0c                 jmp 0x73db2d
// 0073db21  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0073db29  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0073db2d  8bcb                 mov ecx, ebx
// 0073db2f  e81cf20000           call 0x74cd50
// 0073db34  85c0                 test eax, eax
// 0073db36  7476                 je 0x73dbae
// 0073db38  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0073db3c  2b442434             sub eax, dword ptr [esp + 0x34]
// 0073db40  8bce                 mov ecx, esi
// 0073db42  50                   push eax
// 0073db43  53                   push ebx
// 0073db44  e8d7f7ffff           call 0x73d320
// 0073db49  8b542438             mov edx, dword ptr [esp + 0x38]
// 0073db4d  8d3c28               lea edi, [eax + ebp]
// 0073db50  8b442440             mov eax, dword ptr [esp + 0x40]
// 0073db54  8bce                 mov ecx, esi
// 0073db56  89542420             mov dword ptr [esp + 0x20], edx
// 0073db5a  89442428             mov dword ptr [esp + 0x28], eax
// 0073db5e  e89df7ffff           call 0x73d300
// 0073db63  8b16                 mov edx, dword ptr [esi]
// 0073db65  8bd8                 mov ebx, eax
// 0073db67  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0073db6d  8bce                 mov ecx, esi
// 0073db6f  ffd0                 call eax
// 0073db71  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 0073db77  8b13                 mov edx, dword ptr [ebx]
// 0073db79  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 0073db7f  6a00                 push 0
// 0073db81  83ec10               sub esp, 0x10
// 0073db84  8bcc                 mov ecx, esp
// 0073db86  8929                 mov dword ptr [ecx], ebp
// 0073db88  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0073db8c  896904               mov dword ptr [ecx + 4], ebp
// 0073db8f  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0073db93  897908               mov dword ptr [ecx + 8], edi
// 0073db96  89690c               mov dword ptr [ecx + 0xc], ebp
// 0073db99  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0073db9d  50                   push eax
// 0073db9e  8b442448             mov eax, dword ptr [esp + 0x48]
// 0073dba2  51                   push ecx
// 0073dba3  50                   push eax
// 0073dba4  8bcb                 mov ecx, ebx
// 0073dba6  ffd2                 call edx
// 0073dba8  8bef                 mov ebp, edi
// 0073dbaa  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0073dbae  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073dbb2  8b4030               mov eax, dword ptr [eax + 0x30]
// 0073dbb5  47                   inc edi
// 0073dbb6  3bf8                 cmp edi, eax
// 0073dbb8  897c2414             mov dword ptr [esp + 0x14], edi
// 0073dbbc  0f8c3effffff         jl 0x73db00
// 0073dbc2  5f                   pop edi
// 0073dbc3  5e                   pop esi
// 0073dbc4  5d                   pop ebp
// 0073dbc5  5b                   pop ebx
// 0073dbc6  83c41c               add esp, 0x1c
// 0073dbc9  c21400               ret 0x14
// 0073dbcc  e813b1fdff           call 0x718ce4
// copied from an identical function in another client (function ?PrintHeader@CXTPReportView@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp