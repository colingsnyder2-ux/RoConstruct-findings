// roc 2011-06 0082e5d0  unit: CRobloxReportView  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082e5d0
//
// 0082e5d0  83ec1c               sub esp, 0x1c
// 0082e5d3  53                   push ebx
// 0082e5d4  55                   push ebp
// 0082e5d5  56                   push esi
// 0082e5d6  57                   push edi
// 0082e5d7  8bf1                 mov esi, ecx
// 0082e5d9  e802f7ffff           call 0x82dce0
// 0082e5de  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0082e5e2  8b38                 mov edi, dword ptr [eax]
// 0082e5e4  83ec10               sub esp, 0x10
// 0082e5e7  8bd4                 mov edx, esp
// 0082e5e9  890a                 mov dword ptr [edx], ecx
// 0082e5eb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0082e5ef  894a04               mov dword ptr [edx + 4], ecx
// 0082e5f2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0082e5f6  894a08               mov dword ptr [edx + 8], ecx
// 0082e5f9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0082e5fd  894a0c               mov dword ptr [edx + 0xc], ecx
// 0082e600  8b542440             mov edx, dword ptr [esp + 0x40]
// 0082e604  8bc8                 mov ecx, eax
// 0082e606  8b8794000000         mov eax, dword ptr [edi + 0x94]
// 0082e60c  52                   push edx
// 0082e60d  ffd0                 call eax
// 0082e60f  8b16                 mov edx, dword ptr [esi]
// 0082e611  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0082e617  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0082e61b  8bce                 mov ecx, esi
// 0082e61d  ffd0                 call eax
// 0082e61f  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 0082e625  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0082e628  33ff                 xor edi, edi
// 0082e62a  894c2418             mov dword ptr [esp + 0x18], ecx
// 0082e62e  897c2414             mov dword ptr [esp + 0x14], edi
// 0082e632  85c0                 test eax, eax
// 0082e634  7f0e                 jg 0x82e644
// 0082e636  5f                   pop edi
// 0082e637  5e                   pop esi
// 0082e638  5d                   pop ebp
// 0082e639  5b                   pop ebx
// 0082e63a  83c41c               add esp, 0x1c
// 0082e63d  c21400               ret 0x14
// 0082e640  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082e644  85ff                 test edi, edi
// 0082e646  7c19                 jl 0x82e661
// 0082e648  3bf8                 cmp edi, eax
// 0082e64a  7d15                 jge 0x82e661
// 0082e64c  3b7930               cmp edi, dword ptr [ecx + 0x30]
// 0082e64f  0f8db5000000         jge 0x82e70a
// 0082e655  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 0082e658  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 0082e65b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0082e65f  eb0c                 jmp 0x82e66d
// 0082e661  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0082e669  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0082e66d  8bcb                 mov ecx, ebx
// 0082e66f  e8fc150000           call 0x82fc70
// 0082e674  85c0                 test eax, eax
// 0082e676  7474                 je 0x82e6ec
// 0082e678  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0082e67c  2b442434             sub eax, dword ptr [esp + 0x34]
// 0082e680  8bce                 mov ecx, esi
// 0082e682  50                   push eax
// 0082e683  53                   push ebx
// 0082e684  e877f6ffff           call 0x82dd00
// 0082e689  8b542438             mov edx, dword ptr [esp + 0x38]
// 0082e68d  8d3c28               lea edi, [eax + ebp]
// 0082e690  8b442440             mov eax, dword ptr [esp + 0x40]
// 0082e694  8bce                 mov ecx, esi
// 0082e696  89542420             mov dword ptr [esp + 0x20], edx
// 0082e69a  89442428             mov dword ptr [esp + 0x28], eax
// 0082e69e  e83df6ffff           call 0x82dce0
// 0082e6a3  8b16                 mov edx, dword ptr [esi]
// 0082e6a5  8bd8                 mov ebx, eax
// 0082e6a7  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0082e6ad  8bce                 mov ecx, esi
// 0082e6af  ffd0                 call eax
// 0082e6b1  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 0082e6b7  8b13                 mov edx, dword ptr [ebx]
// 0082e6b9  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 0082e6bf  83ec10               sub esp, 0x10
// 0082e6c2  8bcc                 mov ecx, esp
// 0082e6c4  8929                 mov dword ptr [ecx], ebp
// 0082e6c6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0082e6ca  896904               mov dword ptr [ecx + 4], ebp
// 0082e6cd  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0082e6d1  897908               mov dword ptr [ecx + 8], edi
// 0082e6d4  89690c               mov dword ptr [ecx + 0xc], ebp
// 0082e6d7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082e6db  50                   push eax
// 0082e6dc  8b442444             mov eax, dword ptr [esp + 0x44]
// 0082e6e0  51                   push ecx
// 0082e6e1  50                   push eax
// 0082e6e2  8bcb                 mov ecx, ebx
// 0082e6e4  ffd2                 call edx
// 0082e6e6  8bef                 mov ebp, edi
// 0082e6e8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0082e6ec  8b442418             mov eax, dword ptr [esp + 0x18]
// 0082e6f0  8b4030               mov eax, dword ptr [eax + 0x30]
// 0082e6f3  47                   inc edi
// 0082e6f4  3bf8                 cmp edi, eax
// 0082e6f6  897c2414             mov dword ptr [esp + 0x14], edi
// 0082e6fa  0f8c40ffffff         jl 0x82e640
// 0082e700  5f                   pop edi
// 0082e701  5e                   pop esi
// 0082e702  5d                   pop ebp
// 0082e703  5b                   pop ebx
// 0082e704  83c41c               add esp, 0x1c
// 0082e707  c21400               ret 0x14
// 0082e70a  e8fbbbfdff           call 0x80a30a
// copied from an identical function in another client (function ?PrintFooter@CXTPReportView@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp