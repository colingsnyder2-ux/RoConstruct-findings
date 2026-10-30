// roc 2012-06 009a6a80  unit: CRobloxReportView  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a6a80
//
// 009a6a80  83ec1c               sub esp, 0x1c
// 009a6a83  53                   push ebx
// 009a6a84  55                   push ebp
// 009a6a85  56                   push esi
// 009a6a86  57                   push edi
// 009a6a87  8bf1                 mov esi, ecx
// 009a6a89  e832f8ffff           call 0x9a62c0
// 009a6a8e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009a6a92  8b38                 mov edi, dword ptr [eax]
// 009a6a94  83ec10               sub esp, 0x10
// 009a6a97  8bd4                 mov edx, esp
// 009a6a99  890a                 mov dword ptr [edx], ecx
// 009a6a9b  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 009a6a9f  894a04               mov dword ptr [edx + 4], ecx
// 009a6aa2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 009a6aa6  894a08               mov dword ptr [edx + 8], ecx
// 009a6aa9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 009a6aad  894a0c               mov dword ptr [edx + 0xc], ecx
// 009a6ab0  8b542440             mov edx, dword ptr [esp + 0x40]
// 009a6ab4  8bc8                 mov ecx, eax
// 009a6ab6  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 009a6abc  52                   push edx
// 009a6abd  ffd0                 call eax
// 009a6abf  8b16                 mov edx, dword ptr [esi]
// 009a6ac1  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 009a6ac7  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 009a6acb  8bce                 mov ecx, esi
// 009a6acd  ffd0                 call eax
// 009a6acf  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 009a6ad5  8b4130               mov eax, dword ptr [ecx + 0x30]
// 009a6ad8  33ff                 xor edi, edi
// 009a6ada  894c2418             mov dword ptr [esp + 0x18], ecx
// 009a6ade  897c2414             mov dword ptr [esp + 0x14], edi
// 009a6ae2  85c0                 test eax, eax
// 009a6ae4  7f0e                 jg 0x9a6af4
// 009a6ae6  5f                   pop edi
// 009a6ae7  5e                   pop esi
// 009a6ae8  5d                   pop ebp
// 009a6ae9  5b                   pop ebx
// 009a6aea  83c41c               add esp, 0x1c
// 009a6aed  c21400               ret 0x14
// 009a6af0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009a6af4  85ff                 test edi, edi
// 009a6af6  7c19                 jl 0x9a6b11
// 009a6af8  3bf8                 cmp edi, eax
// 009a6afa  7d15                 jge 0x9a6b11
// 009a6afc  3b7930               cmp edi, dword ptr [ecx + 0x30]
// 009a6aff  0f8db7000000         jge 0x9a6bbc
// 009a6b05  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 009a6b08  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 009a6b0b  895c2410             mov dword ptr [esp + 0x10], ebx
// 009a6b0f  eb0c                 jmp 0x9a6b1d
// 009a6b11  c744241000000000     mov dword ptr [esp + 0x10], 0
// 009a6b19  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009a6b1d  8bcb                 mov ecx, ebx
// 009a6b1f  e80c690900           call 0xa3d430
// 009a6b24  85c0                 test eax, eax
// 009a6b26  7476                 je 0x9a6b9e
// 009a6b28  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009a6b2c  2b442434             sub eax, dword ptr [esp + 0x34]
// 009a6b30  8bce                 mov ecx, esi
// 009a6b32  50                   push eax
// 009a6b33  53                   push ebx
// 009a6b34  e8a7f7ffff           call 0x9a62e0
// 009a6b39  8b542438             mov edx, dword ptr [esp + 0x38]
// 009a6b3d  8d3c28               lea edi, [eax + ebp]
// 009a6b40  8b442440             mov eax, dword ptr [esp + 0x40]
// 009a6b44  8bce                 mov ecx, esi
// 009a6b46  89542420             mov dword ptr [esp + 0x20], edx
// 009a6b4a  89442428             mov dword ptr [esp + 0x28], eax
// 009a6b4e  e86df7ffff           call 0x9a62c0
// 009a6b53  8b16                 mov edx, dword ptr [esi]
// 009a6b55  8bd8                 mov ebx, eax
// 009a6b57  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 009a6b5d  8bce                 mov ecx, esi
// 009a6b5f  ffd0                 call eax
// 009a6b61  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 009a6b67  8b13                 mov edx, dword ptr [ebx]
// 009a6b69  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 009a6b6f  6a00                 push 0
// 009a6b71  83ec10               sub esp, 0x10
// 009a6b74  8bcc                 mov ecx, esp
// 009a6b76  8929                 mov dword ptr [ecx], ebp
// 009a6b78  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 009a6b7c  896904               mov dword ptr [ecx + 4], ebp
// 009a6b7f  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 009a6b83  897908               mov dword ptr [ecx + 8], edi
// 009a6b86  89690c               mov dword ptr [ecx + 0xc], ebp
// 009a6b89  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009a6b8d  50                   push eax
// 009a6b8e  8b442448             mov eax, dword ptr [esp + 0x48]
// 009a6b92  51                   push ecx
// 009a6b93  50                   push eax
// 009a6b94  8bcb                 mov ecx, ebx
// 009a6b96  ffd2                 call edx
// 009a6b98  8bef                 mov ebp, edi
// 009a6b9a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009a6b9e  8b442418             mov eax, dword ptr [esp + 0x18]
// 009a6ba2  8b4030               mov eax, dword ptr [eax + 0x30]
// 009a6ba5  47                   inc edi
// 009a6ba6  3bf8                 cmp edi, eax
// 009a6ba8  897c2414             mov dword ptr [esp + 0x14], edi
// 009a6bac  0f8c3effffff         jl 0x9a6af0
// 009a6bb2  5f                   pop edi
// 009a6bb3  5e                   pop esi
// 009a6bb4  5d                   pop ebp
// 009a6bb5  5b                   pop ebx
// 009a6bb6  83c41c               add esp, 0x1c
// 009a6bb9  c21400               ret 0x14
// 009a6bbc  e8ffb7fdff           call 0x9823c0
// copied from an identical function in another client (function ?PrintHeader@CXTPReportView@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp