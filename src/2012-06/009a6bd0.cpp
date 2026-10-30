// roc 2012-06 009a6bd0  unit: CRobloxReportView  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a6bd0
//
// 009a6bd0  83ec1c               sub esp, 0x1c
// 009a6bd3  53                   push ebx
// 009a6bd4  55                   push ebp
// 009a6bd5  56                   push esi
// 009a6bd6  57                   push edi
// 009a6bd7  8bf1                 mov esi, ecx
// 009a6bd9  e8e2f6ffff           call 0x9a62c0
// 009a6bde  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009a6be2  8b38                 mov edi, dword ptr [eax]
// 009a6be4  83ec10               sub esp, 0x10
// 009a6be7  8bd4                 mov edx, esp
// 009a6be9  890a                 mov dword ptr [edx], ecx
// 009a6beb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 009a6bef  894a04               mov dword ptr [edx + 4], ecx
// 009a6bf2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 009a6bf6  894a08               mov dword ptr [edx + 8], ecx
// 009a6bf9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 009a6bfd  894a0c               mov dword ptr [edx + 0xc], ecx
// 009a6c00  8b542440             mov edx, dword ptr [esp + 0x40]
// 009a6c04  8bc8                 mov ecx, eax
// 009a6c06  8b8794000000         mov eax, dword ptr [edi + 0x94]
// 009a6c0c  52                   push edx
// 009a6c0d  ffd0                 call eax
// 009a6c0f  8b16                 mov edx, dword ptr [esi]
// 009a6c11  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 009a6c17  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 009a6c1b  8bce                 mov ecx, esi
// 009a6c1d  ffd0                 call eax
// 009a6c1f  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 009a6c25  8b4130               mov eax, dword ptr [ecx + 0x30]
// 009a6c28  33ff                 xor edi, edi
// 009a6c2a  894c2418             mov dword ptr [esp + 0x18], ecx
// 009a6c2e  897c2414             mov dword ptr [esp + 0x14], edi
// 009a6c32  85c0                 test eax, eax
// 009a6c34  7f0e                 jg 0x9a6c44
// 009a6c36  5f                   pop edi
// 009a6c37  5e                   pop esi
// 009a6c38  5d                   pop ebp
// 009a6c39  5b                   pop ebx
// 009a6c3a  83c41c               add esp, 0x1c
// 009a6c3d  c21400               ret 0x14
// 009a6c40  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009a6c44  85ff                 test edi, edi
// 009a6c46  7c19                 jl 0x9a6c61
// 009a6c48  3bf8                 cmp edi, eax
// 009a6c4a  7d15                 jge 0x9a6c61
// 009a6c4c  3b7930               cmp edi, dword ptr [ecx + 0x30]
// 009a6c4f  0f8db5000000         jge 0x9a6d0a
// 009a6c55  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 009a6c58  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 009a6c5b  895c2410             mov dword ptr [esp + 0x10], ebx
// 009a6c5f  eb0c                 jmp 0x9a6c6d
// 009a6c61  c744241000000000     mov dword ptr [esp + 0x10], 0
// 009a6c69  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009a6c6d  8bcb                 mov ecx, ebx
// 009a6c6f  e8bc670900           call 0xa3d430
// 009a6c74  85c0                 test eax, eax
// 009a6c76  7474                 je 0x9a6cec
// 009a6c78  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009a6c7c  2b442434             sub eax, dword ptr [esp + 0x34]
// 009a6c80  8bce                 mov ecx, esi
// 009a6c82  50                   push eax
// 009a6c83  53                   push ebx
// 009a6c84  e857f6ffff           call 0x9a62e0
// 009a6c89  8b542438             mov edx, dword ptr [esp + 0x38]
// 009a6c8d  8d3c28               lea edi, [eax + ebp]
// 009a6c90  8b442440             mov eax, dword ptr [esp + 0x40]
// 009a6c94  8bce                 mov ecx, esi
// 009a6c96  89542420             mov dword ptr [esp + 0x20], edx
// 009a6c9a  89442428             mov dword ptr [esp + 0x28], eax
// 009a6c9e  e81df6ffff           call 0x9a62c0
// 009a6ca3  8b16                 mov edx, dword ptr [esi]
// 009a6ca5  8bd8                 mov ebx, eax
// 009a6ca7  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 009a6cad  8bce                 mov ecx, esi
// 009a6caf  ffd0                 call eax
// 009a6cb1  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 009a6cb7  8b13                 mov edx, dword ptr [ebx]
// 009a6cb9  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 009a6cbf  83ec10               sub esp, 0x10
// 009a6cc2  8bcc                 mov ecx, esp
// 009a6cc4  8929                 mov dword ptr [ecx], ebp
// 009a6cc6  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 009a6cca  896904               mov dword ptr [ecx + 4], ebp
// 009a6ccd  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 009a6cd1  897908               mov dword ptr [ecx + 8], edi
// 009a6cd4  89690c               mov dword ptr [ecx + 0xc], ebp
// 009a6cd7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009a6cdb  50                   push eax
// 009a6cdc  8b442444             mov eax, dword ptr [esp + 0x44]
// 009a6ce0  51                   push ecx
// 009a6ce1  50                   push eax
// 009a6ce2  8bcb                 mov ecx, ebx
// 009a6ce4  ffd2                 call edx
// 009a6ce6  8bef                 mov ebp, edi
// 009a6ce8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009a6cec  8b442418             mov eax, dword ptr [esp + 0x18]
// 009a6cf0  8b4030               mov eax, dword ptr [eax + 0x30]
// 009a6cf3  47                   inc edi
// 009a6cf4  3bf8                 cmp edi, eax
// 009a6cf6  897c2414             mov dword ptr [esp + 0x14], edi
// 009a6cfa  0f8c40ffffff         jl 0x9a6c40
// 009a6d00  5f                   pop edi
// 009a6d01  5e                   pop esi
// 009a6d02  5d                   pop ebp
// 009a6d03  5b                   pop ebx
// 009a6d04  83c41c               add esp, 0x1c
// 009a6d07  c21400               ret 0x14
// 009a6d0a  e8b1b6fdff           call 0x9823c0
// copied from an identical function in another client (function ?PrintFooter@CXTPReportView@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp