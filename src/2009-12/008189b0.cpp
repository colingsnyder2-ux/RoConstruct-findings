// roc 2009-12 008189b0  unit: CRobloxReportView  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008189b0
//
// 008189b0  83ec1c               sub esp, 0x1c
// 008189b3  53                   push ebx
// 008189b4  55                   push ebp
// 008189b5  56                   push esi
// 008189b6  57                   push edi
// 008189b7  8bf1                 mov esi, ecx
// 008189b9  e862f8ffff           call 0x818220
// 008189be  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008189c2  8b38                 mov edi, dword ptr [eax]
// 008189c4  83ec10               sub esp, 0x10
// 008189c7  8bd4                 mov edx, esp
// 008189c9  890a                 mov dword ptr [edx], ecx
// 008189cb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008189cf  894a04               mov dword ptr [edx + 4], ecx
// 008189d2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008189d6  894a08               mov dword ptr [edx + 8], ecx
// 008189d9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008189dd  894a0c               mov dword ptr [edx + 0xc], ecx
// 008189e0  8b542440             mov edx, dword ptr [esp + 0x40]
// 008189e4  8bc8                 mov ecx, eax
// 008189e6  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 008189ec  52                   push edx
// 008189ed  ffd0                 call eax
// 008189ef  8b16                 mov edx, dword ptr [esi]
// 008189f1  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 008189f7  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008189fb  8bce                 mov ecx, esi
// 008189fd  ffd0                 call eax
// 008189ff  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00818a05  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00818a08  33ff                 xor edi, edi
// 00818a0a  894c2418             mov dword ptr [esp + 0x18], ecx
// 00818a0e  897c2414             mov dword ptr [esp + 0x14], edi
// 00818a12  85c0                 test eax, eax
// 00818a14  7f0e                 jg 0x818a24
// 00818a16  5f                   pop edi
// 00818a17  5e                   pop esi
// 00818a18  5d                   pop ebp
// 00818a19  5b                   pop ebx
// 00818a1a  83c41c               add esp, 0x1c
// 00818a1d  c21400               ret 0x14
// 00818a20  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00818a24  85ff                 test edi, edi
// 00818a26  7c19                 jl 0x818a41
// 00818a28  3bf8                 cmp edi, eax
// 00818a2a  7d15                 jge 0x818a41
// 00818a2c  3b7930               cmp edi, dword ptr [ecx + 0x30]
// 00818a2f  0f8db7000000         jge 0x818aec
// 00818a35  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 00818a38  8b1cb9               mov ebx, dword ptr [ecx + edi*4]
// 00818a3b  895c2410             mov dword ptr [esp + 0x10], ebx
// 00818a3f  eb0c                 jmp 0x818a4d
// 00818a41  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00818a49  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00818a4d  8bcb                 mov ecx, ebx
// 00818a4f  e86cb00900           call 0x8b3ac0
// 00818a54  85c0                 test eax, eax
// 00818a56  7476                 je 0x818ace
// 00818a58  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00818a5c  2b442434             sub eax, dword ptr [esp + 0x34]
// 00818a60  8bce                 mov ecx, esi
// 00818a62  50                   push eax
// 00818a63  53                   push ebx
// 00818a64  e8d7f7ffff           call 0x818240
// 00818a69  8b542438             mov edx, dword ptr [esp + 0x38]
// 00818a6d  8d3c28               lea edi, [eax + ebp]
// 00818a70  8b442440             mov eax, dword ptr [esp + 0x40]
// 00818a74  8bce                 mov ecx, esi
// 00818a76  89542420             mov dword ptr [esp + 0x20], edx
// 00818a7a  89442428             mov dword ptr [esp + 0x28], eax
// 00818a7e  e89df7ffff           call 0x818220
// 00818a83  8b16                 mov edx, dword ptr [esi]
// 00818a85  8bd8                 mov ebx, eax
// 00818a87  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00818a8d  8bce                 mov ecx, esi
// 00818a8f  ffd0                 call eax
// 00818a91  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 00818a97  8b13                 mov edx, dword ptr [ebx]
// 00818a99  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 00818a9f  6a00                 push 0
// 00818aa1  83ec10               sub esp, 0x10
// 00818aa4  8bcc                 mov ecx, esp
// 00818aa6  8929                 mov dword ptr [ecx], ebp
// 00818aa8  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00818aac  896904               mov dword ptr [ecx + 4], ebp
// 00818aaf  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00818ab3  897908               mov dword ptr [ecx + 8], edi
// 00818ab6  89690c               mov dword ptr [ecx + 0xc], ebp
// 00818ab9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00818abd  50                   push eax
// 00818abe  8b442448             mov eax, dword ptr [esp + 0x48]
// 00818ac2  51                   push ecx
// 00818ac3  50                   push eax
// 00818ac4  8bcb                 mov ecx, ebx
// 00818ac6  ffd2                 call edx
// 00818ac8  8bef                 mov ebp, edi
// 00818aca  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00818ace  8b442418             mov eax, dword ptr [esp + 0x18]
// 00818ad2  8b4030               mov eax, dword ptr [eax + 0x30]
// 00818ad5  47                   inc edi
// 00818ad6  3bf8                 cmp edi, eax
// 00818ad8  897c2414             mov dword ptr [esp + 0x14], edi
// 00818adc  0f8c3effffff         jl 0x818a20
// 00818ae2  5f                   pop edi
// 00818ae3  5e                   pop esi
// 00818ae4  5d                   pop ebp
// 00818ae5  5b                   pop ebx
// 00818ae6  83c41c               add esp, 0x1c
// 00818ae9  c21400               ret 0x14
// 00818aec  e81bb0fdff           call 0x7f3b0c
// copied from an identical function in another client (function ?PrintHeader@CXTPReportView@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp