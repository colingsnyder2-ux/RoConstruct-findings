// roc 2009-12 00818b00  unit: CRobloxReportView  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818b00
//
// 00818b00  83ec1c               sub esp, 0x1c
// 00818b03  53                   push ebx
// 00818b04  55                   push ebp
// 00818b05  56                   push esi
// 00818b06  57                   push edi
// 00818b07  8bf1                 mov esi, ecx
// 00818b09  e812f7ffff           call 0x818220
// 00818b0e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00818b12  8b38                 mov edi, dword ptr [eax]
// 00818b14  83ec10               sub esp, 0x10
// 00818b17  8bd4                 mov edx, esp
// 00818b19  890a                 mov dword ptr [edx], ecx
// 00818b1b  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00818b1f  894a04               mov dword ptr [edx + 4], ecx
// 00818b22  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00818b26  894a08               mov dword ptr [edx + 8], ecx
// 00818b29  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00818b2d  894a0c               mov dword ptr [edx + 0xc], ecx
// 00818b30  8b542440             mov edx, dword ptr [esp + 0x40]
// 00818b34  8bc8                 mov ecx, eax
// 00818b36  8b8794000000         mov eax, dword ptr [edi + 0x94]
// 00818b3c  52                   push edx
// 00818b3d  ffd0                 call eax
// 00818b3f  8b16                 mov edx, dword ptr [esi]
// 00818b41  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00818b47  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00818b4b  8bce                 mov ecx, esi
// 00818b4d  ffd0                 call eax
// 00818b4f  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00818b55  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00818b58  33ff                 xor edi, edi
// 00818b5a  894c2418             mov dword ptr [esp + 0x18], ecx
// 00818b5e  897c2414             mov dword ptr [esp + 0x14], edi
// 00818b62  85c0                 test eax, eax
// 00818b64  7f0e                 jg 0x818b74
// 00818b66  5f                   pop edi
// 00818b67  5e                   pop esi
// 00818b68  5d                   pop ebp
// 00818b69  5b                   pop ebx
// 00818b6a  83c41c               add esp, 0x1c
// 00818b6d  c21400               ret 0x14
// 00818b70  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00818b74  85ff                 test edi, edi
// 00818b76  7c19                 jl 0x818b91
// 00818b78  3bf8                 cmp edi, eax
// 00818b7a  7d15                 jge 0x818b91
// 00818b7c  3b7930               cmp edi, dword ptr [ecx + 0x30]
// 00818b7f  0f8db5000000         jge 0x818c3a
// 00818b85  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 00818b88  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 00818b8b  895c2410             mov dword ptr [esp + 0x10], ebx
// 00818b8f  eb0c                 jmp 0x818b9d
// 00818b91  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00818b99  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00818b9d  8bcb                 mov ecx, ebx
// 00818b9f  e81caf0900           call 0x8b3ac0
// 00818ba4  85c0                 test eax, eax
// 00818ba6  7474                 je 0x818c1c
// 00818ba8  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00818bac  2b442434             sub eax, dword ptr [esp + 0x34]
// 00818bb0  8bce                 mov ecx, esi
// 00818bb2  50                   push eax
// 00818bb3  53                   push ebx
// 00818bb4  e887f6ffff           call 0x818240
// 00818bb9  8b542438             mov edx, dword ptr [esp + 0x38]
// 00818bbd  8d3c28               lea edi, [eax + ebp]
// 00818bc0  8b442440             mov eax, dword ptr [esp + 0x40]
// 00818bc4  8bce                 mov ecx, esi
// 00818bc6  89542420             mov dword ptr [esp + 0x20], edx
// 00818bca  89442428             mov dword ptr [esp + 0x28], eax
// 00818bce  e84df6ffff           call 0x818220
// 00818bd3  8b16                 mov edx, dword ptr [esi]
// 00818bd5  8bd8                 mov ebx, eax
// 00818bd7  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00818bdd  8bce                 mov ecx, esi
// 00818bdf  ffd0                 call eax
// 00818be1  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 00818be7  8b13                 mov edx, dword ptr [ebx]
// 00818be9  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 00818bef  83ec10               sub esp, 0x10
// 00818bf2  8bcc                 mov ecx, esp
// 00818bf4  8929                 mov dword ptr [ecx], ebp
// 00818bf6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00818bfa  896904               mov dword ptr [ecx + 4], ebp
// 00818bfd  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00818c01  897908               mov dword ptr [ecx + 8], edi
// 00818c04  89690c               mov dword ptr [ecx + 0xc], ebp
// 00818c07  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00818c0b  50                   push eax
// 00818c0c  8b442444             mov eax, dword ptr [esp + 0x44]
// 00818c10  51                   push ecx
// 00818c11  50                   push eax
// 00818c12  8bcb                 mov ecx, ebx
// 00818c14  ffd2                 call edx
// 00818c16  8bef                 mov ebp, edi
// 00818c18  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00818c1c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00818c20  8b4030               mov eax, dword ptr [eax + 0x30]
// 00818c23  47                   inc edi
// 00818c24  3bf8                 cmp edi, eax
// 00818c26  897c2414             mov dword ptr [esp + 0x14], edi
// 00818c2a  0f8c40ffffff         jl 0x818b70
// 00818c30  5f                   pop edi
// 00818c31  5e                   pop esi
// 00818c32  5d                   pop ebp
// 00818c33  5b                   pop ebx
// 00818c34  83c41c               add esp, 0x1c
// 00818c37  c21400               ret 0x14
// 00818c3a  e8cdaefdff           call 0x7f3b0c
// copied from an identical function in another client (function ?PrintFooter@CXTPReportView@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp