// roc 2008-06 006c5cb0  unit: CRobloxReportView  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c5cb0
//
// 006c5cb0  83ec0c               sub esp, 0xc
// 006c5cb3  53                   push ebx
// 006c5cb4  55                   push ebp
// 006c5cb5  8be9                 mov ebp, ecx
// 006c5cb7  8b4500               mov eax, dword ptr [ebp]
// 006c5cba  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006c5cc0  56                   push esi
// 006c5cc1  8b742424             mov esi, dword ptr [esp + 0x24]
// 006c5cc5  57                   push edi
// 006c5cc6  89742410             mov dword ptr [esp + 0x10], esi
// 006c5cca  ffd2                 call edx
// 006c5ccc  8bb8e0000000         mov edi, dword ptr [eax + 0xe0]
// 006c5cd2  8bcf                 mov ecx, edi
// 006c5cd4  897c2418             mov dword ptr [esp + 0x18], edi
// 006c5cd8  e873430100           call 0x6da050
// 006c5cdd  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006c5ce1  3bd8                 cmp ebx, eax
// 006c5ce3  0f8ded000000         jge 0x6c5dd6
// 006c5ce9  8da42400000000       lea esp, [esp]
// 006c5cf0  8b07                 mov eax, dword ptr [edi]
// 006c5cf2  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006c5cf5  53                   push ebx
// 006c5cf6  8bcf                 mov ecx, edi
// 006c5cf8  ffd2                 call edx
// 006c5cfa  83bd5c03000000       cmp dword ptr [ebp + 0x35c], 0
// 006c5d01  8bf0                 mov esi, eax
// 006c5d03  7411                 je 0x6c5d16
// 006c5d05  8b06                 mov eax, dword ptr [esi]
// 006c5d07  8b5074               mov edx, dword ptr [eax + 0x74]
// 006c5d0a  8bce                 mov ecx, esi
// 006c5d0c  ffd2                 call edx
// 006c5d0e  85c0                 test eax, eax
// 006c5d10  0f84a2000000         je 0x6c5db8
// 006c5d16  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006c5d1a  2b442424             sub eax, dword ptr [esp + 0x24]
// 006c5d1e  8b16                 mov edx, dword ptr [esi]
// 006c5d20  8b5268               mov edx, dword ptr [edx + 0x68]
// 006c5d23  50                   push eax
// 006c5d24  8b442424             mov eax, dword ptr [esp + 0x24]
// 006c5d28  50                   push eax
// 006c5d29  8bce                 mov ecx, esi
// 006c5d2b  ffd2                 call edx
// 006c5d2d  8bf8                 mov edi, eax
// 006c5d2f  8b06                 mov eax, dword ptr [esi]
// 006c5d31  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 006c5d37  8bce                 mov ecx, esi
// 006c5d39  33db                 xor ebx, ebx
// 006c5d3b  ffd2                 call edx
// 006c5d3d  85c0                 test eax, eax
// 006c5d3f  742f                 je 0x6c5d70
// 006c5d41  8b06                 mov eax, dword ptr [esi]
// 006c5d43  8b5060               mov edx, dword ptr [eax + 0x60]
// 006c5d46  8bce                 mov ecx, esi
// 006c5d48  ffd2                 call edx
// 006c5d4a  8bc8                 mov ecx, eax
// 006c5d4c  e81faa0d00           call 0x7a0770
// 006c5d51  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006c5d55  2b542424             sub edx, dword ptr [esp + 0x24]
// 006c5d59  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006c5d5d  8b18                 mov ebx, dword ptr [eax]
// 006c5d5f  52                   push edx
// 006c5d60  8b9350010000         mov edx, dword ptr [ebx + 0x150]
// 006c5d66  56                   push esi
// 006c5d67  51                   push ecx
// 006c5d68  8bc8                 mov ecx, eax
// 006c5d6a  ffd2                 call edx
// 006c5d6c  8bd8                 mov ebx, eax
// 006c5d6e  03fb                 add edi, ebx
// 006c5d70  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c5d74  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006c5d78  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006c5d7c  03f8                 add edi, eax
// 006c5d7e  3b7c2430             cmp edi, dword ptr [esp + 0x30]
// 006c5d82  7f4a                 jg 0x6c5dce
// 006c5d84  53                   push ebx
// 006c5d85  83ec10               sub esp, 0x10
// 006c5d88  8bc4                 mov eax, esp
// 006c5d8a  8908                 mov dword ptr [eax], ecx
// 006c5d8c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006c5d90  894804               mov dword ptr [eax + 4], ecx
// 006c5d93  895008               mov dword ptr [eax + 8], edx
// 006c5d96  8b542434             mov edx, dword ptr [esp + 0x34]
// 006c5d9a  89780c               mov dword ptr [eax + 0xc], edi
// 006c5d9d  8b4500               mov eax, dword ptr [ebp]
// 006c5da0  8b80ac010000         mov eax, dword ptr [eax + 0x1ac]
// 006c5da6  56                   push esi
// 006c5da7  52                   push edx
// 006c5da8  8bcd                 mov ecx, ebp
// 006c5daa  ffd0                 call eax
// 006c5dac  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006c5db0  897c2410             mov dword ptr [esp + 0x10], edi
// 006c5db4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006c5db8  43                   inc ebx
// 006c5db9  8bcf                 mov ecx, edi
// 006c5dbb  895c2434             mov dword ptr [esp + 0x34], ebx
// 006c5dbf  e88c420100           call 0x6da050
// 006c5dc4  3bd8                 cmp ebx, eax
// 006c5dc6  0f8c24ffffff         jl 0x6c5cf0
// 006c5dcc  eb04                 jmp 0x6c5dd2
// 006c5dce  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006c5dd2  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c5dd6  8b442438             mov eax, dword ptr [esp + 0x38]
// 006c5dda  85c0                 test eax, eax
// 006c5ddc  7406                 je 0x6c5de4
// 006c5dde  2b742428             sub esi, dword ptr [esp + 0x28]
// 006c5de2  8930                 mov dword ptr [eax], esi
// 006c5de4  5f                   pop edi
// 006c5de5  5e                   pop esi
// 006c5de6  5d                   pop ebp
// 006c5de7  8bc3                 mov eax, ebx
// 006c5de9  5b                   pop ebx
// 006c5dea  83c40c               add esp, 0xc
// 006c5ded  c21c00               ret 0x1c
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?PrintRows@CXTPReportView@@MAEHPAVCDC@@VCRect@@JPAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
