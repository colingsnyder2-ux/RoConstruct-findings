// roc 2009-06 0073dbe0  unit: CRobloxReportView  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073dbe0
//
// 0073dbe0  83ec1c               sub esp, 0x1c
// 0073dbe3  53                   push ebx
// 0073dbe4  55                   push ebp
// 0073dbe5  56                   push esi
// 0073dbe6  57                   push edi
// 0073dbe7  8bf1                 mov esi, ecx
// 0073dbe9  e812f7ffff           call 0x73d300
// 0073dbee  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0073dbf2  8b38                 mov edi, dword ptr [eax]
// 0073dbf4  83ec10               sub esp, 0x10
// 0073dbf7  8bd4                 mov edx, esp
// 0073dbf9  890a                 mov dword ptr [edx], ecx
// 0073dbfb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0073dbff  894a04               mov dword ptr [edx + 4], ecx
// 0073dc02  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0073dc06  894a08               mov dword ptr [edx + 8], ecx
// 0073dc09  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0073dc0d  894a0c               mov dword ptr [edx + 0xc], ecx
// 0073dc10  8b542440             mov edx, dword ptr [esp + 0x40]
// 0073dc14  8bc8                 mov ecx, eax
// 0073dc16  8b8794000000         mov eax, dword ptr [edi + 0x94]
// 0073dc1c  52                   push edx
// 0073dc1d  ffd0                 call eax
// 0073dc1f  8b16                 mov edx, dword ptr [esi]
// 0073dc21  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0073dc27  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0073dc2b  8bce                 mov ecx, esi
// 0073dc2d  ffd0                 call eax
// 0073dc2f  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 0073dc35  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0073dc38  33ff                 xor edi, edi
// 0073dc3a  894c2418             mov dword ptr [esp + 0x18], ecx
// 0073dc3e  897c2414             mov dword ptr [esp + 0x14], edi
// 0073dc42  85c0                 test eax, eax
// 0073dc44  7f0e                 jg 0x73dc54
// 0073dc46  5f                   pop edi
// 0073dc47  5e                   pop esi
// 0073dc48  5d                   pop ebp
// 0073dc49  5b                   pop ebx
// 0073dc4a  83c41c               add esp, 0x1c
// 0073dc4d  c21400               ret 0x14
// 0073dc50  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073dc54  85ff                 test edi, edi
// 0073dc56  7c19                 jl 0x73dc71
// 0073dc58  3bf8                 cmp edi, eax
// 0073dc5a  7d15                 jge 0x73dc71
// 0073dc5c  3b7930               cmp edi, dword ptr [ecx + 0x30]
// 0073dc5f  0f8db5000000         jge 0x73dd1a
// 0073dc65  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 0073dc68  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 0073dc6b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0073dc6f  eb0c                 jmp 0x73dc7d
// 0073dc71  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0073dc79  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0073dc7d  8bcb                 mov ecx, ebx
// 0073dc7f  e8ccf00000           call 0x74cd50
// 0073dc84  85c0                 test eax, eax
// 0073dc86  7474                 je 0x73dcfc
// 0073dc88  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0073dc8c  2b442434             sub eax, dword ptr [esp + 0x34]
// 0073dc90  8bce                 mov ecx, esi
// 0073dc92  50                   push eax
// 0073dc93  53                   push ebx
// 0073dc94  e887f6ffff           call 0x73d320
// 0073dc99  8b542438             mov edx, dword ptr [esp + 0x38]
// 0073dc9d  8d3c28               lea edi, [eax + ebp]
// 0073dca0  8b442440             mov eax, dword ptr [esp + 0x40]
// 0073dca4  8bce                 mov ecx, esi
// 0073dca6  89542420             mov dword ptr [esp + 0x20], edx
// 0073dcaa  89442428             mov dword ptr [esp + 0x28], eax
// 0073dcae  e84df6ffff           call 0x73d300
// 0073dcb3  8b16                 mov edx, dword ptr [esi]
// 0073dcb5  8bd8                 mov ebx, eax
// 0073dcb7  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0073dcbd  8bce                 mov ecx, esi
// 0073dcbf  ffd0                 call eax
// 0073dcc1  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 0073dcc7  8b13                 mov edx, dword ptr [ebx]
// 0073dcc9  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 0073dccf  83ec10               sub esp, 0x10
// 0073dcd2  8bcc                 mov ecx, esp
// 0073dcd4  8929                 mov dword ptr [ecx], ebp
// 0073dcd6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0073dcda  896904               mov dword ptr [ecx + 4], ebp
// 0073dcdd  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0073dce1  897908               mov dword ptr [ecx + 8], edi
// 0073dce4  89690c               mov dword ptr [ecx + 0xc], ebp
// 0073dce7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073dceb  50                   push eax
// 0073dcec  8b442444             mov eax, dword ptr [esp + 0x44]
// 0073dcf0  51                   push ecx
// 0073dcf1  50                   push eax
// 0073dcf2  8bcb                 mov ecx, ebx
// 0073dcf4  ffd2                 call edx
// 0073dcf6  8bef                 mov ebp, edi
// 0073dcf8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0073dcfc  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073dd00  8b4030               mov eax, dword ptr [eax + 0x30]
// 0073dd03  47                   inc edi
// 0073dd04  3bf8                 cmp edi, eax
// 0073dd06  897c2414             mov dword ptr [esp + 0x14], edi
// 0073dd0a  0f8c40ffffff         jl 0x73dc50
// 0073dd10  5f                   pop edi
// 0073dd11  5e                   pop esi
// 0073dd12  5d                   pop ebp
// 0073dd13  5b                   pop ebx
// 0073dd14  83c41c               add esp, 0x1c
// 0073dd17  c21400               ret 0x14
// 0073dd1a  e8c5affdff           call 0x718ce4
// copied from an identical function in another client (function ?PrintFooter@CXTPReportView@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp